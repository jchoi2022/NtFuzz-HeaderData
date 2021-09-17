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
#include "Windows.Storage.Streams.h"
#include "Windows.UI.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedHandler __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedHandler;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManager __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManager;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManagerStatics __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManagerStatics;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTask __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTask;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskCompletedEventArgs __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskCompletedEventArgs;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequest __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequest;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequestedEventArgs __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequestedEventArgs;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceChangedEventArgs __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceChangedEventArgs;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedArgs __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedArgs;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage2 __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage2;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackageStatics __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackageStatics;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroupFactory __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroupFactory;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialStatics __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialStatics;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial2 __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial2;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroupFactory __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroupFactory;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup2 __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup2;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroupFactory __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroupFactory;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DFaceReductionOptions __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DFaceReductionOptions;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMaterial __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMaterial;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMeshVerificationResult __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMeshVerificationResult;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel2 __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel2;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroupFactory __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroupFactory;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup2 __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup2;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroupFactory __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroupFactory;
typedef interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource;
typedef interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial;
typedef struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This, __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialVtbl;
interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial;
typedef struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialVtbl;
interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup;
typedef struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This, __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroupVtbl;
interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroupVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup;
typedef struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroupVtbl;
interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial;
typedef struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This, __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialVtbl;
interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial;
typedef struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialVtbl;
interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup;
typedef struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This, __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroupVtbl;
interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroupVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup;
typedef struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroupVtbl;
interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent;
typedef struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This, __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentVtbl;
interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent;
typedef struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentVtbl;
interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix;
typedef struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrixVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This, __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrixVtbl;
interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrixVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix;
typedef struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrixVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrixVtbl;
interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrixVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial;
typedef struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This, __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialVtbl;
interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial;
typedef struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialVtbl;
interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup;
typedef struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This, __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroupVtbl;
interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroupVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup;
typedef struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroupVtbl;
interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh;
typedef struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This, __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVtbl;
interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh;
typedef struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVtbl;
interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture;
typedef struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTextureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This, __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTextureVtbl;
interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTextureVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture;
typedef struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTextureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTextureVtbl;
interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTextureVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial;
typedef struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This, __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialVtbl;
interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial;
typedef struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialVtbl;
interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup;
typedef struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This, __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroupVtbl;
interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroupVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup;
typedef struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroupVtbl;
interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial;
typedef struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This, __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialVtbl;
interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial;
typedef struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialVtbl;
interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup;
typedef struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This, __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroupVtbl;
interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroupVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup;
typedef struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroupVtbl;
interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource;
typedef struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This, __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResourceVtbl;
interface __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResourceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource;
typedef struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResourceVtbl;
interface __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial;
typedef struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This,
                       __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialVtbl;
interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup;
typedef struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This,
                       __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroupVtbl;
interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroupVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial;
typedef struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This,
                       __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialVtbl;
interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup;
typedef struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This,
                       __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroupVtbl;
interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroupVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent;
typedef struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This,
                       __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentVtbl;
interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix;
typedef struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrixVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This,
                       __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrixVtbl;
interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrixVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial;
typedef struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This,
                       __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialVtbl;
interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup;
typedef struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This,
                       __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroupVtbl;
interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroupVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh;
typedef struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This,
                       __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVtbl;
interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture;
typedef struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTextureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This,
                       __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTextureVtbl;
interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTextureVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial;
typedef struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This,
                       __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialVtbl;
interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup;
typedef struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This,
                       __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroupVtbl;
interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroupVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial;
typedef struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This,
                       __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialVtbl;
interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup;
typedef struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This,
                       __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroupVtbl;
interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroupVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource;
typedef struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This,
                       __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResourceVtbl;
interface __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResourceVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial;
EXTERN_C const IID IID___FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial;
typedef struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This, __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This, __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial * *value);
    END_INTERFACE
} __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialVtbl;
interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial
{
    CONST_VTBL struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup;
EXTERN_C const IID IID___FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup;
typedef struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This, __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This, __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * *value);
    END_INTERFACE
} __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroupVtbl;
interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup
{
    CONST_VTBL struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroupVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial;
EXTERN_C const IID IID___FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial;
typedef struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This, __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This, __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial * *value);
    END_INTERFACE
} __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialVtbl;
interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial
{
    CONST_VTBL struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup;
EXTERN_C const IID IID___FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup;
typedef struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This, __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This, __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup * *value);
    END_INTERFACE
} __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroupVtbl;
interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup
{
    CONST_VTBL struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroupVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent;
EXTERN_C const IID IID___FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent;
typedef struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This, __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This, __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * *value);
    END_INTERFACE
} __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentVtbl;
interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent
{
    CONST_VTBL struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix;
EXTERN_C const IID IID___FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix;
typedef struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrixVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This, __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This, __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix * *value);
    END_INTERFACE
} __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrixVtbl;
interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix
{
    CONST_VTBL struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrixVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial;
EXTERN_C const IID IID___FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial;
typedef struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This, __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This, __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial * *value);
    END_INTERFACE
} __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialVtbl;
interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial
{
    CONST_VTBL struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup;
EXTERN_C const IID IID___FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup;
typedef struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This, __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This, __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup * *value);
    END_INTERFACE
} __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroupVtbl;
interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup
{
    CONST_VTBL struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroupVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh;
EXTERN_C const IID IID___FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh;
typedef struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This, __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This, __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * *value);
    END_INTERFACE
} __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVtbl;
interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh
{
    CONST_VTBL struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture;
EXTERN_C const IID IID___FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture;
typedef struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTextureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This, __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This, __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * *value);
    END_INTERFACE
} __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTextureVtbl;
interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture
{
    CONST_VTBL struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTextureVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial;
EXTERN_C const IID IID___FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial;
typedef struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This, __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This, __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial * *value);
    END_INTERFACE
} __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialVtbl;
interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial
{
    CONST_VTBL struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup;
EXTERN_C const IID IID___FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup;
typedef struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This, __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This, __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup * *value);
    END_INTERFACE
} __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroupVtbl;
interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup
{
    CONST_VTBL struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroupVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial;
EXTERN_C const IID IID___FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial;
typedef struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This, __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This, __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * *value);
    END_INTERFACE
} __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialVtbl;
interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial
{
    CONST_VTBL struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup;
EXTERN_C const IID IID___FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup;
typedef struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This, __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This, __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup * *value);
    END_INTERFACE
} __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroupVtbl;
interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup
{
    CONST_VTBL struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroupVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource;
EXTERN_C const IID IID___FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource;
typedef struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This, __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This, __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * *value);
    END_INTERFACE
} __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResourceVtbl;
interface __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource
{
    CONST_VTBL struct __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResourceVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage;
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackageVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage;
typedef struct __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage * This, __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackageVtbl;
interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackageVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult;
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult;
typedef struct __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult * This, __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMeshVerificationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResultVtbl;
interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel;
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel;
typedef struct __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel * This, __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelVtbl;
interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DManager_Windows__CGraphics__CPrinting3D__CPrint3DTaskRequestedEventArgs __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DManager_Windows__CGraphics__CPrinting3D__CPrint3DTaskRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DManager_Windows__CGraphics__CPrinting3D__CPrint3DTaskRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DManager_Windows__CGraphics__CPrinting3D__CPrint3DTaskRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DManager_Windows__CGraphics__CPrinting3D__CPrint3DTaskRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DManager_Windows__CGraphics__CPrinting3D__CPrint3DTaskRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DManager_Windows__CGraphics__CPrinting3D__CPrint3DTaskRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DManager_Windows__CGraphics__CPrinting3D__CPrint3DTaskRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManager * sender, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DManager_Windows__CGraphics__CPrinting3D__CPrint3DTaskRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DManager_Windows__CGraphics__CPrinting3D__CPrint3DTaskRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DManager_Windows__CGraphics__CPrinting3D__CPrint3DTaskRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_IInspectable __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTask * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskCompletedEventArgs __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskCompletedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskCompletedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskCompletedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskCompletedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskCompletedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTask * sender, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskCompletedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskCompletedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskSourceChangedEventArgs __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskSourceChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskSourceChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskSourceChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskSourceChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskSourceChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskSourceChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskSourceChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTask * sender, __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskSourceChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskSourceChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskSourceChangedEventArgsVtbl *lpVtbl;
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
typedef interface __FIIterator_1_UINT32 __FIIterator_1_UINT32;
EXTERN_C const IID IID___FIIterator_1_UINT32;
typedef struct __FIIterator_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_UINT32 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out unsigned int *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_UINT32 * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_UINT32 * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) unsigned int *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_UINT32Vtbl;
interface __FIIterator_1_UINT32
{
    CONST_VTBL struct __FIIterator_1_UINT32Vtbl *lpVtbl;
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
typedef interface __FIIterable_1_UINT32 __FIIterable_1_UINT32;
EXTERN_C const IID IID___FIIterable_1_UINT32;
typedef struct __FIIterable_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_UINT32 * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_UINT32 * This, __RPC__deref_out_opt __FIIterator_1_UINT32 **first);
    END_INTERFACE
} __FIIterable_1_UINT32Vtbl;
interface __FIIterable_1_UINT32
{
    CONST_VTBL struct __FIIterable_1_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_UINT32 __FIVectorView_1_UINT32;
EXTERN_C const IID IID___FIVectorView_1_UINT32;
typedef struct __FIVectorView_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_UINT32 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_UINT32 * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_UINT32 * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_UINT32 * This,
                                                    unsigned int index,
                                                             __RPC__out unsigned int *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_UINT32 * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_UINT32 * This,
                       unsigned int item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_UINT32 * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) unsigned int *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_UINT32Vtbl;
interface __FIVectorView_1_UINT32
{
    CONST_VTBL struct __FIVectorView_1_UINT32Vtbl *lpVtbl;
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
typedef interface __FIVector_1_UINT32 __FIVector_1_UINT32;
EXTERN_C const IID IID___FIVector_1_UINT32;
typedef struct __FIVector_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_UINT32 * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_UINT32 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_UINT32 * This, __RPC__deref_out_opt unsigned int *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_UINT32 * This,
                   unsigned int index,
                            __RPC__deref_out_opt unsigned int *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_UINT32 * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_UINT32 * This, __RPC__deref_out_opt __FIVectorView_1_UINT32 **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_UINT32 * This,
                   __RPC__in unsigned int item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_UINT32 * This,
                   unsigned int index,
                   __RPC__in unsigned int item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_UINT32 * This,
                   unsigned int index,
                   __RPC__in unsigned int item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_UINT32 * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_UINT32 * This, __RPC__in unsigned int item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_UINT32 * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) unsigned int *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_UINT32 * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) unsigned int *value);
    END_INTERFACE
} __FIVector_1_UINT32Vtbl;
interface __FIVector_1_UINT32
{
    CONST_VTBL struct __FIVector_1_UINT32Vtbl *lpVtbl;
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
typedef interface __FIVector_1_HSTRING __FIVector_1_HSTRING;
EXTERN_C const IID IID___FIVector_1_HSTRING;
typedef struct __FIVector_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_HSTRING * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                            __RPC__deref_out_opt HSTRING *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_HSTRING * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_HSTRING * This, __RPC__deref_out_opt __FIVectorView_1_HSTRING **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_HSTRING * This,
                   __RPC__in HSTRING item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                   __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                   __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_HSTRING * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_HSTRING * This, __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) HSTRING *value);
    END_INTERFACE
} __FIVector_1_HSTRINGVtbl;
interface __FIVector_1_HSTRING
{
    CONST_VTBL struct __FIVector_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIMap_2_HSTRING_HSTRING __FIMap_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIMap_2_HSTRING_HSTRING;
typedef struct __FIMap_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   HSTRING key,
                            __RPC__deref_out_opt HSTRING **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   HSTRING key,
                   __RPC__in_opt HSTRING *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    END_INTERFACE
} __FIMap_2_HSTRING_HSTRINGVtbl;
interface __FIMap_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMap_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationProgressHandler_2_boolean_double __FIAsyncOperationProgressHandler_2_boolean_double;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_boolean_double;
typedef interface __FIAsyncOperationWithProgress_2_boolean_double __FIAsyncOperationWithProgress_2_boolean_double;
typedef struct __FIAsyncOperationProgressHandler_2_boolean_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_boolean_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_boolean_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_boolean_double * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_boolean_double * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_boolean_double *asyncInfo, double progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_boolean_doubleVtbl;
interface __FIAsyncOperationProgressHandler_2_boolean_double
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_boolean_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_boolean_double __FIAsyncOperationWithProgressCompletedHandler_2_boolean_double;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_boolean_double;
typedef interface __FIAsyncOperationWithProgress_2_boolean_double __FIAsyncOperationWithProgress_2_boolean_double;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_boolean_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_boolean_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_boolean_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_boolean_double * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_boolean_double * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_boolean_double *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_boolean_doubleVtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_boolean_double
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_boolean_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_boolean_double __FIAsyncOperationWithProgress_2_boolean_double;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_boolean_double;
typedef struct __FIAsyncOperationWithProgress_2_boolean_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_boolean_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_boolean_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_boolean_double * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_boolean_double * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_boolean_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_boolean_double * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_boolean_double * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_boolean_double *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_boolean_double * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_boolean_double **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_boolean_double * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_boolean_double *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_boolean_double * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_boolean_double **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_boolean_double * This, __RPC__deref_out_opt boolean *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_boolean_doubleVtbl;
interface __FIAsyncOperationWithProgress_2_boolean_double
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_boolean_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Progress(This,handler) )
    ( (This)->lpVtbl -> get_Progress(This,handler) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting3D_CPrint3DTaskCompletion __x_ABI_CWindows_CGraphics_CPrinting3D_CPrint3DTaskCompletion;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting3D_CPrint3DTaskDetail __x_ABI_CWindows_CGraphics_CPrinting3D_CPrint3DTaskDetail;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DBufferFormat __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DBufferFormat;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DMeshVerificationMode __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DMeshVerificationMode;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DModelUnit __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DModelUnit;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DObjectType __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DObjectType;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DPackageCompression __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DPackageCompression;
typedef enum __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DTextureEdgeBehavior __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DTextureEdgeBehavior;
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DBufferDescription __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DBufferDescription;
enum __x_ABI_CWindows_CGraphics_CPrinting3D_CPrint3DTaskCompletion
{
    Print3DTaskCompletion_Abandoned = 0,
    Print3DTaskCompletion_Canceled = 1,
    Print3DTaskCompletion_Failed = 2,
    Print3DTaskCompletion_Slicing = 3,
    Print3DTaskCompletion_Submitted = 4,
};
enum __x_ABI_CWindows_CGraphics_CPrinting3D_CPrint3DTaskDetail
{
    Print3DTaskDetail_Unknown = 0,
    Print3DTaskDetail_ModelExceedsPrintBed = 1,
    Print3DTaskDetail_UploadFailed = 2,
    Print3DTaskDetail_InvalidMaterialSelection = 3,
    Print3DTaskDetail_InvalidModel = 4,
    Print3DTaskDetail_ModelNotManifold = 5,
    Print3DTaskDetail_InvalidPrintTicket = 6,
};
enum __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DBufferFormat
{
    Printing3DBufferFormat_Unknown = 0,
    Printing3DBufferFormat_R32G32B32A32Float = 2,
    Printing3DBufferFormat_R32G32B32A32UInt = 3,
    Printing3DBufferFormat_R32G32B32Float = 6,
    Printing3DBufferFormat_R32G32B32UInt = 7,
    Printing3DBufferFormat_Printing3DDouble = 500,
    Printing3DBufferFormat_Printing3DUInt = 501,
};
enum __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DMeshVerificationMode
{
    Printing3DMeshVerificationMode_FindFirstError = 0,
    Printing3DMeshVerificationMode_FindAllErrors = 1,
};
enum __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DModelUnit
{
    Printing3DModelUnit_Meter = 0,
    Printing3DModelUnit_Micron = 1,
    Printing3DModelUnit_Millimeter = 2,
    Printing3DModelUnit_Centimeter = 3,
    Printing3DModelUnit_Inch = 4,
    Printing3DModelUnit_Foot = 5,
};
enum __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DObjectType
{
    Printing3DObjectType_Model = 0,
    Printing3DObjectType_Support = 1,
    Printing3DObjectType_Others = 2,
};
enum __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DPackageCompression
{
    Printing3DPackageCompression_Low = 0,
    Printing3DPackageCompression_Medium = 1,
    Printing3DPackageCompression_High = 2,
};
enum __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DTextureEdgeBehavior
{
    Printing3DTextureEdgeBehavior_None = 0,
    Printing3DTextureEdgeBehavior_Wrap = 1,
    Printing3DTextureEdgeBehavior_Mirror = 2,
    Printing3DTextureEdgeBehavior_Clamp = 3,
};
struct __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DBufferDescription
{
    __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DBufferFormat Format;
    UINT32 Stride;
};
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedArgs * args
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedHandlerVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,args) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrint3DManager[] = L"Windows.Graphics.Printing3D.IPrint3DManager";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_TaskRequested )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DManager_Windows__CGraphics__CPrinting3D__CPrint3DTaskRequestedEventArgs * eventHandler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TaskRequested )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManager * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManagerVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManager
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_TaskRequested(This,eventHandler,token) )
    ( (This)->lpVtbl->remove_TaskRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrint3DManagerStatics[] = L"Windows.Graphics.Printing3D.IPrint3DManagerStatics";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManager * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ShowPrintUIAsync )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManagerStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManagerStaticsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,result) )
    ( (This)->lpVtbl->ShowPrintUIAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrint3DTask[] = L"Windows.Graphics.Printing3D.IPrint3DTask";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTask * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTask * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTask * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTask * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTask * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTask * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTask * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Submitting )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTask * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_IInspectable * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Submitting )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTask * This,
                  EventRegistrationToken eventCookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Completed )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTask * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskCompletedEventArgs * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Completed )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTask * This,
                  EventRegistrationToken eventCookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SourceChanged )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTask * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting3D__CPrint3DTask_Windows__CGraphics__CPrinting3D__CPrint3DTaskSourceChangedEventArgs * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SourceChanged )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTask * This,
                  EventRegistrationToken eventCookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTask
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Source(This,value) )
    ( (This)->lpVtbl->add_Submitting(This,eventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_Submitting(This,eventCookie) )
    ( (This)->lpVtbl->add_Completed(This,eventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_Completed(This,eventCookie) )
    ( (This)->lpVtbl->add_SourceChanged(This,eventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_SourceChanged(This,eventCookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTask;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrint3DTaskCompletedEventArgs[] = L"Windows.Graphics.Printing3D.IPrint3DTaskCompletedEventArgs";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Completion )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskCompletedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CPrint3DTaskCompletion * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedStatus )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskCompletedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CPrint3DTaskDetail * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Completion(This,value) )
    ( (This)->lpVtbl->get_ExtendedStatus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrint3DTaskRequest[] = L"Windows.Graphics.Printing3D.IPrint3DTaskRequest";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateTask )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequest * This,
                  __RPC__in HSTRING title,
                  __RPC__in HSTRING printerId,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedHandler * handler,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTask * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequestVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateTask(This,title,printerId,handler,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrint3DTaskRequestedEventArgs[] = L"Windows.Graphics.Printing3D.IPrint3DTaskRequestedEventArgs";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequest * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrint3DTaskSourceChangedEventArgs[] = L"Windows.Graphics.Printing3D.IPrint3DTaskSourceChangedEventArgs";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceChangedEventArgsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Source(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrint3DTaskSourceRequestedArgs[] = L"Windows.Graphics.Printing3D.IPrint3DTaskSourceRequestedArgs";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetSource )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage * source
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedArgsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetSource(This,source) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrint3DTaskSourceRequestedArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3D3MFPackage[] = L"Windows.Graphics.Printing3D.IPrinting3D3MFPackage";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SaveAsync )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrintTicket )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PrintTicket )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ModelPart )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ModelPart )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Thumbnail )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Textures )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTextureResource * * value
        );
    HRESULT ( STDMETHODCALLTYPE *LoadModelFromPackageAsync )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * value,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DModel * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SaveModelToPackageAsync )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackageVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SaveAsync(This,operation) )
    ( (This)->lpVtbl->get_PrintTicket(This,value) )
    ( (This)->lpVtbl->put_PrintTicket(This,value) )
    ( (This)->lpVtbl->get_ModelPart(This,value) )
    ( (This)->lpVtbl->put_ModelPart(This,value) )
    ( (This)->lpVtbl->get_Thumbnail(This,value) )
    ( (This)->lpVtbl->put_Thumbnail(This,value) )
    ( (This)->lpVtbl->get_Textures(This,value) )
    ( (This)->lpVtbl->LoadModelFromPackageAsync(This,value,operation) )
    ( (This)->lpVtbl->SaveModelToPackageAsync(This,value,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3D3MFPackage2[] = L"Windows.Graphics.Printing3D.IPrinting3D3MFPackage2";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Compression )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage2 * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DPackageCompression * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Compression )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage2 * This,
                  __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DPackageCompression value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage2Vtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Compression(This,value) )
    ( (This)->lpVtbl->put_Compression(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackage2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3D3MFPackageStatics[] = L"Windows.Graphics.Printing3D.IPrinting3D3MFPackageStatics";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackageStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackageStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackageStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackageStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackageStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackageStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackageStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *LoadAsync )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackageStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * value,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3D3MFPackage * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackageStaticsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackageStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackageStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->LoadAsync(This,value,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3D3MFPackageStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DBaseMaterial[] = L"Windows.Graphics.Printing3D.IPrinting3DBaseMaterial";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Color )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->put_Name(This,value) )
    ( (This)->lpVtbl->get_Color(This,value) )
    ( (This)->lpVtbl->put_Color(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterial;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialGroup[] = L"Windows.Graphics.Printing3D.IPrinting3DBaseMaterialGroup";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Bases )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterial * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaterialGroupId )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroupVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroupVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Bases(This,value) )
    ( (This)->lpVtbl->get_MaterialGroupId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialGroupFactory[] = L"Windows.Graphics.Printing3D.IPrinting3DBaseMaterialGroupFactory";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroupFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroupFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroupFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroupFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroupFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroupFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroupFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroupFactory * This,
                  UINT32 MaterialGroupId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroupFactoryVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroupFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroupFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,MaterialGroupId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroupFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DBaseMaterialStatics[] = L"Windows.Graphics.Printing3D.IPrinting3DBaseMaterialStatics";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Abs )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pla )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialStaticsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Abs(This,value) )
    ( (This)->lpVtbl->get_Pla(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DColorMaterial[] = L"Windows.Graphics.Printing3D.IPrinting3DColorMaterial";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial * This,
                  UINT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DColorMaterial2[] = L"Windows.Graphics.Printing3D.IPrinting3DColorMaterial2";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Color )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial2 * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial2Vtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Color(This,value) )
    ( (This)->lpVtbl->put_Color(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterial2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DColorMaterialGroup[] = L"Windows.Graphics.Printing3D.IPrinting3DColorMaterialGroup";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Colors )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterial * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaterialGroupId )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroupVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroupVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Colors(This,value) )
    ( (This)->lpVtbl->get_MaterialGroupId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DColorMaterialGroupFactory[] = L"Windows.Graphics.Printing3D.IPrinting3DColorMaterialGroupFactory";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroupFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroupFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroupFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroupFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroupFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroupFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroupFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroupFactory * This,
                  UINT32 MaterialGroupId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroup * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroupFactoryVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroupFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroupFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,MaterialGroupId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DColorMaterialGroupFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DComponent[] = L"Windows.Graphics.Printing3D.IPrinting3DComponent";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Mesh )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Mesh )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Components )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponentWithMatrix * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Thumbnail )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DObjectType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Type )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * This,
                  __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DObjectType value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PartNumber )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PartNumber )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Mesh(This,value) )
    ( (This)->lpVtbl->put_Mesh(This,value) )
    ( (This)->lpVtbl->get_Components(This,value) )
    ( (This)->lpVtbl->get_Thumbnail(This,value) )
    ( (This)->lpVtbl->put_Thumbnail(This,value) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->put_Type(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->put_Name(This,value) )
    ( (This)->lpVtbl->get_PartNumber(This,value) )
    ( (This)->lpVtbl->put_PartNumber(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DComponentWithMatrix[] = L"Windows.Graphics.Printing3D.IPrinting3DComponentWithMatrix";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrixVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Component )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Component )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Matrix )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Matrix )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrixVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrixVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Component(This,value) )
    ( (This)->lpVtbl->put_Component(This,value) )
    ( (This)->lpVtbl->get_Matrix(This,value) )
    ( (This)->lpVtbl->put_Matrix(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponentWithMatrix;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterial[] = L"Windows.Graphics.Printing3D.IPrinting3DCompositeMaterial";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Values )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial * This,
                           __RPC__deref_out_opt __FIVector_1_double * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Values(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterial;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroup[] = L"Windows.Graphics.Printing3D.IPrinting3DCompositeMaterialGroup";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Composites )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterial * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaterialGroupId )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaterialIndices )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup * This,
                           __RPC__deref_out_opt __FIVector_1_UINT32 * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroupVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroupVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Composites(This,value) )
    ( (This)->lpVtbl->get_MaterialGroupId(This,value) )
    ( (This)->lpVtbl->get_MaterialIndices(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroup2[] = L"Windows.Graphics.Printing3D.IPrinting3DCompositeMaterialGroup2";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BaseMaterialGroup )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BaseMaterialGroup )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DBaseMaterialGroup * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup2Vtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BaseMaterialGroup(This,value) )
    ( (This)->lpVtbl->put_BaseMaterialGroup(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DCompositeMaterialGroupFactory[] = L"Windows.Graphics.Printing3D.IPrinting3DCompositeMaterialGroupFactory";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroupFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroupFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroupFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroupFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroupFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroupFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroupFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroupFactory * This,
                  UINT32 MaterialGroupId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroup * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroupFactoryVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroupFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroupFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,MaterialGroupId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DCompositeMaterialGroupFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DFaceReductionOptions[] = L"Windows.Graphics.Printing3D.IPrinting3DFaceReductionOptions";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DFaceReductionOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DFaceReductionOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DFaceReductionOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DFaceReductionOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DFaceReductionOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DFaceReductionOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DFaceReductionOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxReductionArea )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DFaceReductionOptions * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxReductionArea )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DFaceReductionOptions * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TargetTriangleCount )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DFaceReductionOptions * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TargetTriangleCount )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DFaceReductionOptions * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxEdgeLength )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DFaceReductionOptions * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxEdgeLength )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DFaceReductionOptions * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DFaceReductionOptionsVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DFaceReductionOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DFaceReductionOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxReductionArea(This,value) )
    ( (This)->lpVtbl->put_MaxReductionArea(This,value) )
    ( (This)->lpVtbl->get_TargetTriangleCount(This,value) )
    ( (This)->lpVtbl->put_TargetTriangleCount(This,value) )
    ( (This)->lpVtbl->get_MaxEdgeLength(This,value) )
    ( (This)->lpVtbl->put_MaxEdgeLength(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DFaceReductionOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DMaterial[] = L"Windows.Graphics.Printing3D.IPrinting3DMaterial";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMaterial * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMaterial * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMaterial * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMaterial * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMaterial * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMaterial * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BaseGroups )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMaterial * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DBaseMaterialGroup * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ColorGroups )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMaterial * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DColorMaterialGroup * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Texture2CoordGroups )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMaterial * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterialGroup * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CompositeGroups )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMaterial * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DCompositeMaterialGroup * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MultiplePropertyGroups )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMaterial * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterialGroup * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMaterialVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMaterial
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMaterialVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BaseGroups(This,value) )
    ( (This)->lpVtbl->get_ColorGroups(This,value) )
    ( (This)->lpVtbl->get_Texture2CoordGroups(This,value) )
    ( (This)->lpVtbl->get_CompositeGroups(This,value) )
    ( (This)->lpVtbl->get_MultiplePropertyGroups(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMaterial;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DMesh[] = L"Windows.Graphics.Printing3D.IPrinting3DMesh";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMeshVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_VertexCount )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VertexCount )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IndexCount )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IndexCount )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VertexPositionsDescription )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DBufferDescription * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VertexPositionsDescription )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                  __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DBufferDescription value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VertexNormalsDescription )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DBufferDescription * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VertexNormalsDescription )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                  __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DBufferDescription value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TriangleIndicesDescription )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DBufferDescription * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TriangleIndicesDescription )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                  __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DBufferDescription value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TriangleMaterialIndicesDescription )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DBufferDescription * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TriangleMaterialIndicesDescription )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                  __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DBufferDescription value
        );
    HRESULT ( STDMETHODCALLTYPE *GetVertexPositions )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *CreateVertexPositions )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                  UINT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *GetVertexNormals )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *CreateVertexNormals )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                  UINT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *GetTriangleIndices )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *CreateTriangleIndices )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                  UINT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *GetTriangleMaterialIndices )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *CreateTriangleMaterialIndices )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BufferDescriptionSet )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BufferSet )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    HRESULT ( STDMETHODCALLTYPE *VerifyAsync )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh * This,
                  __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DMeshVerificationMode value,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CPrinting3D__CPrinting3DMeshVerificationResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMeshVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMeshVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_VertexCount(This,value) )
    ( (This)->lpVtbl->put_VertexCount(This,value) )
    ( (This)->lpVtbl->get_IndexCount(This,value) )
    ( (This)->lpVtbl->put_IndexCount(This,value) )
    ( (This)->lpVtbl->get_VertexPositionsDescription(This,value) )
    ( (This)->lpVtbl->put_VertexPositionsDescription(This,value) )
    ( (This)->lpVtbl->get_VertexNormalsDescription(This,value) )
    ( (This)->lpVtbl->put_VertexNormalsDescription(This,value) )
    ( (This)->lpVtbl->get_TriangleIndicesDescription(This,value) )
    ( (This)->lpVtbl->put_TriangleIndicesDescription(This,value) )
    ( (This)->lpVtbl->get_TriangleMaterialIndicesDescription(This,value) )
    ( (This)->lpVtbl->put_TriangleMaterialIndicesDescription(This,value) )
    ( (This)->lpVtbl->GetVertexPositions(This,buffer) )
    ( (This)->lpVtbl->CreateVertexPositions(This,value) )
    ( (This)->lpVtbl->GetVertexNormals(This,buffer) )
    ( (This)->lpVtbl->CreateVertexNormals(This,value) )
    ( (This)->lpVtbl->GetTriangleIndices(This,buffer) )
    ( (This)->lpVtbl->CreateTriangleIndices(This,value) )
    ( (This)->lpVtbl->GetTriangleMaterialIndices(This,buffer) )
    ( (This)->lpVtbl->CreateTriangleMaterialIndices(This,value) )
    ( (This)->lpVtbl->get_BufferDescriptionSet(This,value) )
    ( (This)->lpVtbl->get_BufferSet(This,value) )
    ( (This)->lpVtbl->VerifyAsync(This,value,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMesh;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DMeshVerificationResult[] = L"Windows.Graphics.Printing3D.IPrinting3DMeshVerificationResult";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMeshVerificationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMeshVerificationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMeshVerificationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMeshVerificationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMeshVerificationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMeshVerificationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMeshVerificationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsValid )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMeshVerificationResult * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NonmanifoldTriangles )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMeshVerificationResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReversedNormalTriangles )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMeshVerificationResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMeshVerificationResultVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMeshVerificationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMeshVerificationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsValid(This,value) )
    ( (This)->lpVtbl->get_NonmanifoldTriangles(This,value) )
    ( (This)->lpVtbl->get_ReversedNormalTriangles(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMeshVerificationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DModel[] = L"Windows.Graphics.Printing3D.IPrinting3DModel";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Unit )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DModelUnit * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Unit )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * This,
                  __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DModelUnit value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Textures )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DModelTexture * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Meshes )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMesh * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Components )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DComponent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Material )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMaterial * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Material )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMaterial * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Build )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Build )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DComponent * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Version )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Version )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RequiredExtensions )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Metadata )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * This,
                           __RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *RepairAsync )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *Clone )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Unit(This,value) )
    ( (This)->lpVtbl->put_Unit(This,value) )
    ( (This)->lpVtbl->get_Textures(This,value) )
    ( (This)->lpVtbl->get_Meshes(This,value) )
    ( (This)->lpVtbl->get_Components(This,value) )
    ( (This)->lpVtbl->get_Material(This,value) )
    ( (This)->lpVtbl->put_Material(This,value) )
    ( (This)->lpVtbl->get_Build(This,value) )
    ( (This)->lpVtbl->put_Build(This,value) )
    ( (This)->lpVtbl->get_Version(This,value) )
    ( (This)->lpVtbl->put_Version(This,value) )
    ( (This)->lpVtbl->get_RequiredExtensions(This,value) )
    ( (This)->lpVtbl->get_Metadata(This,value) )
    ( (This)->lpVtbl->RepairAsync(This,operation) )
    ( (This)->lpVtbl->Clone(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DModel2[] = L"Windows.Graphics.Printing3D.IPrinting3DModel2";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *TryPartialRepairAsync )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TryPartialRepairWithTimeAsync )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel2 * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan maxWaitTime,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TryReduceFacesAsync )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel2 * This,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_boolean_double * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TryReduceFacesWithOptionsAsync )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DFaceReductionOptions * printing3DFaceReductionOptions,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_boolean_double * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TryReduceFacesWithOptionsAndTimeAsync )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DFaceReductionOptions * printing3DFaceReductionOptions,
                  __x_ABI_CWindows_CFoundation_CTimeSpan maxWait,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_boolean_double * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RepairWithProgressAsync )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel2 * This,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_boolean_double * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel2Vtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryPartialRepairAsync(This,operation) )
    ( (This)->lpVtbl->TryPartialRepairWithTimeAsync(This,maxWaitTime,operation) )
    ( (This)->lpVtbl->TryReduceFacesAsync(This,operation) )
    ( (This)->lpVtbl->TryReduceFacesWithOptionsAsync(This,printing3DFaceReductionOptions,operation) )
    ( (This)->lpVtbl->TryReduceFacesWithOptionsAndTimeAsync(This,printing3DFaceReductionOptions,maxWait,operation) )
    ( (This)->lpVtbl->RepairWithProgressAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModel2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DModelTexture[] = L"Windows.Graphics.Printing3D.IPrinting3DModelTexture";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTextureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TextureResource )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TextureResource )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TileStyleU )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DTextureEdgeBehavior * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TileStyleU )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * This,
                  __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DTextureEdgeBehavior value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TileStyleV )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DTextureEdgeBehavior * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TileStyleV )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * This,
                  __x_ABI_CWindows_CGraphics_CPrinting3D_CPrinting3DTextureEdgeBehavior value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTextureVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTextureVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TextureResource(This,value) )
    ( (This)->lpVtbl->put_TextureResource(This,value) )
    ( (This)->lpVtbl->get_TileStyleU(This,value) )
    ( (This)->lpVtbl->put_TileStyleU(This,value) )
    ( (This)->lpVtbl->get_TileStyleV(This,value) )
    ( (This)->lpVtbl->put_TileStyleV(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterial[] = L"Windows.Graphics.Printing3D.IPrinting3DMultiplePropertyMaterial";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaterialIndices )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial * This,
                           __RPC__deref_out_opt __FIVector_1_UINT32 * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaterialIndices(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterial;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterialGroup[] = L"Windows.Graphics.Printing3D.IPrinting3DMultiplePropertyMaterialGroup";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MultipleProperties )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DMultiplePropertyMaterial * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaterialGroupIndices )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup * This,
                           __RPC__deref_out_opt __FIVector_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaterialGroupId )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroupVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroupVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MultipleProperties(This,value) )
    ( (This)->lpVtbl->get_MaterialGroupIndices(This,value) )
    ( (This)->lpVtbl->get_MaterialGroupId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DMultiplePropertyMaterialGroupFactory[] = L"Windows.Graphics.Printing3D.IPrinting3DMultiplePropertyMaterialGroupFactory";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroupFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroupFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroupFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroupFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroupFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroupFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroupFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroupFactory * This,
                  UINT32 MaterialGroupId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroup * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroupFactoryVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroupFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroupFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,MaterialGroupId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DMultiplePropertyMaterialGroupFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterial[] = L"Windows.Graphics.Printing3D.IPrinting3DTexture2CoordMaterial";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Texture )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Texture )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_U )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_U )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_V )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_V )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Texture(This,value) )
    ( (This)->lpVtbl->put_Texture(This,value) )
    ( (This)->lpVtbl->get_U(This,value) )
    ( (This)->lpVtbl->put_U(This,value) )
    ( (This)->lpVtbl->get_V(This,value) )
    ( (This)->lpVtbl->put_V(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterial;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroup[] = L"Windows.Graphics.Printing3D.IPrinting3DTexture2CoordMaterialGroup";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Texture2Coords )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CGraphics__CPrinting3D__CPrinting3DTexture2CoordMaterial * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaterialGroupId )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroupVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroupVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Texture2Coords(This,value) )
    ( (This)->lpVtbl->get_MaterialGroupId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroup2[] = L"Windows.Graphics.Printing3D.IPrinting3DTexture2CoordMaterialGroup2";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Texture )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Texture )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DModelTexture * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup2Vtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Texture(This,value) )
    ( (This)->lpVtbl->put_Texture(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DTexture2CoordMaterialGroupFactory[] = L"Windows.Graphics.Printing3D.IPrinting3DTexture2CoordMaterialGroupFactory";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroupFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroupFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroupFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroupFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroupFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroupFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroupFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroupFactory * This,
                  UINT32 MaterialGroupId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroup * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroupFactoryVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroupFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroupFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,MaterialGroupId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTexture2CoordMaterialGroupFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing3D_IPrinting3DTextureResource[] = L"Windows.Graphics.Printing3D.IPrinting3DTextureResource";
typedef struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TextureData )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TextureData )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResourceVtbl;
interface __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TextureData(This,value) )
    ( (This)->lpVtbl->put_TextureData(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->put_Name(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting3D_CIPrinting3DTextureResource;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Print3DManager[] = L"Windows.Graphics.Printing3D.Print3DManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Print3DTask[] = L"Windows.Graphics.Printing3D.Print3DTask";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Print3DTaskCompletedEventArgs[] = L"Windows.Graphics.Printing3D.Print3DTaskCompletedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Print3DTaskRequest[] = L"Windows.Graphics.Printing3D.Print3DTaskRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Print3DTaskRequestedEventArgs[] = L"Windows.Graphics.Printing3D.Print3DTaskRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Print3DTaskSourceChangedEventArgs[] = L"Windows.Graphics.Printing3D.Print3DTaskSourceChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Print3DTaskSourceRequestedArgs[] = L"Windows.Graphics.Printing3D.Print3DTaskSourceRequestedArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Printing3D3MFPackage[] = L"Windows.Graphics.Printing3D.Printing3D3MFPackage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Printing3DBaseMaterial[] = L"Windows.Graphics.Printing3D.Printing3DBaseMaterial";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Printing3DBaseMaterialGroup[] = L"Windows.Graphics.Printing3D.Printing3DBaseMaterialGroup";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Printing3DColorMaterial[] = L"Windows.Graphics.Printing3D.Printing3DColorMaterial";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Printing3DColorMaterialGroup[] = L"Windows.Graphics.Printing3D.Printing3DColorMaterialGroup";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Printing3DComponent[] = L"Windows.Graphics.Printing3D.Printing3DComponent";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Printing3DComponentWithMatrix[] = L"Windows.Graphics.Printing3D.Printing3DComponentWithMatrix";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Printing3DCompositeMaterial[] = L"Windows.Graphics.Printing3D.Printing3DCompositeMaterial";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Printing3DCompositeMaterialGroup[] = L"Windows.Graphics.Printing3D.Printing3DCompositeMaterialGroup";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Printing3DFaceReductionOptions[] = L"Windows.Graphics.Printing3D.Printing3DFaceReductionOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Printing3DMaterial[] = L"Windows.Graphics.Printing3D.Printing3DMaterial";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Printing3DMesh[] = L"Windows.Graphics.Printing3D.Printing3DMesh";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Printing3DMeshVerificationResult[] = L"Windows.Graphics.Printing3D.Printing3DMeshVerificationResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Printing3DModel[] = L"Windows.Graphics.Printing3D.Printing3DModel";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Printing3DModelTexture[] = L"Windows.Graphics.Printing3D.Printing3DModelTexture";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Printing3DMultiplePropertyMaterial[] = L"Windows.Graphics.Printing3D.Printing3DMultiplePropertyMaterial";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Printing3DMultiplePropertyMaterialGroup[] = L"Windows.Graphics.Printing3D.Printing3DMultiplePropertyMaterialGroup";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Printing3DTexture2CoordMaterial[] = L"Windows.Graphics.Printing3D.Printing3DTexture2CoordMaterial";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Printing3DTexture2CoordMaterialGroup[] = L"Windows.Graphics.Printing3D.Printing3DTexture2CoordMaterialGroup";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing3D_Printing3DTextureResource[] = L"Windows.Graphics.Printing3D.Printing3DTextureResource";
       
       
#pragma clang diagnostic pop
