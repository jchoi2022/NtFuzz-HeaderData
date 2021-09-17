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
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl;
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription;
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2 __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2;
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection;
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice;
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics;
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport;
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport;
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl;
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription;
typedef interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport;
typedef interface __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl;
typedef struct __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This, __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlVtbl;
interface __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl;
typedef struct __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlVtbl;
interface __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription;
typedef struct __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl;
interface __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription;
typedef struct __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl;
interface __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection;
typedef struct __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This, __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollectionVtbl;
interface __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollectionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection;
typedef struct __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollectionVtbl;
interface __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollectionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription;
typedef struct __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl;
interface __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription;
typedef struct __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl;
interface __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl;
typedef struct __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
                       __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlVtbl;
interface __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription;
typedef struct __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                       __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl;
interface __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescriptionVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection;
typedef struct __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
                       __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollectionVtbl;
interface __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollectionVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription;
typedef struct __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                       __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl;
interface __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescriptionVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDeviceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDeviceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * This, __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDeviceVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDeviceVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReportVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReportVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * This, __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReportVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReportVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * This, __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIAsyncOperationCompletedHandler_1_UINT32 __FIAsyncOperationCompletedHandler_1_UINT32;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_UINT32;
typedef interface __FIAsyncOperation_1_UINT32 __FIAsyncOperation_1_UINT32;
typedef struct __FIAsyncOperationCompletedHandler_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This, __RPC__in_opt __FIAsyncOperation_1_UINT32 *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_UINT32Vtbl;
interface __FIAsyncOperationCompletedHandler_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_UINT32 __FIAsyncOperation_1_UINT32;
EXTERN_C const IID IID___FIAsyncOperation_1_UINT32;
typedef struct __FIAsyncOperation_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_UINT32 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_UINT32 *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_UINT32 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__out unsigned int *results);
    END_INTERFACE
} __FIAsyncOperation_1_UINT32Vtbl;
interface __FIAsyncOperation_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperation_1_UINT32Vtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef enum __x_ABI_CWindows_CStorage_CFileAccessMode __x_ABI_CWindows_CStorage_CFileAccessMode;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef enum __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CHidCollectionType __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CHidCollectionType;
typedef enum __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CHidReportType __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CHidReportType;
enum __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CHidCollectionType
{
    HidCollectionType_Physical = 0,
    HidCollectionType_Application = 1,
    HidCollectionType_Logical = 2,
    HidCollectionType_Report = 3,
    HidCollectionType_NamedArray = 4,
    HidCollectionType_UsageSwitch = 5,
    HidCollectionType_UsageModifier = 6,
    HidCollectionType_Other = 7,
};
enum __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CHidReportType
{
    HidReportType_Input = 0,
    HidReportType_Output = 1,
    HidReportType_Feature = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidBooleanControl[] = L"Windows.Devices.HumanInterfaceDevice.IHidBooleanControl";
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UsagePage )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UsageId )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsActive )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsActive )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ControlDescription )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlVtbl;
interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_UsagePage(This,value) )
    ( (This)->lpVtbl->get_UsageId(This,value) )
    ( (This)->lpVtbl->get_IsActive(This,value) )
    ( (This)->lpVtbl->put_IsActive(This,value) )
    ( (This)->lpVtbl->get_ControlDescription(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription[] = L"Windows.Devices.HumanInterfaceDevice.IHidBooleanControlDescription";
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportId )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportType )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CHidReportType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UsagePage )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UsageId )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ParentCollections )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescriptionVtbl;
interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescriptionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_ReportId(This,value) )
    ( (This)->lpVtbl->get_ReportType(This,value) )
    ( (This)->lpVtbl->get_UsagePage(This,value) )
    ( (This)->lpVtbl->get_UsageId(This,value) )
    ( (This)->lpVtbl->get_ParentCollections(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidBooleanControlDescription2[] = L"Windows.Devices.HumanInterfaceDevice.IHidBooleanControlDescription2";
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsAbsolute )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2Vtbl;
interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsAbsolute(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidCollection[] = L"Windows.Devices.HumanInterfaceDevice.IHidCollection";
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CHidCollectionType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UsagePage )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UsageId )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollectionVtbl;
interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->get_UsagePage(This,value) )
    ( (This)->lpVtbl->get_UsageId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidDevice[] = L"Windows.Devices.HumanInterfaceDevice.IHidDevice";
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_VendorId )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProductId )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Version )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UsagePage )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UsageId )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
                           __RPC__out UINT16 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetInputReportAsync )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetInputReportByIdAsync )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
                  UINT16 reportId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidInputReport * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetFeatureReportAsync )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetFeatureReportByIdAsync )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
                  UINT16 reportId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidFeatureReport * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateOutputReport )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * * outputReport
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateOutputReportById )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
                  UINT16 reportId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * * outputReport
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFeatureReport )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * * featureReport
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFeatureReportById )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
                  UINT16 reportId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * * featureReport
        );
    HRESULT ( STDMETHODCALLTYPE *SendOutputReportAsync )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * outputReport,
                           __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SendFeatureReportAsync )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * featureReport,
                           __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetBooleanControlDescriptions )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
                  __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CHidReportType reportType,
                  UINT16 usagePage,
                  UINT16 usageId,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControlDescription * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumericControlDescriptions )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
                  __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CHidReportType reportType,
                  UINT16 usagePage,
                  UINT16 usageId,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidNumericControlDescription * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_InputReportReceived )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CHumanInterfaceDevice__CHidDevice_Windows__CDevices__CHumanInterfaceDevice__CHidInputReportReceivedEventArgs * reportHandler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_InputReportReceived )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceVtbl;
interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_VendorId(This,value) )
    ( (This)->lpVtbl->get_ProductId(This,value) )
    ( (This)->lpVtbl->get_Version(This,value) )
    ( (This)->lpVtbl->get_UsagePage(This,value) )
    ( (This)->lpVtbl->get_UsageId(This,value) )
    ( (This)->lpVtbl->GetInputReportAsync(This,value) )
    ( (This)->lpVtbl->GetInputReportByIdAsync(This,reportId,value) )
    ( (This)->lpVtbl->GetFeatureReportAsync(This,value) )
    ( (This)->lpVtbl->GetFeatureReportByIdAsync(This,reportId,value) )
    ( (This)->lpVtbl->CreateOutputReport(This,outputReport) )
    ( (This)->lpVtbl->CreateOutputReportById(This,reportId,outputReport) )
    ( (This)->lpVtbl->CreateFeatureReport(This,featureReport) )
    ( (This)->lpVtbl->CreateFeatureReportById(This,reportId,featureReport) )
    ( (This)->lpVtbl->SendOutputReportAsync(This,outputReport,operation) )
    ( (This)->lpVtbl->SendFeatureReportAsync(This,featureReport,operation) )
    ( (This)->lpVtbl->GetBooleanControlDescriptions(This,reportType,usagePage,usageId,value) )
    ( (This)->lpVtbl->GetNumericControlDescriptions(This,reportType,usagePage,usageId,value) )
    ( (This)->lpVtbl->add_InputReportReceived(This,reportHandler,token) )
    ( (This)->lpVtbl->remove_InputReportReceived(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidDeviceStatics[] = L"Windows.Devices.HumanInterfaceDevice.IHidDeviceStatics";
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics * This,
                  UINT16 usagePage,
                  UINT16 usageId,
                           __RPC__deref_out_opt HSTRING * selector
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorVidPid )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics * This,
                  UINT16 usagePage,
                  UINT16 usageId,
                  UINT16 vendorId,
                  UINT16 productId,
                           __RPC__deref_out_opt HSTRING * selector
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics * This,
                  __RPC__in HSTRING deviceId,
                  __x_ABI_CWindows_CStorage_CFileAccessMode accessMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHumanInterfaceDevice__CHidDevice * * hidDevice
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,usagePage,usageId,selector) )
    ( (This)->lpVtbl->GetDeviceSelectorVidPid(This,usagePage,usageId,vendorId,productId,selector) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,accessMode,hidDevice) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidFeatureReport[] = L"Windows.Devices.HumanInterfaceDevice.IHidFeatureReport";
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Data )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetBooleanControl )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This,
                  UINT16 usagePage,
                  UINT16 usageId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetBooleanControlByDescription )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * controlDescription,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumericControl )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This,
                  UINT16 usagePage,
                  UINT16 usageId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumericControlByDescription )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * controlDescription,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReportVtbl;
interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReportVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Data(This,value) )
    ( (This)->lpVtbl->put_Data(This,value) )
    ( (This)->lpVtbl->GetBooleanControl(This,usagePage,usageId,value) )
    ( (This)->lpVtbl->GetBooleanControlByDescription(This,controlDescription,value) )
    ( (This)->lpVtbl->GetNumericControl(This,usagePage,usageId,value) )
    ( (This)->lpVtbl->GetNumericControlByDescription(This,controlDescription,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidFeatureReport;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidInputReport[] = L"Windows.Devices.HumanInterfaceDevice.IHidInputReport";
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActivatedBooleanControls )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransitionedBooleanControls )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidBooleanControl * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetBooleanControl )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
                  UINT16 usagePage,
                  UINT16 usageId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetBooleanControlByDescription )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * controlDescription,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumericControl )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
                  UINT16 usagePage,
                  UINT16 usageId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumericControlByDescription )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * controlDescription,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportVtbl;
interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Data(This,value) )
    ( (This)->lpVtbl->get_ActivatedBooleanControls(This,value) )
    ( (This)->lpVtbl->get_TransitionedBooleanControls(This,value) )
    ( (This)->lpVtbl->GetBooleanControl(This,usagePage,usageId,value) )
    ( (This)->lpVtbl->GetBooleanControlByDescription(This,controlDescription,value) )
    ( (This)->lpVtbl->GetNumericControl(This,usagePage,usageId,value) )
    ( (This)->lpVtbl->GetNumericControlByDescription(This,controlDescription,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidInputReportReceivedEventArgs[] = L"Windows.Devices.HumanInterfaceDevice.IHidInputReportReceivedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Report )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReport * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Report(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidInputReportReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidNumericControl[] = L"Windows.Devices.HumanInterfaceDevice.IHidNumericControl";
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsGrouped )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UsagePage )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UsageId )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
                           __RPC__out INT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
                  INT64 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaledValue )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
                           __RPC__out INT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScaledValue )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
                  INT64 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ControlDescription )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlVtbl;
interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_IsGrouped(This,value) )
    ( (This)->lpVtbl->get_UsagePage(This,value) )
    ( (This)->lpVtbl->get_UsageId(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
    ( (This)->lpVtbl->get_ScaledValue(This,value) )
    ( (This)->lpVtbl->put_ScaledValue(This,value) )
    ( (This)->lpVtbl->get_ControlDescription(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidNumericControlDescription[] = L"Windows.Devices.HumanInterfaceDevice.IHidNumericControlDescription";
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportId )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportType )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CHidReportType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportSize )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReportCount )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UsagePage )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UsageId )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LogicalMinimum )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LogicalMaximum )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhysicalMinimum )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhysicalMaximum )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UnitExponent )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Unit )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAbsolute )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasNull )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ParentCollections )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHumanInterfaceDevice__CHidCollection * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescriptionVtbl;
interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescriptionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_ReportId(This,value) )
    ( (This)->lpVtbl->get_ReportType(This,value) )
    ( (This)->lpVtbl->get_ReportSize(This,value) )
    ( (This)->lpVtbl->get_ReportCount(This,value) )
    ( (This)->lpVtbl->get_UsagePage(This,value) )
    ( (This)->lpVtbl->get_UsageId(This,value) )
    ( (This)->lpVtbl->get_LogicalMinimum(This,value) )
    ( (This)->lpVtbl->get_LogicalMaximum(This,value) )
    ( (This)->lpVtbl->get_PhysicalMinimum(This,value) )
    ( (This)->lpVtbl->get_PhysicalMaximum(This,value) )
    ( (This)->lpVtbl->get_UnitExponent(This,value) )
    ( (This)->lpVtbl->get_Unit(This,value) )
    ( (This)->lpVtbl->get_IsAbsolute(This,value) )
    ( (This)->lpVtbl->get_HasNull(This,value) )
    ( (This)->lpVtbl->get_ParentCollections(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_HumanInterfaceDevice_IHidOutputReport[] = L"Windows.Devices.HumanInterfaceDevice.IHidOutputReport";
typedef struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Data )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetBooleanControl )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This,
                  UINT16 usagePage,
                  UINT16 usageId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetBooleanControlByDescription )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControlDescription * controlDescription,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidBooleanControl * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumericControl )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This,
                  UINT16 usagePage,
                  UINT16 usageId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumericControlByDescription )(
        __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControlDescription * controlDescription,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidNumericControl * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReportVtbl;
interface __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReportVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Data(This,value) )
    ( (This)->lpVtbl->put_Data(This,value) )
    ( (This)->lpVtbl->GetBooleanControl(This,usagePage,usageId,value) )
    ( (This)->lpVtbl->GetBooleanControlByDescription(This,controlDescription,value) )
    ( (This)->lpVtbl->GetNumericControl(This,usagePage,usageId,value) )
    ( (This)->lpVtbl->GetNumericControlByDescription(This,controlDescription,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHumanInterfaceDevice_CIHidOutputReport;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidBooleanControl[] = L"Windows.Devices.HumanInterfaceDevice.HidBooleanControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidBooleanControlDescription[] = L"Windows.Devices.HumanInterfaceDevice.HidBooleanControlDescription";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidCollection[] = L"Windows.Devices.HumanInterfaceDevice.HidCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidDevice[] = L"Windows.Devices.HumanInterfaceDevice.HidDevice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidFeatureReport[] = L"Windows.Devices.HumanInterfaceDevice.HidFeatureReport";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidInputReport[] = L"Windows.Devices.HumanInterfaceDevice.HidInputReport";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidInputReportReceivedEventArgs[] = L"Windows.Devices.HumanInterfaceDevice.HidInputReportReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidNumericControl[] = L"Windows.Devices.HumanInterfaceDevice.HidNumericControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidNumericControlDescription[] = L"Windows.Devices.HumanInterfaceDevice.HidNumericControlDescription";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_HumanInterfaceDevice_HidOutputReport[] = L"Windows.Devices.HumanInterfaceDevice.HidOutputReport";
       
       
#pragma clang diagnostic pop
