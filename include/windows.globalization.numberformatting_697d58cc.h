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
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter;
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2 __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2;
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory;
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory;
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder;
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter;
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2 __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2;
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions;
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser;
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder;
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption;
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator;
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory;
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory;
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory;
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption;
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder;
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption;
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
typedef interface __FIReference_1___z__zint64 __FIReference_1___z__zint64;
EXTERN_C const IID IID___FIReference_1___z__zint64;
typedef struct __FIReference_1___z__zint64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1___z__zint64 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1___z__zint64 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1___z__zint64 * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1___z__zint64 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1___z__zint64 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1___z__zint64 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1___z__zint64 * This, __RPC__out __int64 *value);
    END_INTERFACE
} __FIReference_1___z__zint64Vtbl;
interface __FIReference_1___z__zint64
{
    CONST_VTBL struct __FIReference_1___z__zint64Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIReference_1_UINT64 __FIReference_1_UINT64;
EXTERN_C const IID IID___FIReference_1_UINT64;
typedef struct __FIReference_1_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_UINT64 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_UINT64 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_UINT64 * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_UINT64 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_UINT64 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_UINT64 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_UINT64 * This, __RPC__out unsigned __int64 *value);
    END_INTERFACE
} __FIReference_1_UINT64Vtbl;
interface __FIReference_1_UINT64
{
    CONST_VTBL struct __FIReference_1_UINT64Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIReference_1_double __FIReference_1_double;
EXTERN_C const IID IID___FIReference_1_double;
typedef struct __FIReference_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_double * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_double * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_double * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_double * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_double * This, __RPC__out double *value);
    END_INTERFACE
} __FIReference_1_doubleVtbl;
interface __FIReference_1_double
{
    CONST_VTBL struct __FIReference_1_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef enum __x_ABI_CWindows_CGlobalization_CNumberFormatting_CCurrencyFormatterMode __x_ABI_CWindows_CGlobalization_CNumberFormatting_CCurrencyFormatterMode;
typedef enum __x_ABI_CWindows_CGlobalization_CNumberFormatting_CRoundingAlgorithm __x_ABI_CWindows_CGlobalization_CNumberFormatting_CRoundingAlgorithm;
enum __x_ABI_CWindows_CGlobalization_CNumberFormatting_CCurrencyFormatterMode
{
    CurrencyFormatterMode_UseSymbol = 0,
    CurrencyFormatterMode_UseCurrencyCode = 1,
};
enum __x_ABI_CWindows_CGlobalization_CNumberFormatting_CRoundingAlgorithm
{
    RoundingAlgorithm_None = 0,
    RoundingAlgorithm_RoundDown = 1,
    RoundingAlgorithm_RoundUp = 2,
    RoundingAlgorithm_RoundTowardsZero = 3,
    RoundingAlgorithm_RoundAwayFromZero = 4,
    RoundingAlgorithm_RoundHalfDown = 5,
    RoundingAlgorithm_RoundHalfUp = 6,
    RoundingAlgorithm_RoundHalfTowardsZero = 7,
    RoundingAlgorithm_RoundHalfAwayFromZero = 8,
    RoundingAlgorithm_RoundHalfToEven = 9,
    RoundingAlgorithm_RoundHalfToOdd = 10,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_ICurrencyFormatter[] = L"Windows.Globalization.NumberFormatting.ICurrencyFormatter";
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Currency )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("Currency may be read-only for releases after Windows 8.1. Instead, use a new CurrencyFormatter.")
                               HRESULT ( STDMETHODCALLTYPE *put_Currency )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterVtbl;
interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Currency(This,value) )
DEPRECATED("Currency may be read-only for releases after Windows 8.1. Instead, use a new CurrencyFormatter.")
    ( (This)->lpVtbl->put_Currency(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_ICurrencyFormatter2[] = L"Windows.Globalization.NumberFormatting.ICurrencyFormatter2";
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2 * This,
                           __RPC__out __x_ABI_CWindows_CGlobalization_CNumberFormatting_CCurrencyFormatterMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2 * This,
                  __x_ABI_CWindows_CGlobalization_CNumberFormatting_CCurrencyFormatterMode value
        );
    HRESULT ( STDMETHODCALLTYPE *ApplyRoundingForCurrency )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2 * This,
                  __x_ABI_CWindows_CGlobalization_CNumberFormatting_CRoundingAlgorithm roundingAlgorithm
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2Vtbl;
interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Mode(This,value) )
    ( (This)->lpVtbl->put_Mode(This,value) )
    ( (This)->lpVtbl->ApplyRoundingForCurrency(This,roundingAlgorithm) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_ICurrencyFormatterFactory[] = L"Windows.Globalization.NumberFormatting.ICurrencyFormatterFactory";
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateCurrencyFormatterCode )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory * This,
                  __RPC__in HSTRING currencyCode,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCurrencyFormatterCodeContext )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory * This,
                  __RPC__in HSTRING currencyCode,
                  __RPC__in_opt __FIIterable_1_HSTRING * languages,
                  __RPC__in HSTRING geographicRegion,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactoryVtbl;
interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateCurrencyFormatterCode(This,currencyCode,result) )
    ( (This)->lpVtbl->CreateCurrencyFormatterCodeContext(This,currencyCode,languages,geographicRegion,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_IDecimalFormatterFactory[] = L"Windows.Globalization.NumberFormatting.IDecimalFormatterFactory";
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateDecimalFormatter )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * languages,
                  __RPC__in HSTRING geographicRegion,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactoryVtbl;
interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateDecimalFormatter(This,languages,geographicRegion,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_IIncrementNumberRounder[] = L"Windows.Globalization.NumberFormatting.IIncrementNumberRounder";
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RoundingAlgorithm )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder * This,
                           __RPC__out __x_ABI_CWindows_CGlobalization_CNumberFormatting_CRoundingAlgorithm * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RoundingAlgorithm )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder * This,
                  __x_ABI_CWindows_CGlobalization_CNumberFormatting_CRoundingAlgorithm value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Increment )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Increment )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounderVtbl;
interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RoundingAlgorithm(This,value) )
    ( (This)->lpVtbl->put_RoundingAlgorithm(This,value) )
    ( (This)->lpVtbl->get_Increment(This,value) )
    ( (This)->lpVtbl->put_Increment(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumberFormatter[] = L"Windows.Globalization.NumberFormatting.INumberFormatter";
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *FormatInt )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * This,
                  INT64 value,
                           __RPC__deref_out_opt HSTRING * result
        );
                    HRESULT ( STDMETHODCALLTYPE *FormatUInt )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * This,
                  UINT64 value,
                           __RPC__deref_out_opt HSTRING * result
        );
                                      HRESULT ( STDMETHODCALLTYPE *FormatDouble )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * This,
                  DOUBLE value,
                           __RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterVtbl;
interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FormatInt(This,value,result) )
    ( (This)->lpVtbl->FormatUInt(This,value,result) )
    ( (This)->lpVtbl->FormatDouble(This,value,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumberFormatter2[] = L"Windows.Globalization.NumberFormatting.INumberFormatter2";
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FormatInt )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2 * This,
                  INT64 value,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FormatUInt )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2 * This,
                  UINT64 value,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FormatDouble )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2 * This,
                  DOUBLE value,
                           __RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2Vtbl;
interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FormatInt(This,value,result) )
    ( (This)->lpVtbl->FormatUInt(This,value,result) )
    ( (This)->lpVtbl->FormatDouble(This,value,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumberFormatterOptions[] = L"Windows.Globalization.NumberFormatting.INumberFormatterOptions";
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Languages )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GeographicRegion )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IntegerDigits )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IntegerDigits )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FractionDigits )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FractionDigits )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsGrouped )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsGrouped )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDecimalPointAlwaysDisplayed )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsDecimalPointAlwaysDisplayed )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NumeralSystem )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NumeralSystem )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResolvedLanguage )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResolvedGeographicRegion )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptionsVtbl;
interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Languages(This,value) )
    ( (This)->lpVtbl->get_GeographicRegion(This,value) )
    ( (This)->lpVtbl->get_IntegerDigits(This,value) )
    ( (This)->lpVtbl->put_IntegerDigits(This,value) )
    ( (This)->lpVtbl->get_FractionDigits(This,value) )
    ( (This)->lpVtbl->put_FractionDigits(This,value) )
    ( (This)->lpVtbl->get_IsGrouped(This,value) )
    ( (This)->lpVtbl->put_IsGrouped(This,value) )
    ( (This)->lpVtbl->get_IsDecimalPointAlwaysDisplayed(This,value) )
    ( (This)->lpVtbl->put_IsDecimalPointAlwaysDisplayed(This,value) )
    ( (This)->lpVtbl->get_NumeralSystem(This,value) )
    ( (This)->lpVtbl->put_NumeralSystem(This,value) )
    ( (This)->lpVtbl->get_ResolvedLanguage(This,value) )
    ( (This)->lpVtbl->get_ResolvedGeographicRegion(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumberParser[] = L"Windows.Globalization.NumberFormatting.INumberParser";
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ParseInt )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser * This,
                  __RPC__in HSTRING text,
                           __RPC__deref_out_opt __FIReference_1___z__zint64 * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ParseUInt )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser * This,
                  __RPC__in HSTRING text,
                           __RPC__deref_out_opt __FIReference_1_UINT64 * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ParseDouble )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser * This,
                  __RPC__in HSTRING text,
                           __RPC__deref_out_opt __FIReference_1_double * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParserVtbl;
interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParserVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ParseInt(This,text,result) )
    ( (This)->lpVtbl->ParseUInt(This,text,result) )
    ( (This)->lpVtbl->ParseDouble(This,text,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumberRounder[] = L"Windows.Globalization.NumberFormatting.INumberRounder";
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RoundInt32 )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This,
                  INT32 value,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *RoundUInt32 )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This,
                  UINT32 value,
                           __RPC__out UINT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *RoundInt64 )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This,
                  INT64 value,
                           __RPC__out INT64 * result
        );
    HRESULT ( STDMETHODCALLTYPE *RoundUInt64 )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This,
                  UINT64 value,
                           __RPC__out UINT64 * result
        );
    HRESULT ( STDMETHODCALLTYPE *RoundSingle )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This,
                  FLOAT value,
                           __RPC__out FLOAT * result
        );
    HRESULT ( STDMETHODCALLTYPE *RoundDouble )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This,
                  DOUBLE value,
                           __RPC__out DOUBLE * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderVtbl;
interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RoundInt32(This,value,result) )
    ( (This)->lpVtbl->RoundUInt32(This,value,result) )
    ( (This)->lpVtbl->RoundInt64(This,value,result) )
    ( (This)->lpVtbl->RoundUInt64(This,value,result) )
    ( (This)->lpVtbl->RoundSingle(This,value,result) )
    ( (This)->lpVtbl->RoundDouble(This,value,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumberRounderOption[] = L"Windows.Globalization.NumberFormatting.INumberRounderOption";
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NumberRounder )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NumberRounder )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption * This,
                  __RPC__in_opt __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOptionVtbl;
interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOptionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NumberRounder(This,value) )
    ( (This)->lpVtbl->put_NumberRounder(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumeralSystemTranslator[] = L"Windows.Globalization.NumberFormatting.INumeralSystemTranslator";
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Languages )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResolvedLanguage )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NumeralSystem )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NumeralSystem )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * This,
                  __RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *TranslateNumerals )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * This,
                  __RPC__in HSTRING value,
                           __RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorVtbl;
interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Languages(This,value) )
    ( (This)->lpVtbl->get_ResolvedLanguage(This,value) )
    ( (This)->lpVtbl->get_NumeralSystem(This,value) )
    ( (This)->lpVtbl->put_NumeralSystem(This,value) )
    ( (This)->lpVtbl->TranslateNumerals(This,value,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumeralSystemTranslatorFactory[] = L"Windows.Globalization.NumberFormatting.INumeralSystemTranslatorFactory";
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * languages,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactoryVtbl;
interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,languages,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_IPercentFormatterFactory[] = L"Windows.Globalization.NumberFormatting.IPercentFormatterFactory";
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreatePercentFormatter )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * languages,
                  __RPC__in HSTRING geographicRegion,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactoryVtbl;
interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreatePercentFormatter(This,languages,geographicRegion,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_IPermilleFormatterFactory[] = L"Windows.Globalization.NumberFormatting.IPermilleFormatterFactory";
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreatePermilleFormatter )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * languages,
                  __RPC__in HSTRING geographicRegion,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactoryVtbl;
interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreatePermilleFormatter(This,languages,geographicRegion,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_ISignedZeroOption[] = L"Windows.Globalization.NumberFormatting.ISignedZeroOption";
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsZeroSigned )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsZeroSigned )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOptionVtbl;
interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOptionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsZeroSigned(This,value) )
    ( (This)->lpVtbl->put_IsZeroSigned(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_ISignificantDigitsNumberRounder[] = L"Windows.Globalization.NumberFormatting.ISignificantDigitsNumberRounder";
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RoundingAlgorithm )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder * This,
                           __RPC__out __x_ABI_CWindows_CGlobalization_CNumberFormatting_CRoundingAlgorithm * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RoundingAlgorithm )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder * This,
                  __x_ABI_CWindows_CGlobalization_CNumberFormatting_CRoundingAlgorithm value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SignificantDigits )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SignificantDigits )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder * This,
                  UINT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounderVtbl;
interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RoundingAlgorithm(This,value) )
    ( (This)->lpVtbl->put_RoundingAlgorithm(This,value) )
    ( (This)->lpVtbl->get_SignificantDigits(This,value) )
    ( (This)->lpVtbl->put_SignificantDigits(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_ISignificantDigitsOption[] = L"Windows.Globalization.NumberFormatting.ISignificantDigitsOption";
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SignificantDigits )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SignificantDigits )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption * This,
                  INT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOptionVtbl;
interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOptionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SignificantDigits(This,value) )
    ( (This)->lpVtbl->put_SignificantDigits(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_NumberFormatting_CurrencyFormatter[] = L"Windows.Globalization.NumberFormatting.CurrencyFormatter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_NumberFormatting_DecimalFormatter[] = L"Windows.Globalization.NumberFormatting.DecimalFormatter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_NumberFormatting_IncrementNumberRounder[] = L"Windows.Globalization.NumberFormatting.IncrementNumberRounder";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_NumberFormatting_NumeralSystemTranslator[] = L"Windows.Globalization.NumberFormatting.NumeralSystemTranslator";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_NumberFormatting_PercentFormatter[] = L"Windows.Globalization.NumberFormatting.PercentFormatter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_NumberFormatting_PermilleFormatter[] = L"Windows.Globalization.NumberFormatting.PermilleFormatter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_NumberFormatting_SignificantDigitsNumberRounder[] = L"Windows.Globalization.NumberFormatting.SignificantDigitsNumberRounder";
       
       
#pragma clang diagnostic pop
