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
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticActionsStatics __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticActionsStatics;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfo __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfo;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceRuntimeInfo __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceRuntimeInfo;
typedef interface __FIIterator_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo __FIIterator_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo;
typedef struct __FIIterator_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This, __RPC__out __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfoVtbl;
interface __FIIterator_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo __FIIterable_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo;
typedef struct __FIIterable_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfoVtbl;
interface __FIIterable_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo __FIVectorView_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo;
typedef struct __FIVectorView_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This,
                       __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfoVtbl;
interface __FIVectorView_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfoVtbl *lpVtbl;
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
typedef interface __FIKeyValuePair_2_HSTRING_HSTRING __FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out __FIKeyValuePair_2_HSTRING_HSTRING * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_HSTRING * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_HSTRING __FIMapView_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIMapView_2_HSTRING_HSTRING;
typedef struct __FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt HSTRING *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_HSTRINGVtbl;
interface __FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIIterator_1_GUID __FIIterator_1_GUID;
EXTERN_C const IID IID___FIIterator_1_GUID;
typedef struct __FIIterator_1_GUIDVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_GUID * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_GUID * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_GUID * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_GUID * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_GUID * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_GUID * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_GUID * This, __RPC__out GUID *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_GUID * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_GUID * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_GUID * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) GUID *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_GUIDVtbl;
interface __FIIterator_1_GUID
{
    CONST_VTBL struct __FIIterator_1_GUIDVtbl *lpVtbl;
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
typedef interface __FIIterable_1_GUID __FIIterable_1_GUID;
EXTERN_C const IID IID___FIIterable_1_GUID;
typedef struct __FIIterable_1_GUIDVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_GUID * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_GUID * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_GUID * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_GUID * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_GUID * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_GUID * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_GUID * This, __RPC__deref_out_opt __FIIterator_1_GUID **first);
    END_INTERFACE
} __FIIterable_1_GUIDVtbl;
interface __FIIterable_1_GUID
{
    CONST_VTBL struct __FIIterable_1_GUIDVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_GUID __FIVectorView_1_GUID;
EXTERN_C const IID IID___FIVectorView_1_GUID;
typedef struct __FIVectorView_1_GUIDVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_GUID * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_GUID * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_GUID * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_GUID * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_GUID * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_GUID * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_GUID * This,
                                                    unsigned int index,
                                                             __RPC__out GUID *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_GUID * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_GUID * This,
                       GUID item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_GUID * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) GUID *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_GUIDVtbl;
interface __FIVectorView_1_GUID
{
    CONST_VTBL struct __FIVectorView_1_GUIDVtbl *lpVtbl;
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
typedef enum __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticActionState __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticActionState;
typedef enum __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticEscalationType __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticEscalationType;
typedef enum __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticEventBufferLatencies __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticEventBufferLatencies;
typedef enum __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticTracePriority __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticTracePriority;
typedef enum __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticTraceSlotState __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticTraceSlotState;
typedef enum __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticTraceSlotType __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticTraceSlotType;
enum __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticActionState
{
    PlatformDiagnosticActionState_Success = 0,
    PlatformDiagnosticActionState_FreeNetworkNotAvailable = 1,
    PlatformDiagnosticActionState_ACPowerNotAvailable = 2,
};
enum __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticEscalationType
{
    PlatformDiagnosticEscalationType_OnCompletion = 0,
    PlatformDiagnosticEscalationType_OnFailure = 1,
};
enum __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticEventBufferLatencies
{
    PlatformDiagnosticEventBufferLatencies_Normal = 0x1,
    PlatformDiagnosticEventBufferLatencies_CostDeferred = 0x2,
    PlatformDiagnosticEventBufferLatencies_Realtime = 0x4,
};
enum __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticTracePriority
{
    PlatformDiagnosticTracePriority_Normal = 0,
    PlatformDiagnosticTracePriority_UserElevated = 1,
};
enum __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticTraceSlotState
{
    PlatformDiagnosticTraceSlotState_NotRunning = 0,
    PlatformDiagnosticTraceSlotState_Running = 1,
    PlatformDiagnosticTraceSlotState_Throttled = 2,
};
enum __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticTraceSlotType
{
    PlatformDiagnosticTraceSlotType_Alternative = 0,
    PlatformDiagnosticTraceSlotType_AlwaysOn = 1,
    PlatformDiagnosticTraceSlotType_Mini = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticActionsStatics[] = L"Windows.System.Diagnostics.TraceReporting.IPlatformDiagnosticActionsStatics";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticActionsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticActionsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticActionsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticActionsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticActionsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticActionsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticActionsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsScenarioEnabled )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticActionsStatics * This,
                  GUID scenarioId,
                           __RPC__out boolean * isActive
        );
    HRESULT ( STDMETHODCALLTYPE *TryEscalateScenario )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticActionsStatics * This,
                  GUID scenarioId,
                  __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticEscalationType escalationType,
                  __RPC__in HSTRING outputDirectory,
                  boolean timestampOutputDirectory,
                  boolean forceEscalationUpload,
                  __RPC__in_opt __FIMapView_2_HSTRING_HSTRING * triggers,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *DownloadLatestSettingsForNamespace )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticActionsStatics * This,
                  __RPC__in HSTRING partner,
                  __RPC__in HSTRING feature,
                  boolean isScenarioNamespace,
                  boolean downloadOverCostedNetwork,
                  boolean downloadOverBattery,
                           __RPC__out __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticActionState * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetActiveScenarioList )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticActionsStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_GUID * * scenarioIds
        );
    HRESULT ( STDMETHODCALLTYPE *ForceUpload )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticActionsStatics * This,
                  __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticEventBufferLatencies latency,
                  boolean uploadOverCostedNetwork,
                  boolean uploadOverBattery,
                           __RPC__out __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticActionState * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsTraceRunning )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticActionsStatics * This,
                  __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticTraceSlotType slotType,
                  GUID scenarioId,
                  UINT64 traceProfileHash,
                           __RPC__out __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticTraceSlotState * slotState
        );
    HRESULT ( STDMETHODCALLTYPE *GetActiveTraceRuntime )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticActionsStatics * This,
                  __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticTraceSlotType slotType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceRuntimeInfo * * traceRuntimeInfo
        );
    HRESULT ( STDMETHODCALLTYPE *GetKnownTraceList )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticActionsStatics * This,
                  __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticTraceSlotType slotType,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSystem__CDiagnostics__CTraceReporting__CPlatformDiagnosticTraceInfo * * traceInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticActionsStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticActionsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticActionsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsScenarioEnabled(This,scenarioId,isActive) )
    ( (This)->lpVtbl->TryEscalateScenario(This,scenarioId,escalationType,outputDirectory,timestampOutputDirectory,forceEscalationUpload,triggers,result) )
    ( (This)->lpVtbl->DownloadLatestSettingsForNamespace(This,partner,feature,isScenarioNamespace,downloadOverCostedNetwork,downloadOverBattery,result) )
    ( (This)->lpVtbl->GetActiveScenarioList(This,scenarioIds) )
    ( (This)->lpVtbl->ForceUpload(This,latency,uploadOverCostedNetwork,uploadOverBattery,result) )
    ( (This)->lpVtbl->IsTraceRunning(This,slotType,scenarioId,traceProfileHash,slotState) )
    ( (This)->lpVtbl->GetActiveTraceRuntime(This,slotType,traceRuntimeInfo) )
    ( (This)->lpVtbl->GetKnownTraceList(This,slotType,traceInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticActionsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticTraceInfo[] = L"Windows.System.Diagnostics.TraceReporting.IPlatformDiagnosticTraceInfo";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ScenarioId )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfo * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProfileHash )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfo * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsExclusive )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAutoLogger )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxTraceDurationFileTime )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfo * This,
                           __RPC__out INT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Priority )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfo * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CPlatformDiagnosticTracePriority * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfoVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ScenarioId(This,value) )
    ( (This)->lpVtbl->get_ProfileHash(This,value) )
    ( (This)->lpVtbl->get_IsExclusive(This,value) )
    ( (This)->lpVtbl->get_IsAutoLogger(This,value) )
    ( (This)->lpVtbl->get_MaxTraceDurationFileTime(This,value) )
    ( (This)->lpVtbl->get_Priority(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticTraceRuntimeInfo[] = L"Windows.System.Diagnostics.TraceReporting.IPlatformDiagnosticTraceRuntimeInfo";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceRuntimeInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceRuntimeInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceRuntimeInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceRuntimeInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceRuntimeInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceRuntimeInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceRuntimeInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RuntimeFileTime )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceRuntimeInfo * This,
                           __RPC__out INT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EtwRuntimeFileTime )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceRuntimeInfo * This,
                           __RPC__out INT64 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceRuntimeInfoVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceRuntimeInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceRuntimeInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RuntimeFileTime(This,value) )
    ( (This)->lpVtbl->get_EtwRuntimeFileTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CTraceReporting_CIPlatformDiagnosticTraceRuntimeInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_TraceReporting_PlatformDiagnosticActions[] = L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticActions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_TraceReporting_PlatformDiagnosticTraceInfo[] = L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticTraceInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_TraceReporting_PlatformDiagnosticTraceRuntimeInfo[] = L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticTraceRuntimeInfo";
       
       
#pragma clang diagnostic pop
