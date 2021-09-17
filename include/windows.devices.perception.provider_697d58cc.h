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
#include "Windows.Devices.Perception.h"
#include "Windows.Foundation.Numerics.h"
#include "Windows.Graphics.Imaging.h"
#include "Windows.Media.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator;
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory;
typedef interface __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation;
typedef struct __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This, __RPC__out __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelationVtbl;
interface __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation;
typedef struct __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelationVtbl;
interface __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation;
typedef struct __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
                       __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelationVtbl;
interface __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelationVtbl *lpVtbl;
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
typedef enum __x_ABI_CWindows_CDevices_CPerception_CPerceptionFrameSourcePropertyChangeStatus __x_ABI_CWindows_CDevices_CPerception_CPerceptionFrameSourcePropertyChangeStatus;
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef interface __x_ABI_CWindows_CFoundation_CIMemoryBuffer __x_ABI_CWindows_CFoundation_CIMemoryBuffer;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat;
typedef interface __x_ABI_CWindows_CMedia_CIVideoFrame __x_ABI_CWindows_CMedia_CIVideoFrame;
typedef struct
DEPRECATED("PerceptionStartFaceAuthenticationHandler may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * sender,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandlerVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler;
typedef struct
DEPRECATED("PerceptionStopFaceAuthenticationHandler may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * sender
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandlerVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IKnownPerceptionFrameKindStatics[] = L"Windows.Devices.Perception.Provider.IKnownPerceptionFrameKindStatics";
typedef struct
DEPRECATED("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Depth )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Infrared )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->get_Color(This,value) )
DEPRECATED("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->get_Depth(This,value) )
DEPRECATED("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->get_Infrared(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionControlGroup[] = L"Windows.Devices.Perception.Provider.IPerceptionControlGroup";
typedef struct
DEPRECATED("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_FrameProviderIds )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->get_FrameProviderIds(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionControlGroupFactory[] = L"Windows.Devices.Perception.Provider.IPerceptionControlGroupFactory";
typedef struct
DEPRECATED("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * ids,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->Create(This,ids,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionCorrelation[] = L"Windows.Devices.Perception.Provider.IPerceptionCorrelation";
typedef struct
DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_TargetId )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->get_TargetId(This,value) )
DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->get_Position(This,value) )
DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->get_Orientation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionCorrelationFactory[] = L"Windows.Devices.Perception.Provider.IPerceptionCorrelationFactory";
typedef struct
DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory * This,
                  __RPC__in HSTRING targetId,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 position,
                  __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion orientation,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->Create(This,targetId,position,orientation,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionCorrelationGroup[] = L"Windows.Devices.Perception.Provider.IPerceptionCorrelationGroup";
typedef struct
DEPRECATED("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_RelativeLocations )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->get_RelativeLocations(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionCorrelationGroupFactory[] = L"Windows.Devices.Perception.Provider.IPerceptionCorrelationGroupFactory";
typedef struct
DEPRECATED("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory * This,
                  __RPC__in_opt __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * relativeLocations,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->Create(This,relativeLocations,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionFaceAuthenticationGroup[] = L"Windows.Devices.Perception.Provider.IPerceptionFaceAuthenticationGroup";
typedef struct
DEPRECATED("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_FrameProviderIds )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->get_FrameProviderIds(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionFaceAuthenticationGroupFactory[] = L"Windows.Devices.Perception.Provider.IPerceptionFaceAuthenticationGroupFactory";
typedef struct
DEPRECATED("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * ids,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler * startHandler,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler * stopHandler,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->Create(This,ids,startHandler,stopHandler,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionFrame[] = L"Windows.Devices.Perception.Provider.IPerceptionFrame";
typedef struct
DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_RelativeTime )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_RelativeTime )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_FrameData )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIMemoryBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->get_RelativeTime(This,value) )
DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->put_RelativeTime(This,value) )
DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->get_Properties(This,value) )
DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->get_FrameData(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionFrameProvider[] = L"Windows.Devices.Perception.Provider.IPerceptionFrameProvider";
typedef struct
DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_FrameProviderInfo )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * * result
        );
    DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Available )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This
        );
    DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This
        );
    DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *SetProperty )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->get_FrameProviderInfo(This,result) )
DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->get_Available(This,value) )
DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->get_Properties(This,value) )
DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->Start(This) )
DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->Stop(This) )
DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->SetProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionFrameProviderInfo[] = L"Windows.Devices.Perception.Provider.IPerceptionFrameProviderInfo";
typedef struct
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
                  __RPC__in HSTRING value
        );
    DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
                  __RPC__in HSTRING value
        );
    DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_DeviceKind )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_DeviceKind )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
                  __RPC__in HSTRING value
        );
    DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_FrameKind )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_FrameKind )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
                  __RPC__in HSTRING value
        );
    DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Hidden )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_Hidden )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfoVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->get_Id(This,value) )
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->put_Id(This,value) )
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->get_DisplayName(This,value) )
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->put_DisplayName(This,value) )
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->get_DeviceKind(This,value) )
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->put_DeviceKind(This,value) )
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->get_FrameKind(This,value) )
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->put_FrameKind(This,value) )
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->get_Hidden(This,value) )
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->put_Hidden(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionFrameProviderManager[] = L"Windows.Devices.Perception.Provider.IPerceptionFrameProviderManager";
typedef struct
DEPRECATED("IPerceptionFrameProviderManager may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("IPerceptionFrameProviderManager may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *GetFrameProvider )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * frameProviderInfo,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("IPerceptionFrameProviderManager may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->GetFrameProvider(This,frameProviderInfo,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionFrameProviderManagerServiceStatics[] = L"Windows.Devices.Perception.Provider.IPerceptionFrameProviderManagerServiceStatics";
typedef struct
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *RegisterFrameProviderInfo )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * manager,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * frameProviderInfo
        );
    DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *UnregisterFrameProviderInfo )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * manager,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * frameProviderInfo
        );
    DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *RegisterFaceAuthenticationGroup )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * manager,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * faceAuthenticationGroup
        );
    DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *UnregisterFaceAuthenticationGroup )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * manager,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * faceAuthenticationGroup
        );
    DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *RegisterControlGroup )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * manager,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup * controlGroup
        );
    DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *UnregisterControlGroup )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * manager,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup * controlGroup
        );
    DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *RegisterCorrelationGroup )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * manager,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup * correlationGroup
        );
    DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *UnregisterCorrelationGroup )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * manager,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup * correlationGroup
        );
    DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *UpdateAvailabilityForProvider )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * provider,
                  boolean available
        );
    DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *PublishFrameForProvider )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * provider,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * frame
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->RegisterFrameProviderInfo(This,manager,frameProviderInfo) )
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->UnregisterFrameProviderInfo(This,manager,frameProviderInfo) )
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->RegisterFaceAuthenticationGroup(This,manager,faceAuthenticationGroup) )
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->UnregisterFaceAuthenticationGroup(This,manager,faceAuthenticationGroup) )
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->RegisterControlGroup(This,manager,controlGroup) )
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->UnregisterControlGroup(This,manager,controlGroup) )
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->RegisterCorrelationGroup(This,manager,correlationGroup) )
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->UnregisterCorrelationGroup(This,manager,correlationGroup) )
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->UpdateAvailabilityForProvider(This,provider,available) )
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->PublishFrameForProvider(This,provider,frame) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionPropertyChangeRequest[] = L"Windows.Devices.Perception.Provider.IPerceptionPropertyChangeRequest";
typedef struct
DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
    DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CPerception_CPerceptionFrameSourcePropertyChangeStatus * value
        );
    DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_Status )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * This,
                  __x_ABI_CWindows_CDevices_CPerception_CPerceptionFrameSourcePropertyChangeStatus value
        );
    DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequestVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->get_Name(This,value) )
DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->get_Value(This,value) )
DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->get_Status(This,value) )
DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->put_Status(This,value) )
DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionVideoFrameAllocator[] = L"Windows.Devices.Perception.Provider.IPerceptionVideoFrameAllocator";
typedef struct
DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *AllocateFrame )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * * value
        );
    DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *CopyFromVideoFrame )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CIVideoFrame * frame,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->AllocateFrame(This,value) )
DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->CopyFromVideoFrame(This,frame,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionVideoFrameAllocatorFactory[] = L"Windows.Devices.Perception.Provider.IPerceptionVideoFrameAllocatorFactory";
typedef struct
DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory * This,
                  UINT32 maxOutstandingFrameCountForWrite,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat format,
                  __x_ABI_CWindows_CFoundation_CSize resolution,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode alpha,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    ( (This)->lpVtbl->Create(This,maxOutstandingFrameCountForWrite,format,resolution,alpha,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory;
DEPRECATED("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_KnownPerceptionFrameKind[] = L"Windows.Devices.Perception.Provider.KnownPerceptionFrameKind";
DEPRECATED("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionControlGroup[] = L"Windows.Devices.Perception.Provider.PerceptionControlGroup";
DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionCorrelation[] = L"Windows.Devices.Perception.Provider.PerceptionCorrelation";
DEPRECATED("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionCorrelationGroup[] = L"Windows.Devices.Perception.Provider.PerceptionCorrelationGroup";
DEPRECATED("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionFaceAuthenticationGroup[] = L"Windows.Devices.Perception.Provider.PerceptionFaceAuthenticationGroup";
DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionFrame[] = L"Windows.Devices.Perception.Provider.PerceptionFrame";
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionFrameProviderInfo[] = L"Windows.Devices.Perception.Provider.PerceptionFrameProviderInfo";
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionFrameProviderManagerService[] = L"Windows.Devices.Perception.Provider.PerceptionFrameProviderManagerService";
DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionPropertyChangeRequest[] = L"Windows.Devices.Perception.Provider.PerceptionPropertyChangeRequest";
DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionVideoFrameAllocator[] = L"Windows.Devices.Perception.Provider.PerceptionVideoFrameAllocator";
       
       
#pragma clang diagnostic pop
