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
#include "Windows.UI.h"
typedef interface __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef enum __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionColor __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionColor;
typedef enum __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionEdgeEffect __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionEdgeEffect;
typedef enum __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionOpacity __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionOpacity;
typedef enum __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionSize __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionSize;
typedef enum __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionStyle __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionStyle;
enum __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionColor
{
    ClosedCaptionColor_Default = 0,
    ClosedCaptionColor_White = 1,
    ClosedCaptionColor_Black = 2,
    ClosedCaptionColor_Red = 3,
    ClosedCaptionColor_Green = 4,
    ClosedCaptionColor_Blue = 5,
    ClosedCaptionColor_Yellow = 6,
    ClosedCaptionColor_Magenta = 7,
    ClosedCaptionColor_Cyan = 8,
};
enum __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionEdgeEffect
{
    ClosedCaptionEdgeEffect_Default = 0,
    ClosedCaptionEdgeEffect_None = 1,
    ClosedCaptionEdgeEffect_Raised = 2,
    ClosedCaptionEdgeEffect_Depressed = 3,
    ClosedCaptionEdgeEffect_Uniform = 4,
    ClosedCaptionEdgeEffect_DropShadow = 5,
};
enum __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionOpacity
{
    ClosedCaptionOpacity_Default = 0,
    ClosedCaptionOpacity_OneHundredPercent = 1,
    ClosedCaptionOpacity_SeventyFivePercent = 2,
    ClosedCaptionOpacity_TwentyFivePercent = 3,
    ClosedCaptionOpacity_ZeroPercent = 4,
};
enum __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionSize
{
    ClosedCaptionSize_Default = 0,
    ClosedCaptionSize_FiftyPercent = 1,
    ClosedCaptionSize_OneHundredPercent = 2,
    ClosedCaptionSize_OneHundredFiftyPercent = 3,
    ClosedCaptionSize_TwoHundredPercent = 4,
};
enum __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionStyle
{
    ClosedCaptionStyle_Default = 0,
    ClosedCaptionStyle_MonospacedWithSerifs = 1,
    ClosedCaptionStyle_ProportionalWithSerifs = 2,
    ClosedCaptionStyle_MonospacedWithoutSerifs = 3,
    ClosedCaptionStyle_ProportionalWithoutSerifs = 4,
    ClosedCaptionStyle_Casual = 5,
    ClosedCaptionStyle_Cursive = 6,
    ClosedCaptionStyle_SmallCapitals = 7,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics[] = L"Windows.Media.ClosedCaptioning.IClosedCaptionPropertiesStatics";
typedef struct __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FontColor )(
        __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ComputedFontColor )(
        __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontOpacity )(
        __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionOpacity * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontSize )(
        __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontStyle )(
        __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionStyle * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontEffect )(
        __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionEdgeEffect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ComputedBackgroundColor )(
        __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BackgroundOpacity )(
        __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionOpacity * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RegionColor )(
        __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ComputedRegionColor )(
        __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RegionOpacity )(
        __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionOpacity * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FontColor(This,value) )
    ( (This)->lpVtbl->get_ComputedFontColor(This,value) )
    ( (This)->lpVtbl->get_FontOpacity(This,value) )
    ( (This)->lpVtbl->get_FontSize(This,value) )
    ( (This)->lpVtbl->get_FontStyle(This,value) )
    ( (This)->lpVtbl->get_FontEffect(This,value) )
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )
    ( (This)->lpVtbl->get_ComputedBackgroundColor(This,value) )
    ( (This)->lpVtbl->get_BackgroundOpacity(This,value) )
    ( (This)->lpVtbl->get_RegionColor(This,value) )
    ( (This)->lpVtbl->get_ComputedRegionColor(This,value) )
    ( (This)->lpVtbl->get_RegionOpacity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_ClosedCaptioning_ClosedCaptionProperties[] = L"Windows.Media.ClosedCaptioning.ClosedCaptionProperties";
       
       
#pragma clang diagnostic pop
