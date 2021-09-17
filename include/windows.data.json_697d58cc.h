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
typedef interface __x_ABI_CWindows_CData_CJson_CIJsonArray __x_ABI_CWindows_CData_CJson_CIJsonArray;
typedef interface __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics;
typedef interface __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2 __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2;
typedef interface __x_ABI_CWindows_CData_CJson_CIJsonObject __x_ABI_CWindows_CData_CJson_CIJsonObject;
typedef interface __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics;
typedef interface __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues;
typedef interface __x_ABI_CWindows_CData_CJson_CIJsonValue __x_ABI_CWindows_CData_CJson_CIJsonValue;
typedef interface __x_ABI_CWindows_CData_CJson_CIJsonValueStatics __x_ABI_CWindows_CData_CJson_CIJsonValueStatics;
typedef interface __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2 __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2;
typedef interface __FIIterator_1_Windows__CData__CJson__CIJsonValue __FIIterator_1_Windows__CData__CJson__CIJsonValue;
EXTERN_C const IID IID___FIIterator_1_Windows__CData__CJson__CIJsonValue;
typedef struct __FIIterator_1_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CData__CJson__CIJsonValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CData__CJson__CIJsonValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CData__CJson__CIJsonValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CData__CJson__CIJsonValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CData__CJson__CIJsonValue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CData__CJson__CIJsonValue * This, __RPC__out __x_ABI_CWindows_CData_CJson_CIJsonValue * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CData__CJson__CIJsonValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CData__CJson__CIJsonValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CData__CJson__CIJsonValue * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CData_CJson_CIJsonValue * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CData__CJson__CIJsonValueVtbl;
interface __FIIterator_1_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIIterator_1_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CData__CJson__CIJsonValue __FIIterable_1_Windows__CData__CJson__CIJsonValue;
EXTERN_C const IID IID___FIIterable_1_Windows__CData__CJson__CIJsonValue;
typedef struct __FIIterable_1_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CData__CJson__CIJsonValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CData__CJson__CIJsonValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CData__CJson__CIJsonValue * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CData__CJson__CIJsonValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CData__CJson__CIJsonValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CData__CJson__CIJsonValue * This, __RPC__deref_out_opt __FIIterator_1_Windows__CData__CJson__CIJsonValue **first);
    END_INTERFACE
} __FIIterable_1_Windows__CData__CJson__CIJsonValueVtbl;
interface __FIIterable_1_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIIterable_1_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue;
typedef struct __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl;
interface __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
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
typedef interface __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue;
EXTERN_C const IID IID___FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue;
typedef struct __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                   HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                   HSTRING key,
                   __RPC__in_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    END_INTERFACE
} __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl;
interface __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CData__CJson__CIJsonValue __FIVectorView_1_Windows__CData__CJson__CIJsonValue;
EXTERN_C const IID IID___FIVectorView_1_Windows__CData__CJson__CIJsonValue;
typedef struct __FIVectorView_1_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CData__CJson__CIJsonValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CData__CJson__CIJsonValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CData__CJson__CIJsonValue * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CData__CJson__CIJsonValue * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CData__CJson__CIJsonValue * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CData__CJson__CIJsonValue * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CData_CJson_CIJsonValue * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CData__CJson__CIJsonValue * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CData__CJson__CIJsonValue * This,
                       __x_ABI_CWindows_CData_CJson_CIJsonValue * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CData__CJson__CIJsonValue * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CData_CJson_CIJsonValue * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CData__CJson__CIJsonValueVtbl;
interface __FIVectorView_1_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIVectorView_1_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CData__CJson__CIJsonValue __FIVector_1_Windows__CData__CJson__CIJsonValue;
EXTERN_C const IID IID___FIVector_1_Windows__CData__CJson__CIJsonValue;
typedef struct __FIVector_1_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This, __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CData__CJson__CIJsonValue **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This,
                   __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValue * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValue * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This, __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CData_CJson_CIJsonValue * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CData_CJson_CIJsonValue * *value);
    END_INTERFACE
} __FIVector_1_Windows__CData__CJson__CIJsonValueVtbl;
interface __FIVector_1_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIVector_1_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIStringable __x_ABI_CWindows_CFoundation_CIStringable;
typedef enum __x_ABI_CWindows_CData_CJson_CJsonErrorStatus __x_ABI_CWindows_CData_CJson_CJsonErrorStatus;
typedef enum __x_ABI_CWindows_CData_CJson_CJsonValueType __x_ABI_CWindows_CData_CJson_CJsonValueType;
enum __x_ABI_CWindows_CData_CJson_CJsonErrorStatus
{
    JsonErrorStatus_Unknown = 0,
    JsonErrorStatus_InvalidJsonString = 1,
    JsonErrorStatus_InvalidJsonNumber = 2,
    JsonErrorStatus_JsonValueNotFound = 3,
    JsonErrorStatus_ImplementationLimit = 4,
};
enum __x_ABI_CWindows_CData_CJson_CJsonValueType
{
    JsonValueType_Null = 0,
    JsonValueType_Boolean = 1,
    JsonValueType_Number = 2,
    JsonValueType_String = 3,
    JsonValueType_Array = 4,
    JsonValueType_Object = 5,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonArray[] = L"Windows.Data.Json.IJsonArray";
typedef struct __x_ABI_CWindows_CData_CJson_CIJsonArrayVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArray * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArray * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArray * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArray * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArray * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArray * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetObjectAt )(
        __x_ABI_CWindows_CData_CJson_CIJsonArray * This,
                  UINT32 index,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonObject * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetArrayAt )(
        __x_ABI_CWindows_CData_CJson_CIJsonArray * This,
                  UINT32 index,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonArray * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetStringAt )(
        __x_ABI_CWindows_CData_CJson_CIJsonArray * This,
                  UINT32 index,
                           __RPC__deref_out_opt HSTRING * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumberAt )(
        __x_ABI_CWindows_CData_CJson_CIJsonArray * This,
                  UINT32 index,
                           __RPC__out DOUBLE * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetBooleanAt )(
        __x_ABI_CWindows_CData_CJson_CIJsonArray * This,
                  UINT32 index,
                           __RPC__out boolean * returnValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CJson_CIJsonArrayVtbl;
interface __x_ABI_CWindows_CData_CJson_CIJsonArray
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CJson_CIJsonArrayVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetObjectAt(This,index,returnValue) )
    ( (This)->lpVtbl->GetArrayAt(This,index,returnValue) )
    ( (This)->lpVtbl->GetStringAt(This,index,returnValue) )
    ( (This)->lpVtbl->GetNumberAt(This,index,returnValue) )
    ( (This)->lpVtbl->GetBooleanAt(This,index,returnValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonArray;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonArrayStatics[] = L"Windows.Data.Json.IJsonArrayStatics";
typedef struct __x_ABI_CWindows_CData_CJson_CIJsonArrayStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonArray * * jsonArray
        );
    HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics * This,
                  __RPC__in HSTRING input,
                   __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonArray * * result,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CJson_CIJsonArrayStaticsVtbl;
interface __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CJson_CIJsonArrayStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Parse(This,input,jsonArray) )
    ( (This)->lpVtbl->TryParse(This,input,result,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonArrayStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonErrorStatics2[] = L"Windows.Data.Json.IJsonErrorStatics2";
typedef struct __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetJsonStatus )(
        __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2 * This,
                  INT32 hresult,
                           __RPC__out __x_ABI_CWindows_CData_CJson_CJsonErrorStatus * status
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2Vtbl;
interface __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetJsonStatus(This,hresult,status) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonObject[] = L"Windows.Data.Json.IJsonObject";
typedef struct __x_ABI_CWindows_CData_CJson_CIJsonObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObject * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObject * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObject * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObject * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObject * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObject * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetNamedValue )(
        __x_ABI_CWindows_CData_CJson_CIJsonObject * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *SetNamedValue )(
        __x_ABI_CWindows_CData_CJson_CIJsonObject * This,
                  __RPC__in HSTRING name,
                  __RPC__in_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNamedObject )(
        __x_ABI_CWindows_CData_CJson_CIJsonObject * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonObject * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetNamedArray )(
        __x_ABI_CWindows_CData_CJson_CIJsonObject * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonArray * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetNamedString )(
        __x_ABI_CWindows_CData_CJson_CIJsonObject * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt HSTRING * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetNamedNumber )(
        __x_ABI_CWindows_CData_CJson_CIJsonObject * This,
                  __RPC__in HSTRING name,
                           __RPC__out DOUBLE * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetNamedBoolean )(
        __x_ABI_CWindows_CData_CJson_CIJsonObject * This,
                  __RPC__in HSTRING name,
                           __RPC__out boolean * returnValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CJson_CIJsonObjectVtbl;
interface __x_ABI_CWindows_CData_CJson_CIJsonObject
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CJson_CIJsonObjectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetNamedValue(This,name,returnValue) )
    ( (This)->lpVtbl->SetNamedValue(This,name,value) )
    ( (This)->lpVtbl->GetNamedObject(This,name,returnValue) )
    ( (This)->lpVtbl->GetNamedArray(This,name,returnValue) )
    ( (This)->lpVtbl->GetNamedString(This,name,returnValue) )
    ( (This)->lpVtbl->GetNamedNumber(This,name,returnValue) )
    ( (This)->lpVtbl->GetNamedBoolean(This,name,returnValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonObject;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonObjectStatics[] = L"Windows.Data.Json.IJsonObjectStatics";
typedef struct __x_ABI_CWindows_CData_CJson_CIJsonObjectStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonObject * * jsonObject
        );
    HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics * This,
                  __RPC__in HSTRING input,
                   __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonObject * * result,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CJson_CIJsonObjectStaticsVtbl;
interface __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CJson_CIJsonObjectStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Parse(This,input,jsonObject) )
    ( (This)->lpVtbl->TryParse(This,input,result,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonObjectStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonObjectWithDefaultValues[] = L"Windows.Data.Json.IJsonObjectWithDefaultValues";
typedef struct __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValuesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetNamedValueOrDefault )(
        __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This,
                  __RPC__in HSTRING name,
                  __RPC__in_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * defaultValue,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * * returnValue
        );
                    HRESULT ( STDMETHODCALLTYPE *GetNamedObjectOrDefault )(
        __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This,
                  __RPC__in HSTRING name,
                  __RPC__in_opt __x_ABI_CWindows_CData_CJson_CIJsonObject * defaultValue,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonObject * * returnValue
        );
                    HRESULT ( STDMETHODCALLTYPE *GetNamedStringOrDefault )(
        __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING defaultValue,
                           __RPC__deref_out_opt HSTRING * returnValue
        );
                    HRESULT ( STDMETHODCALLTYPE *GetNamedArrayOrDefault )(
        __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This,
                  __RPC__in HSTRING name,
                  __RPC__in_opt __x_ABI_CWindows_CData_CJson_CIJsonArray * defaultValue,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonArray * * returnValue
        );
                    HRESULT ( STDMETHODCALLTYPE *GetNamedNumberOrDefault )(
        __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This,
                  __RPC__in HSTRING name,
                  DOUBLE defaultValue,
                           __RPC__out DOUBLE * returnValue
        );
                    HRESULT ( STDMETHODCALLTYPE *GetNamedBooleanOrDefault )(
        __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This,
                  __RPC__in HSTRING name,
                  boolean defaultValue,
                           __RPC__out boolean * returnValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValuesVtbl;
interface __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValuesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetNamedValueOrDefault(This,name,defaultValue,returnValue) )
    ( (This)->lpVtbl->GetNamedObjectOrDefault(This,name,defaultValue,returnValue) )
    ( (This)->lpVtbl->GetNamedStringOrDefault(This,name,defaultValue,returnValue) )
    ( (This)->lpVtbl->GetNamedArrayOrDefault(This,name,defaultValue,returnValue) )
    ( (This)->lpVtbl->GetNamedNumberOrDefault(This,name,defaultValue,returnValue) )
    ( (This)->lpVtbl->GetNamedBooleanOrDefault(This,name,defaultValue,returnValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonValue[] = L"Windows.Data.Json.IJsonValue";
typedef struct __x_ABI_CWindows_CData_CJson_CIJsonValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ValueType )(
        __x_ABI_CWindows_CData_CJson_CIJsonValue * This,
                           __RPC__out __x_ABI_CWindows_CData_CJson_CJsonValueType * value
        );
    HRESULT ( STDMETHODCALLTYPE *Stringify )(
        __x_ABI_CWindows_CData_CJson_CIJsonValue * This,
                           __RPC__deref_out_opt HSTRING * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetString )(
        __x_ABI_CWindows_CData_CJson_CIJsonValue * This,
                           __RPC__deref_out_opt HSTRING * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumber )(
        __x_ABI_CWindows_CData_CJson_CIJsonValue * This,
                           __RPC__out DOUBLE * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetBoolean )(
        __x_ABI_CWindows_CData_CJson_CIJsonValue * This,
                           __RPC__out boolean * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetArray )(
        __x_ABI_CWindows_CData_CJson_CIJsonValue * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonArray * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetObject )(
        __x_ABI_CWindows_CData_CJson_CIJsonValue * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonObject * * returnValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CJson_CIJsonValueVtbl;
interface __x_ABI_CWindows_CData_CJson_CIJsonValue
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CJson_CIJsonValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ValueType(This,value) )
    ( (This)->lpVtbl->Stringify(This,returnValue) )
    ( (This)->lpVtbl->GetString(This,returnValue) )
    ( (This)->lpVtbl->GetNumber(This,returnValue) )
    ( (This)->lpVtbl->GetBoolean(This,returnValue) )
    ( (This)->lpVtbl->GetArray(This,returnValue) )
    ( (This)->lpVtbl->GetObject(This,returnValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonValueStatics[] = L"Windows.Data.Json.IJsonValueStatics";
typedef struct __x_ABI_CWindows_CData_CJson_CIJsonValueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CData_CJson_CIJsonValueStatics * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * * jsonValue
        );
    HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CData_CJson_CIJsonValueStatics * This,
                  __RPC__in HSTRING input,
                   __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * * result,
                           __RPC__out boolean * succeeded
        );
    HRESULT ( STDMETHODCALLTYPE *CreateBooleanValue )(
        __x_ABI_CWindows_CData_CJson_CIJsonValueStatics * This,
                  boolean input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * * jsonValue
        );
    HRESULT ( STDMETHODCALLTYPE *CreateNumberValue )(
        __x_ABI_CWindows_CData_CJson_CIJsonValueStatics * This,
                  DOUBLE input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * * jsonValue
        );
    HRESULT ( STDMETHODCALLTYPE *CreateStringValue )(
        __x_ABI_CWindows_CData_CJson_CIJsonValueStatics * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * * jsonValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CJson_CIJsonValueStaticsVtbl;
interface __x_ABI_CWindows_CData_CJson_CIJsonValueStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CJson_CIJsonValueStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Parse(This,input,jsonValue) )
    ( (This)->lpVtbl->TryParse(This,input,result,succeeded) )
    ( (This)->lpVtbl->CreateBooleanValue(This,input,jsonValue) )
    ( (This)->lpVtbl->CreateNumberValue(This,input,jsonValue) )
    ( (This)->lpVtbl->CreateStringValue(This,input,jsonValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonValueStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonValueStatics2[] = L"Windows.Data.Json.IJsonValueStatics2";
typedef struct __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateNullValue )(
        __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * * jsonValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2Vtbl;
interface __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateNullValue(This,jsonValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonValueStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Json_JsonArray[] = L"Windows.Data.Json.JsonArray";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Json_JsonError[] = L"Windows.Data.Json.JsonError";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Json_JsonObject[] = L"Windows.Data.Json.JsonObject";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Json_JsonValue[] = L"Windows.Data.Json.JsonValue";
       
       
#pragma clang diagnostic pop
