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
typedef interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost;
typedef interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge;
typedef interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo;
typedef interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral;
typedef interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs;
typedef interface __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge;
typedef struct __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadgeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadgeVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadgeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge;
typedef struct __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadgeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadgeVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadgeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadgeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
                       __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadgeVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadgeVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIReference_1_UINT32 __FIReference_1_UINT32;
EXTERN_C const IID IID___FIReference_1_UINT32;
typedef struct __FIReference_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_UINT32 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_UINT32 * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_UINT32 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_UINT32 * This, __RPC__out unsigned int *value);
    END_INTERFACE
} __FIReference_1_UINT32Vtbl;
interface __FIReference_1_UINT32
{
    CONST_VTBL struct __FIReference_1_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
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
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_LockScreen_ILockApplicationHost[] = L"Windows.ApplicationModel.LockScreen.ILockApplicationHost";
typedef struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestUnlock )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Unlocking )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockApplicationHost_Windows__CApplicationModel__CLockScreen__CLockScreenUnlockingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Unlocking )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostVtbl;
interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestUnlock(This) )
    ( (This)->lpVtbl->add_Unlocking(This,handler,token) )
    ( (This)->lpVtbl->remove_Unlocking(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_LockScreen_ILockApplicationHostStatics[] = L"Windows.ApplicationModel.LockScreen.ILockApplicationHostStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHost * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CLockScreen_CILockApplicationHostStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_LockScreen_ILockScreenBadge[] = L"Windows.ApplicationModel.LockScreen.ILockScreenBadge";
typedef struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadgeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Logo )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Glyph )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Number )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutomationName )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *LaunchApp )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadgeVtbl;
interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadgeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Logo(This,value) )
    ( (This)->lpVtbl->get_Glyph(This,value) )
    ( (This)->lpVtbl->get_Number(This,value) )
    ( (This)->lpVtbl->get_AutomationName(This,value) )
    ( (This)->lpVtbl->LaunchApp(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenBadge;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_LockScreen_ILockScreenInfo[] = L"Windows.ApplicationModel.LockScreen.ILockScreenInfo";
typedef struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_LockScreenImageChanged )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LockScreenImageChanged )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LockScreenImage )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_BadgesChanged )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BadgesChanged )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Badges )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CLockScreen__CLockScreenBadge * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DetailTextChanged )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DetailTextChanged )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DetailText )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AlarmIconChanged )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CLockScreen__CLockScreenInfo_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AlarmIconChanged )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlarmIcon )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfoVtbl;
interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_LockScreenImageChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_LockScreenImageChanged(This,token) )
    ( (This)->lpVtbl->get_LockScreenImage(This,value) )
    ( (This)->lpVtbl->add_BadgesChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_BadgesChanged(This,token) )
    ( (This)->lpVtbl->get_Badges(This,value) )
    ( (This)->lpVtbl->add_DetailTextChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_DetailTextChanged(This,token) )
    ( (This)->lpVtbl->get_DetailText(This,value) )
    ( (This)->lpVtbl->add_AlarmIconChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_AlarmIconChanged(This,token) )
    ( (This)->lpVtbl->get_AlarmIcon(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_LockScreen_ILockScreenUnlockingDeferral[] = L"Windows.ApplicationModel.LockScreen.ILockScreenUnlockingDeferral";
typedef struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferralVtbl;
interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_LockScreen_ILockScreenUnlockingEventArgs[] = L"Windows.ApplicationModel.LockScreen.ILockScreenUnlockingEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingDeferral * * deferral
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
        __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeferral(This,deferral) )
    ( (This)->lpVtbl->get_Deadline(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CLockScreen_CILockScreenUnlockingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_LockScreen_LockApplicationHost[] = L"Windows.ApplicationModel.LockScreen.LockApplicationHost";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_LockScreen_LockScreenBadge[] = L"Windows.ApplicationModel.LockScreen.LockScreenBadge";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_LockScreen_LockScreenInfo[] = L"Windows.ApplicationModel.LockScreen.LockScreenInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_LockScreen_LockScreenUnlockingDeferral[] = L"Windows.ApplicationModel.LockScreen.LockScreenUnlockingDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_LockScreen_LockScreenUnlockingEventArgs[] = L"Windows.ApplicationModel.LockScreen.LockScreenUnlockingEventArgs";
       
       
#pragma clang diagnostic pop
