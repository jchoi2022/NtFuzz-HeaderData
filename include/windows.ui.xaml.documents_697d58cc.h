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
#include "Windows.UI.Core.h"
#include "Windows.UI.Text.h"
#include "Windows.UI.Xaml.h"
#include "Windows.UI.Xaml.Controls.h"
#include "Windows.UI.Xaml.Input.h"
#include "Windows.UI.Xaml.Media.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContactContentLinkProvider __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContactContentLinkProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkInvokedEventArgs __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkInvokedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderCollection __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderCollection;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderFactory __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIPlaceContentLinkProvider __x_ABI_CWindows_CUI_CXaml_CDocuments_CIPlaceContentLinkProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2 __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement5 __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement5;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2 __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3 __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline;
typedef interface __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider __FIIterator_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CDocuments__CContentLinkProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CDocuments__CContentLinkProviderVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CDocuments__CContentLinkProviderVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider __FIIterable_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CDocuments__CContentLinkProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CDocuments__CContentLinkProviderVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CDocuments__CContentLinkProviderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange;
typedef interface __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, __RPC__out struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                       __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CContentLinkProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This,
                       __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CContentLinkProviderVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CContentLinkProviderVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                       __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                       __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                                                    unsigned int index,
                                                             __RPC__out struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                       struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock;
typedef struct __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider;
typedef struct __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProviderVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProvider
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CDocuments__CContentLinkProviderVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CDocuments__CInline;
typedef struct __FIVector_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter;
typedef struct __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange;
typedef struct __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, __RPC__deref_out_opt struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                   unsigned int index,
                            __RPC__deref_out_opt struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                   __RPC__in struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                   unsigned int index,
                   __RPC__in struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                   unsigned int index,
                   __RPC__in struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, __RPC__in struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CIRichEditBox __x_ABI_CWindows_CUI_CXaml_CControls_CIRichEditBox;
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CRichEditBox_Windows__CUI__CXaml__CDocuments__CContentLinkInvokedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CRichEditBox_Windows__CUI__CXaml__CDocuments__CContentLinkInvokedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CRichEditBox_Windows__CUI__CXaml__CDocuments__CContentLinkInvokedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CRichEditBox_Windows__CUI__CXaml__CDocuments__CContentLinkInvokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CRichEditBox_Windows__CUI__CXaml__CDocuments__CContentLinkInvokedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CRichEditBox_Windows__CUI__CXaml__CDocuments__CContentLinkInvokedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CRichEditBox_Windows__CUI__CXaml__CDocuments__CContentLinkInvokedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CRichEditBox_Windows__CUI__CXaml__CDocuments__CContentLinkInvokedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CIRichEditBox * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkInvokedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CRichEditBox_Windows__CUI__CXaml__CDocuments__CContentLinkInvokedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CRichEditBox_Windows__CUI__CXaml__CDocuments__CContentLinkInvokedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CControls__CRichEditBox_Windows__CUI__CXaml__CDocuments__CContentLinkInvokedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CContentLink_Windows__CUI__CXaml__CDocuments__CContentLinkInvokedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CContentLink_Windows__CUI__CXaml__CDocuments__CContentLinkInvokedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CContentLink_Windows__CUI__CXaml__CDocuments__CContentLinkInvokedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CContentLink_Windows__CUI__CXaml__CDocuments__CContentLinkInvokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CContentLink_Windows__CUI__CXaml__CDocuments__CContentLinkInvokedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CContentLink_Windows__CUI__CXaml__CDocuments__CContentLinkInvokedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CContentLink_Windows__CUI__CXaml__CDocuments__CContentLinkInvokedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CContentLink_Windows__CUI__CXaml__CDocuments__CContentLinkInvokedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkInvokedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CContentLink_Windows__CUI__CXaml__CDocuments__CContentLinkInvokedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CContentLink_Windows__CUI__CXaml__CDocuments__CContentLinkInvokedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CContentLink_Windows__CUI__CXaml__CDocuments__CContentLinkInvokedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef enum __x_ABI_CWindows_CUI_CCore_CCoreCursorType __x_ABI_CWindows_CUI_CCore_CCoreCursorType;
typedef interface __x_ABI_CWindows_CUI_CText_CIContentLinkInfo __x_ABI_CWindows_CUI_CText_CIContentLinkInfo;
typedef enum __x_ABI_CWindows_CUI_CText_CFontStretch __x_ABI_CWindows_CUI_CText_CFontStretch;
typedef enum __x_ABI_CWindows_CUI_CText_CFontStyle __x_ABI_CWindows_CUI_CText_CFontStyle;
typedef struct __x_ABI_CWindows_CUI_CText_CFontWeight __x_ABI_CWindows_CUI_CText_CFontWeight;
typedef enum __x_ABI_CWindows_CUI_CText_CTextDecorations __x_ABI_CWindows_CUI_CText_CTextDecorations;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyObject __x_ABI_CWindows_CUI_CXaml_CIDependencyObject;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty;
typedef enum __x_ABI_CWindows_CUI_CXaml_CElementSoundMode __x_ABI_CWindows_CUI_CXaml_CElementSoundMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CFlowDirection __x_ABI_CWindows_CUI_CXaml_CFlowDirection;
typedef enum __x_ABI_CWindows_CUI_CXaml_CFocusState __x_ABI_CWindows_CUI_CXaml_CFocusState;
typedef enum __x_ABI_CWindows_CUI_CXaml_CFontCapitals __x_ABI_CWindows_CUI_CXaml_CFontCapitals;
typedef enum __x_ABI_CWindows_CUI_CXaml_CFontEastAsianLanguage __x_ABI_CWindows_CUI_CXaml_CFontEastAsianLanguage;
typedef enum __x_ABI_CWindows_CUI_CXaml_CFontEastAsianWidths __x_ABI_CWindows_CUI_CXaml_CFontEastAsianWidths;
typedef enum __x_ABI_CWindows_CUI_CXaml_CFontFraction __x_ABI_CWindows_CUI_CXaml_CFontFraction;
typedef enum __x_ABI_CWindows_CUI_CXaml_CFontNumeralAlignment __x_ABI_CWindows_CUI_CXaml_CFontNumeralAlignment;
typedef enum __x_ABI_CWindows_CUI_CXaml_CFontNumeralStyle __x_ABI_CWindows_CUI_CXaml_CFontNumeralStyle;
typedef enum __x_ABI_CWindows_CUI_CXaml_CFontVariants __x_ABI_CWindows_CUI_CXaml_CFontVariants;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement;
typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CKeyTipPlacementMode __x_ABI_CWindows_CUI_CXaml_CInput_CKeyTipPlacementMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy;
typedef enum __x_ABI_CWindows_CUI_CXaml_CLineStackingStrategy __x_ABI_CWindows_CUI_CXaml_CLineStackingStrategy;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily;
typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CStyleSimulations __x_ABI_CWindows_CUI_CXaml_CMedia_CStyleSimulations;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler;
typedef enum __x_ABI_CWindows_CUI_CXaml_CTextAlignment __x_ABI_CWindows_CUI_CXaml_CTextAlignment;
typedef struct __x_ABI_CWindows_CUI_CXaml_CThickness __x_ABI_CWindows_CUI_CXaml_CThickness;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement __x_ABI_CWindows_CUI_CXaml_CIUIElement;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIXamlRoot __x_ABI_CWindows_CUI_CXaml_CIXamlRoot;
typedef enum __x_ABI_CWindows_CUI_CXaml_CDocuments_CLogicalDirection __x_ABI_CWindows_CUI_CXaml_CDocuments_CLogicalDirection;
typedef enum __x_ABI_CWindows_CUI_CXaml_CDocuments_CUnderlineStyle __x_ABI_CWindows_CUI_CXaml_CDocuments_CUnderlineStyle;
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange;
enum __x_ABI_CWindows_CUI_CXaml_CDocuments_CLogicalDirection
{
    LogicalDirection_Backward = 0,
    LogicalDirection_Forward = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CDocuments_CUnderlineStyle
{
    UnderlineStyle_None = 0,
    UnderlineStyle_Single = 1,
};
struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange
{
    INT32 StartIndex;
    INT32 Length;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IBlock[] = L"Windows.UI.Xaml.Documents.IBlock";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TextAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CTextAlignment * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TextAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
                  __x_ABI_CWindows_CUI_CXaml_CTextAlignment value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LineHeight )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LineHeight )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LineStackingStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CLineStackingStrategy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LineStackingStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
                  __x_ABI_CWindows_CUI_CXaml_CLineStackingStrategy value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Margin )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CThickness * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Margin )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
                  __x_ABI_CWindows_CUI_CXaml_CThickness value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TextAlignment(This,value) )
    ( (This)->lpVtbl->put_TextAlignment(This,value) )
    ( (This)->lpVtbl->get_LineHeight(This,value) )
    ( (This)->lpVtbl->put_LineHeight(This,value) )
    ( (This)->lpVtbl->get_LineStackingStrategy(This,value) )
    ( (This)->lpVtbl->put_LineStackingStrategy(This,value) )
    ( (This)->lpVtbl->get_Margin(This,value) )
    ( (This)->lpVtbl->put_Margin(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IBlock2[] = L"Windows.UI.Xaml.Documents.IBlock2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HorizontalTextAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CTextAlignment * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HorizontalTextAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2 * This,
                  __x_ABI_CWindows_CUI_CXaml_CTextAlignment value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HorizontalTextAlignment(This,value) )
    ( (This)->lpVtbl->put_HorizontalTextAlignment(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IBlockFactory[] = L"Windows.UI.Xaml.Documents.IBlockFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IBlockStatics[] = L"Windows.UI.Xaml.Documents.IBlockStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TextAlignmentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LineHeightProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LineStackingStrategyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MarginProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TextAlignmentProperty(This,value) )
    ( (This)->lpVtbl->get_LineHeightProperty(This,value) )
    ( (This)->lpVtbl->get_LineStackingStrategyProperty(This,value) )
    ( (This)->lpVtbl->get_MarginProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IBlockStatics2[] = L"Windows.UI.Xaml.Documents.IBlockStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HorizontalTextAlignmentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HorizontalTextAlignmentProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IBold[] = L"Windows.UI.Xaml.Documents.IBold";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBoldVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBoldVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBoldVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IContactContentLinkProvider[] = L"Windows.UI.Xaml.Documents.IContactContentLinkProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContactContentLinkProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContactContentLinkProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContactContentLinkProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContactContentLinkProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContactContentLinkProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContactContentLinkProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContactContentLinkProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContactContentLinkProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContactContentLinkProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContactContentLinkProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIContactContentLinkProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IContentLink[] = L"Windows.UI.Xaml.Documents.IContentLink";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Info )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CIContentLinkInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Info )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CText_CIContentLinkInfo * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Background )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Background )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Cursor )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                           __RPC__out __x_ABI_CWindows_CUI_CCore_CCoreCursorType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Cursor )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                  __x_ABI_CWindows_CUI_CCore_CCoreCursorType value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusLeft )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XYFocusLeft )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusRight )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XYFocusRight )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusUp )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XYFocusUp )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusDown )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XYFocusDown )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ElementSoundMode )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CElementSoundMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ElementSoundMode )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                  __x_ABI_CWindows_CUI_CXaml_CElementSoundMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FocusState )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CFocusState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusUpNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XYFocusUpNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusDownNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XYFocusDownNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusLeftNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XYFocusLeftNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusRightNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XYFocusRightNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTabStop )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsTabStop )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TabIndex )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TabIndex )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                  INT32 value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Invoked )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CContentLink_Windows__CUI__CXaml__CDocuments__CContentLinkInvokedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Invoked )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_GotFocus )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_GotFocus )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LostFocus )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LostFocus )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *Focus )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink * This,
                  __x_ABI_CWindows_CUI_CXaml_CFocusState value,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Info(This,value) )
    ( (This)->lpVtbl->put_Info(This,value) )
    ( (This)->lpVtbl->get_Background(This,value) )
    ( (This)->lpVtbl->put_Background(This,value) )
    ( (This)->lpVtbl->get_Cursor(This,value) )
    ( (This)->lpVtbl->put_Cursor(This,value) )
    ( (This)->lpVtbl->get_XYFocusLeft(This,value) )
    ( (This)->lpVtbl->put_XYFocusLeft(This,value) )
    ( (This)->lpVtbl->get_XYFocusRight(This,value) )
    ( (This)->lpVtbl->put_XYFocusRight(This,value) )
    ( (This)->lpVtbl->get_XYFocusUp(This,value) )
    ( (This)->lpVtbl->put_XYFocusUp(This,value) )
    ( (This)->lpVtbl->get_XYFocusDown(This,value) )
    ( (This)->lpVtbl->put_XYFocusDown(This,value) )
    ( (This)->lpVtbl->get_ElementSoundMode(This,value) )
    ( (This)->lpVtbl->put_ElementSoundMode(This,value) )
    ( (This)->lpVtbl->get_FocusState(This,value) )
    ( (This)->lpVtbl->get_XYFocusUpNavigationStrategy(This,value) )
    ( (This)->lpVtbl->put_XYFocusUpNavigationStrategy(This,value) )
    ( (This)->lpVtbl->get_XYFocusDownNavigationStrategy(This,value) )
    ( (This)->lpVtbl->put_XYFocusDownNavigationStrategy(This,value) )
    ( (This)->lpVtbl->get_XYFocusLeftNavigationStrategy(This,value) )
    ( (This)->lpVtbl->put_XYFocusLeftNavigationStrategy(This,value) )
    ( (This)->lpVtbl->get_XYFocusRightNavigationStrategy(This,value) )
    ( (This)->lpVtbl->put_XYFocusRightNavigationStrategy(This,value) )
    ( (This)->lpVtbl->get_IsTabStop(This,value) )
    ( (This)->lpVtbl->put_IsTabStop(This,value) )
    ( (This)->lpVtbl->get_TabIndex(This,value) )
    ( (This)->lpVtbl->put_TabIndex(This,value) )
    ( (This)->lpVtbl->add_Invoked(This,handler,token) )
    ( (This)->lpVtbl->remove_Invoked(This,token) )
    ( (This)->lpVtbl->add_GotFocus(This,handler,token) )
    ( (This)->lpVtbl->remove_GotFocus(This,token) )
    ( (This)->lpVtbl->add_LostFocus(This,handler,token) )
    ( (This)->lpVtbl->remove_LostFocus(This,token) )
    ( (This)->lpVtbl->Focus(This,value,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLink;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IContentLinkInvokedEventArgs[] = L"Windows.UI.Xaml.Documents.IContentLinkInvokedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkInvokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkInvokedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkInvokedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkInvokedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkInvokedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkInvokedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkInvokedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ContentLinkInfo )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkInvokedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CIContentLinkInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkInvokedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkInvokedEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkInvokedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkInvokedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkInvokedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ContentLinkInfo(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkInvokedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IContentLinkProvider[] = L"Windows.UI.Xaml.Documents.IContentLinkProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IContentLinkProviderCollection[] = L"Windows.UI.Xaml.Documents.IContentLinkProviderCollection";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderCollectionVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IContentLinkProviderFactory[] = L"Windows.UI.Xaml.Documents.IContentLinkProviderFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProvider * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkProviderFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IContentLinkStatics[] = L"Windows.UI.Xaml.Documents.IContentLinkStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BackgroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CursorProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusLeftProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusRightProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusUpProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusDownProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ElementSoundModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FocusStateProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusUpNavigationStrategyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusDownNavigationStrategyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusLeftNavigationStrategyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusRightNavigationStrategyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTabStopProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TabIndexProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BackgroundProperty(This,value) )
    ( (This)->lpVtbl->get_CursorProperty(This,value) )
    ( (This)->lpVtbl->get_XYFocusLeftProperty(This,value) )
    ( (This)->lpVtbl->get_XYFocusRightProperty(This,value) )
    ( (This)->lpVtbl->get_XYFocusUpProperty(This,value) )
    ( (This)->lpVtbl->get_XYFocusDownProperty(This,value) )
    ( (This)->lpVtbl->get_ElementSoundModeProperty(This,value) )
    ( (This)->lpVtbl->get_FocusStateProperty(This,value) )
    ( (This)->lpVtbl->get_XYFocusUpNavigationStrategyProperty(This,value) )
    ( (This)->lpVtbl->get_XYFocusDownNavigationStrategyProperty(This,value) )
    ( (This)->lpVtbl->get_XYFocusLeftNavigationStrategyProperty(This,value) )
    ( (This)->lpVtbl->get_XYFocusRightNavigationStrategyProperty(This,value) )
    ( (This)->lpVtbl->get_IsTabStopProperty(This,value) )
    ( (This)->lpVtbl->get_TabIndexProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIContentLinkStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IGlyphs[] = L"Windows.UI.Xaml.Documents.IGlyphs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UnicodeString )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UnicodeString )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Indices )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Indices )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontUri )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FontUri )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StyleSimulations )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CStyleSimulations * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StyleSimulations )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CStyleSimulations value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontRenderingEmSize )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FontRenderingEmSize )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OriginX )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OriginX )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OriginY )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OriginY )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Fill )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Fill )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UnicodeString(This,value) )
    ( (This)->lpVtbl->put_UnicodeString(This,value) )
    ( (This)->lpVtbl->get_Indices(This,value) )
    ( (This)->lpVtbl->put_Indices(This,value) )
    ( (This)->lpVtbl->get_FontUri(This,value) )
    ( (This)->lpVtbl->put_FontUri(This,value) )
    ( (This)->lpVtbl->get_StyleSimulations(This,value) )
    ( (This)->lpVtbl->put_StyleSimulations(This,value) )
    ( (This)->lpVtbl->get_FontRenderingEmSize(This,value) )
    ( (This)->lpVtbl->put_FontRenderingEmSize(This,value) )
    ( (This)->lpVtbl->get_OriginX(This,value) )
    ( (This)->lpVtbl->put_OriginX(This,value) )
    ( (This)->lpVtbl->get_OriginY(This,value) )
    ( (This)->lpVtbl->put_OriginY(This,value) )
    ( (This)->lpVtbl->get_Fill(This,value) )
    ( (This)->lpVtbl->put_Fill(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IGlyphs2[] = L"Windows.UI.Xaml.Documents.IGlyphs2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsColorFontEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsColorFontEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ColorFontPaletteIndex )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2 * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ColorFontPaletteIndex )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2 * This,
                  INT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsColorFontEnabled(This,value) )
    ( (This)->lpVtbl->put_IsColorFontEnabled(This,value) )
    ( (This)->lpVtbl->get_ColorFontPaletteIndex(This,value) )
    ( (This)->lpVtbl->put_ColorFontPaletteIndex(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IGlyphsStatics[] = L"Windows.UI.Xaml.Documents.IGlyphsStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UnicodeStringProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IndicesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontUriProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StyleSimulationsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontRenderingEmSizeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OriginXProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OriginYProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FillProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UnicodeStringProperty(This,value) )
    ( (This)->lpVtbl->get_IndicesProperty(This,value) )
    ( (This)->lpVtbl->get_FontUriProperty(This,value) )
    ( (This)->lpVtbl->get_StyleSimulationsProperty(This,value) )
    ( (This)->lpVtbl->get_FontRenderingEmSizeProperty(This,value) )
    ( (This)->lpVtbl->get_OriginXProperty(This,value) )
    ( (This)->lpVtbl->get_OriginYProperty(This,value) )
    ( (This)->lpVtbl->get_FillProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IGlyphsStatics2[] = L"Windows.UI.Xaml.Documents.IGlyphsStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsColorFontEnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ColorFontPaletteIndexProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsColorFontEnabledProperty(This,value) )
    ( (This)->lpVtbl->get_ColorFontPaletteIndexProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlink[] = L"Windows.UI.Xaml.Documents.IHyperlink";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NavigateUri )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NavigateUri )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Click )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Click )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NavigateUri(This,value) )
    ( (This)->lpVtbl->put_NavigateUri(This,value) )
    ( (This)->lpVtbl->add_Click(This,handler,token) )
    ( (This)->lpVtbl->remove_Click(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlink2[] = L"Windows.UI.Xaml.Documents.IHyperlink2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UnderlineStyle )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CDocuments_CUnderlineStyle * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UnderlineStyle )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2 * This,
                  __x_ABI_CWindows_CUI_CXaml_CDocuments_CUnderlineStyle value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UnderlineStyle(This,value) )
    ( (This)->lpVtbl->put_UnderlineStyle(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlink3[] = L"Windows.UI.Xaml.Documents.IHyperlink3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_XYFocusLeft )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XYFocusLeft )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusRight )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XYFocusRight )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusUp )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XYFocusUp )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusDown )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XYFocusDown )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ElementSoundMode )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CElementSoundMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ElementSoundMode )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
                  __x_ABI_CWindows_CUI_CXaml_CElementSoundMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_XYFocusLeft(This,value) )
    ( (This)->lpVtbl->put_XYFocusLeft(This,value) )
    ( (This)->lpVtbl->get_XYFocusRight(This,value) )
    ( (This)->lpVtbl->put_XYFocusRight(This,value) )
    ( (This)->lpVtbl->get_XYFocusUp(This,value) )
    ( (This)->lpVtbl->put_XYFocusUp(This,value) )
    ( (This)->lpVtbl->get_XYFocusDown(This,value) )
    ( (This)->lpVtbl->put_XYFocusDown(This,value) )
    ( (This)->lpVtbl->get_ElementSoundMode(This,value) )
    ( (This)->lpVtbl->put_ElementSoundMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlink4[] = L"Windows.UI.Xaml.Documents.IHyperlink4";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FocusState )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CFocusState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusUpNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XYFocusUpNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusDownNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XYFocusDownNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusLeftNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XYFocusLeftNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusRightNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XYFocusRightNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_GotFocus )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_GotFocus )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LostFocus )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LostFocus )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *Focus )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
                  __x_ABI_CWindows_CUI_CXaml_CFocusState value,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FocusState(This,value) )
    ( (This)->lpVtbl->get_XYFocusUpNavigationStrategy(This,value) )
    ( (This)->lpVtbl->put_XYFocusUpNavigationStrategy(This,value) )
    ( (This)->lpVtbl->get_XYFocusDownNavigationStrategy(This,value) )
    ( (This)->lpVtbl->put_XYFocusDownNavigationStrategy(This,value) )
    ( (This)->lpVtbl->get_XYFocusLeftNavigationStrategy(This,value) )
    ( (This)->lpVtbl->put_XYFocusLeftNavigationStrategy(This,value) )
    ( (This)->lpVtbl->get_XYFocusRightNavigationStrategy(This,value) )
    ( (This)->lpVtbl->put_XYFocusRightNavigationStrategy(This,value) )
    ( (This)->lpVtbl->add_GotFocus(This,handler,token) )
    ( (This)->lpVtbl->remove_GotFocus(This,token) )
    ( (This)->lpVtbl->add_LostFocus(This,handler,token) )
    ( (This)->lpVtbl->remove_LostFocus(This,token) )
    ( (This)->lpVtbl->Focus(This,value,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlink5[] = L"Windows.UI.Xaml.Documents.IHyperlink5";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsTabStop )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsTabStop )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TabIndex )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5 * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TabIndex )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5 * This,
                  INT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsTabStop(This,value) )
    ( (This)->lpVtbl->put_IsTabStop(This,value) )
    ( (This)->lpVtbl->get_TabIndex(This,value) )
    ( (This)->lpVtbl->put_TabIndex(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlinkClickEventArgs[] = L"Windows.UI.Xaml.Documents.IHyperlinkClickEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlinkStatics[] = L"Windows.UI.Xaml.Documents.IHyperlinkStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NavigateUriProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NavigateUriProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlinkStatics2[] = L"Windows.UI.Xaml.Documents.IHyperlinkStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UnderlineStyleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UnderlineStyleProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlinkStatics3[] = L"Windows.UI.Xaml.Documents.IHyperlinkStatics3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_XYFocusLeftProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusRightProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusUpProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusDownProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ElementSoundModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_XYFocusLeftProperty(This,value) )
    ( (This)->lpVtbl->get_XYFocusRightProperty(This,value) )
    ( (This)->lpVtbl->get_XYFocusUpProperty(This,value) )
    ( (This)->lpVtbl->get_XYFocusDownProperty(This,value) )
    ( (This)->lpVtbl->get_ElementSoundModeProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlinkStatics4[] = L"Windows.UI.Xaml.Documents.IHyperlinkStatics4";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FocusStateProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusUpNavigationStrategyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusDownNavigationStrategyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusLeftNavigationStrategyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusRightNavigationStrategyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FocusStateProperty(This,value) )
    ( (This)->lpVtbl->get_XYFocusUpNavigationStrategyProperty(This,value) )
    ( (This)->lpVtbl->get_XYFocusDownNavigationStrategyProperty(This,value) )
    ( (This)->lpVtbl->get_XYFocusLeftNavigationStrategyProperty(This,value) )
    ( (This)->lpVtbl->get_XYFocusRightNavigationStrategyProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlinkStatics5[] = L"Windows.UI.Xaml.Documents.IHyperlinkStatics5";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsTabStopProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TabIndexProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsTabStopProperty(This,value) )
    ( (This)->lpVtbl->get_TabIndexProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IInline[] = L"Windows.UI.Xaml.Documents.IInline";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IInlineFactory[] = L"Windows.UI.Xaml.Documents.IInlineFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IInlineUIContainer[] = L"Windows.UI.Xaml.Documents.IInlineUIContainer";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Child )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Child )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Child(This,value) )
    ( (This)->lpVtbl->put_Child(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IItalic[] = L"Windows.UI.Xaml.Documents.IItalic";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalicVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalicVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalicVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ILineBreak[] = L"Windows.UI.Xaml.Documents.ILineBreak";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreakVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreakVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreakVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IParagraph[] = L"Windows.UI.Xaml.Documents.IParagraph";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Inlines )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TextIndent )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TextIndent )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Inlines(This,value) )
    ( (This)->lpVtbl->get_TextIndent(This,value) )
    ( (This)->lpVtbl->put_TextIndent(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IParagraphStatics[] = L"Windows.UI.Xaml.Documents.IParagraphStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TextIndentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TextIndentProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IPlaceContentLinkProvider[] = L"Windows.UI.Xaml.Documents.IPlaceContentLinkProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIPlaceContentLinkProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIPlaceContentLinkProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIPlaceContentLinkProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIPlaceContentLinkProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIPlaceContentLinkProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIPlaceContentLinkProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIPlaceContentLinkProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIPlaceContentLinkProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIPlaceContentLinkProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIPlaceContentLinkProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIPlaceContentLinkProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IRun[] = L"Windows.UI.Xaml.Documents.IRun";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Text )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FlowDirection )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CFlowDirection * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FlowDirection )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun * This,
                  __x_ABI_CWindows_CUI_CXaml_CFlowDirection value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Text(This,value) )
    ( (This)->lpVtbl->put_Text(This,value) )
    ( (This)->lpVtbl->get_FlowDirection(This,value) )
    ( (This)->lpVtbl->put_FlowDirection(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IRunStatics[] = L"Windows.UI.Xaml.Documents.IRunStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FlowDirectionProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FlowDirectionProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ISpan[] = L"Windows.UI.Xaml.Documents.ISpan";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Inlines )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Inlines )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan * This,
                  __RPC__in_opt __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Inlines(This,value) )
    ( (This)->lpVtbl->put_Inlines(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ISpanFactory[] = L"Windows.UI.Xaml.Documents.ISpanFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElement[] = L"Windows.UI.Xaml.Documents.ITextElement";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontSize )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FontSize )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontFamily )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FontFamily )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontWeight )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FontWeight )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                  __x_ABI_CWindows_CUI_CText_CFontWeight value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontStyle )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFontStyle * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FontStyle )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                  __x_ABI_CWindows_CUI_CText_CFontStyle value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontStretch )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CFontStretch * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FontStretch )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                  __x_ABI_CWindows_CUI_CText_CFontStretch value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CharacterSpacing )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CharacterSpacing )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Foreground )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Foreground )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Language )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentStart )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentEnd )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ElementStart )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ElementEnd )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FindName )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt IInspectable * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_FontSize(This,value) )
    ( (This)->lpVtbl->put_FontSize(This,value) )
    ( (This)->lpVtbl->get_FontFamily(This,value) )
    ( (This)->lpVtbl->put_FontFamily(This,value) )
    ( (This)->lpVtbl->get_FontWeight(This,value) )
    ( (This)->lpVtbl->put_FontWeight(This,value) )
    ( (This)->lpVtbl->get_FontStyle(This,value) )
    ( (This)->lpVtbl->put_FontStyle(This,value) )
    ( (This)->lpVtbl->get_FontStretch(This,value) )
    ( (This)->lpVtbl->put_FontStretch(This,value) )
    ( (This)->lpVtbl->get_CharacterSpacing(This,value) )
    ( (This)->lpVtbl->put_CharacterSpacing(This,value) )
    ( (This)->lpVtbl->get_Foreground(This,value) )
    ( (This)->lpVtbl->put_Foreground(This,value) )
    ( (This)->lpVtbl->get_Language(This,value) )
    ( (This)->lpVtbl->put_Language(This,value) )
    ( (This)->lpVtbl->get_ContentStart(This,value) )
    ( (This)->lpVtbl->get_ContentEnd(This,value) )
    ( (This)->lpVtbl->get_ElementStart(This,value) )
    ( (This)->lpVtbl->get_ElementEnd(This,value) )
    ( (This)->lpVtbl->FindName(This,name,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElement2[] = L"Windows.UI.Xaml.Documents.ITextElement2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsTextScaleFactorEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsTextScaleFactorEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsTextScaleFactorEnabled(This,value) )
    ( (This)->lpVtbl->put_IsTextScaleFactorEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElement3[] = L"Windows.UI.Xaml.Documents.ITextElement3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllowFocusOnInteraction )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowFocusOnInteraction )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccessKey )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AccessKey )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExitDisplayModeOnAccessKeyInvoked )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ExitDisplayModeOnAccessKeyInvoked )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllowFocusOnInteraction(This,value) )
    ( (This)->lpVtbl->put_AllowFocusOnInteraction(This,value) )
    ( (This)->lpVtbl->get_AccessKey(This,value) )
    ( (This)->lpVtbl->put_AccessKey(This,value) )
    ( (This)->lpVtbl->get_ExitDisplayModeOnAccessKeyInvoked(This,value) )
    ( (This)->lpVtbl->put_ExitDisplayModeOnAccessKeyInvoked(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElement4[] = L"Windows.UI.Xaml.Documents.ITextElement4";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TextDecorations )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CTextDecorations * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TextDecorations )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
                  __x_ABI_CWindows_CUI_CText_CTextDecorations value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAccessKeyScope )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsAccessKeyScope )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccessKeyScopeOwner )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AccessKeyScopeOwner )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyTipPlacementMode )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CKeyTipPlacementMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeyTipPlacementMode )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CKeyTipPlacementMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyTipHorizontalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeyTipHorizontalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyTipVerticalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeyTipVerticalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
                  DOUBLE value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AccessKeyDisplayRequested )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AccessKeyDisplayRequested )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AccessKeyDisplayDismissed )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AccessKeyDisplayDismissed )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AccessKeyInvoked )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AccessKeyInvoked )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TextDecorations(This,value) )
    ( (This)->lpVtbl->put_TextDecorations(This,value) )
    ( (This)->lpVtbl->get_IsAccessKeyScope(This,value) )
    ( (This)->lpVtbl->put_IsAccessKeyScope(This,value) )
    ( (This)->lpVtbl->get_AccessKeyScopeOwner(This,value) )
    ( (This)->lpVtbl->put_AccessKeyScopeOwner(This,value) )
    ( (This)->lpVtbl->get_KeyTipPlacementMode(This,value) )
    ( (This)->lpVtbl->put_KeyTipPlacementMode(This,value) )
    ( (This)->lpVtbl->get_KeyTipHorizontalOffset(This,value) )
    ( (This)->lpVtbl->put_KeyTipHorizontalOffset(This,value) )
    ( (This)->lpVtbl->get_KeyTipVerticalOffset(This,value) )
    ( (This)->lpVtbl->put_KeyTipVerticalOffset(This,value) )
    ( (This)->lpVtbl->add_AccessKeyDisplayRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_AccessKeyDisplayRequested(This,token) )
    ( (This)->lpVtbl->add_AccessKeyDisplayDismissed(This,handler,token) )
    ( (This)->lpVtbl->remove_AccessKeyDisplayDismissed(This,token) )
    ( (This)->lpVtbl->add_AccessKeyInvoked(This,handler,token) )
    ( (This)->lpVtbl->remove_AccessKeyInvoked(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElement5[] = L"Windows.UI.Xaml.Documents.ITextElement5";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_XamlRoot )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIXamlRoot * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XamlRoot )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIXamlRoot * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement5Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement5
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_XamlRoot(This,value) )
    ( (This)->lpVtbl->put_XamlRoot(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElementFactory[] = L"Windows.UI.Xaml.Documents.ITextElementFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElementOverrides[] = L"Windows.UI.Xaml.Documents.ITextElementOverrides";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverridesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OnDisconnectVisualChildren )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverridesVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverridesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OnDisconnectVisualChildren(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElementStatics[] = L"Windows.UI.Xaml.Documents.ITextElementStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FontSizeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontFamilyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontWeightProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontStyleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontStretchProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CharacterSpacingProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ForegroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LanguageProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FontSizeProperty(This,value) )
    ( (This)->lpVtbl->get_FontFamilyProperty(This,value) )
    ( (This)->lpVtbl->get_FontWeightProperty(This,value) )
    ( (This)->lpVtbl->get_FontStyleProperty(This,value) )
    ( (This)->lpVtbl->get_FontStretchProperty(This,value) )
    ( (This)->lpVtbl->get_CharacterSpacingProperty(This,value) )
    ( (This)->lpVtbl->get_ForegroundProperty(This,value) )
    ( (This)->lpVtbl->get_LanguageProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElementStatics2[] = L"Windows.UI.Xaml.Documents.ITextElementStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsTextScaleFactorEnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsTextScaleFactorEnabledProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElementStatics3[] = L"Windows.UI.Xaml.Documents.ITextElementStatics3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllowFocusOnInteractionProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccessKeyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExitDisplayModeOnAccessKeyInvokedProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllowFocusOnInteractionProperty(This,value) )
    ( (This)->lpVtbl->get_AccessKeyProperty(This,value) )
    ( (This)->lpVtbl->get_ExitDisplayModeOnAccessKeyInvokedProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElementStatics4[] = L"Windows.UI.Xaml.Documents.ITextElementStatics4";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TextDecorationsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAccessKeyScopeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccessKeyScopeOwnerProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyTipPlacementModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyTipHorizontalOffsetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyTipVerticalOffsetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TextDecorationsProperty(This,value) )
    ( (This)->lpVtbl->get_IsAccessKeyScopeProperty(This,value) )
    ( (This)->lpVtbl->get_AccessKeyScopeOwnerProperty(This,value) )
    ( (This)->lpVtbl->get_KeyTipPlacementModeProperty(This,value) )
    ( (This)->lpVtbl->get_KeyTipHorizontalOffsetProperty(This,value) )
    ( (This)->lpVtbl->get_KeyTipVerticalOffsetProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextHighlighter[] = L"Windows.UI.Xaml.Documents.ITextHighlighter";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Ranges )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Foreground )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Foreground )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Background )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Background )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Ranges(This,value) )
    ( (This)->lpVtbl->get_Foreground(This,value) )
    ( (This)->lpVtbl->put_Foreground(This,value) )
    ( (This)->lpVtbl->get_Background(This,value) )
    ( (This)->lpVtbl->put_Background(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextHighlighterBase[] = L"Windows.UI.Xaml.Documents.ITextHighlighterBase";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextHighlighterBaseFactory[] = L"Windows.UI.Xaml.Documents.ITextHighlighterBaseFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextHighlighterFactory[] = L"Windows.UI.Xaml.Documents.ITextHighlighterFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextHighlighterStatics[] = L"Windows.UI.Xaml.Documents.ITextHighlighterStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ForegroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BackgroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ForegroundProperty(This,value) )
    ( (This)->lpVtbl->get_BackgroundProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextPointer[] = L"Windows.UI.Xaml.Documents.ITextPointer";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Parent )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VisualParent )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LogicalDirection )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CDocuments_CLogicalDirection * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Offset )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This,
                           __RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCharacterRect )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This,
                  __x_ABI_CWindows_CUI_CXaml_CDocuments_CLogicalDirection direction,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetPositionAtOffset )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This,
                  INT32 offset,
                  __x_ABI_CWindows_CUI_CXaml_CDocuments_CLogicalDirection direction,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Parent(This,value) )
    ( (This)->lpVtbl->get_VisualParent(This,value) )
    ( (This)->lpVtbl->get_LogicalDirection(This,value) )
    ( (This)->lpVtbl->get_Offset(This,value) )
    ( (This)->lpVtbl->GetCharacterRect(This,direction,result) )
    ( (This)->lpVtbl->GetPositionAtOffset(This,offset,direction,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITypography[] = L"Windows.UI.Xaml.Documents.ITypography";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITypographyStatics[] = L"Windows.UI.Xaml.Documents.ITypographyStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AnnotationAlternatesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAnnotationAlternates )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetAnnotationAlternates )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EastAsianExpertFormsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetEastAsianExpertForms )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetEastAsianExpertForms )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EastAsianLanguageProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetEastAsianLanguage )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CFontEastAsianLanguage * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetEastAsianLanguage )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __x_ABI_CWindows_CUI_CXaml_CFontEastAsianLanguage value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EastAsianWidthsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetEastAsianWidths )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CFontEastAsianWidths * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetEastAsianWidths )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __x_ABI_CWindows_CUI_CXaml_CFontEastAsianWidths value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StandardLigaturesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStandardLigatures )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetStandardLigatures )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContextualLigaturesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetContextualLigatures )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetContextualLigatures )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DiscretionaryLigaturesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDiscretionaryLigatures )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetDiscretionaryLigatures )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HistoricalLigaturesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetHistoricalLigatures )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetHistoricalLigatures )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StandardSwashesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStandardSwashes )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetStandardSwashes )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContextualSwashesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetContextualSwashes )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetContextualSwashes )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContextualAlternatesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetContextualAlternates )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetContextualAlternates )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StylisticAlternatesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticAlternates )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticAlternates )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StylisticSet1Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet1 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet1 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StylisticSet2Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet2 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet2 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StylisticSet3Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet3 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet3 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StylisticSet4Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet4 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet4 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StylisticSet5Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet5 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet5 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StylisticSet6Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet6 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet6 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StylisticSet7Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet7 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet7 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StylisticSet8Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet8 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet8 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StylisticSet9Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet9 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet9 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StylisticSet10Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet10 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet10 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StylisticSet11Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet11 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet11 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StylisticSet12Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet12 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet12 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StylisticSet13Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet13 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet13 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StylisticSet14Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet14 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet14 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StylisticSet15Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet15 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet15 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StylisticSet16Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet16 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet16 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StylisticSet17Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet17 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet17 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StylisticSet18Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet18 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet18 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StylisticSet19Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet19 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet19 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StylisticSet20Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet20 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet20 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CapitalsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCapitals )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CFontCapitals * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetCapitals )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __x_ABI_CWindows_CUI_CXaml_CFontCapitals value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CapitalSpacingProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCapitalSpacing )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetCapitalSpacing )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KerningProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetKerning )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetKerning )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CaseSensitiveFormsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCaseSensitiveForms )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetCaseSensitiveForms )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HistoricalFormsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetHistoricalForms )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetHistoricalForms )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FractionProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFraction )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CFontFraction * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetFraction )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __x_ABI_CWindows_CUI_CXaml_CFontFraction value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NumeralStyleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumeralStyle )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CFontNumeralStyle * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetNumeralStyle )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __x_ABI_CWindows_CUI_CXaml_CFontNumeralStyle value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NumeralAlignmentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumeralAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CFontNumeralAlignment * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetNumeralAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __x_ABI_CWindows_CUI_CXaml_CFontNumeralAlignment value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SlashedZeroProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSlashedZero )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetSlashedZero )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MathematicalGreekProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetMathematicalGreek )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetMathematicalGreek )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VariantsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetVariants )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CFontVariants * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetVariants )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __x_ABI_CWindows_CUI_CXaml_CFontVariants value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AnnotationAlternatesProperty(This,value) )
    ( (This)->lpVtbl->GetAnnotationAlternates(This,element,result) )
    ( (This)->lpVtbl->SetAnnotationAlternates(This,element,value) )
    ( (This)->lpVtbl->get_EastAsianExpertFormsProperty(This,value) )
    ( (This)->lpVtbl->GetEastAsianExpertForms(This,element,result) )
    ( (This)->lpVtbl->SetEastAsianExpertForms(This,element,value) )
    ( (This)->lpVtbl->get_EastAsianLanguageProperty(This,value) )
    ( (This)->lpVtbl->GetEastAsianLanguage(This,element,result) )
    ( (This)->lpVtbl->SetEastAsianLanguage(This,element,value) )
    ( (This)->lpVtbl->get_EastAsianWidthsProperty(This,value) )
    ( (This)->lpVtbl->GetEastAsianWidths(This,element,result) )
    ( (This)->lpVtbl->SetEastAsianWidths(This,element,value) )
    ( (This)->lpVtbl->get_StandardLigaturesProperty(This,value) )
    ( (This)->lpVtbl->GetStandardLigatures(This,element,result) )
    ( (This)->lpVtbl->SetStandardLigatures(This,element,value) )
    ( (This)->lpVtbl->get_ContextualLigaturesProperty(This,value) )
    ( (This)->lpVtbl->GetContextualLigatures(This,element,result) )
    ( (This)->lpVtbl->SetContextualLigatures(This,element,value) )
    ( (This)->lpVtbl->get_DiscretionaryLigaturesProperty(This,value) )
    ( (This)->lpVtbl->GetDiscretionaryLigatures(This,element,result) )
    ( (This)->lpVtbl->SetDiscretionaryLigatures(This,element,value) )
    ( (This)->lpVtbl->get_HistoricalLigaturesProperty(This,value) )
    ( (This)->lpVtbl->GetHistoricalLigatures(This,element,result) )
    ( (This)->lpVtbl->SetHistoricalLigatures(This,element,value) )
    ( (This)->lpVtbl->get_StandardSwashesProperty(This,value) )
    ( (This)->lpVtbl->GetStandardSwashes(This,element,result) )
    ( (This)->lpVtbl->SetStandardSwashes(This,element,value) )
    ( (This)->lpVtbl->get_ContextualSwashesProperty(This,value) )
    ( (This)->lpVtbl->GetContextualSwashes(This,element,result) )
    ( (This)->lpVtbl->SetContextualSwashes(This,element,value) )
    ( (This)->lpVtbl->get_ContextualAlternatesProperty(This,value) )
    ( (This)->lpVtbl->GetContextualAlternates(This,element,result) )
    ( (This)->lpVtbl->SetContextualAlternates(This,element,value) )
    ( (This)->lpVtbl->get_StylisticAlternatesProperty(This,value) )
    ( (This)->lpVtbl->GetStylisticAlternates(This,element,result) )
    ( (This)->lpVtbl->SetStylisticAlternates(This,element,value) )
    ( (This)->lpVtbl->get_StylisticSet1Property(This,value) )
    ( (This)->lpVtbl->GetStylisticSet1(This,element,result) )
    ( (This)->lpVtbl->SetStylisticSet1(This,element,value) )
    ( (This)->lpVtbl->get_StylisticSet2Property(This,value) )
    ( (This)->lpVtbl->GetStylisticSet2(This,element,result) )
    ( (This)->lpVtbl->SetStylisticSet2(This,element,value) )
    ( (This)->lpVtbl->get_StylisticSet3Property(This,value) )
    ( (This)->lpVtbl->GetStylisticSet3(This,element,result) )
    ( (This)->lpVtbl->SetStylisticSet3(This,element,value) )
    ( (This)->lpVtbl->get_StylisticSet4Property(This,value) )
    ( (This)->lpVtbl->GetStylisticSet4(This,element,result) )
    ( (This)->lpVtbl->SetStylisticSet4(This,element,value) )
    ( (This)->lpVtbl->get_StylisticSet5Property(This,value) )
    ( (This)->lpVtbl->GetStylisticSet5(This,element,result) )
    ( (This)->lpVtbl->SetStylisticSet5(This,element,value) )
    ( (This)->lpVtbl->get_StylisticSet6Property(This,value) )
    ( (This)->lpVtbl->GetStylisticSet6(This,element,result) )
    ( (This)->lpVtbl->SetStylisticSet6(This,element,value) )
    ( (This)->lpVtbl->get_StylisticSet7Property(This,value) )
    ( (This)->lpVtbl->GetStylisticSet7(This,element,result) )
    ( (This)->lpVtbl->SetStylisticSet7(This,element,value) )
    ( (This)->lpVtbl->get_StylisticSet8Property(This,value) )
    ( (This)->lpVtbl->GetStylisticSet8(This,element,result) )
    ( (This)->lpVtbl->SetStylisticSet8(This,element,value) )
    ( (This)->lpVtbl->get_StylisticSet9Property(This,value) )
    ( (This)->lpVtbl->GetStylisticSet9(This,element,result) )
    ( (This)->lpVtbl->SetStylisticSet9(This,element,value) )
    ( (This)->lpVtbl->get_StylisticSet10Property(This,value) )
    ( (This)->lpVtbl->GetStylisticSet10(This,element,result) )
    ( (This)->lpVtbl->SetStylisticSet10(This,element,value) )
    ( (This)->lpVtbl->get_StylisticSet11Property(This,value) )
    ( (This)->lpVtbl->GetStylisticSet11(This,element,result) )
    ( (This)->lpVtbl->SetStylisticSet11(This,element,value) )
    ( (This)->lpVtbl->get_StylisticSet12Property(This,value) )
    ( (This)->lpVtbl->GetStylisticSet12(This,element,result) )
    ( (This)->lpVtbl->SetStylisticSet12(This,element,value) )
    ( (This)->lpVtbl->get_StylisticSet13Property(This,value) )
    ( (This)->lpVtbl->GetStylisticSet13(This,element,result) )
    ( (This)->lpVtbl->SetStylisticSet13(This,element,value) )
    ( (This)->lpVtbl->get_StylisticSet14Property(This,value) )
    ( (This)->lpVtbl->GetStylisticSet14(This,element,result) )
    ( (This)->lpVtbl->SetStylisticSet14(This,element,value) )
    ( (This)->lpVtbl->get_StylisticSet15Property(This,value) )
    ( (This)->lpVtbl->GetStylisticSet15(This,element,result) )
    ( (This)->lpVtbl->SetStylisticSet15(This,element,value) )
    ( (This)->lpVtbl->get_StylisticSet16Property(This,value) )
    ( (This)->lpVtbl->GetStylisticSet16(This,element,result) )
    ( (This)->lpVtbl->SetStylisticSet16(This,element,value) )
    ( (This)->lpVtbl->get_StylisticSet17Property(This,value) )
    ( (This)->lpVtbl->GetStylisticSet17(This,element,result) )
    ( (This)->lpVtbl->SetStylisticSet17(This,element,value) )
    ( (This)->lpVtbl->get_StylisticSet18Property(This,value) )
    ( (This)->lpVtbl->GetStylisticSet18(This,element,result) )
    ( (This)->lpVtbl->SetStylisticSet18(This,element,value) )
    ( (This)->lpVtbl->get_StylisticSet19Property(This,value) )
    ( (This)->lpVtbl->GetStylisticSet19(This,element,result) )
    ( (This)->lpVtbl->SetStylisticSet19(This,element,value) )
    ( (This)->lpVtbl->get_StylisticSet20Property(This,value) )
    ( (This)->lpVtbl->GetStylisticSet20(This,element,result) )
    ( (This)->lpVtbl->SetStylisticSet20(This,element,value) )
    ( (This)->lpVtbl->get_CapitalsProperty(This,value) )
    ( (This)->lpVtbl->GetCapitals(This,element,result) )
    ( (This)->lpVtbl->SetCapitals(This,element,value) )
    ( (This)->lpVtbl->get_CapitalSpacingProperty(This,value) )
    ( (This)->lpVtbl->GetCapitalSpacing(This,element,result) )
    ( (This)->lpVtbl->SetCapitalSpacing(This,element,value) )
    ( (This)->lpVtbl->get_KerningProperty(This,value) )
    ( (This)->lpVtbl->GetKerning(This,element,result) )
    ( (This)->lpVtbl->SetKerning(This,element,value) )
    ( (This)->lpVtbl->get_CaseSensitiveFormsProperty(This,value) )
    ( (This)->lpVtbl->GetCaseSensitiveForms(This,element,result) )
    ( (This)->lpVtbl->SetCaseSensitiveForms(This,element,value) )
    ( (This)->lpVtbl->get_HistoricalFormsProperty(This,value) )
    ( (This)->lpVtbl->GetHistoricalForms(This,element,result) )
    ( (This)->lpVtbl->SetHistoricalForms(This,element,value) )
    ( (This)->lpVtbl->get_FractionProperty(This,value) )
    ( (This)->lpVtbl->GetFraction(This,element,result) )
    ( (This)->lpVtbl->SetFraction(This,element,value) )
    ( (This)->lpVtbl->get_NumeralStyleProperty(This,value) )
    ( (This)->lpVtbl->GetNumeralStyle(This,element,result) )
    ( (This)->lpVtbl->SetNumeralStyle(This,element,value) )
    ( (This)->lpVtbl->get_NumeralAlignmentProperty(This,value) )
    ( (This)->lpVtbl->GetNumeralAlignment(This,element,result) )
    ( (This)->lpVtbl->SetNumeralAlignment(This,element,value) )
    ( (This)->lpVtbl->get_SlashedZeroProperty(This,value) )
    ( (This)->lpVtbl->GetSlashedZero(This,element,result) )
    ( (This)->lpVtbl->SetSlashedZero(This,element,value) )
    ( (This)->lpVtbl->get_MathematicalGreekProperty(This,value) )
    ( (This)->lpVtbl->GetMathematicalGreek(This,element,result) )
    ( (This)->lpVtbl->SetMathematicalGreek(This,element,value) )
    ( (This)->lpVtbl->get_VariantsProperty(This,value) )
    ( (This)->lpVtbl->GetVariants(This,element,result) )
    ( (This)->lpVtbl->SetVariants(This,element,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IUnderline[] = L"Windows.UI.Xaml.Documents.IUnderline";
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderlineVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderlineVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderlineVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Block[] = L"Windows.UI.Xaml.Documents.Block";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_BlockCollection[] = L"Windows.UI.Xaml.Documents.BlockCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Bold[] = L"Windows.UI.Xaml.Documents.Bold";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_ContactContentLinkProvider[] = L"Windows.UI.Xaml.Documents.ContactContentLinkProvider";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_ContentLink[] = L"Windows.UI.Xaml.Documents.ContentLink";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_ContentLinkInvokedEventArgs[] = L"Windows.UI.Xaml.Documents.ContentLinkInvokedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_ContentLinkProvider[] = L"Windows.UI.Xaml.Documents.ContentLinkProvider";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_ContentLinkProviderCollection[] = L"Windows.UI.Xaml.Documents.ContentLinkProviderCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Glyphs[] = L"Windows.UI.Xaml.Documents.Glyphs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Hyperlink[] = L"Windows.UI.Xaml.Documents.Hyperlink";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_HyperlinkClickEventArgs[] = L"Windows.UI.Xaml.Documents.HyperlinkClickEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Inline[] = L"Windows.UI.Xaml.Documents.Inline";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_InlineCollection[] = L"Windows.UI.Xaml.Documents.InlineCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_InlineUIContainer[] = L"Windows.UI.Xaml.Documents.InlineUIContainer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Italic[] = L"Windows.UI.Xaml.Documents.Italic";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_LineBreak[] = L"Windows.UI.Xaml.Documents.LineBreak";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Paragraph[] = L"Windows.UI.Xaml.Documents.Paragraph";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_PlaceContentLinkProvider[] = L"Windows.UI.Xaml.Documents.PlaceContentLinkProvider";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Run[] = L"Windows.UI.Xaml.Documents.Run";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Span[] = L"Windows.UI.Xaml.Documents.Span";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_TextElement[] = L"Windows.UI.Xaml.Documents.TextElement";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_TextHighlighter[] = L"Windows.UI.Xaml.Documents.TextHighlighter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_TextHighlighterBase[] = L"Windows.UI.Xaml.Documents.TextHighlighterBase";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_TextPointer[] = L"Windows.UI.Xaml.Documents.TextPointer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Typography[] = L"Windows.UI.Xaml.Documents.Typography";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Underline[] = L"Windows.UI.Xaml.Documents.Underline";
       
       
#pragma clang diagnostic pop
