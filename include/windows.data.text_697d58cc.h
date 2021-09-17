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
#include "Windows.UI.Text.Core.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CData_CText_CISelectableWordSegmentsTokenizingHandler __x_ABI_CWindows_CData_CText_CISelectableWordSegmentsTokenizingHandler;
typedef interface __x_ABI_CWindows_CData_CText_CIWordSegmentsTokenizingHandler __x_ABI_CWindows_CData_CText_CIWordSegmentsTokenizingHandler;
typedef interface __x_ABI_CWindows_CData_CText_CIAlternateWordForm __x_ABI_CWindows_CData_CText_CIAlternateWordForm;
typedef interface __x_ABI_CWindows_CData_CText_CISelectableWordSegment __x_ABI_CWindows_CData_CText_CISelectableWordSegment;
typedef interface __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenter __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenter;
typedef interface __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenterFactory __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenterFactory;
typedef interface __x_ABI_CWindows_CData_CText_CISemanticTextQuery __x_ABI_CWindows_CData_CText_CISemanticTextQuery;
typedef interface __x_ABI_CWindows_CData_CText_CISemanticTextQueryFactory __x_ABI_CWindows_CData_CText_CISemanticTextQueryFactory;
typedef interface __x_ABI_CWindows_CData_CText_CITextConversionGenerator __x_ABI_CWindows_CData_CText_CITextConversionGenerator;
typedef interface __x_ABI_CWindows_CData_CText_CITextConversionGeneratorFactory __x_ABI_CWindows_CData_CText_CITextConversionGeneratorFactory;
typedef interface __x_ABI_CWindows_CData_CText_CITextPhoneme __x_ABI_CWindows_CData_CText_CITextPhoneme;
typedef interface __x_ABI_CWindows_CData_CText_CITextPredictionGenerator __x_ABI_CWindows_CData_CText_CITextPredictionGenerator;
typedef interface __x_ABI_CWindows_CData_CText_CITextPredictionGenerator2 __x_ABI_CWindows_CData_CText_CITextPredictionGenerator2;
typedef interface __x_ABI_CWindows_CData_CText_CITextPredictionGeneratorFactory __x_ABI_CWindows_CData_CText_CITextPredictionGeneratorFactory;
typedef interface __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator;
typedef interface __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator2 __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator2;
typedef interface __x_ABI_CWindows_CData_CText_CITextReverseConversionGeneratorFactory __x_ABI_CWindows_CData_CText_CITextReverseConversionGeneratorFactory;
typedef interface __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics;
typedef interface __x_ABI_CWindows_CData_CText_CIWordSegment __x_ABI_CWindows_CData_CText_CIWordSegment;
typedef interface __x_ABI_CWindows_CData_CText_CIWordsSegmenter __x_ABI_CWindows_CData_CText_CIWordsSegmenter;
typedef interface __x_ABI_CWindows_CData_CText_CIWordsSegmenterFactory __x_ABI_CWindows_CData_CText_CIWordsSegmenterFactory;
typedef interface __FIIterator_1_Windows__CData__CText__CAlternateWordForm __FIIterator_1_Windows__CData__CText__CAlternateWordForm;
EXTERN_C const IID IID___FIIterator_1_Windows__CData__CText__CAlternateWordForm;
typedef struct __FIIterator_1_Windows__CData__CText__CAlternateWordFormVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CData__CText__CAlternateWordForm * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CData__CText__CAlternateWordForm * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CData__CText__CAlternateWordForm * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CData__CText__CAlternateWordForm * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CData__CText__CAlternateWordForm * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CData__CText__CAlternateWordForm * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CData__CText__CAlternateWordForm * This, __RPC__out __x_ABI_CWindows_CData_CText_CIAlternateWordForm * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CData__CText__CAlternateWordForm * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CData__CText__CAlternateWordForm * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CData__CText__CAlternateWordForm * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CData_CText_CIAlternateWordForm * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CData__CText__CAlternateWordFormVtbl;
interface __FIIterator_1_Windows__CData__CText__CAlternateWordForm
{
    CONST_VTBL struct __FIIterator_1_Windows__CData__CText__CAlternateWordFormVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CData__CText__CAlternateWordForm __FIIterable_1_Windows__CData__CText__CAlternateWordForm;
EXTERN_C const IID IID___FIIterable_1_Windows__CData__CText__CAlternateWordForm;
typedef struct __FIIterable_1_Windows__CData__CText__CAlternateWordFormVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CData__CText__CAlternateWordForm * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CData__CText__CAlternateWordForm * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CData__CText__CAlternateWordForm * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CData__CText__CAlternateWordForm * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CData__CText__CAlternateWordForm * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CData__CText__CAlternateWordForm * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CData__CText__CAlternateWordForm * This, __RPC__deref_out_opt __FIIterator_1_Windows__CData__CText__CAlternateWordForm **first);
    END_INTERFACE
} __FIIterable_1_Windows__CData__CText__CAlternateWordFormVtbl;
interface __FIIterable_1_Windows__CData__CText__CAlternateWordForm
{
    CONST_VTBL struct __FIIterable_1_Windows__CData__CText__CAlternateWordFormVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CData__CText__CSelectableWordSegment __FIIterator_1_Windows__CData__CText__CSelectableWordSegment;
EXTERN_C const IID IID___FIIterator_1_Windows__CData__CText__CSelectableWordSegment;
typedef struct __FIIterator_1_Windows__CData__CText__CSelectableWordSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CData__CText__CSelectableWordSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CData__CText__CSelectableWordSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CData__CText__CSelectableWordSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CData__CText__CSelectableWordSegment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CData__CText__CSelectableWordSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CData__CText__CSelectableWordSegment * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CData__CText__CSelectableWordSegment * This, __RPC__out __x_ABI_CWindows_CData_CText_CISelectableWordSegment * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CData__CText__CSelectableWordSegment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CData__CText__CSelectableWordSegment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CData__CText__CSelectableWordSegment * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CData_CText_CISelectableWordSegment * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CData__CText__CSelectableWordSegmentVtbl;
interface __FIIterator_1_Windows__CData__CText__CSelectableWordSegment
{
    CONST_VTBL struct __FIIterator_1_Windows__CData__CText__CSelectableWordSegmentVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CData__CText__CSelectableWordSegment __FIIterable_1_Windows__CData__CText__CSelectableWordSegment;
EXTERN_C const IID IID___FIIterable_1_Windows__CData__CText__CSelectableWordSegment;
typedef struct __FIIterable_1_Windows__CData__CText__CSelectableWordSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CData__CText__CSelectableWordSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CData__CText__CSelectableWordSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CData__CText__CSelectableWordSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CData__CText__CSelectableWordSegment * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CData__CText__CSelectableWordSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CData__CText__CSelectableWordSegment * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CData__CText__CSelectableWordSegment * This, __RPC__deref_out_opt __FIIterator_1_Windows__CData__CText__CSelectableWordSegment **first);
    END_INTERFACE
} __FIIterable_1_Windows__CData__CText__CSelectableWordSegmentVtbl;
interface __FIIterable_1_Windows__CData__CText__CSelectableWordSegment
{
    CONST_VTBL struct __FIIterable_1_Windows__CData__CText__CSelectableWordSegmentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CData__CText__CTextPhoneme __FIIterator_1_Windows__CData__CText__CTextPhoneme;
EXTERN_C const IID IID___FIIterator_1_Windows__CData__CText__CTextPhoneme;
typedef struct __FIIterator_1_Windows__CData__CText__CTextPhonemeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CData__CText__CTextPhoneme * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextPhoneme * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextPhoneme * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextPhoneme * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextPhoneme * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextPhoneme * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextPhoneme * This, __RPC__out __x_ABI_CWindows_CData_CText_CITextPhoneme * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextPhoneme * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextPhoneme * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextPhoneme * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CData_CText_CITextPhoneme * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CData__CText__CTextPhonemeVtbl;
interface __FIIterator_1_Windows__CData__CText__CTextPhoneme
{
    CONST_VTBL struct __FIIterator_1_Windows__CData__CText__CTextPhonemeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CData__CText__CTextPhoneme __FIIterable_1_Windows__CData__CText__CTextPhoneme;
EXTERN_C const IID IID___FIIterable_1_Windows__CData__CText__CTextPhoneme;
typedef struct __FIIterable_1_Windows__CData__CText__CTextPhonemeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CData__CText__CTextPhoneme * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextPhoneme * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextPhoneme * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextPhoneme * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextPhoneme * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextPhoneme * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextPhoneme * This, __RPC__deref_out_opt __FIIterator_1_Windows__CData__CText__CTextPhoneme **first);
    END_INTERFACE
} __FIIterable_1_Windows__CData__CText__CTextPhonemeVtbl;
interface __FIIterable_1_Windows__CData__CText__CTextPhoneme
{
    CONST_VTBL struct __FIIterable_1_Windows__CData__CText__CTextPhonemeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
struct __x_ABI_CWindows_CData_CText_CTextSegment;
typedef interface __FIIterator_1_Windows__CData__CText__CTextSegment __FIIterator_1_Windows__CData__CText__CTextSegment;
EXTERN_C const IID IID___FIIterator_1_Windows__CData__CText__CTextSegment;
typedef struct __FIIterator_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This, __RPC__out struct __x_ABI_CWindows_CData_CText_CTextSegment *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CData_CText_CTextSegment *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CData__CText__CTextSegmentVtbl;
interface __FIIterator_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIIterator_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CData__CText__CTextSegment __FIIterable_1_Windows__CData__CText__CTextSegment;
EXTERN_C const IID IID___FIIterable_1_Windows__CData__CText__CTextSegment;
typedef struct __FIIterable_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CData__CText__CTextSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextSegment * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextSegment * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt __FIIterator_1_Windows__CData__CText__CTextSegment **first);
    END_INTERFACE
} __FIIterable_1_Windows__CData__CText__CTextSegmentVtbl;
interface __FIIterable_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIIterable_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CData__CText__CWordSegment __FIIterator_1_Windows__CData__CText__CWordSegment;
EXTERN_C const IID IID___FIIterator_1_Windows__CData__CText__CWordSegment;
typedef struct __FIIterator_1_Windows__CData__CText__CWordSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CData__CText__CWordSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CData__CText__CWordSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CData__CText__CWordSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CData__CText__CWordSegment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CData__CText__CWordSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CData__CText__CWordSegment * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CData__CText__CWordSegment * This, __RPC__out __x_ABI_CWindows_CData_CText_CIWordSegment * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CData__CText__CWordSegment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CData__CText__CWordSegment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CData__CText__CWordSegment * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CData_CText_CIWordSegment * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CData__CText__CWordSegmentVtbl;
interface __FIIterator_1_Windows__CData__CText__CWordSegment
{
    CONST_VTBL struct __FIIterator_1_Windows__CData__CText__CWordSegmentVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CData__CText__CWordSegment __FIIterable_1_Windows__CData__CText__CWordSegment;
EXTERN_C const IID IID___FIIterable_1_Windows__CData__CText__CWordSegment;
typedef struct __FIIterable_1_Windows__CData__CText__CWordSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CData__CText__CWordSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CData__CText__CWordSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CData__CText__CWordSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CData__CText__CWordSegment * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CData__CText__CWordSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CData__CText__CWordSegment * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CData__CText__CWordSegment * This, __RPC__deref_out_opt __FIIterator_1_Windows__CData__CText__CWordSegment **first);
    END_INTERFACE
} __FIIterable_1_Windows__CData__CText__CWordSegmentVtbl;
interface __FIIterable_1_Windows__CData__CText__CWordSegment
{
    CONST_VTBL struct __FIIterable_1_Windows__CData__CText__CWordSegmentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CData__CText__CTextSegment __FIVectorView_1_Windows__CData__CText__CTextSegment;
EXTERN_C const IID IID___FIVectorView_1_Windows__CData__CText__CTextSegment;
typedef struct __FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                                                    unsigned int index,
                                                             __RPC__out struct __x_ABI_CWindows_CData_CText_CTextSegment *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                       struct __x_ABI_CWindows_CData_CText_CTextSegment item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CData_CText_CTextSegment *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl;
interface __FIVectorView_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
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
typedef interface __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;
typedef struct __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CData__CText__CTextSegment * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl;
interface __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__out __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;
EXTERN_C const IID IID___FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;
typedef struct __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __FIVectorView_1_Windows__CData__CText__CTextSegment * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl;
interface __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
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
typedef interface __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;
EXTERN_C const IID IID___FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;
typedef struct __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                   HSTRING key,
                            __RPC__deref_out_opt __FIVectorView_1_Windows__CData__CText__CTextSegment * **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                   HSTRING key,
                   __RPC__in_opt __FIVectorView_1_Windows__CData__CText__CTextSegment * *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    END_INTERFACE
} __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl;
interface __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CData__CText__CAlternateWordForm __FIVectorView_1_Windows__CData__CText__CAlternateWordForm;
EXTERN_C const IID IID___FIVectorView_1_Windows__CData__CText__CAlternateWordForm;
typedef struct __FIVectorView_1_Windows__CData__CText__CAlternateWordFormVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CData__CText__CAlternateWordForm * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CData__CText__CAlternateWordForm * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CData__CText__CAlternateWordForm * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CData__CText__CAlternateWordForm * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CData__CText__CAlternateWordForm * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CData__CText__CAlternateWordForm * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CData__CText__CAlternateWordForm * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CData_CText_CIAlternateWordForm * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CData__CText__CAlternateWordForm * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CData__CText__CAlternateWordForm * This,
                       __x_ABI_CWindows_CData_CText_CIAlternateWordForm * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CData__CText__CAlternateWordForm * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CData_CText_CIAlternateWordForm * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CData__CText__CAlternateWordFormVtbl;
interface __FIVectorView_1_Windows__CData__CText__CAlternateWordForm
{
    CONST_VTBL struct __FIVectorView_1_Windows__CData__CText__CAlternateWordFormVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CData__CText__CSelectableWordSegment __FIVectorView_1_Windows__CData__CText__CSelectableWordSegment;
EXTERN_C const IID IID___FIVectorView_1_Windows__CData__CText__CSelectableWordSegment;
typedef struct __FIVectorView_1_Windows__CData__CText__CSelectableWordSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CData__CText__CSelectableWordSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CData__CText__CSelectableWordSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CData__CText__CSelectableWordSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CData__CText__CSelectableWordSegment * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CData__CText__CSelectableWordSegment * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CData__CText__CSelectableWordSegment * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CData__CText__CSelectableWordSegment * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CData_CText_CISelectableWordSegment * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CData__CText__CSelectableWordSegment * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CData__CText__CSelectableWordSegment * This,
                       __x_ABI_CWindows_CData_CText_CISelectableWordSegment * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CData__CText__CSelectableWordSegment * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CData_CText_CISelectableWordSegment * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CData__CText__CSelectableWordSegmentVtbl;
interface __FIVectorView_1_Windows__CData__CText__CSelectableWordSegment
{
    CONST_VTBL struct __FIVectorView_1_Windows__CData__CText__CSelectableWordSegmentVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CData__CText__CTextPhoneme __FIVectorView_1_Windows__CData__CText__CTextPhoneme;
EXTERN_C const IID IID___FIVectorView_1_Windows__CData__CText__CTextPhoneme;
typedef struct __FIVectorView_1_Windows__CData__CText__CTextPhonemeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CData__CText__CTextPhoneme * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CData__CText__CTextPhoneme * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CData__CText__CTextPhoneme * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CData__CText__CTextPhoneme * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CData__CText__CTextPhoneme * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CData__CText__CTextPhoneme * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CData__CText__CTextPhoneme * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CData_CText_CITextPhoneme * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CData__CText__CTextPhoneme * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CData__CText__CTextPhoneme * This,
                       __x_ABI_CWindows_CData_CText_CITextPhoneme * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CData__CText__CTextPhoneme * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CData_CText_CITextPhoneme * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CData__CText__CTextPhonemeVtbl;
interface __FIVectorView_1_Windows__CData__CText__CTextPhoneme
{
    CONST_VTBL struct __FIVectorView_1_Windows__CData__CText__CTextPhonemeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CData__CText__CWordSegment __FIVectorView_1_Windows__CData__CText__CWordSegment;
EXTERN_C const IID IID___FIVectorView_1_Windows__CData__CText__CWordSegment;
typedef struct __FIVectorView_1_Windows__CData__CText__CWordSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CData__CText__CWordSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CData__CText__CWordSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CData__CText__CWordSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CData__CText__CWordSegment * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CData__CText__CWordSegment * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CData__CText__CWordSegment * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CData__CText__CWordSegment * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CData_CText_CIWordSegment * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CData__CText__CWordSegment * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CData__CText__CWordSegment * This,
                       __x_ABI_CWindows_CData_CText_CIWordSegment * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CData__CText__CWordSegment * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CData_CText_CIWordSegment * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CData__CText__CWordSegmentVtbl;
interface __FIVectorView_1_Windows__CData__CText__CWordSegment
{
    CONST_VTBL struct __FIVectorView_1_Windows__CData__CText__CWordSegmentVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme __FIAsyncOperation_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CData__CText__CTextPhonemeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CData__CText__CTextPhonemeVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CData__CText__CTextPhonemeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme __FIAsyncOperation_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CData__CText__CTextPhonemeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme * This, __RPC__out __FIVectorView_1_Windows__CData__CText__CTextPhoneme * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CData__CText__CTextPhonemeVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CData__CText__CTextPhonemeVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING;
typedef interface __FIAsyncOperation_1___FIVectorView_1_HSTRING __FIAsyncOperation_1___FIVectorView_1_HSTRING;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_HSTRING __FIAsyncOperation_1___FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_HSTRING;
typedef struct __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__out __FIVectorView_1_HSTRING * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_HSTRING __FIAsyncOperationCompletedHandler_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_HSTRING;
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;
typedef struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This, __RPC__in_opt __FIAsyncOperation_1_HSTRING *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl;
interface __FIAsyncOperationCompletedHandler_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperation_1_HSTRING;
typedef struct __FIAsyncOperation_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_HSTRING *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__out HSTRING *results);
    END_INTERFACE
} __FIAsyncOperation_1_HSTRINGVtbl;
interface __FIAsyncOperation_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1_HSTRINGVtbl *lpVtbl;
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
typedef enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputScope __x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputScope;
typedef enum __x_ABI_CWindows_CData_CText_CAlternateNormalizationFormat __x_ABI_CWindows_CData_CText_CAlternateNormalizationFormat;
typedef enum __x_ABI_CWindows_CData_CText_CTextPredictionOptions __x_ABI_CWindows_CData_CText_CTextPredictionOptions;
typedef enum __x_ABI_CWindows_CData_CText_CUnicodeGeneralCategory __x_ABI_CWindows_CData_CText_CUnicodeGeneralCategory;
typedef enum __x_ABI_CWindows_CData_CText_CUnicodeNumericType __x_ABI_CWindows_CData_CText_CUnicodeNumericType;
typedef struct __x_ABI_CWindows_CData_CText_CTextSegment __x_ABI_CWindows_CData_CText_CTextSegment;
enum __x_ABI_CWindows_CData_CText_CAlternateNormalizationFormat
{
    AlternateNormalizationFormat_NotNormalized = 0,
    AlternateNormalizationFormat_Number = 1,
    AlternateNormalizationFormat_Currency = 3,
    AlternateNormalizationFormat_Date = 4,
    AlternateNormalizationFormat_Time = 5,
};
enum __x_ABI_CWindows_CData_CText_CTextPredictionOptions
{
    TextPredictionOptions_None = 0,
    TextPredictionOptions_Predictions = 0x1,
    TextPredictionOptions_Corrections = 0x2,
};
enum __x_ABI_CWindows_CData_CText_CUnicodeGeneralCategory
{
    UnicodeGeneralCategory_UppercaseLetter = 0,
    UnicodeGeneralCategory_LowercaseLetter = 1,
    UnicodeGeneralCategory_TitlecaseLetter = 2,
    UnicodeGeneralCategory_ModifierLetter = 3,
    UnicodeGeneralCategory_OtherLetter = 4,
    UnicodeGeneralCategory_NonspacingMark = 5,
    UnicodeGeneralCategory_SpacingCombiningMark = 6,
    UnicodeGeneralCategory_EnclosingMark = 7,
    UnicodeGeneralCategory_DecimalDigitNumber = 8,
    UnicodeGeneralCategory_LetterNumber = 9,
    UnicodeGeneralCategory_OtherNumber = 10,
    UnicodeGeneralCategory_SpaceSeparator = 11,
    UnicodeGeneralCategory_LineSeparator = 12,
    UnicodeGeneralCategory_ParagraphSeparator = 13,
    UnicodeGeneralCategory_Control = 14,
    UnicodeGeneralCategory_Format = 15,
    UnicodeGeneralCategory_Surrogate = 16,
    UnicodeGeneralCategory_PrivateUse = 17,
    UnicodeGeneralCategory_ConnectorPunctuation = 18,
    UnicodeGeneralCategory_DashPunctuation = 19,
    UnicodeGeneralCategory_OpenPunctuation = 20,
    UnicodeGeneralCategory_ClosePunctuation = 21,
    UnicodeGeneralCategory_InitialQuotePunctuation = 22,
    UnicodeGeneralCategory_FinalQuotePunctuation = 23,
    UnicodeGeneralCategory_OtherPunctuation = 24,
    UnicodeGeneralCategory_MathSymbol = 25,
    UnicodeGeneralCategory_CurrencySymbol = 26,
    UnicodeGeneralCategory_ModifierSymbol = 27,
    UnicodeGeneralCategory_OtherSymbol = 28,
    UnicodeGeneralCategory_NotAssigned = 29,
};
enum __x_ABI_CWindows_CData_CText_CUnicodeNumericType
{
    UnicodeNumericType_None = 0,
    UnicodeNumericType_Decimal = 1,
    UnicodeNumericType_Digit = 2,
    UnicodeNumericType_Numeric = 3,
};
struct __x_ABI_CWindows_CData_CText_CTextSegment
{
    UINT32 StartPosition;
    UINT32 Length;
};
typedef struct __x_ABI_CWindows_CData_CText_CISelectableWordSegmentsTokenizingHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISelectableWordSegmentsTokenizingHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISelectableWordSegmentsTokenizingHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISelectableWordSegmentsTokenizingHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CData_CText_CISelectableWordSegmentsTokenizingHandler * This,
                  __RPC__in_opt __FIIterable_1_Windows__CData__CText__CSelectableWordSegment * precedingWords,
                  __RPC__in_opt __FIIterable_1_Windows__CData__CText__CSelectableWordSegment * words
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CText_CISelectableWordSegmentsTokenizingHandlerVtbl;
interface __x_ABI_CWindows_CData_CText_CISelectableWordSegmentsTokenizingHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CText_CISelectableWordSegmentsTokenizingHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,precedingWords,words) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CText_CISelectableWordSegmentsTokenizingHandler;
typedef struct __x_ABI_CWindows_CData_CText_CIWordSegmentsTokenizingHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIWordSegmentsTokenizingHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIWordSegmentsTokenizingHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIWordSegmentsTokenizingHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CData_CText_CIWordSegmentsTokenizingHandler * This,
                  __RPC__in_opt __FIIterable_1_Windows__CData__CText__CWordSegment * precedingWords,
                  __RPC__in_opt __FIIterable_1_Windows__CData__CText__CWordSegment * words
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CText_CIWordSegmentsTokenizingHandlerVtbl;
interface __x_ABI_CWindows_CData_CText_CIWordSegmentsTokenizingHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CText_CIWordSegmentsTokenizingHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,precedingWords,words) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CText_CIWordSegmentsTokenizingHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Text_IAlternateWordForm[] = L"Windows.Data.Text.IAlternateWordForm";
typedef struct __x_ABI_CWindows_CData_CText_CIAlternateWordFormVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CText_CIAlternateWordForm * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIAlternateWordForm * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIAlternateWordForm * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIAlternateWordForm * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIAlternateWordForm * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIAlternateWordForm * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SourceTextSegment )(
        __x_ABI_CWindows_CData_CText_CIAlternateWordForm * This,
                           __RPC__out __x_ABI_CWindows_CData_CText_CTextSegment * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlternateText )(
        __x_ABI_CWindows_CData_CText_CIAlternateWordForm * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NormalizationFormat )(
        __x_ABI_CWindows_CData_CText_CIAlternateWordForm * This,
                           __RPC__out __x_ABI_CWindows_CData_CText_CAlternateNormalizationFormat * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CText_CIAlternateWordFormVtbl;
interface __x_ABI_CWindows_CData_CText_CIAlternateWordForm
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CText_CIAlternateWordFormVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SourceTextSegment(This,value) )
    ( (This)->lpVtbl->get_AlternateText(This,value) )
    ( (This)->lpVtbl->get_NormalizationFormat(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CText_CIAlternateWordForm;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Text_ISelectableWordSegment[] = L"Windows.Data.Text.ISelectableWordSegment";
typedef struct __x_ABI_CWindows_CData_CText_CISelectableWordSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CText_CISelectableWordSegment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISelectableWordSegment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISelectableWordSegment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISelectableWordSegment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISelectableWordSegment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISelectableWordSegment * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CData_CText_CISelectableWordSegment * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceTextSegment )(
        __x_ABI_CWindows_CData_CText_CISelectableWordSegment * This,
                           __RPC__out __x_ABI_CWindows_CData_CText_CTextSegment * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CText_CISelectableWordSegmentVtbl;
interface __x_ABI_CWindows_CData_CText_CISelectableWordSegment
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CText_CISelectableWordSegmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Text(This,value) )
    ( (This)->lpVtbl->get_SourceTextSegment(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CText_CISelectableWordSegment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Text_ISelectableWordsSegmenter[] = L"Windows.Data.Text.ISelectableWordsSegmenter";
typedef struct __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResolvedLanguage )(
        __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenter * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetTokenAt )(
        __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenter * This,
                  __RPC__in HSTRING text,
                  UINT32 startIndex,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CText_CISelectableWordSegment * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetTokens )(
        __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenter * This,
                  __RPC__in HSTRING text,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CData__CText__CSelectableWordSegment * * result
        );
    HRESULT ( STDMETHODCALLTYPE *Tokenize )(
        __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenter * This,
                  __RPC__in HSTRING text,
                  UINT32 startIndex,
                  __RPC__in_opt __x_ABI_CWindows_CData_CText_CISelectableWordSegmentsTokenizingHandler * handler
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenterVtbl;
interface __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenter
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResolvedLanguage(This,value) )
    ( (This)->lpVtbl->GetTokenAt(This,text,startIndex,result) )
    ( (This)->lpVtbl->GetTokens(This,text,result) )
    ( (This)->lpVtbl->Tokenize(This,text,startIndex,handler) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CText_CISelectableWordsSegmenter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Text_ISelectableWordsSegmenterFactory[] = L"Windows.Data.Text.ISelectableWordsSegmenterFactory";
typedef struct __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenterFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenterFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenterFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenterFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenterFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenterFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithLanguage )(
        __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenterFactory * This,
                  __RPC__in HSTRING language,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenter * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenterFactoryVtbl;
interface __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CText_CISelectableWordsSegmenterFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithLanguage(This,language,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CText_CISelectableWordsSegmenterFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Text_ISemanticTextQuery[] = L"Windows.Data.Text.ISemanticTextQuery";
typedef struct __x_ABI_CWindows_CData_CText_CISemanticTextQueryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CText_CISemanticTextQuery * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISemanticTextQuery * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISemanticTextQuery * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISemanticTextQuery * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISemanticTextQuery * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISemanticTextQuery * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Find )(
        __x_ABI_CWindows_CData_CText_CISemanticTextQuery * This,
                  __RPC__in HSTRING content,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CData__CText__CTextSegment * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FindInProperty )(
        __x_ABI_CWindows_CData_CText_CISemanticTextQuery * This,
                  __RPC__in HSTRING propertyContent,
                  __RPC__in HSTRING propertyName,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CData__CText__CTextSegment * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CText_CISemanticTextQueryVtbl;
interface __x_ABI_CWindows_CData_CText_CISemanticTextQuery
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CText_CISemanticTextQueryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Find(This,content,result) )
    ( (This)->lpVtbl->FindInProperty(This,propertyContent,propertyName,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CText_CISemanticTextQuery;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Text_ISemanticTextQueryFactory[] = L"Windows.Data.Text.ISemanticTextQueryFactory";
typedef struct __x_ABI_CWindows_CData_CText_CISemanticTextQueryFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CText_CISemanticTextQueryFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISemanticTextQueryFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISemanticTextQueryFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISemanticTextQueryFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISemanticTextQueryFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CText_CISemanticTextQueryFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CData_CText_CISemanticTextQueryFactory * This,
                  __RPC__in HSTRING aqsFilter,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CText_CISemanticTextQuery * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithLanguage )(
        __x_ABI_CWindows_CData_CText_CISemanticTextQueryFactory * This,
                  __RPC__in HSTRING aqsFilter,
                  __RPC__in HSTRING filterLanguage,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CText_CISemanticTextQuery * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CText_CISemanticTextQueryFactoryVtbl;
interface __x_ABI_CWindows_CData_CText_CISemanticTextQueryFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CText_CISemanticTextQueryFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,aqsFilter,result) )
    ( (This)->lpVtbl->CreateWithLanguage(This,aqsFilter,filterLanguage,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CText_CISemanticTextQueryFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Text_ITextConversionGenerator[] = L"Windows.Data.Text.ITextConversionGenerator";
typedef struct __x_ABI_CWindows_CData_CText_CITextConversionGeneratorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextConversionGenerator * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextConversionGenerator * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextConversionGenerator * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextConversionGenerator * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextConversionGenerator * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextConversionGenerator * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResolvedLanguage )(
        __x_ABI_CWindows_CData_CText_CITextConversionGenerator * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LanguageAvailableButNotInstalled )(
        __x_ABI_CWindows_CData_CText_CITextConversionGenerator * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetCandidatesAsync )(
        __x_ABI_CWindows_CData_CText_CITextConversionGenerator * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetCandidatesWithMaxCountAsync )(
        __x_ABI_CWindows_CData_CText_CITextConversionGenerator * This,
                  __RPC__in HSTRING input,
                  UINT32 maxCandidates,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CText_CITextConversionGeneratorVtbl;
interface __x_ABI_CWindows_CData_CText_CITextConversionGenerator
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CText_CITextConversionGeneratorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResolvedLanguage(This,value) )
    ( (This)->lpVtbl->get_LanguageAvailableButNotInstalled(This,value) )
    ( (This)->lpVtbl->GetCandidatesAsync(This,input,result) )
    ( (This)->lpVtbl->GetCandidatesWithMaxCountAsync(This,input,maxCandidates,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CText_CITextConversionGenerator;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Text_ITextConversionGeneratorFactory[] = L"Windows.Data.Text.ITextConversionGeneratorFactory";
typedef struct __x_ABI_CWindows_CData_CText_CITextConversionGeneratorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextConversionGeneratorFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextConversionGeneratorFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextConversionGeneratorFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextConversionGeneratorFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextConversionGeneratorFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextConversionGeneratorFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CData_CText_CITextConversionGeneratorFactory * This,
                  __RPC__in HSTRING languageTag,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CText_CITextConversionGenerator * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CText_CITextConversionGeneratorFactoryVtbl;
interface __x_ABI_CWindows_CData_CText_CITextConversionGeneratorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CText_CITextConversionGeneratorFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,languageTag,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CText_CITextConversionGeneratorFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Text_ITextPhoneme[] = L"Windows.Data.Text.ITextPhoneme";
typedef struct __x_ABI_CWindows_CData_CText_CITextPhonemeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPhoneme * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPhoneme * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPhoneme * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPhoneme * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPhoneme * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPhoneme * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayText )(
        __x_ABI_CWindows_CData_CText_CITextPhoneme * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReadingText )(
        __x_ABI_CWindows_CData_CText_CITextPhoneme * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CText_CITextPhonemeVtbl;
interface __x_ABI_CWindows_CData_CText_CITextPhoneme
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CText_CITextPhonemeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayText(This,value) )
    ( (This)->lpVtbl->get_ReadingText(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CText_CITextPhoneme;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Text_ITextPredictionGenerator[] = L"Windows.Data.Text.ITextPredictionGenerator";
typedef struct __x_ABI_CWindows_CData_CText_CITextPredictionGeneratorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPredictionGenerator * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPredictionGenerator * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPredictionGenerator * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPredictionGenerator * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPredictionGenerator * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPredictionGenerator * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResolvedLanguage )(
        __x_ABI_CWindows_CData_CText_CITextPredictionGenerator * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LanguageAvailableButNotInstalled )(
        __x_ABI_CWindows_CData_CText_CITextPredictionGenerator * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetCandidatesAsync )(
        __x_ABI_CWindows_CData_CText_CITextPredictionGenerator * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetCandidatesWithMaxCountAsync )(
        __x_ABI_CWindows_CData_CText_CITextPredictionGenerator * This,
                  __RPC__in HSTRING input,
                  UINT32 maxCandidates,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CText_CITextPredictionGeneratorVtbl;
interface __x_ABI_CWindows_CData_CText_CITextPredictionGenerator
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CText_CITextPredictionGeneratorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResolvedLanguage(This,value) )
    ( (This)->lpVtbl->get_LanguageAvailableButNotInstalled(This,value) )
    ( (This)->lpVtbl->GetCandidatesAsync(This,input,result) )
    ( (This)->lpVtbl->GetCandidatesWithMaxCountAsync(This,input,maxCandidates,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CText_CITextPredictionGenerator;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Text_ITextPredictionGenerator2[] = L"Windows.Data.Text.ITextPredictionGenerator2";
typedef struct __x_ABI_CWindows_CData_CText_CITextPredictionGenerator2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPredictionGenerator2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPredictionGenerator2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPredictionGenerator2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPredictionGenerator2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPredictionGenerator2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPredictionGenerator2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetCandidatesWithParametersAsync )(
        __x_ABI_CWindows_CData_CText_CITextPredictionGenerator2 * This,
                  __RPC__in HSTRING input,
                  UINT32 maxCandidates,
                  __x_ABI_CWindows_CData_CText_CTextPredictionOptions predictionOptions,
                  __RPC__in_opt __FIIterable_1_HSTRING * previousStrings,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetNextWordCandidatesAsync )(
        __x_ABI_CWindows_CData_CText_CITextPredictionGenerator2 * This,
                  UINT32 maxCandidates,
                  __RPC__in_opt __FIIterable_1_HSTRING * previousStrings,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InputScope )(
        __x_ABI_CWindows_CData_CText_CITextPredictionGenerator2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputScope * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InputScope )(
        __x_ABI_CWindows_CData_CText_CITextPredictionGenerator2 * This,
                  __x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputScope value
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CText_CITextPredictionGenerator2Vtbl;
interface __x_ABI_CWindows_CData_CText_CITextPredictionGenerator2
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CText_CITextPredictionGenerator2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCandidatesWithParametersAsync(This,input,maxCandidates,predictionOptions,previousStrings,result) )
    ( (This)->lpVtbl->GetNextWordCandidatesAsync(This,maxCandidates,previousStrings,result) )
    ( (This)->lpVtbl->get_InputScope(This,value) )
    ( (This)->lpVtbl->put_InputScope(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CText_CITextPredictionGenerator2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Text_ITextPredictionGeneratorFactory[] = L"Windows.Data.Text.ITextPredictionGeneratorFactory";
typedef struct __x_ABI_CWindows_CData_CText_CITextPredictionGeneratorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPredictionGeneratorFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPredictionGeneratorFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPredictionGeneratorFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPredictionGeneratorFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPredictionGeneratorFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextPredictionGeneratorFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CData_CText_CITextPredictionGeneratorFactory * This,
                  __RPC__in HSTRING languageTag,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CText_CITextPredictionGenerator * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CText_CITextPredictionGeneratorFactoryVtbl;
interface __x_ABI_CWindows_CData_CText_CITextPredictionGeneratorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CText_CITextPredictionGeneratorFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,languageTag,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CText_CITextPredictionGeneratorFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Text_ITextReverseConversionGenerator[] = L"Windows.Data.Text.ITextReverseConversionGenerator";
typedef struct __x_ABI_CWindows_CData_CText_CITextReverseConversionGeneratorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResolvedLanguage )(
        __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LanguageAvailableButNotInstalled )(
        __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *ConvertBackAsync )(
        __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CText_CITextReverseConversionGeneratorVtbl;
interface __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CText_CITextReverseConversionGeneratorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResolvedLanguage(This,value) )
    ( (This)->lpVtbl->get_LanguageAvailableButNotInstalled(This,value) )
    ( (This)->lpVtbl->ConvertBackAsync(This,input,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Text_ITextReverseConversionGenerator2[] = L"Windows.Data.Text.ITextReverseConversionGenerator2";
typedef struct __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPhonemesAsync )(
        __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator2 * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CData__CText__CTextPhoneme * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator2Vtbl;
interface __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator2
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetPhonemesAsync(This,input,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Text_ITextReverseConversionGeneratorFactory[] = L"Windows.Data.Text.ITextReverseConversionGeneratorFactory";
typedef struct __x_ABI_CWindows_CData_CText_CITextReverseConversionGeneratorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextReverseConversionGeneratorFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextReverseConversionGeneratorFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextReverseConversionGeneratorFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextReverseConversionGeneratorFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextReverseConversionGeneratorFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CText_CITextReverseConversionGeneratorFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CData_CText_CITextReverseConversionGeneratorFactory * This,
                  __RPC__in HSTRING languageTag,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CText_CITextReverseConversionGenerator * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CText_CITextReverseConversionGeneratorFactoryVtbl;
interface __x_ABI_CWindows_CData_CText_CITextReverseConversionGeneratorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CText_CITextReverseConversionGeneratorFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,languageTag,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CText_CITextReverseConversionGeneratorFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Text_IUnicodeCharactersStatics[] = L"Windows.Data.Text.IUnicodeCharactersStatics";
typedef struct __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCodepointFromSurrogatePair )(
        __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics * This,
                  UINT32 highSurrogate,
                  UINT32 lowSurrogate,
                           __RPC__out UINT32 * codepoint
        );
    HRESULT ( STDMETHODCALLTYPE *GetSurrogatePairFromCodepoint )(
        __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics * This,
                  UINT32 codepoint,
                   __RPC__out WCHAR * highSurrogate,
                   __RPC__out WCHAR * lowSurrogate
        );
    HRESULT ( STDMETHODCALLTYPE *IsHighSurrogate )(
        __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics * This,
                  UINT32 codepoint,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsLowSurrogate )(
        __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics * This,
                  UINT32 codepoint,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsSupplementary )(
        __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics * This,
                  UINT32 codepoint,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsNoncharacter )(
        __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics * This,
                  UINT32 codepoint,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsWhitespace )(
        __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics * This,
                  UINT32 codepoint,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsAlphabetic )(
        __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics * This,
                  UINT32 codepoint,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsCased )(
        __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics * This,
                  UINT32 codepoint,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsUppercase )(
        __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics * This,
                  UINT32 codepoint,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsLowercase )(
        __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics * This,
                  UINT32 codepoint,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsIdStart )(
        __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics * This,
                  UINT32 codepoint,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsIdContinue )(
        __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics * This,
                  UINT32 codepoint,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsGraphemeBase )(
        __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics * This,
                  UINT32 codepoint,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsGraphemeExtend )(
        __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics * This,
                  UINT32 codepoint,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumericType )(
        __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics * This,
                  UINT32 codepoint,
                           __RPC__out __x_ABI_CWindows_CData_CText_CUnicodeNumericType * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetGeneralCategory )(
        __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics * This,
                  UINT32 codepoint,
                           __RPC__out __x_ABI_CWindows_CData_CText_CUnicodeGeneralCategory * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStaticsVtbl;
interface __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CText_CIUnicodeCharactersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCodepointFromSurrogatePair(This,highSurrogate,lowSurrogate,codepoint) )
    ( (This)->lpVtbl->GetSurrogatePairFromCodepoint(This,codepoint,highSurrogate,lowSurrogate) )
    ( (This)->lpVtbl->IsHighSurrogate(This,codepoint,value) )
    ( (This)->lpVtbl->IsLowSurrogate(This,codepoint,value) )
    ( (This)->lpVtbl->IsSupplementary(This,codepoint,value) )
    ( (This)->lpVtbl->IsNoncharacter(This,codepoint,value) )
    ( (This)->lpVtbl->IsWhitespace(This,codepoint,value) )
    ( (This)->lpVtbl->IsAlphabetic(This,codepoint,value) )
    ( (This)->lpVtbl->IsCased(This,codepoint,value) )
    ( (This)->lpVtbl->IsUppercase(This,codepoint,value) )
    ( (This)->lpVtbl->IsLowercase(This,codepoint,value) )
    ( (This)->lpVtbl->IsIdStart(This,codepoint,value) )
    ( (This)->lpVtbl->IsIdContinue(This,codepoint,value) )
    ( (This)->lpVtbl->IsGraphemeBase(This,codepoint,value) )
    ( (This)->lpVtbl->IsGraphemeExtend(This,codepoint,value) )
    ( (This)->lpVtbl->GetNumericType(This,codepoint,value) )
    ( (This)->lpVtbl->GetGeneralCategory(This,codepoint,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CText_CIUnicodeCharactersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Text_IWordSegment[] = L"Windows.Data.Text.IWordSegment";
typedef struct __x_ABI_CWindows_CData_CText_CIWordSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CText_CIWordSegment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIWordSegment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIWordSegment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIWordSegment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIWordSegment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIWordSegment * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CData_CText_CIWordSegment * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceTextSegment )(
        __x_ABI_CWindows_CData_CText_CIWordSegment * This,
                           __RPC__out __x_ABI_CWindows_CData_CText_CTextSegment * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlternateForms )(
        __x_ABI_CWindows_CData_CText_CIWordSegment * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CData__CText__CAlternateWordForm * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CText_CIWordSegmentVtbl;
interface __x_ABI_CWindows_CData_CText_CIWordSegment
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CText_CIWordSegmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Text(This,value) )
    ( (This)->lpVtbl->get_SourceTextSegment(This,value) )
    ( (This)->lpVtbl->get_AlternateForms(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CText_CIWordSegment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Text_IWordsSegmenter[] = L"Windows.Data.Text.IWordsSegmenter";
typedef struct __x_ABI_CWindows_CData_CText_CIWordsSegmenterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CText_CIWordsSegmenter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIWordsSegmenter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIWordsSegmenter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIWordsSegmenter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIWordsSegmenter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIWordsSegmenter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResolvedLanguage )(
        __x_ABI_CWindows_CData_CText_CIWordsSegmenter * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetTokenAt )(
        __x_ABI_CWindows_CData_CText_CIWordsSegmenter * This,
                  __RPC__in HSTRING text,
                  UINT32 startIndex,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CText_CIWordSegment * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetTokens )(
        __x_ABI_CWindows_CData_CText_CIWordsSegmenter * This,
                  __RPC__in HSTRING text,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CData__CText__CWordSegment * * result
        );
    HRESULT ( STDMETHODCALLTYPE *Tokenize )(
        __x_ABI_CWindows_CData_CText_CIWordsSegmenter * This,
                  __RPC__in HSTRING text,
                  UINT32 startIndex,
                  __RPC__in_opt __x_ABI_CWindows_CData_CText_CIWordSegmentsTokenizingHandler * handler
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CText_CIWordsSegmenterVtbl;
interface __x_ABI_CWindows_CData_CText_CIWordsSegmenter
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CText_CIWordsSegmenterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResolvedLanguage(This,value) )
    ( (This)->lpVtbl->GetTokenAt(This,text,startIndex,result) )
    ( (This)->lpVtbl->GetTokens(This,text,result) )
    ( (This)->lpVtbl->Tokenize(This,text,startIndex,handler) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CText_CIWordsSegmenter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Text_IWordsSegmenterFactory[] = L"Windows.Data.Text.IWordsSegmenterFactory";
typedef struct __x_ABI_CWindows_CData_CText_CIWordsSegmenterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CText_CIWordsSegmenterFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIWordsSegmenterFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIWordsSegmenterFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIWordsSegmenterFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIWordsSegmenterFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CText_CIWordsSegmenterFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithLanguage )(
        __x_ABI_CWindows_CData_CText_CIWordsSegmenterFactory * This,
                  __RPC__in HSTRING language,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CText_CIWordsSegmenter * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CText_CIWordsSegmenterFactoryVtbl;
interface __x_ABI_CWindows_CData_CText_CIWordsSegmenterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CText_CIWordsSegmenterFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithLanguage(This,language,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CText_CIWordsSegmenterFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Text_AlternateWordForm[] = L"Windows.Data.Text.AlternateWordForm";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Text_SelectableWordSegment[] = L"Windows.Data.Text.SelectableWordSegment";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Text_SelectableWordsSegmenter[] = L"Windows.Data.Text.SelectableWordsSegmenter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Text_SemanticTextQuery[] = L"Windows.Data.Text.SemanticTextQuery";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Text_TextConversionGenerator[] = L"Windows.Data.Text.TextConversionGenerator";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Text_TextPhoneme[] = L"Windows.Data.Text.TextPhoneme";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Text_TextPredictionGenerator[] = L"Windows.Data.Text.TextPredictionGenerator";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Text_TextReverseConversionGenerator[] = L"Windows.Data.Text.TextReverseConversionGenerator";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Text_UnicodeCharacters[] = L"Windows.Data.Text.UnicodeCharacters";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Text_WordSegment[] = L"Windows.Data.Text.WordSegment";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Text_WordsSegmenter[] = L"Windows.Data.Text.WordsSegmenter";
       
       
#pragma clang diagnostic pop
