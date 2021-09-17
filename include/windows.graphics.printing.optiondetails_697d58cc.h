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
#include "Windows.Graphics.Printing.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBindingOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBindingOptionDetails;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBorderingOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBorderingOptionDetails;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCollationOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCollationOptionDetails;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintColorModeOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintColorModeOptionDetails;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCopiesOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCopiesOptionDetails;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails2 __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails2;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails3 __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails3;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails2 __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails2;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomToggleOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomToggleOptionDetails;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintDuplexOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintDuplexOptionDetails;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintHolePunchOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintHolePunchOptionDetails;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaSizeOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaSizeOptionDetails;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaTypeOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaTypeOptionDetails;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOrientationOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOrientationOptionDetails;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintPageRangeOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintPageRangeOptionDetails;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintQualityOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintQualityOptionDetails;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintStapleOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintStapleOptionDetails;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails2 __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails2;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails;
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails;
typedef struct __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl;
interface __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * sender, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIIterator_1_IInspectable __FIIterator_1_IInspectable;
EXTERN_C const IID IID___FIIterator_1_IInspectable;
typedef struct __FIIterator_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_IInspectable * This, __RPC__out IInspectable * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_IInspectable * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) IInspectable * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_IInspectableVtbl;
interface __FIIterator_1_IInspectable
{
    CONST_VTBL struct __FIIterator_1_IInspectableVtbl *lpVtbl;
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
typedef interface __FIIterable_1_IInspectable __FIIterable_1_IInspectable;
EXTERN_C const IID IID___FIIterable_1_IInspectable;
typedef struct __FIIterable_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_IInspectable * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_IInspectable * This, __RPC__deref_out_opt __FIIterator_1_IInspectable **first);
    END_INTERFACE
} __FIIterable_1_IInspectableVtbl;
interface __FIIterable_1_IInspectable
{
    CONST_VTBL struct __FIIterable_1_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_IInspectable __FIVectorView_1_IInspectable;
EXTERN_C const IID IID___FIVectorView_1_IInspectable;
typedef struct __FIVectorView_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_IInspectable * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_IInspectable * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_IInspectable * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_IInspectable * This,
                                                    unsigned int index,
                                                             __RPC__out IInspectable * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_IInspectable * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_IInspectable * This,
                       IInspectable * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_IInspectable * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) IInspectable * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_IInspectableVtbl;
interface __FIVectorView_1_IInspectable
{
    CONST_VTBL struct __FIVectorView_1_IInspectableVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CPrintOptionStates __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CPrintOptionStates;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CPrintOptionType __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CPrintOptionType;
enum __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CPrintOptionStates
{
    PrintOptionStates_None = 0,
    PrintOptionStates_Enabled = 0x1,
    PrintOptionStates_Constrained = 0x2,
};
enum __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CPrintOptionType
{
    PrintOptionType_Unknown = 0,
    PrintOptionType_Number = 1,
    PrintOptionType_Text = 2,
    PrintOptionType_ItemList = 3,
    PrintOptionType_Toggle = 4,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintBindingOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintBindingOptionDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBindingOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBindingOptionDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBindingOptionDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBindingOptionDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBindingOptionDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBindingOptionDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBindingOptionDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBindingOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBindingOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBindingOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBindingOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBindingOptionDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBindingOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBindingOptionDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_WarningText(This,value) )
    ( (This)->lpVtbl->get_WarningText(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBindingOptionDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintBorderingOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintBorderingOptionDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBorderingOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBorderingOptionDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBorderingOptionDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBorderingOptionDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBorderingOptionDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBorderingOptionDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBorderingOptionDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBorderingOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBorderingOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBorderingOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBorderingOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBorderingOptionDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBorderingOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBorderingOptionDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_WarningText(This,value) )
    ( (This)->lpVtbl->get_WarningText(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintBorderingOptionDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintCollationOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintCollationOptionDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCollationOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCollationOptionDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCollationOptionDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCollationOptionDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCollationOptionDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCollationOptionDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCollationOptionDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCollationOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCollationOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCollationOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCollationOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCollationOptionDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCollationOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCollationOptionDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_WarningText(This,value) )
    ( (This)->lpVtbl->get_WarningText(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCollationOptionDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintColorModeOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintColorModeOptionDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintColorModeOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintColorModeOptionDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintColorModeOptionDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintColorModeOptionDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintColorModeOptionDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintColorModeOptionDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintColorModeOptionDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintColorModeOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintColorModeOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintColorModeOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintColorModeOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintColorModeOptionDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintColorModeOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintColorModeOptionDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_WarningText(This,value) )
    ( (This)->lpVtbl->get_WarningText(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintColorModeOptionDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintCopiesOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintCopiesOptionDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCopiesOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCopiesOptionDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCopiesOptionDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCopiesOptionDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCopiesOptionDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCopiesOptionDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCopiesOptionDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCopiesOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCopiesOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCopiesOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCopiesOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCopiesOptionDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCopiesOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCopiesOptionDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_WarningText(This,value) )
    ( (This)->lpVtbl->get_WarningText(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCopiesOptionDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomItemDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ItemId )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ItemDisplayName )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemDisplayName )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ItemId(This,value) )
    ( (This)->lpVtbl->put_ItemDisplayName(This,value) )
    ( (This)->lpVtbl->get_ItemDisplayName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemListOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomItemListOptionDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddItem )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails * This,
                  __RPC__in HSTRING itemId,
                  __RPC__in HSTRING displayName
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddItem(This,itemId,displayName) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemListOptionDetails2[] = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomItemListOptionDetails2";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddItem )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails2 * This,
                  __RPC__in HSTRING itemId,
                  __RPC__in HSTRING displayName,
                  __RPC__in HSTRING description,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * icon
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails2Vtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddItem(This,itemId,displayName,description,icon) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemListOptionDetails3[] = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomItemListOptionDetails3";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails3 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails3 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails3Vtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails3
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_WarningText(This,value) )
    ( (This)->lpVtbl->get_WarningText(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintCustomOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomOptionDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_DisplayName(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintCustomTextOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomTextOptionDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_MaxCharacters )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxCharacters )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_MaxCharacters(This,value) )
    ( (This)->lpVtbl->get_MaxCharacters(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintCustomTextOptionDetails2[] = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomTextOptionDetails2";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails2Vtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_WarningText(This,value) )
    ( (This)->lpVtbl->get_WarningText(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintCustomToggleOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomToggleOptionDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomToggleOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomToggleOptionDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomToggleOptionDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomToggleOptionDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomToggleOptionDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomToggleOptionDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomToggleOptionDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomToggleOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomToggleOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomToggleOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomToggleOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomToggleOptionDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomToggleOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomToggleOptionDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_WarningText(This,value) )
    ( (This)->lpVtbl->get_WarningText(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomToggleOptionDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintDuplexOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintDuplexOptionDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintDuplexOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintDuplexOptionDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintDuplexOptionDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintDuplexOptionDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintDuplexOptionDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintDuplexOptionDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintDuplexOptionDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintDuplexOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintDuplexOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintDuplexOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintDuplexOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintDuplexOptionDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintDuplexOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintDuplexOptionDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_WarningText(This,value) )
    ( (This)->lpVtbl->get_WarningText(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintDuplexOptionDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintHolePunchOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintHolePunchOptionDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintHolePunchOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintHolePunchOptionDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintHolePunchOptionDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintHolePunchOptionDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintHolePunchOptionDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintHolePunchOptionDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintHolePunchOptionDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintHolePunchOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintHolePunchOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintHolePunchOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintHolePunchOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintHolePunchOptionDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintHolePunchOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintHolePunchOptionDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_WarningText(This,value) )
    ( (This)->lpVtbl->get_WarningText(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintHolePunchOptionDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintItemListOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Items )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails * This,
                           __RPC__deref_out_opt __FIVectorView_1_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Items(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintMediaSizeOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintMediaSizeOptionDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaSizeOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaSizeOptionDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaSizeOptionDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaSizeOptionDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaSizeOptionDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaSizeOptionDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaSizeOptionDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaSizeOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaSizeOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaSizeOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaSizeOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaSizeOptionDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaSizeOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaSizeOptionDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_WarningText(This,value) )
    ( (This)->lpVtbl->get_WarningText(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaSizeOptionDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintMediaTypeOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintMediaTypeOptionDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaTypeOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaTypeOptionDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaTypeOptionDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaTypeOptionDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaTypeOptionDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaTypeOptionDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaTypeOptionDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaTypeOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaTypeOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaTypeOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaTypeOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaTypeOptionDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaTypeOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaTypeOptionDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_WarningText(This,value) )
    ( (This)->lpVtbl->get_WarningText(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintMediaTypeOptionDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintNumberOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintNumberOptionDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MinValue )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxValue )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MinValue(This,value) )
    ( (This)->lpVtbl->get_MaxValue(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OptionId )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OptionType )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CPrintOptionType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ErrorText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ErrorText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_State )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
                  __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CPrintOptionStates value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CPrintOptionStates * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetValue )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
                  __RPC__in_opt IInspectable * value,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OptionId(This,value) )
    ( (This)->lpVtbl->get_OptionType(This,value) )
    ( (This)->lpVtbl->put_ErrorText(This,value) )
    ( (This)->lpVtbl->get_ErrorText(This,value) )
    ( (This)->lpVtbl->put_State(This,value) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->TrySetValue(This,value,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintOrientationOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintOrientationOptionDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOrientationOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOrientationOptionDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOrientationOptionDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOrientationOptionDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOrientationOptionDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOrientationOptionDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOrientationOptionDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOrientationOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOrientationOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOrientationOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOrientationOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOrientationOptionDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOrientationOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOrientationOptionDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_WarningText(This,value) )
    ( (This)->lpVtbl->get_WarningText(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOrientationOptionDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintPageRangeOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintPageRangeOptionDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintPageRangeOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintPageRangeOptionDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintPageRangeOptionDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintPageRangeOptionDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintPageRangeOptionDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintPageRangeOptionDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintPageRangeOptionDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintPageRangeOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintPageRangeOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintPageRangeOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintPageRangeOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintPageRangeOptionDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintPageRangeOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintPageRangeOptionDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_WarningText(This,value) )
    ( (This)->lpVtbl->get_WarningText(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintPageRangeOptionDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintQualityOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintQualityOptionDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintQualityOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintQualityOptionDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintQualityOptionDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintQualityOptionDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintQualityOptionDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintQualityOptionDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintQualityOptionDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintQualityOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintQualityOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintQualityOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintQualityOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintQualityOptionDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintQualityOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintQualityOptionDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_WarningText(This,value) )
    ( (This)->lpVtbl->get_WarningText(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintQualityOptionDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintStapleOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintStapleOptionDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintStapleOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintStapleOptionDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintStapleOptionDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintStapleOptionDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintStapleOptionDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintStapleOptionDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintStapleOptionDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintStapleOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WarningText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintStapleOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintStapleOptionDetails * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintStapleOptionDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintStapleOptionDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintStapleOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintStapleOptionDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_WarningText(This,value) )
    ( (This)->lpVtbl->get_WarningText(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintStapleOptionDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionChangedEventArgs[] = L"Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionChangedEventArgs";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OptionId )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OptionId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Options )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateItemListOption )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This,
                  __RPC__in HSTRING optionId,
                  __RPC__in HSTRING displayName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * * itemListOption
        );
    HRESULT ( STDMETHODCALLTYPE *CreateTextOption )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This,
                  __RPC__in HSTRING optionId,
                  __RPC__in HSTRING displayName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * * textOption
        );
                    HRESULT ( STDMETHODCALLTYPE *add_OptionChanged )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_OptionChanged )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This,
                  EventRegistrationToken eventCookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_BeginValidation )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BeginValidation )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This,
                  EventRegistrationToken eventCookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Options(This,value) )
    ( (This)->lpVtbl->CreateItemListOption(This,optionId,displayName,itemListOption) )
    ( (This)->lpVtbl->CreateTextOption(This,optionId,displayName,textOption) )
    ( (This)->lpVtbl->add_OptionChanged(This,eventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_OptionChanged(This,eventCookie) )
    ( (This)->lpVtbl->add_BeginValidation(This,eventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_BeginValidation(This,eventCookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails2[] = L"Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionDetails2";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateToggleOption )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails2 * This,
                  __RPC__in HSTRING optionId,
                  __RPC__in HSTRING displayName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * * toggleOption
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails2Vtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateToggleOption(This,optionId,displayName,toggleOption) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetailsStatic[] = L"Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionDetailsStatic";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStaticVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetFromPrintTaskOptions )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore * printTaskOptions,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * * printTaskOptionDetails
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStaticVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStaticVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetFromPrintTaskOptions(This,printTaskOptions,printTaskOptionDetails) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintTextOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintTextOptionDetails";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxCharacters )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetailsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxCharacters(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintBindingOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintBindingOptionDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintBorderingOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintBorderingOptionDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintCollationOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintCollationOptionDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintColorModeOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintColorModeOptionDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintCopiesOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintCopiesOptionDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintCustomItemDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintCustomItemDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintCustomItemListOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintCustomItemListOptionDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintCustomTextOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintCustomTextOptionDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintCustomToggleOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintCustomToggleOptionDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintDuplexOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintDuplexOptionDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintHolePunchOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintHolePunchOptionDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintMediaSizeOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintMediaSizeOptionDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintMediaTypeOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintMediaTypeOptionDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintOrientationOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintOrientationOptionDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintPageRangeOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintPageRangeOptionDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintQualityOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintQualityOptionDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintStapleOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintStapleOptionDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionChangedEventArgs[] = L"Windows.Graphics.Printing.OptionDetails.PrintTaskOptionChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintTaskOptionDetails";
       
       
#pragma clang diagnostic pop
