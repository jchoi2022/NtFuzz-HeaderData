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
#include "Windows.Foundation.Numerics.h"
#include "Windows.Media.MediaProperties.h"
#include "Windows.Perception.Spatial.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2 __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2 __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController;
typedef interface __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController;
typedef struct __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This, __RPC__out __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl;
interface __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController;
typedef struct __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl;
interface __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController;
typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                       __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl;
interface __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController;
typedef struct __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This, __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl;
interface __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl *lpVtbl;
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
typedef interface __FIReference_1_boolean __FIReference_1_boolean;
EXTERN_C const IID IID___FIReference_1_boolean;
typedef struct __FIReference_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_boolean * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_boolean * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_boolean * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_boolean * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_boolean * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_boolean * This, __RPC__out boolean *value);
    END_INTERFACE
} __FIReference_1_booleanVtbl;
interface __FIReference_1_boolean
{
    CONST_VTBL struct __FIReference_1_booleanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIReference_1_float __FIReference_1_float;
EXTERN_C const IID IID___FIReference_1_float;
typedef struct __FIReference_1_floatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_float * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_float * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_float * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_float * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_float * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_float * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_float * This, __RPC__out float *value);
    END_INTERFACE
} __FIReference_1_floatVtbl;
interface __FIReference_1_float
{
    CONST_VTBL struct __FIReference_1_floatVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
struct __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __FIReference_1_Windows__CFoundation__CTimeSpan __FIReference_1_Windows__CFoundation__CTimeSpan;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CTimeSpan;
typedef struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CTimeSpan *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CTimeSpanVtbl;
interface __FIReference_1_Windows__CFoundation__CTimeSpan
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
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
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 __x_ABI_CWindows_CFoundation_CNumerics_CVector2;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CCore_CFrameFlashMode __x_ABI_CWindows_CMedia_CDevices_CCore_CFrameFlashMode;
enum __x_ABI_CWindows_CMedia_CDevices_CCore_CFrameFlashMode
{
    FrameFlashMode_Disable = 0,
    FrameFlashMode_Enable = 1,
    FrameFlashMode_Global = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_ICameraIntrinsics[] = L"Windows.Media.Devices.Core.ICameraIntrinsics";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FocalLength )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrincipalPoint )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RadialDistortion )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TangentialDistortion )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ImageWidth )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ImageHeight )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *ProjectOntoFrame )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 coordinate,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * result
        );
    HRESULT ( STDMETHODCALLTYPE *UnprojectAtUnitDepth )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
                  __x_ABI_CWindows_CFoundation_CPoint pixelCoordinate,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * result
        );
    HRESULT ( STDMETHODCALLTYPE *ProjectManyOntoFrame )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
                  UINT32 __coordinatesSize,
                                              __RPC__in_ecount_full(__coordinatesSize) __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * coordinates,
                  UINT32 __resultsSize,
                                           __RPC__out_ecount_full(__resultsSize) __x_ABI_CWindows_CFoundation_CPoint * results
        );
    HRESULT ( STDMETHODCALLTYPE *UnprojectPixelsAtUnitDepth )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * This,
                  UINT32 __pixelCoordinatesSize,
                                                   __RPC__in_ecount_full(__pixelCoordinatesSize) __x_ABI_CWindows_CFoundation_CPoint * pixelCoordinates,
                  UINT32 __resultsSize,
                                           __RPC__out_ecount_full(__resultsSize) __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * results
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FocalLength(This,value) )
    ( (This)->lpVtbl->get_PrincipalPoint(This,value) )
    ( (This)->lpVtbl->get_RadialDistortion(This,value) )
    ( (This)->lpVtbl->get_TangentialDistortion(This,value) )
    ( (This)->lpVtbl->get_ImageWidth(This,value) )
    ( (This)->lpVtbl->get_ImageHeight(This,value) )
    ( (This)->lpVtbl->ProjectOntoFrame(This,coordinate,result) )
    ( (This)->lpVtbl->UnprojectAtUnitDepth(This,pixelCoordinate,result) )
    ( (This)->lpVtbl->ProjectManyOntoFrame(This,__coordinatesSize,coordinates,__resultsSize,results) )
    ( (This)->lpVtbl->UnprojectPixelsAtUnitDepth(This,__pixelCoordinatesSize,pixelCoordinates,__resultsSize,results) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_ICameraIntrinsics2[] = L"Windows.Media.Devices.Core.ICameraIntrinsics2";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UndistortedProjectionTransform )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 * value
        );
    HRESULT ( STDMETHODCALLTYPE *DistortPoint )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 * This,
                  __x_ABI_CWindows_CFoundation_CPoint input,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * result
        );
    HRESULT ( STDMETHODCALLTYPE *DistortPoints )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 * This,
                  UINT32 __inputsSize,
                                         __RPC__in_ecount_full(__inputsSize) __x_ABI_CWindows_CFoundation_CPoint * inputs,
                  UINT32 __resultsSize,
                                           __RPC__out_ecount_full(__resultsSize) __x_ABI_CWindows_CFoundation_CPoint * results
        );
    HRESULT ( STDMETHODCALLTYPE *UndistortPoint )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 * This,
                  __x_ABI_CWindows_CFoundation_CPoint input,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * result
        );
    HRESULT ( STDMETHODCALLTYPE *UndistortPoints )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2 * This,
                  UINT32 __inputsSize,
                                         __RPC__in_ecount_full(__inputsSize) __x_ABI_CWindows_CFoundation_CPoint * inputs,
                  UINT32 __resultsSize,
                                           __RPC__out_ecount_full(__resultsSize) __x_ABI_CWindows_CFoundation_CPoint * results
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2Vtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UndistortedProjectionTransform(This,value) )
    ( (This)->lpVtbl->DistortPoint(This,input,result) )
    ( (This)->lpVtbl->DistortPoints(This,__inputsSize,inputs,__resultsSize,results) )
    ( (This)->lpVtbl->UndistortPoint(This,input,result) )
    ( (This)->lpVtbl->UndistortPoints(This,__inputsSize,inputs,__resultsSize,results) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_ICameraIntrinsicsFactory[] = L"Windows.Media.Devices.Core.ICameraIntrinsicsFactory";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 focalLength,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 principalPoint,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 radialDistortion,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 tangentialDistortion,
                  UINT32 imageWidth,
                  UINT32 imageHeight,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,focalLength,principalPoint,radialDistortion,tangentialDistortion,imageWidth,imageHeight,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsicsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IDepthCorrelatedCoordinateMapper[] = L"Windows.Media.Devices.Core.IDepthCorrelatedCoordinateMapper";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *UnprojectPoint )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper * This,
                  __x_ABI_CWindows_CFoundation_CPoint sourcePoint,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * targetCoordinateSystem,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * result
        );
    HRESULT ( STDMETHODCALLTYPE *UnprojectPoints )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper * This,
                  UINT32 __sourcePointsSize,
                                               __RPC__in_ecount_full(__sourcePointsSize) __x_ABI_CWindows_CFoundation_CPoint * sourcePoints,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * targetCoordinateSystem,
                  UINT32 __resultsSize,
                                           __RPC__out_ecount_full(__resultsSize) __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * results
        );
    HRESULT ( STDMETHODCALLTYPE *MapPoint )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper * This,
                  __x_ABI_CWindows_CFoundation_CPoint sourcePoint,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * targetCoordinateSystem,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * targetCameraIntrinsics,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * result
        );
    HRESULT ( STDMETHODCALLTYPE *MapPoints )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper * This,
                  UINT32 __sourcePointsSize,
                                               __RPC__in_ecount_full(__sourcePointsSize) __x_ABI_CWindows_CFoundation_CPoint * sourcePoints,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * targetCoordinateSystem,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * targetCameraIntrinsics,
                  UINT32 __resultsSize,
                                           __RPC__out_ecount_full(__resultsSize) __x_ABI_CWindows_CFoundation_CPoint * results
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapperVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapperVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->UnprojectPoint(This,sourcePoint,targetCoordinateSystem,result) )
    ( (This)->lpVtbl->UnprojectPoints(This,__sourcePointsSize,sourcePoints,targetCoordinateSystem,__resultsSize,results) )
    ( (This)->lpVtbl->MapPoint(This,sourcePoint,targetCoordinateSystem,targetCameraIntrinsics,result) )
    ( (This)->lpVtbl->MapPoints(This,__sourcePointsSize,sourcePoints,targetCoordinateSystem,targetCameraIntrinsics,__resultsSize,results) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameControlCapabilities[] = L"Windows.Media.Devices.Core.IFrameControlCapabilities";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Exposure )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExposureCompensation )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsoSpeed )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Focus )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhotoConfirmationSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilitiesVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Exposure(This,value) )
    ( (This)->lpVtbl->get_ExposureCompensation(This,value) )
    ( (This)->lpVtbl->get_IsoSpeed(This,value) )
    ( (This)->lpVtbl->get_Focus(This,value) )
    ( (This)->lpVtbl->get_PhotoConfirmationSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameControlCapabilities2[] = L"Windows.Media.Devices.Core.IFrameControlCapabilities2";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Flash )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2Vtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Flash(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameController[] = L"Windows.Media.Devices.Core.IFrameController";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExposureControl )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExposureCompensationControl )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsoSpeedControl )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FocusControl )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhotoConfirmationEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This,
                           __RPC__deref_out_opt __FIReference_1_boolean * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PhotoConfirmationEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * This,
                  __RPC__in_opt __FIReference_1_boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControllerVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExposureControl(This,value) )
    ( (This)->lpVtbl->get_ExposureCompensationControl(This,value) )
    ( (This)->lpVtbl->get_IsoSpeedControl(This,value) )
    ( (This)->lpVtbl->get_FocusControl(This,value) )
    ( (This)->lpVtbl->get_PhotoConfirmationEnabled(This,value) )
    ( (This)->lpVtbl->put_PhotoConfirmationEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameController2[] = L"Windows.Media.Devices.Core.IFrameController2";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FlashControl )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2Vtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FlashControl(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameExposureCapabilities[] = L"Windows.Media.Devices.Core.IFrameExposureCapabilities";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Min )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Max )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Step )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilitiesVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Supported(This,value) )
    ( (This)->lpVtbl->get_Min(This,value) )
    ( (This)->lpVtbl->get_Max(This,value) )
    ( (This)->lpVtbl->get_Step(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameExposureCompensationCapabilities[] = L"Windows.Media.Devices.Core.IFrameExposureCompensationCapabilities";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Min )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Max )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Step )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities * This,
                           __RPC__out FLOAT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilitiesVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Supported(This,value) )
    ( (This)->lpVtbl->get_Min(This,value) )
    ( (This)->lpVtbl->get_Max(This,value) )
    ( (This)->lpVtbl->get_Step(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameExposureCompensationControl[] = L"Windows.Media.Devices.Core.IFrameExposureCompensationControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl * This,
                           __RPC__deref_out_opt __FIReference_1_float * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl * This,
                  __RPC__in_opt __FIReference_1_float * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureCompensationControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameExposureControl[] = L"Windows.Media.Devices.Core.IFrameExposureControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Auto )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Auto )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Auto(This,value) )
    ( (This)->lpVtbl->put_Auto(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameExposureControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameFlashCapabilities[] = L"Windows.Media.Devices.Core.IFrameFlashCapabilities";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RedEyeReductionSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PowerSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilitiesVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Supported(This,value) )
    ( (This)->lpVtbl->get_RedEyeReductionSupported(This,value) )
    ( (This)->lpVtbl->get_PowerSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameFlashControl[] = L"Windows.Media.Devices.Core.IFrameFlashControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CCore_CFrameFlashMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
                  __x_ABI_CWindows_CMedia_CDevices_CCore_CFrameFlashMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Auto )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Auto )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RedEyeReduction )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RedEyeReduction )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PowerPercent )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PowerPercent )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Mode(This,value) )
    ( (This)->lpVtbl->put_Mode(This,value) )
    ( (This)->lpVtbl->get_Auto(This,value) )
    ( (This)->lpVtbl->put_Auto(This,value) )
    ( (This)->lpVtbl->get_RedEyeReduction(This,value) )
    ( (This)->lpVtbl->put_RedEyeReduction(This,value) )
    ( (This)->lpVtbl->get_PowerPercent(This,value) )
    ( (This)->lpVtbl->put_PowerPercent(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFlashControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameFocusCapabilities[] = L"Windows.Media.Devices.Core.IFrameFocusCapabilities";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Min )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Max )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Step )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilitiesVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Supported(This,value) )
    ( (This)->lpVtbl->get_Min(This,value) )
    ( (This)->lpVtbl->get_Max(This,value) )
    ( (This)->lpVtbl->get_Step(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameFocusControl[] = L"Windows.Media.Devices.Core.IFrameFocusControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl * This,
                  __RPC__in_opt __FIReference_1_UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameFocusControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameIsoSpeedCapabilities[] = L"Windows.Media.Devices.Core.IFrameIsoSpeedCapabilities";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Min )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Max )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Step )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilitiesVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Supported(This,value) )
    ( (This)->lpVtbl->get_Min(This,value) )
    ( (This)->lpVtbl->get_Max(This,value) )
    ( (This)->lpVtbl->get_Step(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IFrameIsoSpeedControl[] = L"Windows.Media.Devices.Core.IFrameIsoSpeedControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Auto )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Auto )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl * This,
                  __RPC__in_opt __FIReference_1_UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Auto(This,value) )
    ( (This)->lpVtbl->put_Auto(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameIsoSpeedControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_Core_IVariablePhotoSequenceController[] = L"Windows.Media.Devices.Core.IVariablePhotoSequenceController";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxPhotosPerSecond )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhotosPerSecondLimit )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PhotosPerSecondLimit )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
                  FLOAT value
        );
    HRESULT ( STDMETHODCALLTYPE *GetHighestConcurrentFrameRate )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * captureProperties,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentFrameRate )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FrameCapabilities )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameControlCapabilities * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredFrameControllers )(
        __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CMedia__CDevices__CCore__CFrameController * * items
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceControllerVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Supported(This,value) )
    ( (This)->lpVtbl->get_MaxPhotosPerSecond(This,value) )
    ( (This)->lpVtbl->get_PhotosPerSecondLimit(This,value) )
    ( (This)->lpVtbl->put_PhotosPerSecondLimit(This,value) )
    ( (This)->lpVtbl->GetHighestConcurrentFrameRate(This,captureProperties,value) )
    ( (This)->lpVtbl->GetCurrentFrameRate(This,value) )
    ( (This)->lpVtbl->get_FrameCapabilities(This,value) )
    ( (This)->lpVtbl->get_DesiredFrameControllers(This,items) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_CameraIntrinsics[] = L"Windows.Media.Devices.Core.CameraIntrinsics";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_DepthCorrelatedCoordinateMapper[] = L"Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameControlCapabilities[] = L"Windows.Media.Devices.Core.FrameControlCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameController[] = L"Windows.Media.Devices.Core.FrameController";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameExposureCapabilities[] = L"Windows.Media.Devices.Core.FrameExposureCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameExposureCompensationCapabilities[] = L"Windows.Media.Devices.Core.FrameExposureCompensationCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameExposureCompensationControl[] = L"Windows.Media.Devices.Core.FrameExposureCompensationControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameExposureControl[] = L"Windows.Media.Devices.Core.FrameExposureControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameFlashCapabilities[] = L"Windows.Media.Devices.Core.FrameFlashCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameFlashControl[] = L"Windows.Media.Devices.Core.FrameFlashControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameFocusCapabilities[] = L"Windows.Media.Devices.Core.FrameFocusCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameFocusControl[] = L"Windows.Media.Devices.Core.FrameFocusControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameIsoSpeedCapabilities[] = L"Windows.Media.Devices.Core.FrameIsoSpeedCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_FrameIsoSpeedControl[] = L"Windows.Media.Devices.Core.FrameIsoSpeedControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_Core_VariablePhotoSequenceController[] = L"Windows.Media.Devices.Core.VariablePhotoSequenceController";
       
       
#pragma clang diagnostic pop
