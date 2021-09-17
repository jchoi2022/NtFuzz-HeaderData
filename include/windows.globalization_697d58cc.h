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
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics;
typedef interface __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics2 __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics2;
typedef interface __x_ABI_CWindows_CGlobalization_CICalendar __x_ABI_CWindows_CGlobalization_CICalendar;
typedef interface __x_ABI_CWindows_CGlobalization_CICalendarFactory __x_ABI_CWindows_CGlobalization_CICalendarFactory;
typedef interface __x_ABI_CWindows_CGlobalization_CICalendarFactory2 __x_ABI_CWindows_CGlobalization_CICalendarFactory2;
typedef interface __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics;
typedef interface __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics2 __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics2;
typedef interface __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics3 __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics3;
typedef interface __x_ABI_CWindows_CGlobalization_CIClockIdentifiersStatics __x_ABI_CWindows_CGlobalization_CIClockIdentifiersStatics;
typedef interface __x_ABI_CWindows_CGlobalization_CICurrencyAmount __x_ABI_CWindows_CGlobalization_CICurrencyAmount;
typedef interface __x_ABI_CWindows_CGlobalization_CICurrencyAmountFactory __x_ABI_CWindows_CGlobalization_CICurrencyAmountFactory;
typedef interface __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics;
typedef interface __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics2 __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics2;
typedef interface __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics3 __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics3;
typedef interface __x_ABI_CWindows_CGlobalization_CIGeographicRegion __x_ABI_CWindows_CGlobalization_CIGeographicRegion;
typedef interface __x_ABI_CWindows_CGlobalization_CIGeographicRegionFactory __x_ABI_CWindows_CGlobalization_CIGeographicRegionFactory;
typedef interface __x_ABI_CWindows_CGlobalization_CIGeographicRegionStatics __x_ABI_CWindows_CGlobalization_CIGeographicRegionStatics;
typedef interface __x_ABI_CWindows_CGlobalization_CIJapanesePhoneme __x_ABI_CWindows_CGlobalization_CIJapanesePhoneme;
typedef interface __x_ABI_CWindows_CGlobalization_CIJapanesePhoneticAnalyzerStatics __x_ABI_CWindows_CGlobalization_CIJapanesePhoneticAnalyzerStatics;
typedef interface __x_ABI_CWindows_CGlobalization_CILanguage __x_ABI_CWindows_CGlobalization_CILanguage;
typedef interface __x_ABI_CWindows_CGlobalization_CILanguage2 __x_ABI_CWindows_CGlobalization_CILanguage2;
typedef interface __x_ABI_CWindows_CGlobalization_CILanguageExtensionSubtags __x_ABI_CWindows_CGlobalization_CILanguageExtensionSubtags;
typedef interface __x_ABI_CWindows_CGlobalization_CILanguageFactory __x_ABI_CWindows_CGlobalization_CILanguageFactory;
typedef interface __x_ABI_CWindows_CGlobalization_CILanguageStatics __x_ABI_CWindows_CGlobalization_CILanguageStatics;
typedef interface __x_ABI_CWindows_CGlobalization_CILanguageStatics2 __x_ABI_CWindows_CGlobalization_CILanguageStatics2;
typedef interface __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics;
typedef interface __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2 __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2;
typedef interface __x_ABI_CWindows_CGlobalization_CITimeZoneOnCalendar __x_ABI_CWindows_CGlobalization_CITimeZoneOnCalendar;
typedef interface __FIIterator_1_Windows__CGlobalization__CJapanesePhoneme __FIIterator_1_Windows__CGlobalization__CJapanesePhoneme;
EXTERN_C const IID IID___FIIterator_1_Windows__CGlobalization__CJapanesePhoneme;
typedef struct __FIIterator_1_Windows__CGlobalization__CJapanesePhonemeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGlobalization__CJapanesePhoneme * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGlobalization__CJapanesePhoneme * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGlobalization__CJapanesePhoneme * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGlobalization__CJapanesePhoneme * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGlobalization__CJapanesePhoneme * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGlobalization__CJapanesePhoneme * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGlobalization__CJapanesePhoneme * This, __RPC__out __x_ABI_CWindows_CGlobalization_CIJapanesePhoneme * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGlobalization__CJapanesePhoneme * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGlobalization__CJapanesePhoneme * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGlobalization__CJapanesePhoneme * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGlobalization_CIJapanesePhoneme * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGlobalization__CJapanesePhonemeVtbl;
interface __FIIterator_1_Windows__CGlobalization__CJapanesePhoneme
{
    CONST_VTBL struct __FIIterator_1_Windows__CGlobalization__CJapanesePhonemeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGlobalization__CJapanesePhoneme __FIIterable_1_Windows__CGlobalization__CJapanesePhoneme;
EXTERN_C const IID IID___FIIterable_1_Windows__CGlobalization__CJapanesePhoneme;
typedef struct __FIIterable_1_Windows__CGlobalization__CJapanesePhonemeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGlobalization__CJapanesePhoneme * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGlobalization__CJapanesePhoneme * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGlobalization__CJapanesePhoneme * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGlobalization__CJapanesePhoneme * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGlobalization__CJapanesePhoneme * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGlobalization__CJapanesePhoneme * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGlobalization__CJapanesePhoneme * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGlobalization__CJapanesePhoneme **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGlobalization__CJapanesePhonemeVtbl;
interface __FIIterable_1_Windows__CGlobalization__CJapanesePhoneme
{
    CONST_VTBL struct __FIIterable_1_Windows__CGlobalization__CJapanesePhonemeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGlobalization__CLanguage __FIIterator_1_Windows__CGlobalization__CLanguage;
EXTERN_C const IID IID___FIIterator_1_Windows__CGlobalization__CLanguage;
typedef struct __FIIterator_1_Windows__CGlobalization__CLanguageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, __RPC__out __x_ABI_CWindows_CGlobalization_CILanguage * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGlobalization_CILanguage * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGlobalization__CLanguageVtbl;
interface __FIIterator_1_Windows__CGlobalization__CLanguage
{
    CONST_VTBL struct __FIIterator_1_Windows__CGlobalization__CLanguageVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGlobalization__CLanguage __FIIterable_1_Windows__CGlobalization__CLanguage;
EXTERN_C const IID IID___FIIterable_1_Windows__CGlobalization__CLanguage;
typedef struct __FIIterable_1_Windows__CGlobalization__CLanguageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGlobalization__CLanguage **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGlobalization__CLanguageVtbl;
interface __FIIterable_1_Windows__CGlobalization__CLanguage
{
    CONST_VTBL struct __FIIterable_1_Windows__CGlobalization__CLanguageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CGlobalization__CJapanesePhoneme __FIVectorView_1_Windows__CGlobalization__CJapanesePhoneme;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGlobalization__CJapanesePhoneme;
typedef struct __FIVectorView_1_Windows__CGlobalization__CJapanesePhonemeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CJapanesePhoneme * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CJapanesePhoneme * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CJapanesePhoneme * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CJapanesePhoneme * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CJapanesePhoneme * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CJapanesePhoneme * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGlobalization__CJapanesePhoneme * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGlobalization_CIJapanesePhoneme * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGlobalization__CJapanesePhoneme * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGlobalization__CJapanesePhoneme * This,
                       __x_ABI_CWindows_CGlobalization_CIJapanesePhoneme * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGlobalization__CJapanesePhoneme * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGlobalization_CIJapanesePhoneme * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGlobalization__CJapanesePhonemeVtbl;
interface __FIVectorView_1_Windows__CGlobalization__CJapanesePhoneme
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGlobalization__CJapanesePhonemeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGlobalization__CLanguage __FIVectorView_1_Windows__CGlobalization__CLanguage;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGlobalization__CLanguage;
typedef struct __FIVectorView_1_Windows__CGlobalization__CLanguageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGlobalization_CILanguage * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                       __x_ABI_CWindows_CGlobalization_CILanguage * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGlobalization_CILanguage * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGlobalization__CLanguageVtbl;
interface __FIVectorView_1_Windows__CGlobalization__CLanguage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGlobalization__CLanguageVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CGlobalization__CLanguage __FIVector_1_Windows__CGlobalization__CLanguage;
EXTERN_C const IID IID___FIVector_1_Windows__CGlobalization__CLanguage;
typedef struct __FIVector_1_Windows__CGlobalization__CLanguageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This, __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CILanguage * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CILanguage * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CGlobalization__CLanguage **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This,
                   __RPC__in __x_ABI_CWindows_CGlobalization_CILanguage * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGlobalization_CILanguage * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGlobalization_CILanguage * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This, __RPC__in __x_ABI_CWindows_CGlobalization_CILanguage * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGlobalization_CILanguage * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CGlobalization_CILanguage * *value);
    END_INTERFACE
} __FIVector_1_Windows__CGlobalization__CLanguageVtbl;
interface __FIVector_1_Windows__CGlobalization__CLanguage
{
    CONST_VTBL struct __FIVector_1_Windows__CGlobalization__CLanguageVtbl *lpVtbl;
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
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CGlobalization_CDayOfWeek __x_ABI_CWindows_CGlobalization_CDayOfWeek;
typedef enum __x_ABI_CWindows_CGlobalization_CLanguageLayoutDirection __x_ABI_CWindows_CGlobalization_CLanguageLayoutDirection;
enum __x_ABI_CWindows_CGlobalization_CDayOfWeek
{
    DayOfWeek_Sunday = 0,
    DayOfWeek_Monday = 1,
    DayOfWeek_Tuesday = 2,
    DayOfWeek_Wednesday = 3,
    DayOfWeek_Thursday = 4,
    DayOfWeek_Friday = 5,
    DayOfWeek_Saturday = 6,
};
enum __x_ABI_CWindows_CGlobalization_CLanguageLayoutDirection
{
    LanguageLayoutDirection_Ltr = 0,
    LanguageLayoutDirection_Rtl = 1,
    LanguageLayoutDirection_TtbLtr = 2,
    LanguageLayoutDirection_TtbRtl = 3,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_IApplicationLanguagesStatics[] = L"Windows.Globalization.IApplicationLanguagesStatics";
typedef struct __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PrimaryLanguageOverride )(
        __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PrimaryLanguageOverride )(
        __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Languages )(
        __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ManifestLanguages )(
        __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStaticsVtbl;
interface __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PrimaryLanguageOverride(This,value) )
    ( (This)->lpVtbl->put_PrimaryLanguageOverride(This,value) )
    ( (This)->lpVtbl->get_Languages(This,value) )
    ( (This)->lpVtbl->get_ManifestLanguages(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_IApplicationLanguagesStatics2[] = L"Windows.Globalization.IApplicationLanguagesStatics2";
typedef struct __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetLanguagesForUser )(
        __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics2Vtbl;
interface __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetLanguagesForUser(This,user,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CIApplicationLanguagesStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_ICalendar[] = L"Windows.Globalization.ICalendar";
typedef struct __x_ABI_CWindows_CGlobalization_CICalendarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendar * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendar * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendar * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendar * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendar * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendar * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Clone )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CICalendar * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetToMin )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This
        );
    HRESULT ( STDMETHODCALLTYPE *SetToMax )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Languages )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NumeralSystem )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NumeralSystem )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  __RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCalendarSystem )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ChangeCalendarSystem )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  __RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *GetClock )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ChangeClock )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  __RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDateTime )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetDateTime )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
    HRESULT ( STDMETHODCALLTYPE *SetToNow )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FirstEra )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastEra )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NumberOfEras )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Era )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Era )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *AddEras )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 eras
        );
                    HRESULT ( STDMETHODCALLTYPE *EraAsFullString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                    HRESULT ( STDMETHODCALLTYPE *EraAsString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 idealLength,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FirstYearInThisEra )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastYearInThisEra )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NumberOfYearsInThisEra )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Year )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Year )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *AddYears )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 years
        );
    HRESULT ( STDMETHODCALLTYPE *YearAsString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *YearAsTruncatedString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 remainingDigits,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *YearAsPaddedString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 minDigits,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FirstMonthInThisYear )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastMonthInThisYear )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NumberOfMonthsInThisYear )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Month )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Month )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *AddMonths )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 months
        );
                    HRESULT ( STDMETHODCALLTYPE *MonthAsFullString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                    HRESULT ( STDMETHODCALLTYPE *MonthAsString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 idealLength,
                           __RPC__deref_out_opt HSTRING * result
        );
                    HRESULT ( STDMETHODCALLTYPE *MonthAsFullSoloString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                    HRESULT ( STDMETHODCALLTYPE *MonthAsSoloString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 idealLength,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *MonthAsNumericString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *MonthAsPaddedNumericString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 minDigits,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *AddWeeks )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 weeks
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FirstDayInThisMonth )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastDayInThisMonth )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NumberOfDaysInThisMonth )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Day )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Day )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *AddDays )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 days
        );
    HRESULT ( STDMETHODCALLTYPE *DayAsString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *DayAsPaddedString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 minDigits,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DayOfWeek )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out __x_ABI_CWindows_CGlobalization_CDayOfWeek * value
        );
                    HRESULT ( STDMETHODCALLTYPE *DayOfWeekAsFullString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                    HRESULT ( STDMETHODCALLTYPE *DayOfWeekAsString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 idealLength,
                           __RPC__deref_out_opt HSTRING * result
        );
                    HRESULT ( STDMETHODCALLTYPE *DayOfWeekAsFullSoloString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                    HRESULT ( STDMETHODCALLTYPE *DayOfWeekAsSoloString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 idealLength,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FirstPeriodInThisDay )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastPeriodInThisDay )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NumberOfPeriodsInThisDay )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Period )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Period )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *AddPeriods )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 periods
        );
                    HRESULT ( STDMETHODCALLTYPE *PeriodAsFullString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                    HRESULT ( STDMETHODCALLTYPE *PeriodAsString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 idealLength,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FirstHourInThisPeriod )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastHourInThisPeriod )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NumberOfHoursInThisPeriod )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Hour )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Hour )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *AddHours )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 hours
        );
    HRESULT ( STDMETHODCALLTYPE *HourAsString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *HourAsPaddedString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 minDigits,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Minute )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Minute )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *AddMinutes )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 minutes
        );
    HRESULT ( STDMETHODCALLTYPE *MinuteAsString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *MinuteAsPaddedString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 minDigits,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Second )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Second )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *AddSeconds )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 seconds
        );
    HRESULT ( STDMETHODCALLTYPE *SecondAsString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SecondAsPaddedString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 minDigits,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Nanosecond )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Nanosecond )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *AddNanoseconds )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 nanoseconds
        );
    HRESULT ( STDMETHODCALLTYPE *NanosecondAsString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *NanosecondAsPaddedString )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  INT32 minDigits,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *Compare )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  __RPC__in_opt __x_ABI_CWindows_CGlobalization_CICalendar * other,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *CompareDateTime )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  __x_ABI_CWindows_CFoundation_CDateTime other,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *CopyTo )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                  __RPC__in_opt __x_ABI_CWindows_CGlobalization_CICalendar * other
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FirstMinuteInThisHour )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastMinuteInThisHour )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NumberOfMinutesInThisHour )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FirstSecondInThisMinute )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastSecondInThisMinute )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NumberOfSecondsInThisMinute )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResolvedLanguage )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDaylightSavingTime )(
        __x_ABI_CWindows_CGlobalization_CICalendar * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CICalendarVtbl;
interface __x_ABI_CWindows_CGlobalization_CICalendar
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CICalendarVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Clone(This,value) )
    ( (This)->lpVtbl->SetToMin(This) )
    ( (This)->lpVtbl->SetToMax(This) )
    ( (This)->lpVtbl->get_Languages(This,value) )
    ( (This)->lpVtbl->get_NumeralSystem(This,value) )
    ( (This)->lpVtbl->put_NumeralSystem(This,value) )
    ( (This)->lpVtbl->GetCalendarSystem(This,value) )
    ( (This)->lpVtbl->ChangeCalendarSystem(This,value) )
    ( (This)->lpVtbl->GetClock(This,value) )
    ( (This)->lpVtbl->ChangeClock(This,value) )
    ( (This)->lpVtbl->GetDateTime(This,result) )
    ( (This)->lpVtbl->SetDateTime(This,value) )
    ( (This)->lpVtbl->SetToNow(This) )
    ( (This)->lpVtbl->get_FirstEra(This,value) )
    ( (This)->lpVtbl->get_LastEra(This,value) )
    ( (This)->lpVtbl->get_NumberOfEras(This,value) )
    ( (This)->lpVtbl->get_Era(This,value) )
    ( (This)->lpVtbl->put_Era(This,value) )
    ( (This)->lpVtbl->AddEras(This,eras) )
    ( (This)->lpVtbl->EraAsFullString(This,result) )
    ( (This)->lpVtbl->EraAsString(This,idealLength,result) )
    ( (This)->lpVtbl->get_FirstYearInThisEra(This,value) )
    ( (This)->lpVtbl->get_LastYearInThisEra(This,value) )
    ( (This)->lpVtbl->get_NumberOfYearsInThisEra(This,value) )
    ( (This)->lpVtbl->get_Year(This,value) )
    ( (This)->lpVtbl->put_Year(This,value) )
    ( (This)->lpVtbl->AddYears(This,years) )
    ( (This)->lpVtbl->YearAsString(This,result) )
    ( (This)->lpVtbl->YearAsTruncatedString(This,remainingDigits,result) )
    ( (This)->lpVtbl->YearAsPaddedString(This,minDigits,result) )
    ( (This)->lpVtbl->get_FirstMonthInThisYear(This,value) )
    ( (This)->lpVtbl->get_LastMonthInThisYear(This,value) )
    ( (This)->lpVtbl->get_NumberOfMonthsInThisYear(This,value) )
    ( (This)->lpVtbl->get_Month(This,value) )
    ( (This)->lpVtbl->put_Month(This,value) )
    ( (This)->lpVtbl->AddMonths(This,months) )
    ( (This)->lpVtbl->MonthAsFullString(This,result) )
    ( (This)->lpVtbl->MonthAsString(This,idealLength,result) )
    ( (This)->lpVtbl->MonthAsFullSoloString(This,result) )
    ( (This)->lpVtbl->MonthAsSoloString(This,idealLength,result) )
    ( (This)->lpVtbl->MonthAsNumericString(This,result) )
    ( (This)->lpVtbl->MonthAsPaddedNumericString(This,minDigits,result) )
    ( (This)->lpVtbl->AddWeeks(This,weeks) )
    ( (This)->lpVtbl->get_FirstDayInThisMonth(This,value) )
    ( (This)->lpVtbl->get_LastDayInThisMonth(This,value) )
    ( (This)->lpVtbl->get_NumberOfDaysInThisMonth(This,value) )
    ( (This)->lpVtbl->get_Day(This,value) )
    ( (This)->lpVtbl->put_Day(This,value) )
    ( (This)->lpVtbl->AddDays(This,days) )
    ( (This)->lpVtbl->DayAsString(This,result) )
    ( (This)->lpVtbl->DayAsPaddedString(This,minDigits,result) )
    ( (This)->lpVtbl->get_DayOfWeek(This,value) )
    ( (This)->lpVtbl->DayOfWeekAsFullString(This,result) )
    ( (This)->lpVtbl->DayOfWeekAsString(This,idealLength,result) )
    ( (This)->lpVtbl->DayOfWeekAsFullSoloString(This,result) )
    ( (This)->lpVtbl->DayOfWeekAsSoloString(This,idealLength,result) )
    ( (This)->lpVtbl->get_FirstPeriodInThisDay(This,value) )
    ( (This)->lpVtbl->get_LastPeriodInThisDay(This,value) )
    ( (This)->lpVtbl->get_NumberOfPeriodsInThisDay(This,value) )
    ( (This)->lpVtbl->get_Period(This,value) )
    ( (This)->lpVtbl->put_Period(This,value) )
    ( (This)->lpVtbl->AddPeriods(This,periods) )
    ( (This)->lpVtbl->PeriodAsFullString(This,result) )
    ( (This)->lpVtbl->PeriodAsString(This,idealLength,result) )
    ( (This)->lpVtbl->get_FirstHourInThisPeriod(This,value) )
    ( (This)->lpVtbl->get_LastHourInThisPeriod(This,value) )
    ( (This)->lpVtbl->get_NumberOfHoursInThisPeriod(This,value) )
    ( (This)->lpVtbl->get_Hour(This,value) )
    ( (This)->lpVtbl->put_Hour(This,value) )
    ( (This)->lpVtbl->AddHours(This,hours) )
    ( (This)->lpVtbl->HourAsString(This,result) )
    ( (This)->lpVtbl->HourAsPaddedString(This,minDigits,result) )
    ( (This)->lpVtbl->get_Minute(This,value) )
    ( (This)->lpVtbl->put_Minute(This,value) )
    ( (This)->lpVtbl->AddMinutes(This,minutes) )
    ( (This)->lpVtbl->MinuteAsString(This,result) )
    ( (This)->lpVtbl->MinuteAsPaddedString(This,minDigits,result) )
    ( (This)->lpVtbl->get_Second(This,value) )
    ( (This)->lpVtbl->put_Second(This,value) )
    ( (This)->lpVtbl->AddSeconds(This,seconds) )
    ( (This)->lpVtbl->SecondAsString(This,result) )
    ( (This)->lpVtbl->SecondAsPaddedString(This,minDigits,result) )
    ( (This)->lpVtbl->get_Nanosecond(This,value) )
    ( (This)->lpVtbl->put_Nanosecond(This,value) )
    ( (This)->lpVtbl->AddNanoseconds(This,nanoseconds) )
    ( (This)->lpVtbl->NanosecondAsString(This,result) )
    ( (This)->lpVtbl->NanosecondAsPaddedString(This,minDigits,result) )
    ( (This)->lpVtbl->Compare(This,other,result) )
    ( (This)->lpVtbl->CompareDateTime(This,other,result) )
    ( (This)->lpVtbl->CopyTo(This,other) )
    ( (This)->lpVtbl->get_FirstMinuteInThisHour(This,value) )
    ( (This)->lpVtbl->get_LastMinuteInThisHour(This,value) )
    ( (This)->lpVtbl->get_NumberOfMinutesInThisHour(This,value) )
    ( (This)->lpVtbl->get_FirstSecondInThisMinute(This,value) )
    ( (This)->lpVtbl->get_LastSecondInThisMinute(This,value) )
    ( (This)->lpVtbl->get_NumberOfSecondsInThisMinute(This,value) )
    ( (This)->lpVtbl->get_ResolvedLanguage(This,value) )
    ( (This)->lpVtbl->get_IsDaylightSavingTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CICalendar;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_ICalendarFactory[] = L"Windows.Globalization.ICalendarFactory";
typedef struct __x_ABI_CWindows_CGlobalization_CICalendarFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateCalendarDefaultCalendarAndClock )(
        __x_ABI_CWindows_CGlobalization_CICalendarFactory * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * languages,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CICalendar * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCalendar )(
        __x_ABI_CWindows_CGlobalization_CICalendarFactory * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * languages,
                  __RPC__in HSTRING calendar,
                  __RPC__in HSTRING clock,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CICalendar * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CICalendarFactoryVtbl;
interface __x_ABI_CWindows_CGlobalization_CICalendarFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CICalendarFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateCalendarDefaultCalendarAndClock(This,languages,result) )
    ( (This)->lpVtbl->CreateCalendar(This,languages,calendar,clock,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CICalendarFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_ICalendarFactory2[] = L"Windows.Globalization.ICalendarFactory2";
typedef struct __x_ABI_CWindows_CGlobalization_CICalendarFactory2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarFactory2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarFactory2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarFactory2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarFactory2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarFactory2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarFactory2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateCalendarWithTimeZone )(
        __x_ABI_CWindows_CGlobalization_CICalendarFactory2 * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * languages,
                  __RPC__in HSTRING calendar,
                  __RPC__in HSTRING clock,
                  __RPC__in HSTRING timeZoneId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CICalendar * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CICalendarFactory2Vtbl;
interface __x_ABI_CWindows_CGlobalization_CICalendarFactory2
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CICalendarFactory2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateCalendarWithTimeZone(This,languages,calendar,clock,timeZoneId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CICalendarFactory2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_ICalendarIdentifiersStatics[] = L"Windows.Globalization.ICalendarIdentifiersStatics";
typedef struct __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Gregorian )(
        __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Hebrew )(
        __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Hijri )(
        __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Japanese )(
        __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Julian )(
        __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Korean )(
        __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Taiwan )(
        __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Thai )(
        __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UmAlQura )(
        __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Gregorian(This,value) )
    ( (This)->lpVtbl->get_Hebrew(This,value) )
    ( (This)->lpVtbl->get_Hijri(This,value) )
    ( (This)->lpVtbl->get_Japanese(This,value) )
    ( (This)->lpVtbl->get_Julian(This,value) )
    ( (This)->lpVtbl->get_Korean(This,value) )
    ( (This)->lpVtbl->get_Taiwan(This,value) )
    ( (This)->lpVtbl->get_Thai(This,value) )
    ( (This)->lpVtbl->get_UmAlQura(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_ICalendarIdentifiersStatics2[] = L"Windows.Globalization.ICalendarIdentifiersStatics2";
typedef struct __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Persian )(
        __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics2Vtbl;
interface __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Persian(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_ICalendarIdentifiersStatics3[] = L"Windows.Globalization.ICalendarIdentifiersStatics3";
typedef struct __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChineseLunar )(
        __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_JapaneseLunar )(
        __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KoreanLunar )(
        __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TaiwanLunar )(
        __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VietnameseLunar )(
        __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics3Vtbl;
interface __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChineseLunar(This,value) )
    ( (This)->lpVtbl->get_JapaneseLunar(This,value) )
    ( (This)->lpVtbl->get_KoreanLunar(This,value) )
    ( (This)->lpVtbl->get_TaiwanLunar(This,value) )
    ( (This)->lpVtbl->get_VietnameseLunar(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CICalendarIdentifiersStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_IClockIdentifiersStatics[] = L"Windows.Globalization.IClockIdentifiersStatics";
typedef struct __x_ABI_CWindows_CGlobalization_CIClockIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIClockIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIClockIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIClockIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIClockIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIClockIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIClockIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TwelveHour )(
        __x_ABI_CWindows_CGlobalization_CIClockIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TwentyFourHour )(
        __x_ABI_CWindows_CGlobalization_CIClockIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CIClockIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CGlobalization_CIClockIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CIClockIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TwelveHour(This,value) )
    ( (This)->lpVtbl->get_TwentyFourHour(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CIClockIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_ICurrencyAmount[] = L"Windows.Globalization.ICurrencyAmount";
typedef struct __x_ABI_CWindows_CGlobalization_CICurrencyAmountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyAmount * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyAmount * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyAmount * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyAmount * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyAmount * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyAmount * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Amount )(
        __x_ABI_CWindows_CGlobalization_CICurrencyAmount * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Currency )(
        __x_ABI_CWindows_CGlobalization_CICurrencyAmount * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CICurrencyAmountVtbl;
interface __x_ABI_CWindows_CGlobalization_CICurrencyAmount
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CICurrencyAmountVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Amount(This,value) )
    ( (This)->lpVtbl->get_Currency(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CICurrencyAmount;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_ICurrencyAmountFactory[] = L"Windows.Globalization.ICurrencyAmountFactory";
typedef struct __x_ABI_CWindows_CGlobalization_CICurrencyAmountFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyAmountFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyAmountFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyAmountFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyAmountFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyAmountFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyAmountFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CGlobalization_CICurrencyAmountFactory * This,
                  __RPC__in HSTRING amount,
                  __RPC__in HSTRING currency,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CICurrencyAmount * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CICurrencyAmountFactoryVtbl;
interface __x_ABI_CWindows_CGlobalization_CICurrencyAmountFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CICurrencyAmountFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,amount,currency,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CICurrencyAmountFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_ICurrencyIdentifiersStatics[] = L"Windows.Globalization.ICurrencyIdentifiersStatics";
typedef struct __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AED )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AFN )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ALL )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AMD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ANG )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AOA )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ARS )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AUD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AWG )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AZN )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BAM )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BBD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BDT )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BGN )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BHD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BIF )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BMD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BND )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BOB )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BRL )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BSD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BTN )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BWP )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BYR )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BZD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CAD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CDF )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CHF )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CLP )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CNY )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_COP )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CRC )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CUP )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CVE )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CZK )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DJF )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DKK )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DOP )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DZD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EGP )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ERN )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ETB )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EUR )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FJD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FKP )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GBP )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GEL )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GHS )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GIP )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GMD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GNF )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GTQ )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GYD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HKD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HNL )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HRK )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HTG )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HUF )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IDR )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ILS )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_INR )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IQD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IRR )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ISK )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_JMD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_JOD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_JPY )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KES )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KGS )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KHR )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KMF )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KPW )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KRW )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KWD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KYD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KZT )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LAK )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LBP )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LKR )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LRD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LSL )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LTL )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LVL )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LYD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MAD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MDL )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MGA )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MKD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MMK )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MNT )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MOP )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MRO )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MUR )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MVR )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MWK )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MXN )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MYR )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MZN )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NAD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NGN )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NIO )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NOK )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NPR )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NZD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OMR )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PAB )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PEN )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PGK )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PHP )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PKR )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PLN )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PYG )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_QAR )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RON )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RSD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RUB )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RWF )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SAR )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SBD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SCR )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SDG )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SEK )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SGD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SHP )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SLL )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SOS )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SRD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_STD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SYP )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SZL )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_THB )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TJS )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TMT )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TND )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TOP )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TRY )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TTD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TWD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TZS )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UAH )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UGX )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_USD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UYU )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UZS )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VEF )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VND )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VUV )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WST )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XAF )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XCD )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XOF )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XPF )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XXX )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_YER )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZAR )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZMW )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZWL )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AED(This,value) )
    ( (This)->lpVtbl->get_AFN(This,value) )
    ( (This)->lpVtbl->get_ALL(This,value) )
    ( (This)->lpVtbl->get_AMD(This,value) )
    ( (This)->lpVtbl->get_ANG(This,value) )
    ( (This)->lpVtbl->get_AOA(This,value) )
    ( (This)->lpVtbl->get_ARS(This,value) )
    ( (This)->lpVtbl->get_AUD(This,value) )
    ( (This)->lpVtbl->get_AWG(This,value) )
    ( (This)->lpVtbl->get_AZN(This,value) )
    ( (This)->lpVtbl->get_BAM(This,value) )
    ( (This)->lpVtbl->get_BBD(This,value) )
    ( (This)->lpVtbl->get_BDT(This,value) )
    ( (This)->lpVtbl->get_BGN(This,value) )
    ( (This)->lpVtbl->get_BHD(This,value) )
    ( (This)->lpVtbl->get_BIF(This,value) )
    ( (This)->lpVtbl->get_BMD(This,value) )
    ( (This)->lpVtbl->get_BND(This,value) )
    ( (This)->lpVtbl->get_BOB(This,value) )
    ( (This)->lpVtbl->get_BRL(This,value) )
    ( (This)->lpVtbl->get_BSD(This,value) )
    ( (This)->lpVtbl->get_BTN(This,value) )
    ( (This)->lpVtbl->get_BWP(This,value) )
    ( (This)->lpVtbl->get_BYR(This,value) )
    ( (This)->lpVtbl->get_BZD(This,value) )
    ( (This)->lpVtbl->get_CAD(This,value) )
    ( (This)->lpVtbl->get_CDF(This,value) )
    ( (This)->lpVtbl->get_CHF(This,value) )
    ( (This)->lpVtbl->get_CLP(This,value) )
    ( (This)->lpVtbl->get_CNY(This,value) )
    ( (This)->lpVtbl->get_COP(This,value) )
    ( (This)->lpVtbl->get_CRC(This,value) )
    ( (This)->lpVtbl->get_CUP(This,value) )
    ( (This)->lpVtbl->get_CVE(This,value) )
    ( (This)->lpVtbl->get_CZK(This,value) )
    ( (This)->lpVtbl->get_DJF(This,value) )
    ( (This)->lpVtbl->get_DKK(This,value) )
    ( (This)->lpVtbl->get_DOP(This,value) )
    ( (This)->lpVtbl->get_DZD(This,value) )
    ( (This)->lpVtbl->get_EGP(This,value) )
    ( (This)->lpVtbl->get_ERN(This,value) )
    ( (This)->lpVtbl->get_ETB(This,value) )
    ( (This)->lpVtbl->get_EUR(This,value) )
    ( (This)->lpVtbl->get_FJD(This,value) )
    ( (This)->lpVtbl->get_FKP(This,value) )
    ( (This)->lpVtbl->get_GBP(This,value) )
    ( (This)->lpVtbl->get_GEL(This,value) )
    ( (This)->lpVtbl->get_GHS(This,value) )
    ( (This)->lpVtbl->get_GIP(This,value) )
    ( (This)->lpVtbl->get_GMD(This,value) )
    ( (This)->lpVtbl->get_GNF(This,value) )
    ( (This)->lpVtbl->get_GTQ(This,value) )
    ( (This)->lpVtbl->get_GYD(This,value) )
    ( (This)->lpVtbl->get_HKD(This,value) )
    ( (This)->lpVtbl->get_HNL(This,value) )
    ( (This)->lpVtbl->get_HRK(This,value) )
    ( (This)->lpVtbl->get_HTG(This,value) )
    ( (This)->lpVtbl->get_HUF(This,value) )
    ( (This)->lpVtbl->get_IDR(This,value) )
    ( (This)->lpVtbl->get_ILS(This,value) )
    ( (This)->lpVtbl->get_INR(This,value) )
    ( (This)->lpVtbl->get_IQD(This,value) )
    ( (This)->lpVtbl->get_IRR(This,value) )
    ( (This)->lpVtbl->get_ISK(This,value) )
    ( (This)->lpVtbl->get_JMD(This,value) )
    ( (This)->lpVtbl->get_JOD(This,value) )
    ( (This)->lpVtbl->get_JPY(This,value) )
    ( (This)->lpVtbl->get_KES(This,value) )
    ( (This)->lpVtbl->get_KGS(This,value) )
    ( (This)->lpVtbl->get_KHR(This,value) )
    ( (This)->lpVtbl->get_KMF(This,value) )
    ( (This)->lpVtbl->get_KPW(This,value) )
    ( (This)->lpVtbl->get_KRW(This,value) )
    ( (This)->lpVtbl->get_KWD(This,value) )
    ( (This)->lpVtbl->get_KYD(This,value) )
    ( (This)->lpVtbl->get_KZT(This,value) )
    ( (This)->lpVtbl->get_LAK(This,value) )
    ( (This)->lpVtbl->get_LBP(This,value) )
    ( (This)->lpVtbl->get_LKR(This,value) )
    ( (This)->lpVtbl->get_LRD(This,value) )
    ( (This)->lpVtbl->get_LSL(This,value) )
    ( (This)->lpVtbl->get_LTL(This,value) )
    ( (This)->lpVtbl->get_LVL(This,value) )
    ( (This)->lpVtbl->get_LYD(This,value) )
    ( (This)->lpVtbl->get_MAD(This,value) )
    ( (This)->lpVtbl->get_MDL(This,value) )
    ( (This)->lpVtbl->get_MGA(This,value) )
    ( (This)->lpVtbl->get_MKD(This,value) )
    ( (This)->lpVtbl->get_MMK(This,value) )
    ( (This)->lpVtbl->get_MNT(This,value) )
    ( (This)->lpVtbl->get_MOP(This,value) )
    ( (This)->lpVtbl->get_MRO(This,value) )
    ( (This)->lpVtbl->get_MUR(This,value) )
    ( (This)->lpVtbl->get_MVR(This,value) )
    ( (This)->lpVtbl->get_MWK(This,value) )
    ( (This)->lpVtbl->get_MXN(This,value) )
    ( (This)->lpVtbl->get_MYR(This,value) )
    ( (This)->lpVtbl->get_MZN(This,value) )
    ( (This)->lpVtbl->get_NAD(This,value) )
    ( (This)->lpVtbl->get_NGN(This,value) )
    ( (This)->lpVtbl->get_NIO(This,value) )
    ( (This)->lpVtbl->get_NOK(This,value) )
    ( (This)->lpVtbl->get_NPR(This,value) )
    ( (This)->lpVtbl->get_NZD(This,value) )
    ( (This)->lpVtbl->get_OMR(This,value) )
    ( (This)->lpVtbl->get_PAB(This,value) )
    ( (This)->lpVtbl->get_PEN(This,value) )
    ( (This)->lpVtbl->get_PGK(This,value) )
    ( (This)->lpVtbl->get_PHP(This,value) )
    ( (This)->lpVtbl->get_PKR(This,value) )
    ( (This)->lpVtbl->get_PLN(This,value) )
    ( (This)->lpVtbl->get_PYG(This,value) )
    ( (This)->lpVtbl->get_QAR(This,value) )
    ( (This)->lpVtbl->get_RON(This,value) )
    ( (This)->lpVtbl->get_RSD(This,value) )
    ( (This)->lpVtbl->get_RUB(This,value) )
    ( (This)->lpVtbl->get_RWF(This,value) )
    ( (This)->lpVtbl->get_SAR(This,value) )
    ( (This)->lpVtbl->get_SBD(This,value) )
    ( (This)->lpVtbl->get_SCR(This,value) )
    ( (This)->lpVtbl->get_SDG(This,value) )
    ( (This)->lpVtbl->get_SEK(This,value) )
    ( (This)->lpVtbl->get_SGD(This,value) )
    ( (This)->lpVtbl->get_SHP(This,value) )
    ( (This)->lpVtbl->get_SLL(This,value) )
    ( (This)->lpVtbl->get_SOS(This,value) )
    ( (This)->lpVtbl->get_SRD(This,value) )
    ( (This)->lpVtbl->get_STD(This,value) )
    ( (This)->lpVtbl->get_SYP(This,value) )
    ( (This)->lpVtbl->get_SZL(This,value) )
    ( (This)->lpVtbl->get_THB(This,value) )
    ( (This)->lpVtbl->get_TJS(This,value) )
    ( (This)->lpVtbl->get_TMT(This,value) )
    ( (This)->lpVtbl->get_TND(This,value) )
    ( (This)->lpVtbl->get_TOP(This,value) )
    ( (This)->lpVtbl->get_TRY(This,value) )
    ( (This)->lpVtbl->get_TTD(This,value) )
    ( (This)->lpVtbl->get_TWD(This,value) )
    ( (This)->lpVtbl->get_TZS(This,value) )
    ( (This)->lpVtbl->get_UAH(This,value) )
    ( (This)->lpVtbl->get_UGX(This,value) )
    ( (This)->lpVtbl->get_USD(This,value) )
    ( (This)->lpVtbl->get_UYU(This,value) )
    ( (This)->lpVtbl->get_UZS(This,value) )
    ( (This)->lpVtbl->get_VEF(This,value) )
    ( (This)->lpVtbl->get_VND(This,value) )
    ( (This)->lpVtbl->get_VUV(This,value) )
    ( (This)->lpVtbl->get_WST(This,value) )
    ( (This)->lpVtbl->get_XAF(This,value) )
    ( (This)->lpVtbl->get_XCD(This,value) )
    ( (This)->lpVtbl->get_XOF(This,value) )
    ( (This)->lpVtbl->get_XPF(This,value) )
    ( (This)->lpVtbl->get_XXX(This,value) )
    ( (This)->lpVtbl->get_YER(This,value) )
    ( (This)->lpVtbl->get_ZAR(This,value) )
    ( (This)->lpVtbl->get_ZMW(This,value) )
    ( (This)->lpVtbl->get_ZWL(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_ICurrencyIdentifiersStatics2[] = L"Windows.Globalization.ICurrencyIdentifiersStatics2";
typedef struct __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BYN )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics2Vtbl;
interface __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BYN(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_ICurrencyIdentifiersStatics3[] = L"Windows.Globalization.ICurrencyIdentifiersStatics3";
typedef struct __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MRU )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SSP )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_STN )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VES )(
        __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics3Vtbl;
interface __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MRU(This,value) )
    ( (This)->lpVtbl->get_SSP(This,value) )
    ( (This)->lpVtbl->get_STN(This,value) )
    ( (This)->lpVtbl->get_VES(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CICurrencyIdentifiersStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_IGeographicRegion[] = L"Windows.Globalization.IGeographicRegion";
typedef struct __x_ABI_CWindows_CGlobalization_CIGeographicRegionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIGeographicRegion * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIGeographicRegion * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIGeographicRegion * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIGeographicRegion * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIGeographicRegion * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIGeographicRegion * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Code )(
        __x_ABI_CWindows_CGlobalization_CIGeographicRegion * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CodeTwoLetter )(
        __x_ABI_CWindows_CGlobalization_CIGeographicRegion * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CodeThreeLetter )(
        __x_ABI_CWindows_CGlobalization_CIGeographicRegion * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CodeThreeDigit )(
        __x_ABI_CWindows_CGlobalization_CIGeographicRegion * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CGlobalization_CIGeographicRegion * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NativeName )(
        __x_ABI_CWindows_CGlobalization_CIGeographicRegion * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrenciesInUse )(
        __x_ABI_CWindows_CGlobalization_CIGeographicRegion * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CIGeographicRegionVtbl;
interface __x_ABI_CWindows_CGlobalization_CIGeographicRegion
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CIGeographicRegionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Code(This,value) )
    ( (This)->lpVtbl->get_CodeTwoLetter(This,value) )
    ( (This)->lpVtbl->get_CodeThreeLetter(This,value) )
    ( (This)->lpVtbl->get_CodeThreeDigit(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_NativeName(This,value) )
    ( (This)->lpVtbl->get_CurrenciesInUse(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CIGeographicRegion;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_IGeographicRegionFactory[] = L"Windows.Globalization.IGeographicRegionFactory";
typedef struct __x_ABI_CWindows_CGlobalization_CIGeographicRegionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIGeographicRegionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIGeographicRegionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIGeographicRegionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIGeographicRegionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIGeographicRegionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIGeographicRegionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateGeographicRegion )(
        __x_ABI_CWindows_CGlobalization_CIGeographicRegionFactory * This,
                  __RPC__in HSTRING geographicRegionCode,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CIGeographicRegion * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CIGeographicRegionFactoryVtbl;
interface __x_ABI_CWindows_CGlobalization_CIGeographicRegionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CIGeographicRegionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateGeographicRegion(This,geographicRegionCode,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CIGeographicRegionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_IGeographicRegionStatics[] = L"Windows.Globalization.IGeographicRegionStatics";
typedef struct __x_ABI_CWindows_CGlobalization_CIGeographicRegionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIGeographicRegionStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIGeographicRegionStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIGeographicRegionStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIGeographicRegionStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIGeographicRegionStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIGeographicRegionStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CWindows_CGlobalization_CIGeographicRegionStatics * This,
                  __RPC__in HSTRING geographicRegionCode,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CIGeographicRegionStaticsVtbl;
interface __x_ABI_CWindows_CGlobalization_CIGeographicRegionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CIGeographicRegionStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsSupported(This,geographicRegionCode,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CIGeographicRegionStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_IJapanesePhoneme[] = L"Windows.Globalization.IJapanesePhoneme";
typedef struct __x_ABI_CWindows_CGlobalization_CIJapanesePhonemeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIJapanesePhoneme * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIJapanesePhoneme * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIJapanesePhoneme * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIJapanesePhoneme * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIJapanesePhoneme * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIJapanesePhoneme * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayText )(
        __x_ABI_CWindows_CGlobalization_CIJapanesePhoneme * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_YomiText )(
        __x_ABI_CWindows_CGlobalization_CIJapanesePhoneme * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPhraseStart )(
        __x_ABI_CWindows_CGlobalization_CIJapanesePhoneme * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CIJapanesePhonemeVtbl;
interface __x_ABI_CWindows_CGlobalization_CIJapanesePhoneme
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CIJapanesePhonemeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayText(This,value) )
    ( (This)->lpVtbl->get_YomiText(This,value) )
    ( (This)->lpVtbl->get_IsPhraseStart(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CIJapanesePhoneme;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_IJapanesePhoneticAnalyzerStatics[] = L"Windows.Globalization.IJapanesePhoneticAnalyzerStatics";
typedef struct __x_ABI_CWindows_CGlobalization_CIJapanesePhoneticAnalyzerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIJapanesePhoneticAnalyzerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIJapanesePhoneticAnalyzerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIJapanesePhoneticAnalyzerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIJapanesePhoneticAnalyzerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIJapanesePhoneticAnalyzerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CIJapanesePhoneticAnalyzerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetWords )(
        __x_ABI_CWindows_CGlobalization_CIJapanesePhoneticAnalyzerStatics * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGlobalization__CJapanesePhoneme * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetWordsWithMonoRubyOption )(
        __x_ABI_CWindows_CGlobalization_CIJapanesePhoneticAnalyzerStatics * This,
                  __RPC__in HSTRING input,
                  boolean monoRuby,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGlobalization__CJapanesePhoneme * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CIJapanesePhoneticAnalyzerStaticsVtbl;
interface __x_ABI_CWindows_CGlobalization_CIJapanesePhoneticAnalyzerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CIJapanesePhoneticAnalyzerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetWords(This,input,result) )
    ( (This)->lpVtbl->GetWordsWithMonoRubyOption(This,input,monoRuby,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CIJapanesePhoneticAnalyzerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_ILanguage[] = L"Windows.Globalization.ILanguage";
typedef struct __x_ABI_CWindows_CGlobalization_CILanguageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LanguageTag )(
        __x_ABI_CWindows_CGlobalization_CILanguage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CGlobalization_CILanguage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NativeName )(
        __x_ABI_CWindows_CGlobalization_CILanguage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Script )(
        __x_ABI_CWindows_CGlobalization_CILanguage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CILanguageVtbl;
interface __x_ABI_CWindows_CGlobalization_CILanguage
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CILanguageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LanguageTag(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_NativeName(This,value) )
    ( (This)->lpVtbl->get_Script(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CILanguage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_ILanguage2[] = L"Windows.Globalization.ILanguage2";
typedef struct __x_ABI_CWindows_CGlobalization_CILanguage2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguage2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguage2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguage2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguage2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguage2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguage2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LayoutDirection )(
        __x_ABI_CWindows_CGlobalization_CILanguage2 * This,
                           __RPC__out __x_ABI_CWindows_CGlobalization_CLanguageLayoutDirection * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CILanguage2Vtbl;
interface __x_ABI_CWindows_CGlobalization_CILanguage2
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CILanguage2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LayoutDirection(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CILanguage2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_ILanguageExtensionSubtags[] = L"Windows.Globalization.ILanguageExtensionSubtags";
typedef struct __x_ABI_CWindows_CGlobalization_CILanguageExtensionSubtagsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageExtensionSubtags * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageExtensionSubtags * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageExtensionSubtags * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageExtensionSubtags * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageExtensionSubtags * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageExtensionSubtags * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetExtensionSubtags )(
        __x_ABI_CWindows_CGlobalization_CILanguageExtensionSubtags * This,
                  __RPC__in HSTRING singleton,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CILanguageExtensionSubtagsVtbl;
interface __x_ABI_CWindows_CGlobalization_CILanguageExtensionSubtags
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CILanguageExtensionSubtagsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetExtensionSubtags(This,singleton,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CILanguageExtensionSubtags;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_ILanguageFactory[] = L"Windows.Globalization.ILanguageFactory";
typedef struct __x_ABI_CWindows_CGlobalization_CILanguageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateLanguage )(
        __x_ABI_CWindows_CGlobalization_CILanguageFactory * This,
                  __RPC__in HSTRING languageTag,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CILanguage * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CILanguageFactoryVtbl;
interface __x_ABI_CWindows_CGlobalization_CILanguageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CILanguageFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateLanguage(This,languageTag,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CILanguageFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_ILanguageStatics[] = L"Windows.Globalization.ILanguageStatics";
typedef struct __x_ABI_CWindows_CGlobalization_CILanguageStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsWellFormed )(
        __x_ABI_CWindows_CGlobalization_CILanguageStatics * This,
                  __RPC__in HSTRING languageTag,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentInputMethodLanguageTag )(
        __x_ABI_CWindows_CGlobalization_CILanguageStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CILanguageStaticsVtbl;
interface __x_ABI_CWindows_CGlobalization_CILanguageStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CILanguageStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsWellFormed(This,languageTag,result) )
    ( (This)->lpVtbl->get_CurrentInputMethodLanguageTag(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CILanguageStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_ILanguageStatics2[] = L"Windows.Globalization.ILanguageStatics2";
typedef struct __x_ABI_CWindows_CGlobalization_CILanguageStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CILanguageStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TrySetInputMethodLanguageTag )(
        __x_ABI_CWindows_CGlobalization_CILanguageStatics2 * This,
                  __RPC__in HSTRING languageTag,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CILanguageStatics2Vtbl;
interface __x_ABI_CWindows_CGlobalization_CILanguageStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CILanguageStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TrySetInputMethodLanguageTag(This,languageTag,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CILanguageStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_INumeralSystemIdentifiersStatics[] = L"Windows.Globalization.INumeralSystemIdentifiersStatics";
typedef struct __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Arab )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ArabExt )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bali )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Beng )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Cham )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Deva )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FullWide )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gujr )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Guru )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HaniDec )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Java )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kali )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Khmr )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Knda )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Lana )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LanaTham )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Laoo )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Latn )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Lepc )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Limb )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mlym )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mong )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mtei )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mymr )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MymrShan )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Nkoo )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Olck )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Orya )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Saur )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sund )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Talu )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TamlDec )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Telu )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Thai )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Tibt )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Vaii )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Arab(This,value) )
    ( (This)->lpVtbl->get_ArabExt(This,value) )
    ( (This)->lpVtbl->get_Bali(This,value) )
    ( (This)->lpVtbl->get_Beng(This,value) )
    ( (This)->lpVtbl->get_Cham(This,value) )
    ( (This)->lpVtbl->get_Deva(This,value) )
    ( (This)->lpVtbl->get_FullWide(This,value) )
    ( (This)->lpVtbl->get_Gujr(This,value) )
    ( (This)->lpVtbl->get_Guru(This,value) )
    ( (This)->lpVtbl->get_HaniDec(This,value) )
    ( (This)->lpVtbl->get_Java(This,value) )
    ( (This)->lpVtbl->get_Kali(This,value) )
    ( (This)->lpVtbl->get_Khmr(This,value) )
    ( (This)->lpVtbl->get_Knda(This,value) )
    ( (This)->lpVtbl->get_Lana(This,value) )
    ( (This)->lpVtbl->get_LanaTham(This,value) )
    ( (This)->lpVtbl->get_Laoo(This,value) )
    ( (This)->lpVtbl->get_Latn(This,value) )
    ( (This)->lpVtbl->get_Lepc(This,value) )
    ( (This)->lpVtbl->get_Limb(This,value) )
    ( (This)->lpVtbl->get_Mlym(This,value) )
    ( (This)->lpVtbl->get_Mong(This,value) )
    ( (This)->lpVtbl->get_Mtei(This,value) )
    ( (This)->lpVtbl->get_Mymr(This,value) )
    ( (This)->lpVtbl->get_MymrShan(This,value) )
    ( (This)->lpVtbl->get_Nkoo(This,value) )
    ( (This)->lpVtbl->get_Olck(This,value) )
    ( (This)->lpVtbl->get_Orya(This,value) )
    ( (This)->lpVtbl->get_Saur(This,value) )
    ( (This)->lpVtbl->get_Sund(This,value) )
    ( (This)->lpVtbl->get_Talu(This,value) )
    ( (This)->lpVtbl->get_TamlDec(This,value) )
    ( (This)->lpVtbl->get_Telu(This,value) )
    ( (This)->lpVtbl->get_Thai(This,value) )
    ( (This)->lpVtbl->get_Tibt(This,value) )
    ( (This)->lpVtbl->get_Vaii(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_INumeralSystemIdentifiersStatics2[] = L"Windows.Globalization.INumeralSystemIdentifiersStatics2";
typedef struct __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Brah )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Osma )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MathBold )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MathDbl )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MathSans )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MathSanb )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MathMono )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZmthBold )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZmthDbl )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZmthSans )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZmthSanb )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZmthMono )(
        __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2Vtbl;
interface __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Brah(This,value) )
    ( (This)->lpVtbl->get_Osma(This,value) )
    ( (This)->lpVtbl->get_MathBold(This,value) )
    ( (This)->lpVtbl->get_MathDbl(This,value) )
    ( (This)->lpVtbl->get_MathSans(This,value) )
    ( (This)->lpVtbl->get_MathSanb(This,value) )
    ( (This)->lpVtbl->get_MathMono(This,value) )
    ( (This)->lpVtbl->get_ZmthBold(This,value) )
    ( (This)->lpVtbl->get_ZmthDbl(This,value) )
    ( (This)->lpVtbl->get_ZmthSans(This,value) )
    ( (This)->lpVtbl->get_ZmthSanb(This,value) )
    ( (This)->lpVtbl->get_ZmthMono(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CINumeralSystemIdentifiersStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_ITimeZoneOnCalendar[] = L"Windows.Globalization.ITimeZoneOnCalendar";
typedef struct __x_ABI_CWindows_CGlobalization_CITimeZoneOnCalendarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CITimeZoneOnCalendar * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CITimeZoneOnCalendar * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CITimeZoneOnCalendar * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CITimeZoneOnCalendar * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CITimeZoneOnCalendar * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CITimeZoneOnCalendar * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetTimeZone )(
        __x_ABI_CWindows_CGlobalization_CITimeZoneOnCalendar * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ChangeTimeZone )(
        __x_ABI_CWindows_CGlobalization_CITimeZoneOnCalendar * This,
                  __RPC__in HSTRING timeZoneId
        );
                    HRESULT ( STDMETHODCALLTYPE *TimeZoneAsFullString )(
        __x_ABI_CWindows_CGlobalization_CITimeZoneOnCalendar * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                    HRESULT ( STDMETHODCALLTYPE *TimeZoneAsString )(
        __x_ABI_CWindows_CGlobalization_CITimeZoneOnCalendar * This,
                  INT32 idealLength,
                           __RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CITimeZoneOnCalendarVtbl;
interface __x_ABI_CWindows_CGlobalization_CITimeZoneOnCalendar
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CITimeZoneOnCalendarVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetTimeZone(This,value) )
    ( (This)->lpVtbl->ChangeTimeZone(This,timeZoneId) )
    ( (This)->lpVtbl->TimeZoneAsFullString(This,result) )
    ( (This)->lpVtbl->TimeZoneAsString(This,idealLength,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CITimeZoneOnCalendar;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_ApplicationLanguages[] = L"Windows.Globalization.ApplicationLanguages";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_Calendar[] = L"Windows.Globalization.Calendar";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_CalendarIdentifiers[] = L"Windows.Globalization.CalendarIdentifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_ClockIdentifiers[] = L"Windows.Globalization.ClockIdentifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_CurrencyAmount[] = L"Windows.Globalization.CurrencyAmount";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_CurrencyIdentifiers[] = L"Windows.Globalization.CurrencyIdentifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_GeographicRegion[] = L"Windows.Globalization.GeographicRegion";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_JapanesePhoneme[] = L"Windows.Globalization.JapanesePhoneme";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_JapanesePhoneticAnalyzer[] = L"Windows.Globalization.JapanesePhoneticAnalyzer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_Language[] = L"Windows.Globalization.Language";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_NumeralSystemIdentifiers[] = L"Windows.Globalization.NumeralSystemIdentifiers";
       
       
#pragma clang diagnostic pop
