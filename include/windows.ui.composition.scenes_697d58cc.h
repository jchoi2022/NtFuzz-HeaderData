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
#include "Windows.Graphics.DirectX.h"
#include "Windows.UI.Composition.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneBoundingBox __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneBoundingBox;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentCollection __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentCollection;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentFactory __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterial __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterial;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialFactory __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInput __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInput;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInputFactory __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInputFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMesh __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMesh;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshMaterialAttributeMap __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshMaterialAttributeMap;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponent __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponent;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponentStatics __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponentStatics;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshStatics __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshStatics;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterial __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterial;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterialStatics __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterialStatics;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransform __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransform;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeCollection __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeCollection;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeStatics __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeStatics;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObject __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObject;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObjectFactory __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObjectFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterialFactory __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterialFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponent __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponent;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponentFactory __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponentFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInput __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInput;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInputStatics __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInputStatics;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisual __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisual;
typedef interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisualStatics __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisualStatics;
enum __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneAttributeSemantic;
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemanticVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This, __RPC__deref_out_opt enum __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneAttributeSemantic *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemanticVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemanticVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemanticVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemanticVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemanticVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemanticVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemanticVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemanticVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneComponent __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneComponent;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneComponent;
typedef struct __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneComponentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This, __RPC__out __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneComponentVtbl;
interface __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneComponent
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneComponentVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneComponent __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneComponent;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneComponent;
typedef struct __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneComponentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneComponent **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneComponentVtbl;
interface __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneComponent
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneComponentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneNode __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneNode;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneNode;
typedef struct __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneNode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneNode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneNode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneNode * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneNode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneNode * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneNode * This, __RPC__out __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneNode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneNode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneNode * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneNodeVtbl;
interface __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneNode
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneNodeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneNode __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneNode;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneNode;
typedef struct __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneNode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneNode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneNode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneNode * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneNode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneNode * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneNode * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CComposition__CScenes__CSceneNode **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneNodeVtbl;
interface __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneNode
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CComposition__CScenes__CSceneNodeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic __FIMapView_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic;
typedef struct __FIMapView_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemanticVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt enum __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneAttributeSemantic *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemanticVtbl;
interface __FIMapView_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemanticVtbl *lpVtbl;
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
typedef interface __FIMap_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic __FIMap_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic;
EXTERN_C const IID IID___FIMap_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic;
typedef struct __FIMap_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemanticVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This,
                   HSTRING key,
                            __RPC__deref_out_opt enum __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneAttributeSemantic **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This,
                   HSTRING key,
                   __RPC__in_opt enum __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneAttributeSemantic *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic * This);
    END_INTERFACE
} __FIMap_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemanticVtbl;
interface __FIMap_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemantic
{
    CONST_VTBL struct __FIMap_2_HSTRING_Windows__CUI__CComposition__CScenes__CSceneAttributeSemanticVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneComponent __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneComponent;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneComponent;
typedef struct __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneComponentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This,
                       __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneComponentVtbl;
interface __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneComponent
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneComponentVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneNode __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneNode;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneNode;
typedef struct __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneNode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneNode * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneNode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneNode * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneNode * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneNode * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneNode * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneNode * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneNode * This,
                       __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneNode * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneNodeVtbl;
interface __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneNode
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneNodeVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponent __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponent;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponent;
typedef struct __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneComponent **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This,
                   __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This, __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponent * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponentVtbl;
interface __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponent
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponentVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNode __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNode;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNode;
typedef struct __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNode * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNode * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNode * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNode * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNode * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNode * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNode * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CComposition__CScenes__CSceneNode **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNode * This,
                   __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNode * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNode * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNode * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNode * This, __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNode * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNode * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNode * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNode * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNodeVtbl;
interface __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNode
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNodeVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIMemoryBuffer __x_ABI_CWindows_CFoundation_CIMemoryBuffer;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 __x_ABI_CWindows_CFoundation_CNumerics_CVector4;
typedef enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat;
typedef enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPrimitiveTopology __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPrimitiveTopology;
typedef enum __x_ABI_CWindows_CUI_CComposition_CCompositionBitmapInterpolationMode __x_ABI_CWindows_CUI_CComposition_CCompositionBitmapInterpolationMode;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositor __x_ABI_CWindows_CUI_CComposition_CICompositor;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionSurface __x_ABI_CWindows_CUI_CComposition_CICompositionSurface;
typedef enum __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneAlphaMode __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneAlphaMode;
typedef enum __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneAttributeSemantic __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneAttributeSemantic;
typedef enum __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneComponentType __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneComponentType;
typedef enum __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneWrappingMode __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneWrappingMode;
enum __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneAlphaMode
{
    SceneAlphaMode_Opaque = 0,
    SceneAlphaMode_AlphaTest = 1,
    SceneAlphaMode_Blend = 2,
};
enum __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneAttributeSemantic
{
    SceneAttributeSemantic_Index = 0,
    SceneAttributeSemantic_Vertex = 1,
    SceneAttributeSemantic_Normal = 2,
    SceneAttributeSemantic_TexCoord0 = 3,
    SceneAttributeSemantic_TexCoord1 = 4,
    SceneAttributeSemantic_Color = 5,
    SceneAttributeSemantic_Tangent = 6,
};
enum __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneComponentType
{
    SceneComponentType_MeshRendererComponent = 0,
};
enum __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneWrappingMode
{
    SceneWrappingMode_ClampToEdge = 0,
    SceneWrappingMode_MirroredRepeat = 1,
    SceneWrappingMode_Repeat = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneBoundingBox[] = L"Windows.UI.Composition.Scenes.ISceneBoundingBox";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneBoundingBoxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneBoundingBox * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneBoundingBox * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneBoundingBox * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneBoundingBox * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneBoundingBox * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneBoundingBox * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Center )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneBoundingBox * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Extents )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneBoundingBox * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Max )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneBoundingBox * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Min )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneBoundingBox * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneBoundingBox * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneBoundingBoxVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneBoundingBox
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneBoundingBoxVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Center(This,value) )
    ( (This)->lpVtbl->get_Extents(This,value) )
    ( (This)->lpVtbl->get_Max(This,value) )
    ( (This)->lpVtbl->get_Min(This,value) )
    ( (This)->lpVtbl->get_Size(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneBoundingBox;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneComponent[] = L"Windows.UI.Composition.Scenes.ISceneComponent";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ComponentType )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneComponentType * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ComponentType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneComponentCollection[] = L"Windows.UI.Composition.Scenes.ISceneComponentCollection";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentCollectionVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneComponentFactory[] = L"Windows.UI.Composition.Scenes.ISceneComponentFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponentFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneMaterial[] = L"Windows.UI.Composition.Scenes.ISceneMaterial";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterial * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterial * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterial * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterial * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterial * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterial * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterial
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterial;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneMaterialFactory[] = L"Windows.UI.Composition.Scenes.ISceneMaterialFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneMaterialInput[] = L"Windows.UI.Composition.Scenes.ISceneMaterialInput";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInputVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInput * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInput * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInput * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInput * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInput * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInput * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInputVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInput
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInputVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInput;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneMaterialInputFactory[] = L"Windows.UI.Composition.Scenes.ISceneMaterialInputFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInputFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInputFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInputFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInputFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInputFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInputFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInputFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInputFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInputFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInputFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInputFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneMesh[] = L"Windows.UI.Composition.Scenes.ISceneMesh";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMesh * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMesh * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMesh * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMesh * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMesh * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMesh * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Bounds )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMesh * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneBoundingBox * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrimitiveTopology )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMesh * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPrimitiveTopology * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PrimitiveTopology )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMesh * This,
                  __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPrimitiveTopology value
        );
    HRESULT ( STDMETHODCALLTYPE *FillMeshAttribute )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMesh * This,
                  __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneAttributeSemantic semantic,
                  __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat format,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIMemoryBuffer * memory
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMesh
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Bounds(This,value) )
    ( (This)->lpVtbl->get_PrimitiveTopology(This,value) )
    ( (This)->lpVtbl->put_PrimitiveTopology(This,value) )
    ( (This)->lpVtbl->FillMeshAttribute(This,semantic,format,memory) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMesh;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneMeshMaterialAttributeMap[] = L"Windows.UI.Composition.Scenes.ISceneMeshMaterialAttributeMap";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshMaterialAttributeMapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshMaterialAttributeMap * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshMaterialAttributeMap * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshMaterialAttributeMap * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshMaterialAttributeMap * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshMaterialAttributeMap * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshMaterialAttributeMap * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshMaterialAttributeMapVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshMaterialAttributeMap
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshMaterialAttributeMapVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshMaterialAttributeMap;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneMeshRendererComponent[] = L"Windows.UI.Composition.Scenes.ISceneMeshRendererComponent";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponent * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponent * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponent * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponent * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponent * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponent * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Material )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponent * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterial * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Material )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponent * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterial * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mesh )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponent * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMesh * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Mesh )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponent * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMesh * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UVMappings )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponent * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshMaterialAttributeMap * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponentVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponent
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Material(This,value) )
    ( (This)->lpVtbl->put_Material(This,value) )
    ( (This)->lpVtbl->get_Mesh(This,value) )
    ( (This)->lpVtbl->put_Mesh(This,value) )
    ( (This)->lpVtbl->get_UVMappings(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponent;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneMeshRendererComponentStatics[] = L"Windows.UI.Composition.Scenes.ISceneMeshRendererComponentStatics";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponentStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponentStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponentStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponentStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponentStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponentStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponentStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponentStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositor * compositor,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponent * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponentStaticsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponentStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponentStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,compositor,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshRendererComponentStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneMeshStatics[] = L"Windows.UI.Composition.Scenes.ISceneMeshStatics";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositor * compositor,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMesh * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshStaticsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,compositor,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMeshStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneMetallicRoughnessMaterial[] = L"Windows.UI.Composition.Scenes.ISceneMetallicRoughnessMaterial";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterial * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterial * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterial * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterial * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterial * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterial * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BaseColorInput )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterial * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInput * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BaseColorInput )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterial * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInput * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BaseColorFactor )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterial * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector4 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BaseColorFactor )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterial * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector4 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MetallicFactor )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterial * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MetallicFactor )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterial * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MetallicRoughnessInput )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterial * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInput * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MetallicRoughnessInput )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterial * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInput * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RoughnessFactor )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterial * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RoughnessFactor )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterial * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterialVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterial
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterialVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BaseColorInput(This,value) )
    ( (This)->lpVtbl->put_BaseColorInput(This,value) )
    ( (This)->lpVtbl->get_BaseColorFactor(This,value) )
    ( (This)->lpVtbl->put_BaseColorFactor(This,value) )
    ( (This)->lpVtbl->get_MetallicFactor(This,value) )
    ( (This)->lpVtbl->put_MetallicFactor(This,value) )
    ( (This)->lpVtbl->get_MetallicRoughnessInput(This,value) )
    ( (This)->lpVtbl->put_MetallicRoughnessInput(This,value) )
    ( (This)->lpVtbl->get_RoughnessFactor(This,value) )
    ( (This)->lpVtbl->put_RoughnessFactor(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterial;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneMetallicRoughnessMaterialStatics[] = L"Windows.UI.Composition.Scenes.ISceneMetallicRoughnessMaterialStatics";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterialStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterialStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterialStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterialStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterialStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterialStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterialStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterialStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositor * compositor,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterial * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterialStaticsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterialStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterialStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,compositor,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMetallicRoughnessMaterialStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneModelTransform[] = L"Windows.UI.Composition.Scenes.ISceneModelTransform";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransformVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransform * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransform * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransform * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransform * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransform * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransform * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransform * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Orientation )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransform * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationAngle )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransform * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationAngle )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransform * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationAngleInDegrees )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransform * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationAngleInDegrees )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransform * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationAxis )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransform * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationAxis )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransform * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Scale )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransform * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Scale )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransform * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Translation )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransform * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Translation )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransform * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransformVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransform
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransformVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Orientation(This,value) )
    ( (This)->lpVtbl->put_Orientation(This,value) )
    ( (This)->lpVtbl->get_RotationAngle(This,value) )
    ( (This)->lpVtbl->put_RotationAngle(This,value) )
    ( (This)->lpVtbl->get_RotationAngleInDegrees(This,value) )
    ( (This)->lpVtbl->put_RotationAngleInDegrees(This,value) )
    ( (This)->lpVtbl->get_RotationAxis(This,value) )
    ( (This)->lpVtbl->put_RotationAxis(This,value) )
    ( (This)->lpVtbl->get_Scale(This,value) )
    ( (This)->lpVtbl->put_Scale(This,value) )
    ( (This)->lpVtbl->get_Translation(This,value) )
    ( (This)->lpVtbl->put_Translation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransform;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneNode[] = L"Windows.UI.Composition.Scenes.ISceneNode";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Children )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneNode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Components )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CComposition__CScenes__CSceneComponent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Parent )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Transform )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneModelTransform * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FindFirstComponentOfType )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * This,
                  __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneComponentType value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneComponent * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Children(This,value) )
    ( (This)->lpVtbl->get_Components(This,value) )
    ( (This)->lpVtbl->get_Parent(This,value) )
    ( (This)->lpVtbl->get_Transform(This,value) )
    ( (This)->lpVtbl->FindFirstComponentOfType(This,value,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneNodeCollection[] = L"Windows.UI.Composition.Scenes.ISceneNodeCollection";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeCollectionVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneNodeStatics[] = L"Windows.UI.Composition.Scenes.ISceneNodeStatics";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositor * compositor,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeStaticsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,compositor,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNodeStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneObject[] = L"Windows.UI.Composition.Scenes.ISceneObject";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObject * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObject * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObject * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObject * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObject * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObject * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObjectVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObject
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObjectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObject;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneObjectFactory[] = L"Windows.UI.Composition.Scenes.ISceneObjectFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObjectFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObjectFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObjectFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObjectFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObjectFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObjectFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObjectFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObjectFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObjectFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObjectFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneObjectFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_IScenePbrMaterial[] = L"Windows.UI.Composition.Scenes.IScenePbrMaterial";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AlphaCutoff )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AlphaCutoff )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlphaMode )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneAlphaMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AlphaMode )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This,
                  __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneAlphaMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EmissiveInput )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInput * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EmissiveInput )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInput * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EmissiveFactor )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EmissiveFactor )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDoubleSided )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsDoubleSided )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NormalInput )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInput * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NormalInput )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInput * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NormalScale )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NormalScale )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OcclusionInput )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInput * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OcclusionInput )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneMaterialInput * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OcclusionStrength )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OcclusionStrength )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterialVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterialVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AlphaCutoff(This,value) )
    ( (This)->lpVtbl->put_AlphaCutoff(This,value) )
    ( (This)->lpVtbl->get_AlphaMode(This,value) )
    ( (This)->lpVtbl->put_AlphaMode(This,value) )
    ( (This)->lpVtbl->get_EmissiveInput(This,value) )
    ( (This)->lpVtbl->put_EmissiveInput(This,value) )
    ( (This)->lpVtbl->get_EmissiveFactor(This,value) )
    ( (This)->lpVtbl->put_EmissiveFactor(This,value) )
    ( (This)->lpVtbl->get_IsDoubleSided(This,value) )
    ( (This)->lpVtbl->put_IsDoubleSided(This,value) )
    ( (This)->lpVtbl->get_NormalInput(This,value) )
    ( (This)->lpVtbl->put_NormalInput(This,value) )
    ( (This)->lpVtbl->get_NormalScale(This,value) )
    ( (This)->lpVtbl->put_NormalScale(This,value) )
    ( (This)->lpVtbl->get_OcclusionInput(This,value) )
    ( (This)->lpVtbl->put_OcclusionInput(This,value) )
    ( (This)->lpVtbl->get_OcclusionStrength(This,value) )
    ( (This)->lpVtbl->put_OcclusionStrength(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterial;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_IScenePbrMaterialFactory[] = L"Windows.UI.Composition.Scenes.IScenePbrMaterialFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterialFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterialFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterialFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterialFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterialFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterialFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterialFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterialFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterialFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterialFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CIScenePbrMaterialFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneRendererComponent[] = L"Windows.UI.Composition.Scenes.ISceneRendererComponent";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponent * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponent * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponent * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponent * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponent * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponent * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponentVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponent
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponent;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneRendererComponentFactory[] = L"Windows.UI.Composition.Scenes.ISceneRendererComponentFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponentFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponentFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponentFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponentFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponentFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponentFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponentFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponentFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponentFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponentFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneRendererComponentFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneSurfaceMaterialInput[] = L"Windows.UI.Composition.Scenes.ISceneSurfaceMaterialInput";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInputVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInput * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInput * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInput * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInput * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInput * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInput * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BitmapInterpolationMode )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInput * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CCompositionBitmapInterpolationMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BitmapInterpolationMode )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInput * This,
                  __x_ABI_CWindows_CUI_CComposition_CCompositionBitmapInterpolationMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Surface )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInput * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionSurface * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Surface )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInput * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionSurface * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WrappingUMode )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInput * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneWrappingMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_WrappingUMode )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInput * This,
                  __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneWrappingMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WrappingVMode )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInput * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneWrappingMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_WrappingVMode )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInput * This,
                  __x_ABI_CWindows_CUI_CComposition_CScenes_CSceneWrappingMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInputVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInput
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInputVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BitmapInterpolationMode(This,value) )
    ( (This)->lpVtbl->put_BitmapInterpolationMode(This,value) )
    ( (This)->lpVtbl->get_Surface(This,value) )
    ( (This)->lpVtbl->put_Surface(This,value) )
    ( (This)->lpVtbl->get_WrappingUMode(This,value) )
    ( (This)->lpVtbl->put_WrappingUMode(This,value) )
    ( (This)->lpVtbl->get_WrappingVMode(This,value) )
    ( (This)->lpVtbl->put_WrappingVMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInput;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneSurfaceMaterialInputStatics[] = L"Windows.UI.Composition.Scenes.ISceneSurfaceMaterialInputStatics";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInputStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInputStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInputStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInputStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInputStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInputStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInputStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInputStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositor * compositor,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInput * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInputStaticsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInputStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInputStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,compositor,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneSurfaceMaterialInputStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneVisual[] = L"Windows.UI.Composition.Scenes.ISceneVisual";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisualVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisual * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisual * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisual * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisual * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisual * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisual * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Root )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisual * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Root )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisual * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneNode * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisualVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisual
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisualVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Root(This,value) )
    ( (This)->lpVtbl->put_Root(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisual;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Scenes_ISceneVisualStatics[] = L"Windows.UI.Composition.Scenes.ISceneVisualStatics";
typedef struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisualStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisualStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisualStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisualStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisualStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisualStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisualStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisualStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositor * compositor,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisual * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisualStaticsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisualStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisualStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,compositor,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CScenes_CISceneVisualStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Scenes_SceneBoundingBox[] = L"Windows.UI.Composition.Scenes.SceneBoundingBox";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Scenes_SceneComponent[] = L"Windows.UI.Composition.Scenes.SceneComponent";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Scenes_SceneComponentCollection[] = L"Windows.UI.Composition.Scenes.SceneComponentCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Scenes_SceneMaterial[] = L"Windows.UI.Composition.Scenes.SceneMaterial";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Scenes_SceneMaterialInput[] = L"Windows.UI.Composition.Scenes.SceneMaterialInput";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Scenes_SceneMesh[] = L"Windows.UI.Composition.Scenes.SceneMesh";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Scenes_SceneMeshMaterialAttributeMap[] = L"Windows.UI.Composition.Scenes.SceneMeshMaterialAttributeMap";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Scenes_SceneMeshRendererComponent[] = L"Windows.UI.Composition.Scenes.SceneMeshRendererComponent";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Scenes_SceneMetallicRoughnessMaterial[] = L"Windows.UI.Composition.Scenes.SceneMetallicRoughnessMaterial";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Scenes_SceneModelTransform[] = L"Windows.UI.Composition.Scenes.SceneModelTransform";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Scenes_SceneNode[] = L"Windows.UI.Composition.Scenes.SceneNode";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Scenes_SceneNodeCollection[] = L"Windows.UI.Composition.Scenes.SceneNodeCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Scenes_SceneObject[] = L"Windows.UI.Composition.Scenes.SceneObject";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Scenes_ScenePbrMaterial[] = L"Windows.UI.Composition.Scenes.ScenePbrMaterial";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Scenes_SceneRendererComponent[] = L"Windows.UI.Composition.Scenes.SceneRendererComponent";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Scenes_SceneSurfaceMaterialInput[] = L"Windows.UI.Composition.Scenes.SceneSurfaceMaterialInput";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Scenes_SceneVisual[] = L"Windows.UI.Composition.Scenes.SceneVisual";
       
       
#pragma clang diagnostic pop
