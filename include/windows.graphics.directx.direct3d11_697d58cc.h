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
#include "Windows.Graphics.DirectX.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice;
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface;
typedef interface __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;
typedef struct __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, __RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl;
interface __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;
typedef struct __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl;
interface __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;
typedef struct __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                       __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl;
interface __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat;
typedef enum __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DBindings __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DBindings;
typedef enum __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DUsage __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DUsage;
typedef struct __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DMultisampleDescription __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DMultisampleDescription;
typedef struct __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DSurfaceDescription __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DSurfaceDescription;
enum __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DBindings
{
    Direct3DBindings_VertexBuffer = 0x1,
    Direct3DBindings_IndexBuffer = 0x2,
    Direct3DBindings_ConstantBuffer = 0x4,
    Direct3DBindings_ShaderResource = 0x8,
    Direct3DBindings_StreamOutput = 0x10,
    Direct3DBindings_RenderTarget = 0x20,
    Direct3DBindings_DepthStencil = 0x40,
    Direct3DBindings_UnorderedAccess = 0x80,
    Direct3DBindings_Decoder = 0x200,
    Direct3DBindings_VideoEncoder = 0x400,
};
enum __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DUsage
{
    Direct3DUsage_Default = 0,
    Direct3DUsage_Immutable = 1,
    Direct3DUsage_Dynamic = 2,
    Direct3DUsage_Staging = 3,
};
struct __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DMultisampleDescription
{
    INT32 Count;
    INT32 Quality;
};
struct __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DSurfaceDescription
{
    INT32 Width;
    INT32 Height;
    __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat Format;
    __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DMultisampleDescription MultisampleDescription;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_DirectX_Direct3D11_IDirect3DDevice[] = L"Windows.Graphics.DirectX.Direct3D11.IDirect3DDevice";
typedef struct __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Trim )(
        __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDeviceVtbl;
interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Trim(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_DirectX_Direct3D11_IDirect3DSurface[] = L"Windows.Graphics.DirectX.Direct3D11.IDirect3DSurface";
typedef struct __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurfaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DSurfaceDescription * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurfaceVtbl;
interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurfaceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface;
       
       
#pragma clang diagnostic pop
