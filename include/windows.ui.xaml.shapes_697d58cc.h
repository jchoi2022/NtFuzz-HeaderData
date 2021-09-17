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
#include "Windows.UI.Composition.h"
#include "Windows.UI.Xaml.h"
#include "Windows.UI.Xaml.Media.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIEllipse __x_ABI_CWindows_CUI_CXaml_CShapes_CIEllipse;
typedef interface __x_ABI_CWindows_CUI_CXaml_CShapes_CILine __x_ABI_CWindows_CUI_CXaml_CShapes_CILine;
typedef interface __x_ABI_CWindows_CUI_CXaml_CShapes_CILineStatics __x_ABI_CWindows_CUI_CXaml_CShapes_CILineStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIPath __x_ABI_CWindows_CUI_CXaml_CShapes_CIPath;
typedef interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathFactory __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathStatics __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygon __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygon;
typedef interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygonStatics __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygonStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolyline __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolyline;
typedef interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolylineStatics __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolylineStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangle __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangle;
typedef interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangleStatics __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangleStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape;
typedef interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape2 __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeFactory __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStatics __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStatics;
struct __x_ABI_CWindows_CFoundation_CPoint;
typedef interface __FIIterator_1_Windows__CFoundation__CPoint __FIIterator_1_Windows__CFoundation__CPoint;
EXTERN_C const IID IID___FIIterator_1_Windows__CFoundation__CPoint;
typedef struct __FIIterator_1_Windows__CFoundation__CPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CPoint *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CFoundation_CPoint *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CFoundation__CPointVtbl;
interface __FIIterator_1_Windows__CFoundation__CPoint
{
    CONST_VTBL struct __FIIterator_1_Windows__CFoundation__CPointVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CFoundation__CPoint __FIIterable_1_Windows__CFoundation__CPoint;
EXTERN_C const IID IID___FIIterable_1_Windows__CFoundation__CPoint;
typedef struct __FIIterable_1_Windows__CFoundation__CPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This, __RPC__deref_out_opt __FIIterator_1_Windows__CFoundation__CPoint **first);
    END_INTERFACE
} __FIIterable_1_Windows__CFoundation__CPointVtbl;
interface __FIIterable_1_Windows__CFoundation__CPoint
{
    CONST_VTBL struct __FIIterable_1_Windows__CFoundation__CPointVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CFoundation__CPoint __FIVectorView_1_Windows__CFoundation__CPoint;
EXTERN_C const IID IID___FIVectorView_1_Windows__CFoundation__CPoint;
typedef struct __FIVectorView_1_Windows__CFoundation__CPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                                                    unsigned int index,
                                                             __RPC__out struct __x_ABI_CWindows_CFoundation_CPoint *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                       struct __x_ABI_CWindows_CFoundation_CPoint item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CFoundation__CPoint * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CFoundation_CPoint *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CFoundation__CPointVtbl;
interface __FIVectorView_1_Windows__CFoundation__CPoint
{
    CONST_VTBL struct __FIVectorView_1_Windows__CFoundation__CPointVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CFoundation__CPoint __FIVector_1_Windows__CFoundation__CPoint;
EXTERN_C const IID IID___FIVector_1_Windows__CFoundation__CPoint;
typedef struct __FIVector_1_Windows__CFoundation__CPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CFoundation__CPoint * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This, __RPC__deref_out_opt struct __x_ABI_CWindows_CFoundation_CPoint *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This,
                   unsigned int index,
                            __RPC__deref_out_opt struct __x_ABI_CWindows_CFoundation_CPoint *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CFoundation__CPoint * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CFoundation__CPoint **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This,
                   __RPC__in struct __x_ABI_CWindows_CFoundation_CPoint item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This,
                   unsigned int index,
                   __RPC__in struct __x_ABI_CWindows_CFoundation_CPoint item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This,
                   unsigned int index,
                   __RPC__in struct __x_ABI_CWindows_CFoundation_CPoint item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This, __RPC__in struct __x_ABI_CWindows_CFoundation_CPoint item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CFoundation_CPoint *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CFoundation__CPoint * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) struct __x_ABI_CWindows_CFoundation_CPoint *value);
    END_INTERFACE
} __FIVector_1_Windows__CFoundation__CPointVtbl;
interface __FIVector_1_Windows__CFoundation__CPoint
{
    CONST_VTBL struct __FIVector_1_Windows__CFoundation__CPointVtbl *lpVtbl;
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
typedef interface __FIIterator_1_double __FIIterator_1_double;
EXTERN_C const IID IID___FIIterator_1_double;
typedef struct __FIIterator_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_double * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_double * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_double * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_double * This, __RPC__out double *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_double * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_double * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_double * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) double *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_doubleVtbl;
interface __FIIterator_1_double
{
    CONST_VTBL struct __FIIterator_1_doubleVtbl *lpVtbl;
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
typedef interface __FIIterable_1_double __FIIterable_1_double;
EXTERN_C const IID IID___FIIterable_1_double;
typedef struct __FIIterable_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_double * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_double * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_double * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_double * This, __RPC__deref_out_opt __FIIterator_1_double **first);
    END_INTERFACE
} __FIIterable_1_doubleVtbl;
interface __FIIterable_1_double
{
    CONST_VTBL struct __FIIterable_1_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_double __FIVectorView_1_double;
EXTERN_C const IID IID___FIVectorView_1_double;
typedef struct __FIVectorView_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_double * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_double * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_double * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_double * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_double * This,
                                                    unsigned int index,
                                                             __RPC__out double *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_double * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_double * This,
                       double item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_double * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) double *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_doubleVtbl;
interface __FIVectorView_1_double
{
    CONST_VTBL struct __FIVectorView_1_doubleVtbl *lpVtbl;
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
typedef interface __FIVector_1_double __FIVector_1_double;
EXTERN_C const IID IID___FIVector_1_double;
typedef struct __FIVector_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_double * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_double * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_double * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_double * This, __RPC__deref_out_opt double *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_double * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_double * This,
                   unsigned int index,
                            __RPC__deref_out_opt double *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_double * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_double * This, __RPC__deref_out_opt __FIVectorView_1_double **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_double * This,
                   __RPC__in double item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_double * This,
                   unsigned int index,
                   __RPC__in double item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_double * This,
                   unsigned int index,
                   __RPC__in double item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_double * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_double * This, __RPC__in double item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_double * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_double * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_double * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) double *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_double * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) double *value);
    END_INTERFACE
} __FIVector_1_doubleVtbl;
interface __FIVector_1_double
{
    CONST_VTBL struct __FIVector_1_doubleVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionBrush __x_ABI_CWindows_CUI_CComposition_CICompositionBrush;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CFillRule __x_ABI_CWindows_CUI_CXaml_CMedia_CFillRule;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CPenLineCap __x_ABI_CWindows_CUI_CXaml_CMedia_CPenLineCap;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CPenLineJoin __x_ABI_CWindows_CUI_CXaml_CMedia_CPenLineJoin;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CStretch __x_ABI_CWindows_CUI_CXaml_CMedia_CStretch;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Shapes_IEllipse[] = L"Windows.UI.Xaml.Shapes.IEllipse";
typedef struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIEllipseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIEllipse * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIEllipse * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIEllipse * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIEllipse * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIEllipse * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIEllipse * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CShapes_CIEllipseVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIEllipse
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIEllipseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CShapes_CIEllipse;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Shapes_ILine[] = L"Windows.UI.Xaml.Shapes.ILine";
typedef struct __x_ABI_CWindows_CUI_CXaml_CShapes_CILineVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CILine * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CILine * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CILine * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CILine * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CILine * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CILine * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_X1 )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CILine * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_X1 )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CILine * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Y1 )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CILine * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Y1 )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CILine * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_X2 )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CILine * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_X2 )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CILine * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Y2 )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CILine * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Y2 )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CILine * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CShapes_CILineVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CShapes_CILine
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CShapes_CILineVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_X1(This,value) )
    ( (This)->lpVtbl->put_X1(This,value) )
    ( (This)->lpVtbl->get_Y1(This,value) )
    ( (This)->lpVtbl->put_Y1(This,value) )
    ( (This)->lpVtbl->get_X2(This,value) )
    ( (This)->lpVtbl->put_X2(This,value) )
    ( (This)->lpVtbl->get_Y2(This,value) )
    ( (This)->lpVtbl->put_Y2(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CShapes_CILine;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Shapes_ILineStatics[] = L"Windows.UI.Xaml.Shapes.ILineStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CShapes_CILineStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CILineStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CILineStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CILineStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CILineStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CILineStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CILineStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_X1Property )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CILineStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Y1Property )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CILineStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_X2Property )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CILineStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Y2Property )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CILineStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CShapes_CILineStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CShapes_CILineStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CShapes_CILineStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_X1Property(This,value) )
    ( (This)->lpVtbl->get_Y1Property(This,value) )
    ( (This)->lpVtbl->get_X2Property(This,value) )
    ( (This)->lpVtbl->get_Y2Property(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CShapes_CILineStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Shapes_IPath[] = L"Windows.UI.Xaml.Shapes.IPath";
typedef struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPath * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPath * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPath * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPath * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPath * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPath * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIPath * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Data )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIPath * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIGeometry * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIPath
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Data(This,value) )
    ( (This)->lpVtbl->put_Data(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CShapes_CIPath;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Shapes_IPathFactory[] = L"Windows.UI.Xaml.Shapes.IPathFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CShapes_CIPath * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CShapes_CIPathFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Shapes_IPathStatics[] = L"Windows.UI.Xaml.Shapes.IPathStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DataProperty )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIPathStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DataProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CShapes_CIPathStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Shapes_IPolygon[] = L"Windows.UI.Xaml.Shapes.IPolygon";
typedef struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygon * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygon * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygon * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygon * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygon * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygon * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FillRule )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygon * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CFillRule * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FillRule )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygon * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CFillRule value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Points )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygon * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CFoundation__CPoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Points )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygon * This,
                  __RPC__in_opt __FIVector_1_Windows__CFoundation__CPoint * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygonVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygon
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygonVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FillRule(This,value) )
    ( (This)->lpVtbl->put_FillRule(This,value) )
    ( (This)->lpVtbl->get_Points(This,value) )
    ( (This)->lpVtbl->put_Points(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygon;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Shapes_IPolygonStatics[] = L"Windows.UI.Xaml.Shapes.IPolygonStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygonStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygonStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygonStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygonStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygonStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygonStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygonStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FillRuleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygonStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygonStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygonStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygonStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygonStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FillRuleProperty(This,value) )
    ( (This)->lpVtbl->get_PointsProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CShapes_CIPolygonStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Shapes_IPolyline[] = L"Windows.UI.Xaml.Shapes.IPolyline";
typedef struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolylineVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolyline * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolyline * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolyline * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolyline * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolyline * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolyline * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FillRule )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolyline * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CFillRule * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FillRule )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolyline * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CFillRule value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Points )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolyline * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CFoundation__CPoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Points )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolyline * This,
                  __RPC__in_opt __FIVector_1_Windows__CFoundation__CPoint * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolylineVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolyline
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolylineVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FillRule(This,value) )
    ( (This)->lpVtbl->put_FillRule(This,value) )
    ( (This)->lpVtbl->get_Points(This,value) )
    ( (This)->lpVtbl->put_Points(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CShapes_CIPolyline;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Shapes_IPolylineStatics[] = L"Windows.UI.Xaml.Shapes.IPolylineStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolylineStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolylineStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolylineStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolylineStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolylineStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolylineStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolylineStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FillRuleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolylineStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolylineStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolylineStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolylineStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIPolylineStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FillRuleProperty(This,value) )
    ( (This)->lpVtbl->get_PointsProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CShapes_CIPolylineStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Shapes_IRectangle[] = L"Windows.UI.Xaml.Shapes.IRectangle";
typedef struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangle * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangle * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangle * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangle * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangle * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangle * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RadiusX )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangle * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RadiusX )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangle * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RadiusY )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangle * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RadiusY )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangle * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangleVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangle
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangleVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RadiusX(This,value) )
    ( (This)->lpVtbl->put_RadiusX(This,value) )
    ( (This)->lpVtbl->get_RadiusY(This,value) )
    ( (This)->lpVtbl->put_RadiusY(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangle;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Shapes_IRectangleStatics[] = L"Windows.UI.Xaml.Shapes.IRectangleStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangleStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangleStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangleStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangleStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangleStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangleStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangleStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RadiusXProperty )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangleStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RadiusYProperty )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangleStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangleStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangleStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangleStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RadiusXProperty(This,value) )
    ( (This)->lpVtbl->get_RadiusYProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CShapes_CIRectangleStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Shapes_IShape[] = L"Windows.UI.Xaml.Shapes.IShape";
typedef struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Fill )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Fill )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Stroke )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Stroke )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeMiterLimit )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeMiterLimit )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeThickness )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeThickness )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeStartLineCap )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CPenLineCap * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeStartLineCap )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CPenLineCap value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeEndLineCap )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CPenLineCap * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeEndLineCap )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CPenLineCap value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeLineJoin )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CPenLineJoin * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeLineJoin )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CPenLineJoin value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeDashOffset )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeDashOffset )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeDashCap )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CPenLineCap * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeDashCap )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CPenLineCap value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeDashArray )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                           __RPC__deref_out_opt __FIVector_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeDashArray )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                  __RPC__in_opt __FIVector_1_double * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Stretch )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CStretch * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Stretch )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CStretch value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GeometryTransform )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CITransform * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Fill(This,value) )
    ( (This)->lpVtbl->put_Fill(This,value) )
    ( (This)->lpVtbl->get_Stroke(This,value) )
    ( (This)->lpVtbl->put_Stroke(This,value) )
    ( (This)->lpVtbl->get_StrokeMiterLimit(This,value) )
    ( (This)->lpVtbl->put_StrokeMiterLimit(This,value) )
    ( (This)->lpVtbl->get_StrokeThickness(This,value) )
    ( (This)->lpVtbl->put_StrokeThickness(This,value) )
    ( (This)->lpVtbl->get_StrokeStartLineCap(This,value) )
    ( (This)->lpVtbl->put_StrokeStartLineCap(This,value) )
    ( (This)->lpVtbl->get_StrokeEndLineCap(This,value) )
    ( (This)->lpVtbl->put_StrokeEndLineCap(This,value) )
    ( (This)->lpVtbl->get_StrokeLineJoin(This,value) )
    ( (This)->lpVtbl->put_StrokeLineJoin(This,value) )
    ( (This)->lpVtbl->get_StrokeDashOffset(This,value) )
    ( (This)->lpVtbl->put_StrokeDashOffset(This,value) )
    ( (This)->lpVtbl->get_StrokeDashCap(This,value) )
    ( (This)->lpVtbl->put_StrokeDashCap(This,value) )
    ( (This)->lpVtbl->get_StrokeDashArray(This,value) )
    ( (This)->lpVtbl->put_StrokeDashArray(This,value) )
    ( (This)->lpVtbl->get_Stretch(This,value) )
    ( (This)->lpVtbl->put_Stretch(This,value) )
    ( (This)->lpVtbl->get_GeometryTransform(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CShapes_CIShape;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Shapes_IShape2[] = L"Windows.UI.Xaml.Shapes.IShape2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAlphaMask )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionBrush * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAlphaMask(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CShapes_CIShape2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Shapes_IShapeFactory[] = L"Windows.UI.Xaml.Shapes.IShapeFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CShapes_CIShape * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Shapes_IShapeStatics[] = L"Windows.UI.Xaml.Shapes.IShapeStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FillProperty )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeMiterLimitProperty )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeThicknessProperty )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeStartLineCapProperty )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeEndLineCapProperty )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeLineJoinProperty )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeDashOffsetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeDashCapProperty )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeDashArrayProperty )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StretchProperty )(
        __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FillProperty(This,value) )
    ( (This)->lpVtbl->get_StrokeProperty(This,value) )
    ( (This)->lpVtbl->get_StrokeMiterLimitProperty(This,value) )
    ( (This)->lpVtbl->get_StrokeThicknessProperty(This,value) )
    ( (This)->lpVtbl->get_StrokeStartLineCapProperty(This,value) )
    ( (This)->lpVtbl->get_StrokeEndLineCapProperty(This,value) )
    ( (This)->lpVtbl->get_StrokeLineJoinProperty(This,value) )
    ( (This)->lpVtbl->get_StrokeDashOffsetProperty(This,value) )
    ( (This)->lpVtbl->get_StrokeDashCapProperty(This,value) )
    ( (This)->lpVtbl->get_StrokeDashArrayProperty(This,value) )
    ( (This)->lpVtbl->get_StretchProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CShapes_CIShapeStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Shapes_Ellipse[] = L"Windows.UI.Xaml.Shapes.Ellipse";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Shapes_Line[] = L"Windows.UI.Xaml.Shapes.Line";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Shapes_Path[] = L"Windows.UI.Xaml.Shapes.Path";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Shapes_Polygon[] = L"Windows.UI.Xaml.Shapes.Polygon";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Shapes_Polyline[] = L"Windows.UI.Xaml.Shapes.Polyline";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Shapes_Rectangle[] = L"Windows.UI.Xaml.Shapes.Rectangle";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Shapes_Shape[] = L"Windows.UI.Xaml.Shapes.Shape";
       
       
#pragma clang diagnostic pop
