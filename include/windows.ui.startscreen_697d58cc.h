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
#include "Windows.ApplicationModel.Core.h"
#include "Windows.Perception.Spatial.h"
#include "Windows.System.h"
#include "Windows.UI.h"
#include "Windows.UI.Popups.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CIJumpList __x_ABI_CWindows_CUI_CStartScreen_CIJumpList;
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem;
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics;
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics;
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile;
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2;
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory;
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2 __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2;
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics;
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements;
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2 __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2;
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3 __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3;
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4 __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4;
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager;
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager2 __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager2;
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics;
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel;
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel2 __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel2;
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest;
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral;
typedef interface __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs;
typedef interface __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem;
typedef struct __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem * This, __RPC__out __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItemVtbl;
interface __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItemVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem;
typedef struct __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CStartScreen__CJumpListItem **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItemVtbl;
interface __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CStartScreen__CJumpListItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile;
typedef struct __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile * This, __RPC__out __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl;
interface __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile;
typedef struct __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTile **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl;
interface __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTile
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements;
typedef struct __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElementsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This, __RPC__out __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElementsVtbl;
interface __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElementsVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements;
typedef struct __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElementsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElementsVtbl;
interface __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElementsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem;
typedef struct __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                       __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItemVtbl;
interface __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItemVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile;
typedef struct __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
                       __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl;
interface __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements;
typedef struct __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElementsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
                       __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElementsVtbl;
interface __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElementsVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CStartScreen__CJumpListItem;
typedef struct __FIVector_1_Windows__CUI__CStartScreen__CJumpListItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CStartScreen__CJumpListItem **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                   __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This, __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CStartScreen__CJumpListItemVtbl;
interface __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CStartScreen__CJumpListItemVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * This, __RPC__out __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList;
typedef interface __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpListVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpListVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList;
typedef struct __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CStartScreen__CJumpList **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList * This, __RPC__out __x_ABI_CWindows_CUI_CStartScreen_CIJumpList * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpListVtbl;
interface __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpListVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgsVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingBox;
typedef interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox;
EXTERN_C const IID IID___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox;
typedef struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBoxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This, __RPC__out struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingBox *value);
    END_INTERFACE
} __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBoxVtbl;
interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox
{
    CONST_VTBL struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBoxVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingBox __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingBox;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef enum __x_ABI_CWindows_CUI_CPopups_CPlacement __x_ABI_CWindows_CUI_CPopups_CPlacement;
typedef enum __x_ABI_CWindows_CUI_CStartScreen_CForegroundText __x_ABI_CWindows_CUI_CStartScreen_CForegroundText;
typedef enum __x_ABI_CWindows_CUI_CStartScreen_CJumpListItemKind __x_ABI_CWindows_CUI_CStartScreen_CJumpListItemKind;
typedef enum __x_ABI_CWindows_CUI_CStartScreen_CJumpListSystemGroupKind __x_ABI_CWindows_CUI_CStartScreen_CJumpListSystemGroupKind;
typedef enum __x_ABI_CWindows_CUI_CStartScreen_CTileMixedRealityModelActivationBehavior __x_ABI_CWindows_CUI_CStartScreen_CTileMixedRealityModelActivationBehavior;
typedef enum __x_ABI_CWindows_CUI_CStartScreen_CTileOptions __x_ABI_CWindows_CUI_CStartScreen_CTileOptions;
typedef enum __x_ABI_CWindows_CUI_CStartScreen_CTileSize __x_ABI_CWindows_CUI_CStartScreen_CTileSize;
enum __x_ABI_CWindows_CUI_CStartScreen_CForegroundText
{
    ForegroundText_Dark = 0,
    ForegroundText_Light = 1,
};
enum __x_ABI_CWindows_CUI_CStartScreen_CJumpListItemKind
{
    JumpListItemKind_Arguments = 0,
    JumpListItemKind_Separator = 1,
};
enum __x_ABI_CWindows_CUI_CStartScreen_CJumpListSystemGroupKind
{
    JumpListSystemGroupKind_None = 0,
    JumpListSystemGroupKind_Frequent = 1,
    JumpListSystemGroupKind_Recent = 2,
};
enum __x_ABI_CWindows_CUI_CStartScreen_CTileMixedRealityModelActivationBehavior
{
    TileMixedRealityModelActivationBehavior_Default = 0,
    TileMixedRealityModelActivationBehavior_None = 1,
};
enum __x_ABI_CWindows_CUI_CStartScreen_CTileOptions
{
    TileOptions_None
    DEPRECATEDENUMERATOR("TileOptions.None may be altered or unavailable for release after Windows Phone 8.1.")
     = 0,
    TileOptions_ShowNameOnLogo
    DEPRECATEDENUMERATOR("TileOptions.ShowNameOnLogo may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile.VisualElements.ShowNameOnSquare150x150Logo.")
     = 0x1,
    TileOptions_ShowNameOnWideLogo
    DEPRECATEDENUMERATOR("TileOptions.ShowNameWideOnLogo may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile.VisualElements.ShowNameOnWide310x150Logo.")
     = 0x2,
    TileOptions_CopyOnDeployment
    DEPRECATEDENUMERATOR("TileOptions.CopyOnDeployment may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile.RoamingEnabled to control roaming behavior.")
     = 0x4,
};
enum __x_ABI_CWindows_CUI_CStartScreen_CTileSize
{
    TileSize_Default = 0,
    TileSize_Square30x30
    DEPRECATEDENUMERATOR("TileSize.Square30x30 may be altered or unavailable for release after Windows 10.")
     = 1,
    TileSize_Square70x70
    DEPRECATEDENUMERATOR("TileSize.Square70x70 may be altered or unavailable for release after Windows Phone 8.1.")
     = 2,
    TileSize_Square150x150 = 3,
    TileSize_Wide310x150 = 4,
    TileSize_Square310x310 = 5,
    TileSize_Square71x71 = 6,
    TileSize_Square44x44 = 7,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IJumpList[] = L"Windows.UI.StartScreen.IJumpList";
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CIJumpListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpList * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpList * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpList * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpList * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpList * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpList * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Items )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpList * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CStartScreen__CJumpListItem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemGroupKind )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpList * This,
                           __RPC__out __x_ABI_CWindows_CUI_CStartScreen_CJumpListSystemGroupKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SystemGroupKind )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpList * This,
                  __x_ABI_CWindows_CUI_CStartScreen_CJumpListSystemGroupKind value
        );
    HRESULT ( STDMETHODCALLTYPE *SaveAsync )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpList * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CStartScreen_CIJumpListVtbl;
interface __x_ABI_CWindows_CUI_CStartScreen_CIJumpList
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CIJumpListVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Items(This,value) )
    ( (This)->lpVtbl->get_SystemGroupKind(This,value) )
    ( (This)->lpVtbl->put_SystemGroupKind(This,value) )
    ( (This)->lpVtbl->SaveAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIJumpList;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IJumpListItem[] = L"Windows.UI.StartScreen.IJumpListItem";
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
                           __RPC__out __x_ABI_CWindows_CUI_CStartScreen_CJumpListItemKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Arguments )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemovedByUser )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GroupName )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_GroupName )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemVtbl;
interface __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->get_Arguments(This,value) )
    ( (This)->lpVtbl->get_RemovedByUser(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->put_DisplayName(This,value) )
    ( (This)->lpVtbl->get_GroupName(This,value) )
    ( (This)->lpVtbl->put_GroupName(This,value) )
    ( (This)->lpVtbl->get_Logo(This,value) )
    ( (This)->lpVtbl->put_Logo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IJumpListItemStatics[] = L"Windows.UI.StartScreen.IJumpListItemStatics";
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithArguments )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics * This,
                  __RPC__in HSTRING arguments,
                  __RPC__in HSTRING displayName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSeparator )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItem * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStaticsVtbl;
interface __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithArguments(This,arguments,displayName,result) )
    ( (This)->lpVtbl->CreateSeparator(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIJumpListItemStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IJumpListStatics[] = L"Windows.UI.StartScreen.IJumpListStatics";
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *LoadCurrentAsync )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CStartScreen__CJumpList * * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics * This,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStaticsVtbl;
interface __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CIJumpListStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->LoadCurrentAsync(This,result) )
    ( (This)->lpVtbl->IsSupported(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIJumpListStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTile[] = L"Windows.UI.StartScreen.ISecondaryTile";
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_TileId )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TileId )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Arguments )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Arguments )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("ShortName may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayName.")
                               HRESULT ( STDMETHODCALLTYPE *put_ShortName )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                  __RPC__in HSTRING value
        );
    DEPRECATED("ShortName may be altered or unavailable for releases after Windows 8.1. Instead, use DisplayName.")
                               HRESULT ( STDMETHODCALLTYPE *get_ShortName )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("Logo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square150x150Logo.")
                               HRESULT ( STDMETHODCALLTYPE *put_Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    DEPRECATED("Logo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square150x150Logo.")
                               HRESULT ( STDMETHODCALLTYPE *get_Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    DEPRECATED("SmallLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square30x30Logo.")
                               HRESULT ( STDMETHODCALLTYPE *put_SmallLogo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    DEPRECATED("SmallLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square30x30Logo.")
                               HRESULT ( STDMETHODCALLTYPE *get_SmallLogo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    DEPRECATED("WideLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Wide310x150Logo.")
                               HRESULT ( STDMETHODCALLTYPE *put_WideLogo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    DEPRECATED("WideLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Wide310x150Logo.")
                               HRESULT ( STDMETHODCALLTYPE *get_WideLogo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LockScreenBadgeLogo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LockScreenBadgeLogo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LockScreenDisplayBadgeAndTileText )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LockScreenDisplayBadgeAndTileText )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("TileOptions may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ShowNameOnSquare150x150Logo, VisualElements.ShowNameOnWide310x150Logo, and RoamingEnabled.")
                               HRESULT ( STDMETHODCALLTYPE *put_TileOptions )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                  __x_ABI_CWindows_CUI_CStartScreen_CTileOptions value
        );
    DEPRECATED("TileOptions may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ShowNameOnSquare150x150Logo, VisualElements.ShowNameOnWide310x150Logo, and RoamingEnabled.")
                               HRESULT ( STDMETHODCALLTYPE *get_TileOptions )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                           __RPC__out __x_ABI_CWindows_CUI_CStartScreen_CTileOptions * value
        );
    DEPRECATED("TileOptions may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ShowNameOnSquare150x150Logo, VisualElements.ShowNameOnWide310x150Logo, and RoamingEnabled.")
                               HRESULT ( STDMETHODCALLTYPE *put_ForegroundText )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                  __x_ABI_CWindows_CUI_CStartScreen_CForegroundText value
        );
    DEPRECATED("ForegroundText may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ForegroundText.")
                               HRESULT ( STDMETHODCALLTYPE *get_ForegroundText )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                           __RPC__out __x_ABI_CWindows_CUI_CStartScreen_CForegroundText * value
        );
    DEPRECATED("BackgroundColor may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.BackgroundColor.")
                               HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
    DEPRECATED("BackgroundColor may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.BackgroundColor.")
                               HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestCreateAsync )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestCreateAsyncWithPoint )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                  __x_ABI_CWindows_CFoundation_CPoint invocationPoint,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestCreateAsyncWithRect )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestCreateAsyncWithRectAndPlacement )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestDeleteAsync )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestDeleteAsyncWithPoint )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                  __x_ABI_CWindows_CFoundation_CPoint invocationPoint,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestDeleteAsyncWithRect )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestDeleteAsyncWithRectAndPlacement )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateAsync )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVtbl;
interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_TileId(This,value) )
    ( (This)->lpVtbl->get_TileId(This,value) )
    ( (This)->lpVtbl->put_Arguments(This,value) )
    ( (This)->lpVtbl->get_Arguments(This,value) )
DEPRECATED("ShortName may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayName.")
    ( (This)->lpVtbl->put_ShortName(This,value) )
DEPRECATED("ShortName may be altered or unavailable for releases after Windows 8.1. Instead, use DisplayName.")
    ( (This)->lpVtbl->get_ShortName(This,value) )
    ( (This)->lpVtbl->put_DisplayName(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
DEPRECATED("Logo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square150x150Logo.")
    ( (This)->lpVtbl->put_Logo(This,value) )
DEPRECATED("Logo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square150x150Logo.")
    ( (This)->lpVtbl->get_Logo(This,value) )
DEPRECATED("SmallLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square30x30Logo.")
    ( (This)->lpVtbl->put_SmallLogo(This,value) )
DEPRECATED("SmallLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square30x30Logo.")
    ( (This)->lpVtbl->get_SmallLogo(This,value) )
DEPRECATED("WideLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Wide310x150Logo.")
    ( (This)->lpVtbl->put_WideLogo(This,value) )
DEPRECATED("WideLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Wide310x150Logo.")
    ( (This)->lpVtbl->get_WideLogo(This,value) )
    ( (This)->lpVtbl->put_LockScreenBadgeLogo(This,value) )
    ( (This)->lpVtbl->get_LockScreenBadgeLogo(This,value) )
    ( (This)->lpVtbl->put_LockScreenDisplayBadgeAndTileText(This,value) )
    ( (This)->lpVtbl->get_LockScreenDisplayBadgeAndTileText(This,value) )
DEPRECATED("TileOptions may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ShowNameOnSquare150x150Logo, VisualElements.ShowNameOnWide310x150Logo, and RoamingEnabled.")
    ( (This)->lpVtbl->put_TileOptions(This,value) )
DEPRECATED("TileOptions may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ShowNameOnSquare150x150Logo, VisualElements.ShowNameOnWide310x150Logo, and RoamingEnabled.")
    ( (This)->lpVtbl->get_TileOptions(This,value) )
DEPRECATED("TileOptions may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ShowNameOnSquare150x150Logo, VisualElements.ShowNameOnWide310x150Logo, and RoamingEnabled.")
    ( (This)->lpVtbl->put_ForegroundText(This,value) )
DEPRECATED("ForegroundText may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ForegroundText.")
    ( (This)->lpVtbl->get_ForegroundText(This,value) )
DEPRECATED("BackgroundColor may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.BackgroundColor.")
    ( (This)->lpVtbl->put_BackgroundColor(This,value) )
DEPRECATED("BackgroundColor may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.BackgroundColor.")
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )
    ( (This)->lpVtbl->RequestCreateAsync(This,operation) )
    ( (This)->lpVtbl->RequestCreateAsyncWithPoint(This,invocationPoint,operation) )
    ( (This)->lpVtbl->RequestCreateAsyncWithRect(This,selection,operation) )
    ( (This)->lpVtbl->RequestCreateAsyncWithRectAndPlacement(This,selection,preferredPlacement,operation) )
    ( (This)->lpVtbl->RequestDeleteAsync(This,operation) )
    ( (This)->lpVtbl->RequestDeleteAsyncWithPoint(This,invocationPoint,operation) )
    ( (This)->lpVtbl->RequestDeleteAsyncWithRect(This,selection,operation) )
    ( (This)->lpVtbl->RequestDeleteAsyncWithRectAndPlacement(This,selection,preferredPlacement,operation) )
    ( (This)->lpVtbl->UpdateAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTile2[] = L"Windows.UI.StartScreen.ISecondaryTile2";
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_PhoneticName )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhoneticName )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VisualElements )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RoamingEnabled )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RoamingEnabled )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_VisualElementsRequested )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CStartScreen__CSecondaryTile_Windows__CUI__CStartScreen__CVisualElementsRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_VisualElementsRequested )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2Vtbl;
interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_PhoneticName(This,value) )
    ( (This)->lpVtbl->get_PhoneticName(This,value) )
    ( (This)->lpVtbl->get_VisualElements(This,value) )
    ( (This)->lpVtbl->put_RoamingEnabled(This,value) )
    ( (This)->lpVtbl->get_RoamingEnabled(This,value) )
    ( (This)->lpVtbl->add_VisualElementsRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_VisualElementsRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTileFactory[] = L"Windows.UI.StartScreen.ISecondaryTileFactory";
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("SecondaryTile(string, string, string, string, Windows.UI.StartScreen.TileOptions, Windows.Foundation.Uri) may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile(string, string, string, Windows.Foundation.Uri, Windows.UI.StartScreen.TileSize).")
                      HRESULT ( STDMETHODCALLTYPE *CreateTile )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory * This,
                  __RPC__in HSTRING tileId,
                  __RPC__in HSTRING shortName,
                  __RPC__in HSTRING displayName,
                  __RPC__in HSTRING arguments,
                  __x_ABI_CWindows_CUI_CStartScreen_CTileOptions tileOptions,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * logoReference,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * * value
        );
    DEPRECATED("SecondaryTile(string, string, string, string, Windows.UI.StartScreen.TileOptions, Windows.Foundation.Uri, Windows.Foundation.Uri) may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile(string, string, string, Windows.Foundation.Uri, Windows.UI.StartScreen.TileSize).")
                      HRESULT ( STDMETHODCALLTYPE *CreateWideTile )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory * This,
                  __RPC__in HSTRING tileId,
                  __RPC__in HSTRING shortName,
                  __RPC__in HSTRING displayName,
                  __RPC__in HSTRING arguments,
                  __x_ABI_CWindows_CUI_CStartScreen_CTileOptions tileOptions,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * logoReference,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * wideLogoReference,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithId )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory * This,
                  __RPC__in HSTRING tileId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactoryVtbl;
interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("SecondaryTile(string, string, string, string, Windows.UI.StartScreen.TileOptions, Windows.Foundation.Uri) may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile(string, string, string, Windows.Foundation.Uri, Windows.UI.StartScreen.TileSize).")
    ( (This)->lpVtbl->CreateTile(This,tileId,shortName,displayName,arguments,tileOptions,logoReference,value) )
DEPRECATED("SecondaryTile(string, string, string, string, Windows.UI.StartScreen.TileOptions, Windows.Foundation.Uri, Windows.Foundation.Uri) may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile(string, string, string, Windows.Foundation.Uri, Windows.UI.StartScreen.TileSize).")
    ( (This)->lpVtbl->CreateWideTile(This,tileId,shortName,displayName,arguments,tileOptions,logoReference,wideLogoReference,value) )
    ( (This)->lpVtbl->CreateWithId(This,tileId,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTileFactory2[] = L"Windows.UI.StartScreen.ISecondaryTileFactory2";
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMinimalTile )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2 * This,
                  __RPC__in HSTRING tileId,
                  __RPC__in HSTRING displayName,
                  __RPC__in HSTRING arguments,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * square150x150Logo,
                  __x_ABI_CWindows_CUI_CStartScreen_CTileSize desiredSize,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2Vtbl;
interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateMinimalTile(This,tileId,displayName,arguments,square150x150Logo,desiredSize,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileFactory2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTileStatics[] = L"Windows.UI.StartScreen.ISecondaryTileStatics";
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Exists )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics * This,
                  __RPC__in HSTRING tileId,
                           __RPC__out boolean * exists
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAllAsync )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAllForApplicationAsync )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics * This,
                  __RPC__in HSTRING applicationId,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FindAllForPackageAsync )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTile * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStaticsVtbl;
interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Exists(This,tileId,exists) )
    ( (This)->lpVtbl->FindAllAsync(This,operation) )
    ( (This)->lpVtbl->FindAllForApplicationAsync(This,applicationId,operation) )
    ( (This)->lpVtbl->FindAllForPackageAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTileVisualElements[] = L"Windows.UI.StartScreen.ISecondaryTileVisualElements";
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElementsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("SecondaryTileVisualElements.Square30x30Logo may be altered or unavailable for release after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *put_Square30x30Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    DEPRECATED("SecondaryTileVisualElements.Square30x30Logo may be altered or unavailable for release after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_Square30x30Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    DEPRECATED("SecondaryTileVisualElements.Square70x70Logo may be altered or unavailable for release after Windows Phone 8.1.")
                               HRESULT ( STDMETHODCALLTYPE *put_Square70x70Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    DEPRECATED("SecondaryTileVisualElements.Square70x70Logo may be altered or unavailable for release after Windows Phone 8.1.")
                               HRESULT ( STDMETHODCALLTYPE *get_Square70x70Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Square150x150Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Square150x150Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Wide310x150Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Wide310x150Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Square310x310Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Square310x310Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ForegroundText )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
                  __x_ABI_CWindows_CUI_CStartScreen_CForegroundText value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ForegroundText )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
                           __RPC__out __x_ABI_CWindows_CUI_CStartScreen_CForegroundText * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ShowNameOnSquare150x150Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShowNameOnSquare150x150Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ShowNameOnWide310x150Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShowNameOnWide310x150Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ShowNameOnSquare310x310Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShowNameOnSquare310x310Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElementsVtbl;
interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElementsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("SecondaryTileVisualElements.Square30x30Logo may be altered or unavailable for release after Windows 10.")
    ( (This)->lpVtbl->put_Square30x30Logo(This,value) )
DEPRECATED("SecondaryTileVisualElements.Square30x30Logo may be altered or unavailable for release after Windows 10.")
    ( (This)->lpVtbl->get_Square30x30Logo(This,value) )
DEPRECATED("SecondaryTileVisualElements.Square70x70Logo may be altered or unavailable for release after Windows Phone 8.1.")
    ( (This)->lpVtbl->put_Square70x70Logo(This,value) )
DEPRECATED("SecondaryTileVisualElements.Square70x70Logo may be altered or unavailable for release after Windows Phone 8.1.")
    ( (This)->lpVtbl->get_Square70x70Logo(This,value) )
    ( (This)->lpVtbl->put_Square150x150Logo(This,value) )
    ( (This)->lpVtbl->get_Square150x150Logo(This,value) )
    ( (This)->lpVtbl->put_Wide310x150Logo(This,value) )
    ( (This)->lpVtbl->get_Wide310x150Logo(This,value) )
    ( (This)->lpVtbl->put_Square310x310Logo(This,value) )
    ( (This)->lpVtbl->get_Square310x310Logo(This,value) )
    ( (This)->lpVtbl->put_ForegroundText(This,value) )
    ( (This)->lpVtbl->get_ForegroundText(This,value) )
    ( (This)->lpVtbl->put_BackgroundColor(This,value) )
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )
    ( (This)->lpVtbl->put_ShowNameOnSquare150x150Logo(This,value) )
    ( (This)->lpVtbl->get_ShowNameOnSquare150x150Logo(This,value) )
    ( (This)->lpVtbl->put_ShowNameOnWide310x150Logo(This,value) )
    ( (This)->lpVtbl->get_ShowNameOnWide310x150Logo(This,value) )
    ( (This)->lpVtbl->put_ShowNameOnSquare310x310Logo(This,value) )
    ( (This)->lpVtbl->get_ShowNameOnSquare310x310Logo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTileVisualElements2[] = L"Windows.UI.StartScreen.ISecondaryTileVisualElements2";
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Square71x71Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Square71x71Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2Vtbl;
interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Square71x71Logo(This,value) )
    ( (This)->lpVtbl->get_Square71x71Logo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTileVisualElements3[] = L"Windows.UI.StartScreen.ISecondaryTileVisualElements3";
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Square44x44Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Square44x44Logo )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3Vtbl;
interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Square44x44Logo(This,value) )
    ( (This)->lpVtbl->get_Square44x44Logo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ISecondaryTileVisualElements4[] = L"Windows.UI.StartScreen.ISecondaryTileVisualElements4";
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MixedRealityModel )(
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4Vtbl;
interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MixedRealityModel(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IStartScreenManager[] = L"Windows.UI.StartScreen.IStartScreenManager";
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SupportsAppListEntry )(
        __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * appListEntry,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *ContainsAppListEntryAsync )(
        __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * appListEntry,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAddAppListEntryAsync )(
        __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * appListEntry,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerVtbl;
interface __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_User(This,value) )
    ( (This)->lpVtbl->SupportsAppListEntry(This,appListEntry,result) )
    ( (This)->lpVtbl->ContainsAppListEntryAsync(This,appListEntry,operation) )
    ( (This)->lpVtbl->RequestAddAppListEntryAsync(This,appListEntry,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IStartScreenManager2[] = L"Windows.UI.StartScreen.IStartScreenManager2";
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ContainsSecondaryTileAsync )(
        __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager2 * This,
                  __RPC__in HSTRING tileId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryRemoveSecondaryTileAsync )(
        __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager2 * This,
                  __RPC__in HSTRING tileId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager2Vtbl;
interface __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ContainsSecondaryTileAsync(This,tileId,operation) )
    ( (This)->lpVtbl->TryRemoveSecondaryTileAsync(This,tileId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IStartScreenManagerStatics[] = L"Windows.UI.StartScreen.IStartScreenManagerStatics";
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManager * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,value) )
    ( (This)->lpVtbl->GetForUser(This,user,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIStartScreenManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ITileMixedRealityModel[] = L"Windows.UI.StartScreen.ITileMixedRealityModel";
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Uri )(
        __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BoundingBox )(
        __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel * This,
                  __RPC__in_opt __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BoundingBox )(
        __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModelVtbl;
interface __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModelVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Uri(This,value) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->put_BoundingBox(This,value) )
    ( (This)->lpVtbl->get_BoundingBox(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_ITileMixedRealityModel2[] = L"Windows.UI.StartScreen.ITileMixedRealityModel2";
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ActivationBehavior )(
        __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel2 * This,
                  __x_ABI_CWindows_CUI_CStartScreen_CTileMixedRealityModelActivationBehavior value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActivationBehavior )(
        __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CStartScreen_CTileMixedRealityModelActivationBehavior * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel2Vtbl;
interface __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ActivationBehavior(This,value) )
    ( (This)->lpVtbl->get_ActivationBehavior(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CITileMixedRealityModel2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IVisualElementsRequest[] = L"Windows.UI.StartScreen.IVisualElementsRequest";
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_VisualElements )(
        __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTileVisualElements * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlternateVisualElements )(
        __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CStartScreen__CSecondaryTileVisualElements * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
        __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral * * deferral
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestVtbl;
interface __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_VisualElements(This,value) )
    ( (This)->lpVtbl->get_AlternateVisualElements(This,value) )
    ( (This)->lpVtbl->get_Deadline(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,deferral) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IVisualElementsRequestDeferral[] = L"Windows.UI.StartScreen.IVisualElementsRequestDeferral";
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferralVtbl;
interface __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_StartScreen_IVisualElementsRequestedEventArgs[] = L"Windows.UI.StartScreen.IVisualElementsRequestedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequest * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CStartScreen_CIVisualElementsRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_JumpList[] = L"Windows.UI.StartScreen.JumpList";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_JumpListItem[] = L"Windows.UI.StartScreen.JumpListItem";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_SecondaryTile[] = L"Windows.UI.StartScreen.SecondaryTile";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_SecondaryTileVisualElements[] = L"Windows.UI.StartScreen.SecondaryTileVisualElements";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_StartScreenManager[] = L"Windows.UI.StartScreen.StartScreenManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_TileMixedRealityModel[] = L"Windows.UI.StartScreen.TileMixedRealityModel";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_VisualElementsRequest[] = L"Windows.UI.StartScreen.VisualElementsRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_VisualElementsRequestDeferral[] = L"Windows.UI.StartScreen.VisualElementsRequestDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_StartScreen_VisualElementsRequestedEventArgs[] = L"Windows.UI.StartScreen.VisualElementsRequestedEventArgs";
       
       
#pragma clang diagnostic pop
