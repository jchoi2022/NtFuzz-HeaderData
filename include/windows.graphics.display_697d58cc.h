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
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler;
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfo __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfo;
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride;
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettings __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettings;
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettingsStatics __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettingsStatics;
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics;
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettings __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettings;
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettingsStatics __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettingsStatics;
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride;
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilities __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilities;
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilitiesChangedEventArgs __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilitiesChangedEventArgs;
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideStatics __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideStatics;
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation;
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2 __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2;
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3 __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3;
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4 __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4;
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation5 __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation5;
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics;
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics;
struct __x_ABI_CWindows_CGraphics_CDisplay_CNitRange;
typedef interface __FIIterator_1_Windows__CGraphics__CDisplay__CNitRange __FIIterator_1_Windows__CGraphics__CDisplay__CNitRange;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CDisplay__CNitRange;
typedef struct __FIIterator_1_Windows__CGraphics__CDisplay__CNitRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CDisplay__CNitRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CDisplay__CNitRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CDisplay__CNitRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CDisplay__CNitRange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CDisplay__CNitRange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CDisplay__CNitRange * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CDisplay__CNitRange * This, __RPC__out struct __x_ABI_CWindows_CGraphics_CDisplay_CNitRange *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CDisplay__CNitRange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CDisplay__CNitRange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CDisplay__CNitRange * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CGraphics_CDisplay_CNitRange *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CDisplay__CNitRangeVtbl;
interface __FIIterator_1_Windows__CGraphics__CDisplay__CNitRange
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CDisplay__CNitRangeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CDisplay__CNitRange __FIIterable_1_Windows__CGraphics__CDisplay__CNitRange;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CDisplay__CNitRange;
typedef struct __FIIterable_1_Windows__CGraphics__CDisplay__CNitRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CDisplay__CNitRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CDisplay__CNitRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CDisplay__CNitRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CDisplay__CNitRange * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CDisplay__CNitRange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CDisplay__CNitRange * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CDisplay__CNitRange * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CDisplay__CNitRange **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CDisplay__CNitRangeVtbl;
interface __FIIterable_1_Windows__CGraphics__CDisplay__CNitRange
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CDisplay__CNitRangeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CGraphics__CDisplay__CNitRange __FIVectorView_1_Windows__CGraphics__CDisplay__CNitRange;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CDisplay__CNitRange;
typedef struct __FIVectorView_1_Windows__CGraphics__CDisplay__CNitRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDisplay__CNitRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDisplay__CNitRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDisplay__CNitRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDisplay__CNitRange * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDisplay__CNitRange * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDisplay__CNitRange * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CDisplay__CNitRange * This,
                                                    unsigned int index,
                                                             __RPC__out struct __x_ABI_CWindows_CGraphics_CDisplay_CNitRange *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CDisplay__CNitRange * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CDisplay__CNitRange * This,
                       struct __x_ABI_CWindows_CGraphics_CDisplay_CNitRange item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CDisplay__CNitRange * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CGraphics_CDisplay_CNitRange *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CDisplay__CNitRangeVtbl;
interface __FIVectorView_1_Windows__CGraphics__CDisplay__CNitRange
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CDisplay__CNitRangeVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_IInspectable __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_Windows__CGraphics__CDisplay__CDisplayEnhancementOverrideCapabilitiesChangedEventArgs __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_Windows__CGraphics__CDisplay__CDisplayEnhancementOverrideCapabilitiesChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_Windows__CGraphics__CDisplay__CDisplayEnhancementOverrideCapabilitiesChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_Windows__CGraphics__CDisplay__CDisplayEnhancementOverrideCapabilitiesChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_Windows__CGraphics__CDisplay__CDisplayEnhancementOverrideCapabilitiesChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_Windows__CGraphics__CDisplay__CDisplayEnhancementOverrideCapabilitiesChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_Windows__CGraphics__CDisplay__CDisplayEnhancementOverrideCapabilitiesChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_Windows__CGraphics__CDisplay__CDisplayEnhancementOverrideCapabilitiesChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * sender, __RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilitiesChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_Windows__CGraphics__CDisplay__CDisplayEnhancementOverrideCapabilitiesChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_Windows__CGraphics__CDisplay__CDisplayEnhancementOverrideCapabilitiesChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_Windows__CGraphics__CDisplay__CDisplayEnhancementOverrideCapabilitiesChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectableVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
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
typedef interface __FIReference_1_double __FIReference_1_double;
EXTERN_C const IID IID___FIReference_1_double;
typedef struct __FIReference_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_double * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_double * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_double * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_double * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_double * This, __RPC__out double *value);
    END_INTERFACE
} __FIReference_1_doubleVtbl;
interface __FIReference_1_double
{
    CONST_VTBL struct __FIReference_1_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef enum __x_ABI_CWindows_CGraphics_CDisplay_CAdvancedColorKind __x_ABI_CWindows_CGraphics_CDisplay_CAdvancedColorKind;
typedef enum __x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessOverrideOptions __x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessOverrideOptions;
typedef enum __x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessOverrideScenario __x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessOverrideScenario;
typedef enum __x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessScenario __x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessScenario;
typedef enum __x_ABI_CWindows_CGraphics_CDisplay_CDisplayColorOverrideScenario __x_ABI_CWindows_CGraphics_CDisplay_CDisplayColorOverrideScenario;
typedef enum __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations;
typedef enum __x_ABI_CWindows_CGraphics_CDisplay_CHdrMetadataFormat __x_ABI_CWindows_CGraphics_CDisplay_CHdrMetadataFormat;
typedef enum __x_ABI_CWindows_CGraphics_CDisplay_CResolutionScale __x_ABI_CWindows_CGraphics_CDisplay_CResolutionScale;
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CNitRange __x_ABI_CWindows_CGraphics_CDisplay_CNitRange;
enum __x_ABI_CWindows_CGraphics_CDisplay_CAdvancedColorKind
{
    AdvancedColorKind_StandardDynamicRange = 0,
    AdvancedColorKind_WideColorGamut = 1,
    AdvancedColorKind_HighDynamicRange = 2,
};
enum __x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessOverrideOptions
{
    DisplayBrightnessOverrideOptions_None = 0,
    DisplayBrightnessOverrideOptions_UseDimmedPolicyWhenBatteryIsLow = 0x1,
};
enum __x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessOverrideScenario
{
    DisplayBrightnessOverrideScenario_IdleBrightness = 0,
    DisplayBrightnessOverrideScenario_BarcodeReadingBrightness = 1,
    DisplayBrightnessOverrideScenario_FullBrightness = 2,
};
enum __x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessScenario
{
    DisplayBrightnessScenario_DefaultBrightness = 0,
    DisplayBrightnessScenario_IdleBrightness = 1,
    DisplayBrightnessScenario_BarcodeReadingBrightness = 2,
    DisplayBrightnessScenario_FullBrightness = 3,
};
enum __x_ABI_CWindows_CGraphics_CDisplay_CDisplayColorOverrideScenario
{
    DisplayColorOverrideScenario_Accurate = 0,
};
enum __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations
{
    DisplayOrientations_None = 0,
    DisplayOrientations_Landscape = 0x1,
    DisplayOrientations_Portrait = 0x2,
    DisplayOrientations_LandscapeFlipped = 0x4,
    DisplayOrientations_PortraitFlipped = 0x8,
};
enum __x_ABI_CWindows_CGraphics_CDisplay_CHdrMetadataFormat
{
    HdrMetadataFormat_Hdr10 = 0,
    HdrMetadataFormat_Hdr10Plus = 1,
};
enum __x_ABI_CWindows_CGraphics_CDisplay_CResolutionScale
{
    ResolutionScale_Invalid = 0,
    ResolutionScale_Scale100Percent = 100,
    ResolutionScale_Scale120Percent = 120,
    ResolutionScale_Scale125Percent = 125,
    ResolutionScale_Scale140Percent = 140,
    ResolutionScale_Scale150Percent = 150,
    ResolutionScale_Scale160Percent = 160,
    ResolutionScale_Scale175Percent = 175,
    ResolutionScale_Scale180Percent = 180,
    ResolutionScale_Scale200Percent = 200,
    ResolutionScale_Scale225Percent = 225,
    ResolutionScale_Scale250Percent = 250,
    ResolutionScale_Scale300Percent = 300,
    ResolutionScale_Scale350Percent = 350,
    ResolutionScale_Scale400Percent = 400,
    ResolutionScale_Scale450Percent = 450,
    ResolutionScale_Scale500Percent = 500,
};
struct __x_ABI_CWindows_CGraphics_CDisplay_CNitRange
{
    FLOAT MinNits;
    FLOAT MaxNits;
    FLOAT StepSizeNits;
};
typedef struct
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
__x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler * This,
                  __RPC__in_opt IInspectable * sender
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandlerVtbl;
interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IAdvancedColorInfo[] = L"Windows.Graphics.Display.IAdvancedColorInfo";
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CurrentAdvancedColorKind )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfo * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CAdvancedColorKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RedPrimary )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfo * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GreenPrimary )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfo * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BluePrimary )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfo * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WhitePoint )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfo * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxLuminanceInNits )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfo * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinLuminanceInNits )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfo * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxAverageFullFrameLuminanceInNits )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfo * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SdrWhiteLevelInNits )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfo * This,
                           __RPC__out FLOAT * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsHdrMetadataFormatCurrentlySupported )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfo * This,
                  __x_ABI_CWindows_CGraphics_CDisplay_CHdrMetadataFormat format,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsAdvancedColorKindAvailable )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfo * This,
                  __x_ABI_CWindows_CGraphics_CDisplay_CAdvancedColorKind kind,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfoVtbl;
interface __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CurrentAdvancedColorKind(This,value) )
    ( (This)->lpVtbl->get_RedPrimary(This,value) )
    ( (This)->lpVtbl->get_GreenPrimary(This,value) )
    ( (This)->lpVtbl->get_BluePrimary(This,value) )
    ( (This)->lpVtbl->get_WhitePoint(This,value) )
    ( (This)->lpVtbl->get_MaxLuminanceInNits(This,value) )
    ( (This)->lpVtbl->get_MinLuminanceInNits(This,value) )
    ( (This)->lpVtbl->get_MaxAverageFullFrameLuminanceInNits(This,value) )
    ( (This)->lpVtbl->get_SdrWhiteLevelInNits(This,value) )
    ( (This)->lpVtbl->IsHdrMetadataFormatCurrentlySupported(This,format,result) )
    ( (This)->lpVtbl->IsAdvancedColorKindAvailable(This,kind,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IBrightnessOverride[] = L"Windows.Graphics.Display.IBrightnessOverride";
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsSupported )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOverrideActive )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BrightnessLevel )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
                           __RPC__out DOUBLE * level
        );
    HRESULT ( STDMETHODCALLTYPE *SetBrightnessLevel )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
                  DOUBLE brightnessLevel,
                  __x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessOverrideOptions options
        );
    HRESULT ( STDMETHODCALLTYPE *SetBrightnessScenario )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
                  __x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessScenario scenario,
                  __x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessOverrideOptions options
        );
    HRESULT ( STDMETHODCALLTYPE *GetLevelForScenario )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
                  __x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessScenario scenario,
                           __RPC__out DOUBLE * brightnessLevel
        );
    HRESULT ( STDMETHODCALLTYPE *StartOverride )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This
        );
    HRESULT ( STDMETHODCALLTYPE *StopOverride )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_IsSupportedChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_IsSupportedChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_IsOverrideActiveChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_IsOverrideActiveChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_BrightnessLevelChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BrightnessLevelChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideVtbl;
interface __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsSupported(This,value) )
    ( (This)->lpVtbl->get_IsOverrideActive(This,value) )
    ( (This)->lpVtbl->get_BrightnessLevel(This,level) )
    ( (This)->lpVtbl->SetBrightnessLevel(This,brightnessLevel,options) )
    ( (This)->lpVtbl->SetBrightnessScenario(This,scenario,options) )
    ( (This)->lpVtbl->GetLevelForScenario(This,scenario,brightnessLevel) )
    ( (This)->lpVtbl->StartOverride(This) )
    ( (This)->lpVtbl->StopOverride(This) )
    ( (This)->lpVtbl->add_IsSupportedChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_IsSupportedChanged(This,token) )
    ( (This)->lpVtbl->add_IsOverrideActiveChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_IsOverrideActiveChanged(This,token) )
    ( (This)->lpVtbl->add_BrightnessLevelChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_BrightnessLevelChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IBrightnessOverrideSettings[] = L"Windows.Graphics.Display.IBrightnessOverrideSettings";
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DesiredLevel )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredNits )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettings * This,
                           __RPC__out FLOAT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettingsVtbl;
interface __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DesiredLevel(This,value) )
    ( (This)->lpVtbl->get_DesiredNits(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IBrightnessOverrideSettingsStatics[] = L"Windows.Graphics.Display.IBrightnessOverrideSettingsStatics";
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettingsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettingsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettingsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettingsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettingsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettingsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromLevel )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettingsStatics * This,
                  DOUBLE level,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettings * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromNits )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettingsStatics * This,
                  FLOAT nits,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettings * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromDisplayBrightnessOverrideScenario )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettingsStatics * This,
                  __x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessOverrideScenario overrideScenario,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettings * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettingsStaticsVtbl;
interface __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettingsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromLevel(This,level,result) )
    ( (This)->lpVtbl->CreateFromNits(This,nits,result) )
    ( (This)->lpVtbl->CreateFromDisplayBrightnessOverrideScenario(This,overrideScenario,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettingsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IBrightnessOverrideStatics[] = L"Windows.Graphics.Display.IBrightnessOverrideStatics";
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefaultForSystem )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SaveForSystemAsync )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * value,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStaticsVtbl;
interface __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefaultForSystem(This,value) )
    ( (This)->lpVtbl->GetForCurrentView(This,value) )
    ( (This)->lpVtbl->SaveForSystemAsync(This,value,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IColorOverrideSettings[] = L"Windows.Graphics.Display.IColorOverrideSettings";
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DesiredDisplayColorOverrideScenario )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettings * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CDisplayColorOverrideScenario * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettingsVtbl;
interface __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DesiredDisplayColorOverrideScenario(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IColorOverrideSettingsStatics[] = L"Windows.Graphics.Display.IColorOverrideSettingsStatics";
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettingsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettingsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettingsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettingsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettingsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettingsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromDisplayColorOverrideScenario )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettingsStatics * This,
                  __x_ABI_CWindows_CGraphics_CDisplay_CDisplayColorOverrideScenario overrideScenario,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettings * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettingsStaticsVtbl;
interface __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettingsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromDisplayColorOverrideScenario(This,overrideScenario,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettingsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IDisplayEnhancementOverride[] = L"Windows.Graphics.Display.IDisplayEnhancementOverride";
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ColorOverrideSettings )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettings * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ColorOverrideSettings )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CIColorOverrideSettings * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BrightnessOverrideSettings )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettings * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BrightnessOverrideSettings )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideSettings * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanOverride )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOverrideActive )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentDisplayEnhancementOverrideCapabilities )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilities * * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestOverride )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * This
        );
    HRESULT ( STDMETHODCALLTYPE *StopOverride )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CanOverrideChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CanOverrideChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_IsOverrideActiveChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_IsOverrideActiveChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DisplayEnhancementOverrideCapabilitiesChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayEnhancementOverride_Windows__CGraphics__CDisplay__CDisplayEnhancementOverrideCapabilitiesChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DisplayEnhancementOverrideCapabilitiesChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideVtbl;
interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ColorOverrideSettings(This,value) )
    ( (This)->lpVtbl->put_ColorOverrideSettings(This,value) )
    ( (This)->lpVtbl->get_BrightnessOverrideSettings(This,value) )
    ( (This)->lpVtbl->put_BrightnessOverrideSettings(This,value) )
    ( (This)->lpVtbl->get_CanOverride(This,value) )
    ( (This)->lpVtbl->get_IsOverrideActive(This,value) )
    ( (This)->lpVtbl->GetCurrentDisplayEnhancementOverrideCapabilities(This,value) )
    ( (This)->lpVtbl->RequestOverride(This) )
    ( (This)->lpVtbl->StopOverride(This) )
    ( (This)->lpVtbl->add_CanOverrideChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_CanOverrideChanged(This,token) )
    ( (This)->lpVtbl->add_IsOverrideActiveChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_IsOverrideActiveChanged(This,token) )
    ( (This)->lpVtbl->add_DisplayEnhancementOverrideCapabilitiesChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_DisplayEnhancementOverrideCapabilitiesChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IDisplayEnhancementOverrideCapabilities[] = L"Windows.Graphics.Display.IDisplayEnhancementOverrideCapabilities";
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsBrightnessControlSupported )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsBrightnessNitsControlSupported )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilities * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSupportedNitRanges )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilities * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CDisplay__CNitRange * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilitiesVtbl;
interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsBrightnessControlSupported(This,value) )
    ( (This)->lpVtbl->get_IsBrightnessNitsControlSupported(This,value) )
    ( (This)->lpVtbl->GetSupportedNitRanges(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IDisplayEnhancementOverrideCapabilitiesChangedEventArgs[] = L"Windows.Graphics.Display.IDisplayEnhancementOverrideCapabilitiesChangedEventArgs";
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilitiesChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilitiesChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilitiesChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilitiesChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilitiesChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilitiesChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilitiesChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Capabilities )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilitiesChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilities * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilitiesChangedEventArgsVtbl;
interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilitiesChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilitiesChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Capabilities(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideCapabilitiesChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IDisplayEnhancementOverrideStatics[] = L"Windows.Graphics.Display.IDisplayEnhancementOverrideStatics";
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverride * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideStaticsVtbl;
interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayEnhancementOverrideStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IDisplayInformation[] = L"Windows.Graphics.Display.IDisplayInformation";
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CurrentOrientation )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NativeOrientation )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_OrientationChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_OrientationChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResolutionScale )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CResolutionScale * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LogicalDpi )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RawDpiX )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RawDpiY )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
                           __RPC__out FLOAT * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DpiChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DpiChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StereoEnabled )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StereoEnabledChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StereoEnabledChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetColorProfileAsync )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ColorProfileChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ColorProfileChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationVtbl;
interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CurrentOrientation(This,value) )
    ( (This)->lpVtbl->get_NativeOrientation(This,value) )
    ( (This)->lpVtbl->add_OrientationChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_OrientationChanged(This,token) )
    ( (This)->lpVtbl->get_ResolutionScale(This,value) )
    ( (This)->lpVtbl->get_LogicalDpi(This,value) )
    ( (This)->lpVtbl->get_RawDpiX(This,value) )
    ( (This)->lpVtbl->get_RawDpiY(This,value) )
    ( (This)->lpVtbl->add_DpiChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_DpiChanged(This,token) )
    ( (This)->lpVtbl->get_StereoEnabled(This,value) )
    ( (This)->lpVtbl->add_StereoEnabledChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_StereoEnabledChanged(This,token) )
    ( (This)->lpVtbl->GetColorProfileAsync(This,asyncInfo) )
    ( (This)->lpVtbl->add_ColorProfileChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ColorProfileChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IDisplayInformation2[] = L"Windows.Graphics.Display.IDisplayInformation2";
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RawPixelsPerViewPixel )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2 * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2Vtbl;
interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RawPixelsPerViewPixel(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IDisplayInformation3[] = L"Windows.Graphics.Display.IDisplayInformation3";
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DiagonalSizeInInches )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3 * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3Vtbl;
interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DiagonalSizeInInches(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IDisplayInformation4[] = L"Windows.Graphics.Display.IDisplayInformation4";
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ScreenWidthInRawPixels )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScreenHeightInRawPixels )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4 * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4Vtbl;
interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ScreenWidthInRawPixels(This,value) )
    ( (This)->lpVtbl->get_ScreenHeightInRawPixels(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IDisplayInformation5[] = L"Windows.Graphics.Display.IDisplayInformation5";
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAdvancedColorInfo )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDisplay_CIAdvancedColorInfo * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AdvancedColorInfoChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation5 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AdvancedColorInfoChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation5 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation5Vtbl;
interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation5
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAdvancedColorInfo(This,value) )
    ( (This)->lpVtbl->add_AdvancedColorInfoChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_AdvancedColorInfoChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IDisplayInformationStatics[] = L"Windows.Graphics.Display.IDisplayInformationStatics";
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * * current
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoRotationPreferences )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AutoRotationPreferences )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics * This,
                  __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DisplayContentsInvalidated )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DisplayContentsInvalidated )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStaticsVtbl;
interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,current) )
    ( (This)->lpVtbl->get_AutoRotationPreferences(This,value) )
    ( (This)->lpVtbl->put_AutoRotationPreferences(This,value) )
    ( (This)->lpVtbl->add_DisplayContentsInvalidated(This,handler,token) )
    ( (This)->lpVtbl->remove_DisplayContentsInvalidated(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IDisplayPropertiesStatics[] = L"Windows.Graphics.Display.IDisplayPropertiesStatics";
typedef struct
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
__x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                               HRESULT ( STDMETHODCALLTYPE *get_CurrentOrientation )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations * value
        );
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                               HRESULT ( STDMETHODCALLTYPE *get_NativeOrientation )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations * value
        );
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                               HRESULT ( STDMETHODCALLTYPE *get_AutoRotationPreferences )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations * value
        );
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                               HRESULT ( STDMETHODCALLTYPE *put_AutoRotationPreferences )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
                  __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations value
        );
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                                HRESULT ( STDMETHODCALLTYPE *add_OrientationChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_OrientationChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
                  EventRegistrationToken token
        );
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                               HRESULT ( STDMETHODCALLTYPE *get_ResolutionScale )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CResolutionScale * value
        );
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                               HRESULT ( STDMETHODCALLTYPE *get_LogicalDpi )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
                           __RPC__out FLOAT * value
        );
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                                HRESULT ( STDMETHODCALLTYPE *add_LogicalDpiChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_LogicalDpiChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
                  EventRegistrationToken token
        );
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                               HRESULT ( STDMETHODCALLTYPE *get_StereoEnabled )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                                HRESULT ( STDMETHODCALLTYPE *add_StereoEnabledChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_StereoEnabledChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
                  EventRegistrationToken token
        );
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                      HRESULT ( STDMETHODCALLTYPE *GetColorProfileAsync )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * * asyncInfo
        );
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                                HRESULT ( STDMETHODCALLTYPE *add_ColorProfileChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_ColorProfileChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
                  EventRegistrationToken token
        );
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                                HRESULT ( STDMETHODCALLTYPE *add_DisplayContentsInvalidated )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_DisplayContentsInvalidated )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStaticsVtbl;
interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    ( (This)->lpVtbl->get_CurrentOrientation(This,value) )
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    ( (This)->lpVtbl->get_NativeOrientation(This,value) )
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    ( (This)->lpVtbl->get_AutoRotationPreferences(This,value) )
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    ( (This)->lpVtbl->put_AutoRotationPreferences(This,value) )
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    ( (This)->lpVtbl->add_OrientationChanged(This,handler,token) )
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    ( (This)->lpVtbl->remove_OrientationChanged(This,token) )
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    ( (This)->lpVtbl->get_ResolutionScale(This,value) )
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    ( (This)->lpVtbl->get_LogicalDpi(This,value) )
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    ( (This)->lpVtbl->add_LogicalDpiChanged(This,handler,token) )
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    ( (This)->lpVtbl->remove_LogicalDpiChanged(This,token) )
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    ( (This)->lpVtbl->get_StereoEnabled(This,value) )
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    ( (This)->lpVtbl->add_StereoEnabledChanged(This,handler,token) )
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    ( (This)->lpVtbl->remove_StereoEnabledChanged(This,token) )
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    ( (This)->lpVtbl->GetColorProfileAsync(This,asyncInfo) )
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    ( (This)->lpVtbl->add_ColorProfileChanged(This,handler,token) )
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    ( (This)->lpVtbl->remove_ColorProfileChanged(This,token) )
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    ( (This)->lpVtbl->add_DisplayContentsInvalidated(This,handler,token) )
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    ( (This)->lpVtbl->remove_DisplayContentsInvalidated(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Display_AdvancedColorInfo[] = L"Windows.Graphics.Display.AdvancedColorInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Display_BrightnessOverride[] = L"Windows.Graphics.Display.BrightnessOverride";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Display_BrightnessOverrideSettings[] = L"Windows.Graphics.Display.BrightnessOverrideSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Display_ColorOverrideSettings[] = L"Windows.Graphics.Display.ColorOverrideSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Display_DisplayEnhancementOverride[] = L"Windows.Graphics.Display.DisplayEnhancementOverride";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Display_DisplayEnhancementOverrideCapabilities[] = L"Windows.Graphics.Display.DisplayEnhancementOverrideCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Display_DisplayEnhancementOverrideCapabilitiesChangedEventArgs[] = L"Windows.Graphics.Display.DisplayEnhancementOverrideCapabilitiesChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Display_DisplayInformation[] = L"Windows.Graphics.Display.DisplayInformation";
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Display_DisplayProperties[] = L"Windows.Graphics.Display.DisplayProperties";
       
       
#pragma clang diagnostic pop
