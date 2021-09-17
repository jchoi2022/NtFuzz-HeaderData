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
#include "Windows.ApplicationModel.Activation.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics;
typedef interface __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs;
typedef interface __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay;
typedef interface __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource;
typedef interface __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics;
typedef interface __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource * sender, __RPC__in_opt __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIEventHandler_1_IInspectable __FIEventHandler_1_IInspectable;
EXTERN_C const IID IID___FIEventHandler_1_IInspectable;
typedef struct __FIEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_IInspectable * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FIEventHandler_1_IInspectableVtbl;
interface __FIEventHandler_1_IInspectable
{
    CONST_VTBL struct __FIEventHandler_1_IInspectableVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;
EXTERN_C const IID IID___FIMapChangedEventArgs_1_HSTRING;
typedef struct __FIMapChangedEventArgs_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_CollectionChange )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__out __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIMapChangedEventArgs_1_HSTRINGVtbl;
interface __FIMapChangedEventArgs_1_HSTRING
{
    CONST_VTBL struct __FIMapChangedEventArgs_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_CollectionChange(This,value) )
    ( (This)->lpVtbl -> get_Key(This,value) )
typedef interface __FMapChangedEventHandler_2_HSTRING_IInspectable __FMapChangedEventHandler_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FMapChangedEventHandler_2_HSTRING_IInspectable;
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;
typedef struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
                   __RPC__in_opt __FIObservableMap_2_HSTRING_IInspectable *sender,
                   __RPC__in_opt __FIMapChangedEventArgs_1_HSTRING *e);
    END_INTERFACE
} __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl;
interface __FMapChangedEventHandler_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIObservableMap_2_HSTRING_IInspectable;
typedef struct __FIObservableMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *add_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   __RPC__in_opt __FMapChangedEventHandler_2_HSTRING_IInspectable *handler,
                            __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   EventRegistrationToken token);
    END_INTERFACE
} __FIObservableMap_2_HSTRING_IInspectableVtbl;
interface __FIObservableMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIObservableMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> add_MapChanged(This,handler,token) )
    ( (This)->lpVtbl -> remove_MapChanged(This,token) )
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs;
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef enum __x_ABI_CWindows_CGaming_CUI_CGameChatMessageOrigin __x_ABI_CWindows_CGaming_CUI_CGameChatMessageOrigin;
typedef enum __x_ABI_CWindows_CGaming_CUI_CGameChatOverlayPosition __x_ABI_CWindows_CGaming_CUI_CGameChatOverlayPosition;
enum __x_ABI_CWindows_CGaming_CUI_CGameChatMessageOrigin
{
    GameChatMessageOrigin_Voice = 0,
    GameChatMessageOrigin_Text = 1,
};
enum __x_ABI_CWindows_CGaming_CUI_CGameChatOverlayPosition
{
    GameChatOverlayPosition_BottomCenter = 0,
    GameChatOverlayPosition_BottomLeft = 1,
    GameChatOverlayPosition_BottomRight = 2,
    GameChatOverlayPosition_MiddleRight = 3,
    GameChatOverlayPosition_MiddleLeft = 4,
    GameChatOverlayPosition_TopCenter = 5,
    GameChatOverlayPosition_TopLeft = 6,
    GameChatOverlayPosition_TopRight = 7,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_UI_IGameBarStatics[] = L"Windows.Gaming.UI.IGameBarStatics";
typedef struct __x_ABI_CWindows_CGaming_CUI_CIGameBarStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_VisibilityChanged )(
        __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_VisibilityChanged )(
        __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_IsInputRedirectedChanged )(
        __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_IsInputRedirectedChanged )(
        __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Visible )(
        __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsInputRedirected )(
        __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CUI_CIGameBarStaticsVtbl;
interface __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CUI_CIGameBarStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_VisibilityChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_VisibilityChanged(This,token) )
    ( (This)->lpVtbl->add_IsInputRedirectedChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_IsInputRedirectedChanged(This,token) )
    ( (This)->lpVtbl->get_Visible(This,value) )
    ( (This)->lpVtbl->get_IsInputRedirected(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CUI_CIGameBarStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_UI_IGameChatMessageReceivedEventArgs[] = L"Windows.Gaming.UI.IGameChatMessageReceivedEventArgs";
typedef struct __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppId )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppDisplayName )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SenderName )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Origin )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CUI_CGameChatMessageOrigin * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppId(This,value) )
    ( (This)->lpVtbl->get_AppDisplayName(This,value) )
    ( (This)->lpVtbl->get_SenderName(This,value) )
    ( (This)->lpVtbl->get_Message(This,value) )
    ( (This)->lpVtbl->get_Origin(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CUI_CIGameChatMessageReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_UI_IGameChatOverlay[] = L"Windows.Gaming.UI.IGameChatOverlay";
typedef struct __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DesiredPosition )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CUI_CGameChatOverlayPosition * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredPosition )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay * This,
                  __x_ABI_CWindows_CGaming_CUI_CGameChatOverlayPosition value
        );
    HRESULT ( STDMETHODCALLTYPE *AddMessage )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay * This,
                  __RPC__in HSTRING sender,
                  __RPC__in HSTRING message,
                  __x_ABI_CWindows_CGaming_CUI_CGameChatMessageOrigin origin
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayVtbl;
interface __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DesiredPosition(This,value) )
    ( (This)->lpVtbl->put_DesiredPosition(This,value) )
    ( (This)->lpVtbl->AddMessage(This,sender,message,origin) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_UI_IGameChatOverlayMessageSource[] = L"Windows.Gaming.UI.IGameChatOverlayMessageSource";
typedef struct __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_MessageReceived )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGaming__CUI__CGameChatOverlayMessageSource_Windows__CGaming__CUI__CGameChatMessageReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MessageReceived )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *SetDelayBeforeClosingAfterMessageReceived )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSourceVtbl;
interface __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_MessageReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_MessageReceived(This,token) )
    ( (This)->lpVtbl->SetDelayBeforeClosingAfterMessageReceived(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayMessageSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_UI_IGameChatOverlayStatics[] = L"Windows.Gaming.UI.IGameChatOverlayStatics";
typedef struct __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlay * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStaticsVtbl;
interface __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CUI_CIGameChatOverlayStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_UI_IGameUIProviderActivatedEventArgs[] = L"Windows.Gaming.UI.IGameUIProviderActivatedEventArgs";
typedef struct __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_GameUIArgs )(
        __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompleted )(
        __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * results
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgsVtbl;
interface __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_GameUIArgs(This,value) )
    ( (This)->lpVtbl->ReportCompleted(This,results) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CUI_CIGameUIProviderActivatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_UI_GameBar[] = L"Windows.Gaming.UI.GameBar";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_UI_GameChatMessageReceivedEventArgs[] = L"Windows.Gaming.UI.GameChatMessageReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_UI_GameChatOverlay[] = L"Windows.Gaming.UI.GameChatOverlay";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_UI_GameChatOverlayMessageSource[] = L"Windows.Gaming.UI.GameChatOverlayMessageSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_UI_GameUIProviderActivatedEventArgs[] = L"Windows.Gaming.UI.GameUIProviderActivatedEventArgs";
       
       
#pragma clang diagnostic pop
