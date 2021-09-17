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
#include "Windows.Devices.Lights.h"
#include "Windows.Graphics.Imaging.h"
#include "Windows.UI.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffect __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffect;
typedef interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffectFactory __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffectFactory;
typedef interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapRequestedEventArgs __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapRequestedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect;
typedef interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffectFactory __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffectFactory;
typedef interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffect __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffect;
typedef interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffectFactory __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffectFactory;
typedef interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffect __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffect;
typedef interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffectFactory __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffectFactory;
typedef interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffect __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffect;
typedef interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylist __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylist;
typedef interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylistStatics __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylistStatics;
typedef interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffect __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffect;
typedef interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffectFactory __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffectFactory;
typedef interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayUpdateRequestedEventArgs __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayUpdateRequestedEventArgs;
typedef interface __FIIterator_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect __FIIterator_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect;
typedef struct __FIIterator_1_Windows__CDevices__CLights__CEffects__CILampArrayEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This, __RPC__out __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffect * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffect * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CLights__CEffects__CILampArrayEffectVtbl;
interface __FIIterator_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CLights__CEffects__CILampArrayEffectVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect __FIIterable_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect;
typedef struct __FIIterable_1_Windows__CDevices__CLights__CEffects__CILampArrayEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CLights__CEffects__CILampArrayEffectVtbl;
interface __FIIterable_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CLights__CEffects__CILampArrayEffectVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect __FIVectorView_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect;
typedef struct __FIVectorView_1_Windows__CDevices__CLights__CEffects__CILampArrayEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffect * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This,
                       __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffect * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffect * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CLights__CEffects__CILampArrayEffectVtbl;
interface __FIVectorView_1_Windows__CDevices__CLights__CEffects__CILampArrayEffect
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CLights__CEffects__CILampArrayEffectVtbl *lpVtbl;
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
typedef interface __FIIterator_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist __FIIterator_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist;
typedef struct __FIIterator_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylistVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist * This, __RPC__out __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylist * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylist * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylistVtbl;
interface __FIIterator_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylistVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist __FIIterable_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist;
typedef struct __FIIterable_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylistVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylistVtbl;
interface __FIIterable_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylistVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayBitmapEffect_Windows__CDevices__CLights__CEffects__CLampArrayBitmapRequestedEventArgs __FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayBitmapEffect_Windows__CDevices__CLights__CEffects__CLampArrayBitmapRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayBitmapEffect_Windows__CDevices__CLights__CEffects__CLampArrayBitmapRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayBitmapEffect_Windows__CDevices__CLights__CEffects__CLampArrayBitmapRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayBitmapEffect_Windows__CDevices__CLights__CEffects__CLampArrayBitmapRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayBitmapEffect_Windows__CDevices__CLights__CEffects__CLampArrayBitmapRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayBitmapEffect_Windows__CDevices__CLights__CEffects__CLampArrayBitmapRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayBitmapEffect_Windows__CDevices__CLights__CEffects__CLampArrayBitmapRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffect * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayBitmapEffect_Windows__CDevices__CLights__CEffects__CLampArrayBitmapRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayBitmapEffect_Windows__CDevices__CLights__CEffects__CLampArrayBitmapRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayBitmapEffect_Windows__CDevices__CLights__CEffects__CLampArrayBitmapRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayCustomEffect_Windows__CDevices__CLights__CEffects__CLampArrayUpdateRequestedEventArgs __FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayCustomEffect_Windows__CDevices__CLights__CEffects__CLampArrayUpdateRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayCustomEffect_Windows__CDevices__CLights__CEffects__CLampArrayUpdateRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayCustomEffect_Windows__CDevices__CLights__CEffects__CLampArrayUpdateRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayCustomEffect_Windows__CDevices__CLights__CEffects__CLampArrayUpdateRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayCustomEffect_Windows__CDevices__CLights__CEffects__CLampArrayUpdateRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayCustomEffect_Windows__CDevices__CLights__CEffects__CLampArrayUpdateRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayCustomEffect_Windows__CDevices__CLights__CEffects__CLampArrayUpdateRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffect * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayUpdateRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayCustomEffect_Windows__CDevices__CLights__CEffects__CLampArrayUpdateRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayCustomEffect_Windows__CDevices__CLights__CEffects__CLampArrayUpdateRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayCustomEffect_Windows__CDevices__CLights__CEffects__CLampArrayUpdateRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CDevices_CLights_CILampArray __x_ABI_CWindows_CDevices_CLights_CILampArray;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef enum __x_ABI_CWindows_CDevices_CLights_CEffects_CLampArrayEffectCompletionBehavior __x_ABI_CWindows_CDevices_CLights_CEffects_CLampArrayEffectCompletionBehavior;
typedef enum __x_ABI_CWindows_CDevices_CLights_CEffects_CLampArrayEffectStartMode __x_ABI_CWindows_CDevices_CLights_CEffects_CLampArrayEffectStartMode;
typedef enum __x_ABI_CWindows_CDevices_CLights_CEffects_CLampArrayRepetitionMode __x_ABI_CWindows_CDevices_CLights_CEffects_CLampArrayRepetitionMode;
enum __x_ABI_CWindows_CDevices_CLights_CEffects_CLampArrayEffectCompletionBehavior
{
    LampArrayEffectCompletionBehavior_ClearState = 0,
    LampArrayEffectCompletionBehavior_KeepState = 1,
};
enum __x_ABI_CWindows_CDevices_CLights_CEffects_CLampArrayEffectStartMode
{
    LampArrayEffectStartMode_Sequential = 0,
    LampArrayEffectStartMode_Simultaneous = 1,
};
enum __x_ABI_CWindows_CDevices_CLights_CEffects_CLampArrayRepetitionMode
{
    LampArrayRepetitionMode_Occurrences = 0,
    LampArrayRepetitionMode_Forever = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect[] = L"Windows.Devices.Lights.Effects.ILampArrayBitmapEffect";
typedef struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffect * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffect * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffect * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffect * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffect * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffect * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffect * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Duration )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffect * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartDelay )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffect * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StartDelay )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffect * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UpdateInterval )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffect * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UpdateInterval )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffect * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SuggestedBitmapSize )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffect * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_BitmapRequested )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffect * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayBitmapEffect_Windows__CDevices__CLights__CEffects__CLampArrayBitmapRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BitmapRequested )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffect * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffectVtbl;
interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->put_Duration(This,value) )
    ( (This)->lpVtbl->get_StartDelay(This,value) )
    ( (This)->lpVtbl->put_StartDelay(This,value) )
    ( (This)->lpVtbl->get_UpdateInterval(This,value) )
    ( (This)->lpVtbl->put_UpdateInterval(This,value) )
    ( (This)->lpVtbl->get_SuggestedBitmapSize(This,value) )
    ( (This)->lpVtbl->add_BitmapRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_BitmapRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffect;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_Effects_ILampArrayBitmapEffectFactory[] = L"Windows.Devices.Lights.Effects.ILampArrayBitmapEffectFactory";
typedef struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffectFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffectFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffectFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffectFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffectFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffectFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffectFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffectFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CLights_CILampArray * lampArray,
                  UINT32 __lampIndexesSize,
                                              __RPC__in_ecount_full(__lampIndexesSize) INT32 * lampIndexes,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffect * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffectFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffectFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffectFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,lampArray,__lampIndexesSize,lampIndexes,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapEffectFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_Effects_ILampArrayBitmapRequestedEventArgs[] = L"Windows.Devices.Lights.Effects.ILampArrayBitmapRequestedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SinceStarted )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapRequestedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateBitmap )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapRequestedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * bitmap
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SinceStarted(This,value) )
    ( (This)->lpVtbl->UpdateBitmap(This,bitmap) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBitmapRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect[] = L"Windows.Devices.Lights.Effects.ILampArrayBlinkEffect";
typedef struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Color )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AttackDuration )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AttackDuration )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SustainDuration )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SustainDuration )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DecayDuration )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DecayDuration )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RepetitionDelay )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RepetitionDelay )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartDelay )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StartDelay )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Occurrences )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Occurrences )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RepetitionMode )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CLights_CEffects_CLampArrayRepetitionMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RepetitionMode )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect * This,
                  __x_ABI_CWindows_CDevices_CLights_CEffects_CLampArrayRepetitionMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffectVtbl;
interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Color(This,value) )
    ( (This)->lpVtbl->put_Color(This,value) )
    ( (This)->lpVtbl->get_AttackDuration(This,value) )
    ( (This)->lpVtbl->put_AttackDuration(This,value) )
    ( (This)->lpVtbl->get_SustainDuration(This,value) )
    ( (This)->lpVtbl->put_SustainDuration(This,value) )
    ( (This)->lpVtbl->get_DecayDuration(This,value) )
    ( (This)->lpVtbl->put_DecayDuration(This,value) )
    ( (This)->lpVtbl->get_RepetitionDelay(This,value) )
    ( (This)->lpVtbl->put_RepetitionDelay(This,value) )
    ( (This)->lpVtbl->get_StartDelay(This,value) )
    ( (This)->lpVtbl->put_StartDelay(This,value) )
    ( (This)->lpVtbl->get_Occurrences(This,value) )
    ( (This)->lpVtbl->put_Occurrences(This,value) )
    ( (This)->lpVtbl->get_RepetitionMode(This,value) )
    ( (This)->lpVtbl->put_RepetitionMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_Effects_ILampArrayBlinkEffectFactory[] = L"Windows.Devices.Lights.Effects.ILampArrayBlinkEffectFactory";
typedef struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffectFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffectFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffectFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffectFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffectFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffectFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffectFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffectFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CLights_CILampArray * lampArray,
                  UINT32 __lampIndexesSize,
                                              __RPC__in_ecount_full(__lampIndexesSize) INT32 * lampIndexes,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffect * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffectFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffectFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffectFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,lampArray,__lampIndexesSize,lampIndexes,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayBlinkEffectFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_Effects_ILampArrayColorRampEffect[] = L"Windows.Devices.Lights.Effects.ILampArrayColorRampEffect";
typedef struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffect * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffect * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffect * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffect * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffect * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffect * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffect * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Color )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffect * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RampDuration )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffect * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RampDuration )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffect * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartDelay )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffect * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StartDelay )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffect * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CompletionBehavior )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffect * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CLights_CEffects_CLampArrayEffectCompletionBehavior * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CompletionBehavior )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffect * This,
                  __x_ABI_CWindows_CDevices_CLights_CEffects_CLampArrayEffectCompletionBehavior value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffectVtbl;
interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Color(This,value) )
    ( (This)->lpVtbl->put_Color(This,value) )
    ( (This)->lpVtbl->get_RampDuration(This,value) )
    ( (This)->lpVtbl->put_RampDuration(This,value) )
    ( (This)->lpVtbl->get_StartDelay(This,value) )
    ( (This)->lpVtbl->put_StartDelay(This,value) )
    ( (This)->lpVtbl->get_CompletionBehavior(This,value) )
    ( (This)->lpVtbl->put_CompletionBehavior(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffect;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_Effects_ILampArrayColorRampEffectFactory[] = L"Windows.Devices.Lights.Effects.ILampArrayColorRampEffectFactory";
typedef struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffectFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffectFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffectFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffectFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffectFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffectFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffectFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffectFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CLights_CILampArray * lampArray,
                  UINT32 __lampIndexesSize,
                                              __RPC__in_ecount_full(__lampIndexesSize) INT32 * lampIndexes,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffect * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffectFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffectFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffectFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,lampArray,__lampIndexesSize,lampIndexes,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayColorRampEffectFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_Effects_ILampArrayCustomEffect[] = L"Windows.Devices.Lights.Effects.ILampArrayCustomEffect";
typedef struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffect * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffect * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffect * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffect * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffect * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffect * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffect * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Duration )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffect * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UpdateInterval )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffect * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UpdateInterval )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffect * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_UpdateRequested )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffect * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CLights__CEffects__CLampArrayCustomEffect_Windows__CDevices__CLights__CEffects__CLampArrayUpdateRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_UpdateRequested )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffect * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffectVtbl;
interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->put_Duration(This,value) )
    ( (This)->lpVtbl->get_UpdateInterval(This,value) )
    ( (This)->lpVtbl->put_UpdateInterval(This,value) )
    ( (This)->lpVtbl->add_UpdateRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_UpdateRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffect;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_Effects_ILampArrayCustomEffectFactory[] = L"Windows.Devices.Lights.Effects.ILampArrayCustomEffectFactory";
typedef struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffectFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffectFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffectFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffectFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffectFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffectFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffectFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffectFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CLights_CILampArray * lampArray,
                  UINT32 __lampIndexesSize,
                                              __RPC__in_ecount_full(__lampIndexesSize) INT32 * lampIndexes,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffect * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffectFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffectFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffectFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,lampArray,__lampIndexesSize,lampIndexes,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayCustomEffectFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_Effects_ILampArrayEffect[] = L"Windows.Devices.Lights.Effects.ILampArrayEffect";
typedef struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffect * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffect * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffect * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffect * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffect * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffect * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ZIndex )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffect * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ZIndex )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffect * This,
                  INT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectVtbl;
interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ZIndex(This,value) )
    ( (This)->lpVtbl->put_ZIndex(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffect;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist[] = L"Windows.Devices.Lights.Effects.ILampArrayEffectPlaylist";
typedef struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylistVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylist * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylist * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylist * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylist * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylist * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylist * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Append )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylist * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffect * effect
        );
    HRESULT ( STDMETHODCALLTYPE *OverrideZIndex )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylist * This,
                  INT32 zIndex
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylist * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylist * This
        );
    HRESULT ( STDMETHODCALLTYPE *Pause )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylist * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EffectStartMode )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylist * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CLights_CEffects_CLampArrayEffectStartMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EffectStartMode )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylist * This,
                  __x_ABI_CWindows_CDevices_CLights_CEffects_CLampArrayEffectStartMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Occurrences )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylist * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Occurrences )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylist * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RepetitionMode )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylist * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CLights_CEffects_CLampArrayRepetitionMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RepetitionMode )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylist * This,
                  __x_ABI_CWindows_CDevices_CLights_CEffects_CLampArrayRepetitionMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylistVtbl;
interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylist
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylistVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Append(This,effect) )
    ( (This)->lpVtbl->OverrideZIndex(This,zIndex) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
    ( (This)->lpVtbl->Pause(This) )
    ( (This)->lpVtbl->get_EffectStartMode(This,value) )
    ( (This)->lpVtbl->put_EffectStartMode(This,value) )
    ( (This)->lpVtbl->get_Occurrences(This,value) )
    ( (This)->lpVtbl->put_Occurrences(This,value) )
    ( (This)->lpVtbl->get_RepetitionMode(This,value) )
    ( (This)->lpVtbl->put_RepetitionMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylist;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylistStatics[] = L"Windows.Devices.Lights.Effects.ILampArrayEffectPlaylistStatics";
typedef struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylistStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylistStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylistStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylistStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylistStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylistStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylistStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *StartAll )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylistStatics * This,
                  __RPC__in_opt __FIIterable_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist * value
        );
    HRESULT ( STDMETHODCALLTYPE *StopAll )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylistStatics * This,
                  __RPC__in_opt __FIIterable_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist * value
        );
    HRESULT ( STDMETHODCALLTYPE *PauseAll )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylistStatics * This,
                  __RPC__in_opt __FIIterable_1_Windows__CDevices__CLights__CEffects__CLampArrayEffectPlaylist * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylistStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylistStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylistStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->StartAll(This,value) )
    ( (This)->lpVtbl->StopAll(This,value) )
    ( (This)->lpVtbl->PauseAll(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayEffectPlaylistStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_Effects_ILampArraySolidEffect[] = L"Windows.Devices.Lights.Effects.ILampArraySolidEffect";
typedef struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffect * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffect * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffect * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffect * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffect * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffect * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffect * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Color )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffect * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffect * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Duration )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffect * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartDelay )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffect * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StartDelay )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffect * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CompletionBehavior )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffect * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CLights_CEffects_CLampArrayEffectCompletionBehavior * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CompletionBehavior )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffect * This,
                  __x_ABI_CWindows_CDevices_CLights_CEffects_CLampArrayEffectCompletionBehavior value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffectVtbl;
interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Color(This,value) )
    ( (This)->lpVtbl->put_Color(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->put_Duration(This,value) )
    ( (This)->lpVtbl->get_StartDelay(This,value) )
    ( (This)->lpVtbl->put_StartDelay(This,value) )
    ( (This)->lpVtbl->get_CompletionBehavior(This,value) )
    ( (This)->lpVtbl->put_CompletionBehavior(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffect;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_Effects_ILampArraySolidEffectFactory[] = L"Windows.Devices.Lights.Effects.ILampArraySolidEffectFactory";
typedef struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffectFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffectFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffectFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffectFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffectFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffectFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffectFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffectFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CLights_CILampArray * lampArray,
                  UINT32 __lampIndexesSize,
                                              __RPC__in_ecount_full(__lampIndexesSize) INT32 * lampIndexes,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffect * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffectFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffectFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffectFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,lampArray,__lampIndexesSize,lampIndexes,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CEffects_CILampArraySolidEffectFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_Effects_ILampArrayUpdateRequestedEventArgs[] = L"Windows.Devices.Lights.Effects.ILampArrayUpdateRequestedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayUpdateRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayUpdateRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayUpdateRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayUpdateRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayUpdateRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayUpdateRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayUpdateRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SinceStarted )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayUpdateRequestedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetColor )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayUpdateRequestedEventArgs * This,
                  __x_ABI_CWindows_CUI_CColor desiredColor
        );
    HRESULT ( STDMETHODCALLTYPE *SetColorForIndex )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayUpdateRequestedEventArgs * This,
                  INT32 lampIndex,
                  __x_ABI_CWindows_CUI_CColor desiredColor
        );
    HRESULT ( STDMETHODCALLTYPE *SetSingleColorForIndices )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayUpdateRequestedEventArgs * This,
                  __x_ABI_CWindows_CUI_CColor desiredColor,
                  UINT32 __lampIndexesSize,
                                              __RPC__in_ecount_full(__lampIndexesSize) INT32 * lampIndexes
        );
    HRESULT ( STDMETHODCALLTYPE *SetColorsForIndices )(
        __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayUpdateRequestedEventArgs * This,
                  UINT32 __desiredColorsSize,
                                                __RPC__in_ecount_full(__desiredColorsSize) __x_ABI_CWindows_CUI_CColor * desiredColors,
                  UINT32 __lampIndexesSize,
                                              __RPC__in_ecount_full(__lampIndexesSize) INT32 * lampIndexes
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayUpdateRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayUpdateRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayUpdateRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SinceStarted(This,value) )
    ( (This)->lpVtbl->SetColor(This,desiredColor) )
    ( (This)->lpVtbl->SetColorForIndex(This,lampIndex,desiredColor) )
    ( (This)->lpVtbl->SetSingleColorForIndices(This,desiredColor,__lampIndexesSize,lampIndexes) )
    ( (This)->lpVtbl->SetColorsForIndices(This,__desiredColorsSize,desiredColors,__lampIndexesSize,lampIndexes) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CEffects_CILampArrayUpdateRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Lights_Effects_LampArrayBitmapEffect[] = L"Windows.Devices.Lights.Effects.LampArrayBitmapEffect";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Lights_Effects_LampArrayBitmapRequestedEventArgs[] = L"Windows.Devices.Lights.Effects.LampArrayBitmapRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Lights_Effects_LampArrayBlinkEffect[] = L"Windows.Devices.Lights.Effects.LampArrayBlinkEffect";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Lights_Effects_LampArrayColorRampEffect[] = L"Windows.Devices.Lights.Effects.LampArrayColorRampEffect";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Lights_Effects_LampArrayCustomEffect[] = L"Windows.Devices.Lights.Effects.LampArrayCustomEffect";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Lights_Effects_LampArrayEffectPlaylist[] = L"Windows.Devices.Lights.Effects.LampArrayEffectPlaylist";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Lights_Effects_LampArraySolidEffect[] = L"Windows.Devices.Lights.Effects.LampArraySolidEffect";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Lights_Effects_LampArrayUpdateRequestedEventArgs[] = L"Windows.Devices.Lights.Effects.LampArrayUpdateRequestedEventArgs";
       
       
#pragma clang diagnostic pop
