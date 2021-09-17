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
typedef interface __x_ABI_CWindows_CUI_CIColorHelper __x_ABI_CWindows_CUI_CIColorHelper;
typedef interface __x_ABI_CWindows_CUI_CIColorHelperStatics __x_ABI_CWindows_CUI_CIColorHelperStatics;
typedef interface __x_ABI_CWindows_CUI_CIColorHelperStatics2 __x_ABI_CWindows_CUI_CIColorHelperStatics2;
typedef interface __x_ABI_CWindows_CUI_CIColors __x_ABI_CWindows_CUI_CIColors;
typedef interface __x_ABI_CWindows_CUI_CIColorsStatics __x_ABI_CWindows_CUI_CIColorsStatics;
typedef interface __x_ABI_CWindows_CUI_CIUIContentRoot __x_ABI_CWindows_CUI_CIUIContentRoot;
typedef interface __x_ABI_CWindows_CUI_CIUIContext __x_ABI_CWindows_CUI_CIUIContext;
struct __x_ABI_CWindows_CUI_CColor;
typedef interface __FIIterator_1_Windows__CUI__CColor __FIIterator_1_Windows__CUI__CColor;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CColor;
typedef struct __FIIterator_1_Windows__CUI__CColorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CColor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CColor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CColor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CColor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CColor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CColor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CColor * This, __RPC__out struct __x_ABI_CWindows_CUI_CColor *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CColor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CColor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CColor * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CUI_CColor *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CColorVtbl;
interface __FIIterator_1_Windows__CUI__CColor
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CColorVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CColor __FIIterable_1_Windows__CUI__CColor;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CColor;
typedef struct __FIIterable_1_Windows__CUI__CColorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CColor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CColor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CColor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CColor * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CColor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CColor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CColor * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CColor **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CColorVtbl;
interface __FIIterable_1_Windows__CUI__CColor
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CColorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
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
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
struct __x_ABI_CWindows_CUI_CColor
{
    BYTE A;
    BYTE R;
    BYTE G;
    BYTE B;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_IColorHelper[] = L"Windows.UI.IColorHelper";
typedef struct __x_ABI_CWindows_CUI_CIColorHelperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelper * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelper * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelper * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelper * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelper * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelper * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CIColorHelperVtbl;
interface __x_ABI_CWindows_CUI_CIColorHelper
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CIColorHelperVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CIColorHelper;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_IColorHelperStatics[] = L"Windows.UI.IColorHelperStatics";
typedef struct __x_ABI_CWindows_CUI_CIColorHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromArgb )(
        __x_ABI_CWindows_CUI_CIColorHelperStatics * This,
                  BYTE a,
                  BYTE r,
                  BYTE g,
                  BYTE b,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * returnValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CIColorHelperStaticsVtbl;
interface __x_ABI_CWindows_CUI_CIColorHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CIColorHelperStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromArgb(This,a,r,g,b,returnValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CIColorHelperStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_IColorHelperStatics2[] = L"Windows.UI.IColorHelperStatics2";
typedef struct __x_ABI_CWindows_CUI_CIColorHelperStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ToDisplayName )(
        __x_ABI_CWindows_CUI_CIColorHelperStatics2 * This,
                  __x_ABI_CWindows_CUI_CColor color,
                           __RPC__deref_out_opt HSTRING * returnValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CIColorHelperStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CIColorHelperStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CIColorHelperStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ToDisplayName(This,color,returnValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CIColorHelperStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_IColors[] = L"Windows.UI.IColors";
typedef struct __x_ABI_CWindows_CUI_CIColorsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CIColors * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CIColors * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CIColors * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CIColors * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CIColors * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CIColors * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CIColorsVtbl;
interface __x_ABI_CWindows_CUI_CIColors
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CIColorsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CIColors;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_IColorsStatics[] = L"Windows.UI.IColorsStatics";
typedef struct __x_ABI_CWindows_CUI_CIColorsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CIColorsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AliceBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AntiqueWhite )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Aqua )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Aquamarine )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Azure )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Beige )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bisque )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Black )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BlanchedAlmond )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Blue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BlueViolet )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Brown )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BurlyWood )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CadetBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Chartreuse )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Chocolate )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Coral )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CornflowerBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Cornsilk )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Crimson )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Cyan )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DarkBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DarkCyan )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DarkGoldenrod )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DarkGray )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DarkGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DarkKhaki )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DarkMagenta )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DarkOliveGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DarkOrange )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DarkOrchid )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DarkRed )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DarkSalmon )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DarkSeaGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DarkSlateBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DarkSlateGray )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DarkTurquoise )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DarkViolet )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeepPink )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeepSkyBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DimGray )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DodgerBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Firebrick )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FloralWhite )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ForestGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Fuchsia )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gainsboro )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GhostWhite )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gold )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Goldenrod )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gray )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Green )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GreenYellow )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Honeydew )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HotPink )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IndianRed )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Indigo )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ivory )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Khaki )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Lavender )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LavenderBlush )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LawnGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LemonChiffon )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LightBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LightCoral )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LightCyan )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LightGoldenrodYellow )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LightGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LightGray )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LightPink )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LightSalmon )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LightSeaGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LightSkyBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LightSlateGray )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LightSteelBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LightYellow )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Lime )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LimeGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Linen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Magenta )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Maroon )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediumAquamarine )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediumBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediumOrchid )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediumPurple )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediumSeaGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediumSlateBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediumSpringGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediumTurquoise )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediumVioletRed )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MidnightBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MintCream )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MistyRose )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Moccasin )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NavajoWhite )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Navy )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OldLace )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Olive )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OliveDrab )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Orange )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OrangeRed )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Orchid )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PaleGoldenrod )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PaleGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PaleTurquoise )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PaleVioletRed )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PapayaWhip )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PeachPuff )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Peru )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pink )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Plum )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PowderBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Purple )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Red )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RosyBrown )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RoyalBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SaddleBrown )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Salmon )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SandyBrown )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SeaGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SeaShell )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sienna )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Silver )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SkyBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SlateBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SlateGray )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Snow )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SpringGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SteelBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Tan )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Teal )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Thistle )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Tomato )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Transparent )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Turquoise )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Violet )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Wheat )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_White )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WhiteSmoke )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Yellow )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_YellowGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CIColorsStaticsVtbl;
interface __x_ABI_CWindows_CUI_CIColorsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CIColorsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AliceBlue(This,value) )
    ( (This)->lpVtbl->get_AntiqueWhite(This,value) )
    ( (This)->lpVtbl->get_Aqua(This,value) )
    ( (This)->lpVtbl->get_Aquamarine(This,value) )
    ( (This)->lpVtbl->get_Azure(This,value) )
    ( (This)->lpVtbl->get_Beige(This,value) )
    ( (This)->lpVtbl->get_Bisque(This,value) )
    ( (This)->lpVtbl->get_Black(This,value) )
    ( (This)->lpVtbl->get_BlanchedAlmond(This,value) )
    ( (This)->lpVtbl->get_Blue(This,value) )
    ( (This)->lpVtbl->get_BlueViolet(This,value) )
    ( (This)->lpVtbl->get_Brown(This,value) )
    ( (This)->lpVtbl->get_BurlyWood(This,value) )
    ( (This)->lpVtbl->get_CadetBlue(This,value) )
    ( (This)->lpVtbl->get_Chartreuse(This,value) )
    ( (This)->lpVtbl->get_Chocolate(This,value) )
    ( (This)->lpVtbl->get_Coral(This,value) )
    ( (This)->lpVtbl->get_CornflowerBlue(This,value) )
    ( (This)->lpVtbl->get_Cornsilk(This,value) )
    ( (This)->lpVtbl->get_Crimson(This,value) )
    ( (This)->lpVtbl->get_Cyan(This,value) )
    ( (This)->lpVtbl->get_DarkBlue(This,value) )
    ( (This)->lpVtbl->get_DarkCyan(This,value) )
    ( (This)->lpVtbl->get_DarkGoldenrod(This,value) )
    ( (This)->lpVtbl->get_DarkGray(This,value) )
    ( (This)->lpVtbl->get_DarkGreen(This,value) )
    ( (This)->lpVtbl->get_DarkKhaki(This,value) )
    ( (This)->lpVtbl->get_DarkMagenta(This,value) )
    ( (This)->lpVtbl->get_DarkOliveGreen(This,value) )
    ( (This)->lpVtbl->get_DarkOrange(This,value) )
    ( (This)->lpVtbl->get_DarkOrchid(This,value) )
    ( (This)->lpVtbl->get_DarkRed(This,value) )
    ( (This)->lpVtbl->get_DarkSalmon(This,value) )
    ( (This)->lpVtbl->get_DarkSeaGreen(This,value) )
    ( (This)->lpVtbl->get_DarkSlateBlue(This,value) )
    ( (This)->lpVtbl->get_DarkSlateGray(This,value) )
    ( (This)->lpVtbl->get_DarkTurquoise(This,value) )
    ( (This)->lpVtbl->get_DarkViolet(This,value) )
    ( (This)->lpVtbl->get_DeepPink(This,value) )
    ( (This)->lpVtbl->get_DeepSkyBlue(This,value) )
    ( (This)->lpVtbl->get_DimGray(This,value) )
    ( (This)->lpVtbl->get_DodgerBlue(This,value) )
    ( (This)->lpVtbl->get_Firebrick(This,value) )
    ( (This)->lpVtbl->get_FloralWhite(This,value) )
    ( (This)->lpVtbl->get_ForestGreen(This,value) )
    ( (This)->lpVtbl->get_Fuchsia(This,value) )
    ( (This)->lpVtbl->get_Gainsboro(This,value) )
    ( (This)->lpVtbl->get_GhostWhite(This,value) )
    ( (This)->lpVtbl->get_Gold(This,value) )
    ( (This)->lpVtbl->get_Goldenrod(This,value) )
    ( (This)->lpVtbl->get_Gray(This,value) )
    ( (This)->lpVtbl->get_Green(This,value) )
    ( (This)->lpVtbl->get_GreenYellow(This,value) )
    ( (This)->lpVtbl->get_Honeydew(This,value) )
    ( (This)->lpVtbl->get_HotPink(This,value) )
    ( (This)->lpVtbl->get_IndianRed(This,value) )
    ( (This)->lpVtbl->get_Indigo(This,value) )
    ( (This)->lpVtbl->get_Ivory(This,value) )
    ( (This)->lpVtbl->get_Khaki(This,value) )
    ( (This)->lpVtbl->get_Lavender(This,value) )
    ( (This)->lpVtbl->get_LavenderBlush(This,value) )
    ( (This)->lpVtbl->get_LawnGreen(This,value) )
    ( (This)->lpVtbl->get_LemonChiffon(This,value) )
    ( (This)->lpVtbl->get_LightBlue(This,value) )
    ( (This)->lpVtbl->get_LightCoral(This,value) )
    ( (This)->lpVtbl->get_LightCyan(This,value) )
    ( (This)->lpVtbl->get_LightGoldenrodYellow(This,value) )
    ( (This)->lpVtbl->get_LightGreen(This,value) )
    ( (This)->lpVtbl->get_LightGray(This,value) )
    ( (This)->lpVtbl->get_LightPink(This,value) )
    ( (This)->lpVtbl->get_LightSalmon(This,value) )
    ( (This)->lpVtbl->get_LightSeaGreen(This,value) )
    ( (This)->lpVtbl->get_LightSkyBlue(This,value) )
    ( (This)->lpVtbl->get_LightSlateGray(This,value) )
    ( (This)->lpVtbl->get_LightSteelBlue(This,value) )
    ( (This)->lpVtbl->get_LightYellow(This,value) )
    ( (This)->lpVtbl->get_Lime(This,value) )
    ( (This)->lpVtbl->get_LimeGreen(This,value) )
    ( (This)->lpVtbl->get_Linen(This,value) )
    ( (This)->lpVtbl->get_Magenta(This,value) )
    ( (This)->lpVtbl->get_Maroon(This,value) )
    ( (This)->lpVtbl->get_MediumAquamarine(This,value) )
    ( (This)->lpVtbl->get_MediumBlue(This,value) )
    ( (This)->lpVtbl->get_MediumOrchid(This,value) )
    ( (This)->lpVtbl->get_MediumPurple(This,value) )
    ( (This)->lpVtbl->get_MediumSeaGreen(This,value) )
    ( (This)->lpVtbl->get_MediumSlateBlue(This,value) )
    ( (This)->lpVtbl->get_MediumSpringGreen(This,value) )
    ( (This)->lpVtbl->get_MediumTurquoise(This,value) )
    ( (This)->lpVtbl->get_MediumVioletRed(This,value) )
    ( (This)->lpVtbl->get_MidnightBlue(This,value) )
    ( (This)->lpVtbl->get_MintCream(This,value) )
    ( (This)->lpVtbl->get_MistyRose(This,value) )
    ( (This)->lpVtbl->get_Moccasin(This,value) )
    ( (This)->lpVtbl->get_NavajoWhite(This,value) )
    ( (This)->lpVtbl->get_Navy(This,value) )
    ( (This)->lpVtbl->get_OldLace(This,value) )
    ( (This)->lpVtbl->get_Olive(This,value) )
    ( (This)->lpVtbl->get_OliveDrab(This,value) )
    ( (This)->lpVtbl->get_Orange(This,value) )
    ( (This)->lpVtbl->get_OrangeRed(This,value) )
    ( (This)->lpVtbl->get_Orchid(This,value) )
    ( (This)->lpVtbl->get_PaleGoldenrod(This,value) )
    ( (This)->lpVtbl->get_PaleGreen(This,value) )
    ( (This)->lpVtbl->get_PaleTurquoise(This,value) )
    ( (This)->lpVtbl->get_PaleVioletRed(This,value) )
    ( (This)->lpVtbl->get_PapayaWhip(This,value) )
    ( (This)->lpVtbl->get_PeachPuff(This,value) )
    ( (This)->lpVtbl->get_Peru(This,value) )
    ( (This)->lpVtbl->get_Pink(This,value) )
    ( (This)->lpVtbl->get_Plum(This,value) )
    ( (This)->lpVtbl->get_PowderBlue(This,value) )
    ( (This)->lpVtbl->get_Purple(This,value) )
    ( (This)->lpVtbl->get_Red(This,value) )
    ( (This)->lpVtbl->get_RosyBrown(This,value) )
    ( (This)->lpVtbl->get_RoyalBlue(This,value) )
    ( (This)->lpVtbl->get_SaddleBrown(This,value) )
    ( (This)->lpVtbl->get_Salmon(This,value) )
    ( (This)->lpVtbl->get_SandyBrown(This,value) )
    ( (This)->lpVtbl->get_SeaGreen(This,value) )
    ( (This)->lpVtbl->get_SeaShell(This,value) )
    ( (This)->lpVtbl->get_Sienna(This,value) )
    ( (This)->lpVtbl->get_Silver(This,value) )
    ( (This)->lpVtbl->get_SkyBlue(This,value) )
    ( (This)->lpVtbl->get_SlateBlue(This,value) )
    ( (This)->lpVtbl->get_SlateGray(This,value) )
    ( (This)->lpVtbl->get_Snow(This,value) )
    ( (This)->lpVtbl->get_SpringGreen(This,value) )
    ( (This)->lpVtbl->get_SteelBlue(This,value) )
    ( (This)->lpVtbl->get_Tan(This,value) )
    ( (This)->lpVtbl->get_Teal(This,value) )
    ( (This)->lpVtbl->get_Thistle(This,value) )
    ( (This)->lpVtbl->get_Tomato(This,value) )
    ( (This)->lpVtbl->get_Transparent(This,value) )
    ( (This)->lpVtbl->get_Turquoise(This,value) )
    ( (This)->lpVtbl->get_Violet(This,value) )
    ( (This)->lpVtbl->get_Wheat(This,value) )
    ( (This)->lpVtbl->get_White(This,value) )
    ( (This)->lpVtbl->get_WhiteSmoke(This,value) )
    ( (This)->lpVtbl->get_Yellow(This,value) )
    ( (This)->lpVtbl->get_YellowGreen(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CIColorsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_IUIContentRoot[] = L"Windows.UI.IUIContentRoot";
typedef struct __x_ABI_CWindows_CUI_CIUIContentRootVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CIUIContentRoot * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CIUIContentRoot * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CIUIContentRoot * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CIUIContentRoot * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CIUIContentRoot * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CIUIContentRoot * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UIContext )(
        __x_ABI_CWindows_CUI_CIUIContentRoot * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CIUIContext * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CIUIContentRootVtbl;
interface __x_ABI_CWindows_CUI_CIUIContentRoot
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CIUIContentRootVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UIContext(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CIUIContentRoot;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_IUIContext[] = L"Windows.UI.IUIContext";
typedef struct __x_ABI_CWindows_CUI_CIUIContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CIUIContext * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CIUIContext * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CIUIContext * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CIUIContext * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CIUIContext * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CIUIContext * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CIUIContextVtbl;
interface __x_ABI_CWindows_CUI_CIUIContext
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CIUIContextVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CIUIContext;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ColorHelper[] = L"Windows.UI.ColorHelper";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Colors[] = L"Windows.UI.Colors";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_UIContentRoot[] = L"Windows.UI.UIContentRoot";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_UIContext[] = L"Windows.UI.UIContext";
       
       
#pragma clang diagnostic pop
