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
#include "Windows.System.h"
#include "Windows.UI.h"
#include "Windows.UI.Composition.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowChangedEventArgs __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowChangedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowCloseRequestedEventArgs __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowCloseRequestedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowClosedEventArgs __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowClosedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrame __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrame;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrameStyle __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrameStyle;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPlacement __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPlacement;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfiguration __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfiguration;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfigurationFactory __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfigurationFactory;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresenter __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresenter;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowStatics __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowStatics;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarOcclusion __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarOcclusion;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarVisibility __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarVisibility;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CICompactOverlayPresentationConfiguration __x_ABI_CWindows_CUI_CWindowManagement_CICompactOverlayPresentationConfiguration;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIDefaultPresentationConfiguration __x_ABI_CWindows_CUI_CWindowManagement_CIDefaultPresentationConfiguration;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIFullScreenPresentationConfiguration __x_ABI_CWindows_CUI_CWindowManagement_CIFullScreenPresentationConfiguration;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentAddedEventArgs __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentAddedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentChangedEventArgs __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentChangedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentRemovedEventArgs __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentRemovedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentStatics __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentStatics;
typedef interface __FIIterator_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion __FIIterator_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion;
typedef struct __FIIterator_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This, __RPC__out __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarOcclusion * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarOcclusion * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusionVtbl;
interface __FIIterator_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion __FIIterable_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion;
typedef struct __FIIterable_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusionVtbl;
interface __FIIterable_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion;
typedef struct __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion * This, __RPC__out __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegionVtbl;
interface __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegion __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegion;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegion;
typedef struct __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegion * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegion * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegion * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegion * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegion * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegionVtbl;
interface __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegion
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CWindowManagement__CWindowingEnvironment __FIIterator_1_Windows__CUI__CWindowManagement__CWindowingEnvironment;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CWindowManagement__CWindowingEnvironment;
typedef struct __FIIterator_1_Windows__CUI__CWindowManagement__CWindowingEnvironmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This, __RPC__out __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CWindowManagement__CWindowingEnvironmentVtbl;
interface __FIIterator_1_Windows__CUI__CWindowManagement__CWindowingEnvironment
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CWindowManagement__CWindowingEnvironmentVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CWindowManagement__CWindowingEnvironment __FIIterable_1_Windows__CUI__CWindowManagement__CWindowingEnvironment;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CWindowManagement__CWindowingEnvironment;
typedef struct __FIIterable_1_Windows__CUI__CWindowManagement__CWindowingEnvironmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CWindowManagement__CWindowingEnvironment **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CWindowManagement__CWindowingEnvironmentVtbl;
interface __FIIterable_1_Windows__CUI__CWindowManagement__CWindowingEnvironment
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CWindowManagement__CWindowingEnvironmentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion __FIVectorView_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion;
typedef struct __FIVectorView_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarOcclusion * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This,
                       __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarOcclusion * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarOcclusion * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusionVtbl;
interface __FIVectorView_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusionVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion;
typedef struct __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                       __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegionVtbl;
interface __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegionVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CWindowManagement__CWindowingEnvironment __FIVectorView_1_Windows__CUI__CWindowManagement__CWindowingEnvironment;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CWindowManagement__CWindowingEnvironment;
typedef struct __FIVectorView_1_Windows__CUI__CWindowManagement__CWindowingEnvironmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This,
                       __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CWindowManagement__CWindowingEnvironmentVtbl;
interface __FIVectorView_1_Windows__CUI__CWindowManagement__CWindowingEnvironment
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CWindowManagement__CWindowingEnvironmentVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWindowManagement__CAppWindow __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWindowManagement__CAppWindow;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CWindowManagement__CAppWindow;
typedef interface __FIAsyncOperation_1_Windows__CUI__CWindowManagement__CAppWindow __FIAsyncOperation_1_Windows__CUI__CWindowManagement__CAppWindow;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWindowManagement__CAppWindowVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWindowManagement__CAppWindow * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWindowManagement__CAppWindow * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWindowManagement__CAppWindow * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWindowManagement__CAppWindow * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CWindowManagement__CAppWindow *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWindowManagement__CAppWindowVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWindowManagement__CAppWindow
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWindowManagement__CAppWindowVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CUI__CWindowManagement__CAppWindow __FIAsyncOperation_1_Windows__CUI__CWindowManagement__CAppWindow;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CWindowManagement__CAppWindow;
typedef struct __FIAsyncOperation_1_Windows__CUI__CWindowManagement__CAppWindowVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CWindowManagement__CAppWindow * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CWindowManagement__CAppWindow * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CWindowManagement__CAppWindow * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CWindowManagement__CAppWindow * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CWindowManagement__CAppWindow * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CWindowManagement__CAppWindow * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CWindowManagement__CAppWindow * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWindowManagement__CAppWindow *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CWindowManagement__CAppWindow * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CWindowManagement__CAppWindow **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CWindowManagement__CAppWindow * This, __RPC__out __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CWindowManagement__CAppWindowVtbl;
interface __FIAsyncOperation_1_Windows__CUI__CWindowManagement__CAppWindow
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CWindowManagement__CAppWindowVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowChangedEventArgs __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowCloseRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowCloseRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowCloseRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowCloseRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowCloseRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowCloseRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowCloseRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowCloseRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowCloseRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowCloseRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowCloseRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowCloseRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowClosedEventArgs __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowClosedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowClosedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowClosedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowClosedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowClosedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowClosedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowClosedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowClosedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowClosedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowClosedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CDisplayRegion_IInspectable __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CDisplayRegion_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CWindowManagement__CDisplayRegion_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CDisplayRegion_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CDisplayRegion_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CDisplayRegion_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CDisplayRegion_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CDisplayRegion_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CDisplayRegion_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CDisplayRegion_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CDisplayRegion_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CWindowingEnvironment_Windows__CUI__CWindowManagement__CWindowingEnvironmentChangedEventArgs __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CWindowingEnvironment_Windows__CUI__CWindowManagement__CWindowingEnvironmentChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CWindowManagement__CWindowingEnvironment_Windows__CUI__CWindowManagement__CWindowingEnvironmentChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CWindowingEnvironment_Windows__CUI__CWindowManagement__CWindowingEnvironmentChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CWindowingEnvironment_Windows__CUI__CWindowManagement__CWindowingEnvironmentChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CWindowingEnvironment_Windows__CUI__CWindowManagement__CWindowingEnvironmentChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CWindowingEnvironment_Windows__CUI__CWindowManagement__CWindowingEnvironmentChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CWindowingEnvironment_Windows__CUI__CWindowManagement__CWindowingEnvironmentChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CWindowingEnvironment_Windows__CUI__CWindowManagement__CWindowingEnvironmentChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CWindowingEnvironment_Windows__CUI__CWindowManagement__CWindowingEnvironmentChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CWindowingEnvironment_Windows__CUI__CWindowManagement__CWindowingEnvironmentChangedEventArgsVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CUI_CComposition_CIVisualElement __x_ABI_CWindows_CUI_CComposition_CIVisualElement;
typedef interface __FIIterator_1_Windows__CUI__CComposition__CIVisualElement __FIIterator_1_Windows__CUI__CComposition__CIVisualElement;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CComposition__CIVisualElement;
typedef struct __FIIterator_1_Windows__CUI__CComposition__CIVisualElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CComposition__CIVisualElement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CIVisualElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CIVisualElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CIVisualElement * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__out __x_ABI_CWindows_CUI_CComposition_CIVisualElement * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CIVisualElement * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CIVisualElement * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CComposition__CIVisualElementVtbl;
interface __FIIterator_1_Windows__CUI__CComposition__CIVisualElement
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CComposition__CIVisualElementVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CComposition__CIVisualElement __FIIterable_1_Windows__CUI__CComposition__CIVisualElement;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CComposition__CIVisualElement;
typedef struct __FIIterable_1_Windows__CUI__CComposition__CIVisualElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CComposition__CIVisualElement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CIVisualElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CIVisualElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CIVisualElement * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CComposition__CIVisualElement **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CComposition__CIVisualElementVtbl;
interface __FIIterable_1_Windows__CUI__CComposition__CIVisualElement
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CComposition__CIVisualElementVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CComposition__CIVisualElement;
typedef struct __FIVectorView_1_Windows__CUI__CComposition__CIVisualElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CComposition_CIVisualElement * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement * This,
                       __x_ABI_CWindows_CUI_CComposition_CIVisualElement * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CIVisualElement * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CComposition__CIVisualElementVtbl;
interface __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CComposition__CIVisualElementVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CComposition__CIVisualElement __FIVector_1_Windows__CUI__CComposition__CIVisualElement;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CComposition__CIVisualElement;
typedef struct __FIVector_1_Windows__CUI__CComposition__CIVisualElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVisualElement * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVisualElement * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CComposition__CIVisualElement **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This,
                   __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualElement * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualElement * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualElement * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This, __RPC__in __x_ABI_CWindows_CUI_CComposition_CIVisualElement * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CIVisualElement * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CComposition__CIVisualElement * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CComposition_CIVisualElement * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CComposition__CIVisualElementVtbl;
interface __FIVector_1_Windows__CUI__CComposition__CIVisualElement
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CComposition__CIVisualElementVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CUI_CColor;
typedef interface __FIReference_1_Windows__CUI__CColor __FIReference_1_Windows__CUI__CColor;
EXTERN_C const IID IID___FIReference_1_Windows__CUI__CColor;
typedef struct __FIReference_1_Windows__CUI__CColorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CUI__CColor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CUI__CColor * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CUI__CColor * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CUI__CColor * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CUI__CColor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CUI__CColor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CUI__CColor * This, __RPC__out struct __x_ABI_CWindows_CUI_CColor *value);
    END_INTERFACE
} __FIReference_1_Windows__CUI__CColorVtbl;
interface __FIReference_1_Windows__CUI__CColor
{
    CONST_VTBL struct __FIReference_1_Windows__CUI__CColorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef interface __x_ABI_CWindows_CSystem_CIDispatcherQueue __x_ABI_CWindows_CSystem_CIDispatcherQueue;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef interface __x_ABI_CWindows_CUI_CIUIContentRoot __x_ABI_CWindows_CUI_CIUIContentRoot;
typedef interface __x_ABI_CWindows_CUI_CIUIContext __x_ABI_CWindows_CUI_CIUIContext;
typedef enum __x_ABI_CWindows_CUI_CWindowManagement_CAppWindowClosedReason __x_ABI_CWindows_CUI_CWindowManagement_CAppWindowClosedReason;
typedef enum __x_ABI_CWindows_CUI_CWindowManagement_CAppWindowFrameStyle __x_ABI_CWindows_CUI_CWindowManagement_CAppWindowFrameStyle;
typedef enum __x_ABI_CWindows_CUI_CWindowManagement_CAppWindowPresentationKind __x_ABI_CWindows_CUI_CWindowManagement_CAppWindowPresentationKind;
typedef enum __x_ABI_CWindows_CUI_CWindowManagement_CAppWindowTitleBarVisibility __x_ABI_CWindows_CUI_CWindowManagement_CAppWindowTitleBarVisibility;
typedef enum __x_ABI_CWindows_CUI_CWindowManagement_CWindowingEnvironmentKind __x_ABI_CWindows_CUI_CWindowManagement_CWindowingEnvironmentKind;
enum __x_ABI_CWindows_CUI_CWindowManagement_CAppWindowClosedReason
{
    AppWindowClosedReason_Other = 0,
    AppWindowClosedReason_AppInitiated = 1,
    AppWindowClosedReason_UserInitiated = 2,
};
enum __x_ABI_CWindows_CUI_CWindowManagement_CAppWindowFrameStyle
{
    AppWindowFrameStyle_Default = 0,
    AppWindowFrameStyle_NoFrame = 1,
};
enum __x_ABI_CWindows_CUI_CWindowManagement_CAppWindowPresentationKind
{
    AppWindowPresentationKind_Default = 0,
    AppWindowPresentationKind_CompactOverlay = 1,
    AppWindowPresentationKind_FullScreen = 2,
};
enum __x_ABI_CWindows_CUI_CWindowManagement_CAppWindowTitleBarVisibility
{
    AppWindowTitleBarVisibility_Default = 0,
    AppWindowTitleBarVisibility_AlwaysHidden = 1,
};
enum __x_ABI_CWindows_CUI_CWindowManagement_CWindowingEnvironmentKind
{
    WindowingEnvironmentKind_Unknown = 0,
    WindowingEnvironmentKind_Overlapped = 1,
    WindowingEnvironmentKind_Tiled = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_IAppWindow[] = L"Windows.UI.WindowManagement.IAppWindow";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CIUIContentRoot * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DispatcherQueue )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIDispatcherQueue * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Frame )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrame * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsVisible )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PersistedStateId )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PersistedStateId )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Presenter )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresenter * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TitleBar )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UIContext )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CIUIContext * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WindowingEnvironment )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CloseAsync )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetPlacement )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPlacement * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetDisplayRegions )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RequestMoveToDisplayRegion )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * displayRegion
        );
    HRESULT ( STDMETHODCALLTYPE *RequestMoveAdjacentToCurrentView )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This
        );
    HRESULT ( STDMETHODCALLTYPE *RequestMoveAdjacentToWindow )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * anchorWindow
        );
    HRESULT ( STDMETHODCALLTYPE *RequestMoveRelativeToWindowContent )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * anchorWindow,
                  __x_ABI_CWindows_CFoundation_CPoint contentOffset
        );
    HRESULT ( STDMETHODCALLTYPE *RequestMoveRelativeToCurrentViewContent )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                  __x_ABI_CWindows_CFoundation_CPoint contentOffset
        );
    HRESULT ( STDMETHODCALLTYPE *RequestMoveRelativeToDisplayRegion )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * displayRegion,
                  __x_ABI_CWindows_CFoundation_CPoint displayRegionOffset
        );
    HRESULT ( STDMETHODCALLTYPE *RequestSize )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                  __x_ABI_CWindows_CFoundation_CSize frameSize
        );
    HRESULT ( STDMETHODCALLTYPE *TryShowAsync )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Changed )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Changed )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Closed )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowClosedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Closed )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CloseRequested )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CAppWindow_Windows__CUI__CWindowManagement__CAppWindowCloseRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CloseRequested )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Content(This,value) )
    ( (This)->lpVtbl->get_DispatcherQueue(This,value) )
    ( (This)->lpVtbl->get_Frame(This,value) )
    ( (This)->lpVtbl->get_IsVisible(This,value) )
    ( (This)->lpVtbl->get_PersistedStateId(This,value) )
    ( (This)->lpVtbl->put_PersistedStateId(This,value) )
    ( (This)->lpVtbl->get_Presenter(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->put_Title(This,value) )
    ( (This)->lpVtbl->get_TitleBar(This,value) )
    ( (This)->lpVtbl->get_UIContext(This,value) )
    ( (This)->lpVtbl->get_WindowingEnvironment(This,value) )
    ( (This)->lpVtbl->CloseAsync(This,operation) )
    ( (This)->lpVtbl->GetPlacement(This,result) )
    ( (This)->lpVtbl->GetDisplayRegions(This,result) )
    ( (This)->lpVtbl->RequestMoveToDisplayRegion(This,displayRegion) )
    ( (This)->lpVtbl->RequestMoveAdjacentToCurrentView(This) )
    ( (This)->lpVtbl->RequestMoveAdjacentToWindow(This,anchorWindow) )
    ( (This)->lpVtbl->RequestMoveRelativeToWindowContent(This,anchorWindow,contentOffset) )
    ( (This)->lpVtbl->RequestMoveRelativeToCurrentViewContent(This,contentOffset) )
    ( (This)->lpVtbl->RequestMoveRelativeToDisplayRegion(This,displayRegion,displayRegionOffset) )
    ( (This)->lpVtbl->RequestSize(This,frameSize) )
    ( (This)->lpVtbl->TryShowAsync(This,operation) )
    ( (This)->lpVtbl->add_Changed(This,handler,token) )
    ( (This)->lpVtbl->remove_Changed(This,token) )
    ( (This)->lpVtbl->add_Closed(This,handler,token) )
    ( (This)->lpVtbl->remove_Closed(This,token) )
    ( (This)->lpVtbl->add_CloseRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_CloseRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_IAppWindowChangedEventArgs[] = L"Windows.UI.WindowManagement.IAppWindowChangedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DidAvailableWindowPresentationsChange )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowChangedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DidDisplayRegionsChange )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowChangedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DidFrameChange )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowChangedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DidSizeChange )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowChangedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DidTitleBarChange )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowChangedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DidVisibilityChange )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowChangedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DidWindowingEnvironmentChange )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowChangedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DidWindowPresentationChange )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowChangedEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowChangedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DidAvailableWindowPresentationsChange(This,value) )
    ( (This)->lpVtbl->get_DidDisplayRegionsChange(This,value) )
    ( (This)->lpVtbl->get_DidFrameChange(This,value) )
    ( (This)->lpVtbl->get_DidSizeChange(This,value) )
    ( (This)->lpVtbl->get_DidTitleBarChange(This,value) )
    ( (This)->lpVtbl->get_DidVisibilityChange(This,value) )
    ( (This)->lpVtbl->get_DidWindowingEnvironmentChange(This,value) )
    ( (This)->lpVtbl->get_DidWindowPresentationChange(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_IAppWindowCloseRequestedEventArgs[] = L"Windows.UI.WindowManagement.IAppWindowCloseRequestedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowCloseRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowCloseRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowCloseRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowCloseRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowCloseRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowCloseRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowCloseRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Cancel )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowCloseRequestedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Cancel )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowCloseRequestedEventArgs * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowCloseRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowCloseRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowCloseRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowCloseRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Cancel(This,value) )
    ( (This)->lpVtbl->put_Cancel(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowCloseRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_IAppWindowClosedEventArgs[] = L"Windows.UI.WindowManagement.IAppWindowClosedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowClosedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowClosedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowClosedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowClosedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowClosedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowClosedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowClosedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CWindowManagement_CAppWindowClosedReason * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowClosedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowClosedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowClosedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowClosedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_IAppWindowFrame[] = L"Windows.UI.WindowManagement.IAppWindowFrame";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrame * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrame * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrame * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrame * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrame * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrame * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DragRegionVisuals )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrame * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CComposition__CIVisualElement * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrameVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DragRegionVisuals(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrame;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_IAppWindowFrameStyle[] = L"Windows.UI.WindowManagement.IAppWindowFrameStyle";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrameStyleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrameStyle * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrameStyle * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrameStyle * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrameStyle * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrameStyle * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrameStyle * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetFrameStyle )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrameStyle * This,
                           __RPC__out __x_ABI_CWindows_CUI_CWindowManagement_CAppWindowFrameStyle * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetFrameStyle )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrameStyle * This,
                  __x_ABI_CWindows_CUI_CWindowManagement_CAppWindowFrameStyle frameStyle
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrameStyleVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrameStyle
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrameStyleVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetFrameStyle(This,result) )
    ( (This)->lpVtbl->SetFrameStyle(This,frameStyle) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowFrameStyle;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_IAppWindowPlacement[] = L"Windows.UI.WindowManagement.IAppWindowPlacement";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPlacementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPlacement * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPlacement * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPlacement * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPlacement * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPlacement * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPlacement * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayRegion )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPlacement * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Offset )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPlacement * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPlacement * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPlacementVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPlacement
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPlacementVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayRegion(This,value) )
    ( (This)->lpVtbl->get_Offset(This,value) )
    ( (This)->lpVtbl->get_Size(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPlacement;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_IAppWindowPresentationConfiguration[] = L"Windows.UI.WindowManagement.IAppWindowPresentationConfiguration";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CUI_CWindowManagement_CAppWindowPresentationKind * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfigurationVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Kind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_IAppWindowPresentationConfigurationFactory[] = L"Windows.UI.WindowManagement.IAppWindowPresentationConfigurationFactory";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfigurationFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfigurationFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfigurationFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfigurationFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfigurationFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfigurationFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfigurationFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfigurationFactoryVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfigurationFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfigurationFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfigurationFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_IAppWindowPresenter[] = L"Windows.UI.WindowManagement.IAppWindowPresenter";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresenterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresenter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresenter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresenter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresenter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresenter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresenter * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetConfiguration )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfiguration * * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsPresentationSupported )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresenter * This,
                  __x_ABI_CWindows_CUI_CWindowManagement_CAppWindowPresentationKind presentationKind,
                           __RPC__out boolean * result
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestPresentation )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresentationConfiguration * configuration,
                           __RPC__out boolean * result
        );
                                      HRESULT ( STDMETHODCALLTYPE *RequestPresentationByKind )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresenter * This,
                  __x_ABI_CWindows_CUI_CWindowManagement_CAppWindowPresentationKind presentationKind,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresenterVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresenter
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresenterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetConfiguration(This,result) )
    ( (This)->lpVtbl->IsPresentationSupported(This,presentationKind,result) )
    ( (This)->lpVtbl->RequestPresentation(This,configuration,result) )
    ( (This)->lpVtbl->RequestPresentationByKind(This,presentationKind,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowPresenter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_IAppWindowStatics[] = L"Windows.UI.WindowManagement.IAppWindowStatics";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryCreateAsync )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CWindowManagement__CAppWindow * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ClearAllPersistedState )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowStatics * This
        );
    HRESULT ( STDMETHODCALLTYPE *ClearPersistedState )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowStatics * This,
                  __RPC__in HSTRING key
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowStaticsVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryCreateAsync(This,operation) )
    ( (This)->lpVtbl->ClearAllPersistedState(This) )
    ( (This)->lpVtbl->ClearPersistedState(This,key) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_IAppWindowTitleBar[] = L"Windows.UI.WindowManagement.IAppWindowTitleBar";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ButtonBackgroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ButtonBackgroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ButtonForegroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ButtonForegroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ButtonHoverBackgroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ButtonHoverBackgroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ButtonHoverForegroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ButtonHoverForegroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ButtonInactiveBackgroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ButtonInactiveBackgroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ButtonInactiveForegroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ButtonInactiveForegroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ButtonPressedBackgroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ButtonPressedBackgroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ButtonPressedForegroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ButtonPressedForegroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendsContentIntoTitleBar )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ExtendsContentIntoTitleBar )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ForegroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ForegroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InactiveBackgroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InactiveBackgroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InactiveForegroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InactiveForegroundColor )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsVisible )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetTitleBarOcclusions )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CWindowManagement__CAppWindowTitleBarOcclusion * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )
    ( (This)->lpVtbl->put_BackgroundColor(This,value) )
    ( (This)->lpVtbl->get_ButtonBackgroundColor(This,value) )
    ( (This)->lpVtbl->put_ButtonBackgroundColor(This,value) )
    ( (This)->lpVtbl->get_ButtonForegroundColor(This,value) )
    ( (This)->lpVtbl->put_ButtonForegroundColor(This,value) )
    ( (This)->lpVtbl->get_ButtonHoverBackgroundColor(This,value) )
    ( (This)->lpVtbl->put_ButtonHoverBackgroundColor(This,value) )
    ( (This)->lpVtbl->get_ButtonHoverForegroundColor(This,value) )
    ( (This)->lpVtbl->put_ButtonHoverForegroundColor(This,value) )
    ( (This)->lpVtbl->get_ButtonInactiveBackgroundColor(This,value) )
    ( (This)->lpVtbl->put_ButtonInactiveBackgroundColor(This,value) )
    ( (This)->lpVtbl->get_ButtonInactiveForegroundColor(This,value) )
    ( (This)->lpVtbl->put_ButtonInactiveForegroundColor(This,value) )
    ( (This)->lpVtbl->get_ButtonPressedBackgroundColor(This,value) )
    ( (This)->lpVtbl->put_ButtonPressedBackgroundColor(This,value) )
    ( (This)->lpVtbl->get_ButtonPressedForegroundColor(This,value) )
    ( (This)->lpVtbl->put_ButtonPressedForegroundColor(This,value) )
    ( (This)->lpVtbl->get_ExtendsContentIntoTitleBar(This,value) )
    ( (This)->lpVtbl->put_ExtendsContentIntoTitleBar(This,value) )
    ( (This)->lpVtbl->get_ForegroundColor(This,value) )
    ( (This)->lpVtbl->put_ForegroundColor(This,value) )
    ( (This)->lpVtbl->get_InactiveBackgroundColor(This,value) )
    ( (This)->lpVtbl->put_InactiveBackgroundColor(This,value) )
    ( (This)->lpVtbl->get_InactiveForegroundColor(This,value) )
    ( (This)->lpVtbl->put_InactiveForegroundColor(This,value) )
    ( (This)->lpVtbl->get_IsVisible(This,value) )
    ( (This)->lpVtbl->GetTitleBarOcclusions(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBar;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_IAppWindowTitleBarOcclusion[] = L"Windows.UI.WindowManagement.IAppWindowTitleBarOcclusion";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarOcclusionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarOcclusion * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarOcclusion * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarOcclusion * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarOcclusion * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarOcclusion * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarOcclusion * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OccludingRect )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarOcclusion * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarOcclusionVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarOcclusion
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarOcclusionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OccludingRect(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarOcclusion;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_IAppWindowTitleBarVisibility[] = L"Windows.UI.WindowManagement.IAppWindowTitleBarVisibility";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarVisibilityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarVisibility * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarVisibility * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarVisibility * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarVisibility * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarVisibility * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarVisibility * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPreferredVisibility )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarVisibility * This,
                           __RPC__out __x_ABI_CWindows_CUI_CWindowManagement_CAppWindowTitleBarVisibility * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetPreferredVisibility )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarVisibility * This,
                  __x_ABI_CWindows_CUI_CWindowManagement_CAppWindowTitleBarVisibility visibilityMode
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarVisibilityVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarVisibility
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarVisibilityVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetPreferredVisibility(This,result) )
    ( (This)->lpVtbl->SetPreferredVisibility(This,visibilityMode) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CIAppWindowTitleBarVisibility;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_ICompactOverlayPresentationConfiguration[] = L"Windows.UI.WindowManagement.ICompactOverlayPresentationConfiguration";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CICompactOverlayPresentationConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CICompactOverlayPresentationConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CICompactOverlayPresentationConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CICompactOverlayPresentationConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CICompactOverlayPresentationConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CICompactOverlayPresentationConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CICompactOverlayPresentationConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CICompactOverlayPresentationConfigurationVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CICompactOverlayPresentationConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CICompactOverlayPresentationConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CICompactOverlayPresentationConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_IDefaultPresentationConfiguration[] = L"Windows.UI.WindowManagement.IDefaultPresentationConfiguration";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CIDefaultPresentationConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIDefaultPresentationConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIDefaultPresentationConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIDefaultPresentationConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIDefaultPresentationConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIDefaultPresentationConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIDefaultPresentationConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CIDefaultPresentationConfigurationVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CIDefaultPresentationConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CIDefaultPresentationConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CIDefaultPresentationConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_IDisplayRegion[] = L"Windows.UI.WindowManagement.IDisplayRegion";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayMonitorDeviceId )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsVisible )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WorkAreaOffset )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WorkAreaSize )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WindowingEnvironment )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Changed )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CDisplayRegion_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Changed )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegionVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayMonitorDeviceId(This,value) )
    ( (This)->lpVtbl->get_IsVisible(This,value) )
    ( (This)->lpVtbl->get_WorkAreaOffset(This,value) )
    ( (This)->lpVtbl->get_WorkAreaSize(This,value) )
    ( (This)->lpVtbl->get_WindowingEnvironment(This,value) )
    ( (This)->lpVtbl->add_Changed(This,handler,token) )
    ( (This)->lpVtbl->remove_Changed(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_IFullScreenPresentationConfiguration[] = L"Windows.UI.WindowManagement.IFullScreenPresentationConfiguration";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CIFullScreenPresentationConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIFullScreenPresentationConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIFullScreenPresentationConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIFullScreenPresentationConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIFullScreenPresentationConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIFullScreenPresentationConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIFullScreenPresentationConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsExclusive )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIFullScreenPresentationConfiguration * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsExclusive )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIFullScreenPresentationConfiguration * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CIFullScreenPresentationConfigurationVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CIFullScreenPresentationConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CIFullScreenPresentationConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsExclusive(This,value) )
    ( (This)->lpVtbl->put_IsExclusive(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CIFullScreenPresentationConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_IWindowingEnvironment[] = L"Windows.UI.WindowManagement.IWindowingEnvironment";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment * This,
                           __RPC__out __x_ABI_CWindows_CUI_CWindowManagement_CWindowingEnvironmentKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDisplayRegions )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Changed )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CWindowManagement__CWindowingEnvironment_Windows__CUI__CWindowManagement__CWindowingEnvironmentChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Changed )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->GetDisplayRegions(This,result) )
    ( (This)->lpVtbl->add_Changed(This,handler,token) )
    ( (This)->lpVtbl->remove_Changed(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_IWindowingEnvironmentAddedEventArgs[] = L"Windows.UI.WindowManagement.IWindowingEnvironmentAddedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentAddedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentAddedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentAddedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentAddedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentAddedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentAddedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_WindowingEnvironment )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentAddedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentAddedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentAddedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentAddedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_WindowingEnvironment(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentAddedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_IWindowingEnvironmentChangedEventArgs[] = L"Windows.UI.WindowManagement.IWindowingEnvironmentChangedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentChangedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_IWindowingEnvironmentRemovedEventArgs[] = L"Windows.UI.WindowManagement.IWindowingEnvironmentRemovedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentRemovedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentRemovedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentRemovedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentRemovedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentRemovedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentRemovedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_WindowingEnvironment )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentRemovedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentRemovedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentRemovedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_WindowingEnvironment(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentRemovedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_IWindowingEnvironmentStatics[] = L"Windows.UI.WindowManagement.IWindowingEnvironmentStatics";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *FindAll )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAllWithKind )(
        __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentStatics * This,
                  __x_ABI_CWindows_CUI_CWindowManagement_CWindowingEnvironmentKind kind,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CWindowManagement__CWindowingEnvironment * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentStaticsVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindAll(This,result) )
    ( (This)->lpVtbl->FindAllWithKind(This,kind,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironmentStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WindowManagement_AppWindow[] = L"Windows.UI.WindowManagement.AppWindow";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WindowManagement_AppWindowChangedEventArgs[] = L"Windows.UI.WindowManagement.AppWindowChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WindowManagement_AppWindowCloseRequestedEventArgs[] = L"Windows.UI.WindowManagement.AppWindowCloseRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WindowManagement_AppWindowClosedEventArgs[] = L"Windows.UI.WindowManagement.AppWindowClosedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WindowManagement_AppWindowFrame[] = L"Windows.UI.WindowManagement.AppWindowFrame";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WindowManagement_AppWindowPlacement[] = L"Windows.UI.WindowManagement.AppWindowPlacement";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WindowManagement_AppWindowPresentationConfiguration[] = L"Windows.UI.WindowManagement.AppWindowPresentationConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WindowManagement_AppWindowPresenter[] = L"Windows.UI.WindowManagement.AppWindowPresenter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WindowManagement_AppWindowTitleBar[] = L"Windows.UI.WindowManagement.AppWindowTitleBar";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WindowManagement_AppWindowTitleBarOcclusion[] = L"Windows.UI.WindowManagement.AppWindowTitleBarOcclusion";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WindowManagement_CompactOverlayPresentationConfiguration[] = L"Windows.UI.WindowManagement.CompactOverlayPresentationConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WindowManagement_DefaultPresentationConfiguration[] = L"Windows.UI.WindowManagement.DefaultPresentationConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WindowManagement_DisplayRegion[] = L"Windows.UI.WindowManagement.DisplayRegion";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WindowManagement_FullScreenPresentationConfiguration[] = L"Windows.UI.WindowManagement.FullScreenPresentationConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WindowManagement_WindowingEnvironment[] = L"Windows.UI.WindowManagement.WindowingEnvironment";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WindowManagement_WindowingEnvironmentAddedEventArgs[] = L"Windows.UI.WindowManagement.WindowingEnvironmentAddedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WindowManagement_WindowingEnvironmentChangedEventArgs[] = L"Windows.UI.WindowManagement.WindowingEnvironmentChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WindowManagement_WindowingEnvironmentRemovedEventArgs[] = L"Windows.UI.WindowManagement.WindowingEnvironmentRemovedEventArgs";
       
       
#pragma clang diagnostic pop
