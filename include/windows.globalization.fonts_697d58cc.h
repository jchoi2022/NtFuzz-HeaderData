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
#include "Windows.UI.Text.h"
typedef interface __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont;
typedef interface __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup;
typedef interface __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory;
typedef enum __x_ABI_CWindows_CUI_CText_CFontStretch __x_ABI_CWindows_CUI_CText_CFontStretch;
typedef enum __x_ABI_CWindows_CUI_CText_CFontStyle __x_ABI_CWindows_CUI_CText_CFontStyle;
typedef struct __x_ABI_CWindows_CUI_CText_CFontWeight __x_ABI_CWindows_CUI_CText_CFontWeight;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_Fonts_ILanguageFont[] = L"Windows.Globalization.Fonts.ILanguageFont";
typedef struct __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FontFamily )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontWeight )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * weight
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontStretch )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFontStretch * stretch
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontStyle )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFontStyle * style
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleFactor )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
                           __RPC__out DOUBLE * scale
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontVtbl;
interface __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FontFamily(This,value) )
    ( (This)->lpVtbl->get_FontWeight(This,weight) )
    ( (This)->lpVtbl->get_FontStretch(This,stretch) )
    ( (This)->lpVtbl->get_FontStyle(This,style) )
    ( (This)->lpVtbl->get_ScaleFactor(This,scale) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_Fonts_ILanguageFontGroup[] = L"Windows.Globalization.Fonts.ILanguageFontGroup";
typedef struct __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UITextFont )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UIHeadingFont )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UITitleFont )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UICaptionFont )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UINotificationHeadingFont )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TraditionalDocumentFont )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ModernDocumentFont )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DocumentHeadingFont )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FixedWidthTextFont )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DocumentAlternate1Font )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DocumentAlternate2Font )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupVtbl;
interface __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UITextFont(This,value) )
    ( (This)->lpVtbl->get_UIHeadingFont(This,value) )
    ( (This)->lpVtbl->get_UITitleFont(This,value) )
    ( (This)->lpVtbl->get_UICaptionFont(This,value) )
    ( (This)->lpVtbl->get_UINotificationHeadingFont(This,value) )
    ( (This)->lpVtbl->get_TraditionalDocumentFont(This,value) )
    ( (This)->lpVtbl->get_ModernDocumentFont(This,value) )
    ( (This)->lpVtbl->get_DocumentHeadingFont(This,value) )
    ( (This)->lpVtbl->get_FixedWidthTextFont(This,value) )
    ( (This)->lpVtbl->get_DocumentAlternate1Font(This,value) )
    ( (This)->lpVtbl->get_DocumentAlternate2Font(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_Fonts_ILanguageFontGroupFactory[] = L"Windows.Globalization.Fonts.ILanguageFontGroupFactory";
typedef struct __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateLanguageFontGroup )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory * This,
                  __RPC__in HSTRING languageTag,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * * recommendedFonts
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactoryVtbl;
interface __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateLanguageFontGroup(This,languageTag,recommendedFonts) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_Fonts_LanguageFont[] = L"Windows.Globalization.Fonts.LanguageFont";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_Fonts_LanguageFontGroup[] = L"Windows.Globalization.Fonts.LanguageFontGroup";
       
       
#pragma clang diagnostic pop
