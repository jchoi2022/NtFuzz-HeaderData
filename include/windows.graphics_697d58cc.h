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
typedef interface __x_ABI_CWindows_CGraphics_CIGeometrySource2D __x_ABI_CWindows_CGraphics_CIGeometrySource2D;
struct __x_ABI_CWindows_CGraphics_CSizeInt32;
typedef interface __FIReference_1_Windows__CGraphics__CSizeInt32 __FIReference_1_Windows__CGraphics__CSizeInt32;
EXTERN_C const IID IID___FIReference_1_Windows__CGraphics__CSizeInt32;
typedef struct __FIReference_1_Windows__CGraphics__CSizeInt32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CGraphics__CSizeInt32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CGraphics__CSizeInt32 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CGraphics__CSizeInt32 * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CGraphics__CSizeInt32 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CGraphics__CSizeInt32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CGraphics__CSizeInt32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CGraphics__CSizeInt32 * This, __RPC__out struct __x_ABI_CWindows_CGraphics_CSizeInt32 *value);
    END_INTERFACE
} __FIReference_1_Windows__CGraphics__CSizeInt32Vtbl;
interface __FIReference_1_Windows__CGraphics__CSizeInt32
{
    CONST_VTBL struct __FIReference_1_Windows__CGraphics__CSizeInt32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef struct __x_ABI_CWindows_CGraphics_CDisplayAdapterId __x_ABI_CWindows_CGraphics_CDisplayAdapterId;
typedef struct __x_ABI_CWindows_CGraphics_CPointInt32 __x_ABI_CWindows_CGraphics_CPointInt32;
typedef struct __x_ABI_CWindows_CGraphics_CRectInt32 __x_ABI_CWindows_CGraphics_CRectInt32;
typedef struct __x_ABI_CWindows_CGraphics_CSizeInt32 __x_ABI_CWindows_CGraphics_CSizeInt32;
struct __x_ABI_CWindows_CGraphics_CDisplayAdapterId
{
    UINT32 LowPart;
    INT32 HighPart;
};
struct __x_ABI_CWindows_CGraphics_CPointInt32
{
    INT32 X;
    INT32 Y;
};
struct __x_ABI_CWindows_CGraphics_CRectInt32
{
    INT32 X;
    INT32 Y;
    INT32 Width;
    INT32 Height;
};
struct __x_ABI_CWindows_CGraphics_CSizeInt32
{
    INT32 Width;
    INT32 Height;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_IGeometrySource2D[] = L"Windows.Graphics.IGeometrySource2D";
typedef struct __x_ABI_CWindows_CGraphics_CIGeometrySource2DVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CIGeometrySource2D * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CIGeometrySource2D * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CIGeometrySource2D * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CIGeometrySource2D * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CIGeometrySource2D * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CIGeometrySource2D * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CGraphics_CIGeometrySource2DVtbl;
interface __x_ABI_CWindows_CGraphics_CIGeometrySource2D
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CIGeometrySource2DVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CIGeometrySource2D;
       
       
#pragma clang diagnostic pop
