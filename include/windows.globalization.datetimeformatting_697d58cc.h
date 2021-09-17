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
typedef interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter;
typedef interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2;
typedef interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory;
typedef interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics;
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
typedef enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayFormat __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayFormat;
typedef enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayOfWeekFormat __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayOfWeekFormat;
typedef enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CHourFormat __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CHourFormat;
typedef enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMinuteFormat __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMinuteFormat;
typedef enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMonthFormat __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMonthFormat;
typedef enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CSecondFormat __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CSecondFormat;
typedef enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CYearFormat __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CYearFormat;
enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayFormat
{
    DayFormat_None = 0,
    DayFormat_Default = 1,
};
enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayOfWeekFormat
{
    DayOfWeekFormat_None = 0,
    DayOfWeekFormat_Default = 1,
    DayOfWeekFormat_Abbreviated = 2,
    DayOfWeekFormat_Full = 3,
};
enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CHourFormat
{
    HourFormat_None = 0,
    HourFormat_Default = 1,
};
enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMinuteFormat
{
    MinuteFormat_None = 0,
    MinuteFormat_Default = 1,
};
enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMonthFormat
{
    MonthFormat_None = 0,
    MonthFormat_Default = 1,
    MonthFormat_Abbreviated = 2,
    MonthFormat_Full = 3,
    MonthFormat_Numeric = 4,
};
enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CSecondFormat
{
    SecondFormat_None = 0,
    SecondFormat_Default = 1,
};
enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CYearFormat
{
    YearFormat_None = 0,
    YearFormat_Default = 1,
    YearFormat_Abbreviated = 2,
    YearFormat_Full = 3,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_DateTimeFormatting_IDateTimeFormatter[] = L"Windows.Globalization.DateTimeFormatting.IDateTimeFormatter";
typedef struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Languages )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GeographicRegion )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Calendar )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Clock )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NumeralSystem )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NumeralSystem )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Patterns )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Template )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *Format )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value,
                           __RPC__deref_out_opt HSTRING * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IncludeYear )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
                           __RPC__out __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CYearFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IncludeMonth )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
                           __RPC__out __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMonthFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IncludeDayOfWeek )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
                           __RPC__out __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayOfWeekFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IncludeDay )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
                           __RPC__out __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IncludeHour )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
                           __RPC__out __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CHourFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IncludeMinute )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
                           __RPC__out __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMinuteFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IncludeSecond )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
                           __RPC__out __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CSecondFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResolvedLanguage )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResolvedGeographicRegion )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterVtbl;
interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Languages(This,value) )
    ( (This)->lpVtbl->get_GeographicRegion(This,value) )
    ( (This)->lpVtbl->get_Calendar(This,value) )
    ( (This)->lpVtbl->get_Clock(This,value) )
    ( (This)->lpVtbl->get_NumeralSystem(This,value) )
    ( (This)->lpVtbl->put_NumeralSystem(This,value) )
    ( (This)->lpVtbl->get_Patterns(This,value) )
    ( (This)->lpVtbl->get_Template(This,value) )
    ( (This)->lpVtbl->Format(This,value,result) )
    ( (This)->lpVtbl->get_IncludeYear(This,value) )
    ( (This)->lpVtbl->get_IncludeMonth(This,value) )
    ( (This)->lpVtbl->get_IncludeDayOfWeek(This,value) )
    ( (This)->lpVtbl->get_IncludeDay(This,value) )
    ( (This)->lpVtbl->get_IncludeHour(This,value) )
    ( (This)->lpVtbl->get_IncludeMinute(This,value) )
    ( (This)->lpVtbl->get_IncludeSecond(This,value) )
    ( (This)->lpVtbl->get_ResolvedLanguage(This,value) )
    ( (This)->lpVtbl->get_ResolvedGeographicRegion(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_DateTimeFormatting_IDateTimeFormatter2[] = L"Windows.Globalization.DateTimeFormatting.IDateTimeFormatter2";
typedef struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *FormatUsingTimeZone )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 * This,
                  __x_ABI_CWindows_CFoundation_CDateTime datetime,
                  __RPC__in HSTRING timeZoneId,
                           __RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2Vtbl;
interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FormatUsingTimeZone(This,datetime,timeZoneId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_DateTimeFormatting_IDateTimeFormatterFactory[] = L"Windows.Globalization.DateTimeFormatting.IDateTimeFormatterFactory";
typedef struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateDateTimeFormatter )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
                  __RPC__in HSTRING formatTemplate,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDateTimeFormatterLanguages )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
                  __RPC__in HSTRING formatTemplate,
                  __RPC__in_opt __FIIterable_1_HSTRING * languages,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDateTimeFormatterContext )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
                  __RPC__in HSTRING formatTemplate,
                  __RPC__in_opt __FIIterable_1_HSTRING * languages,
                  __RPC__in HSTRING geographicRegion,
                  __RPC__in HSTRING calendar,
                  __RPC__in HSTRING clock,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDateTimeFormatterDate )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
                  __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CYearFormat yearFormat,
                  __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMonthFormat monthFormat,
                  __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayFormat dayFormat,
                  __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayOfWeekFormat dayOfWeekFormat,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDateTimeFormatterTime )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
                  __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CHourFormat hourFormat,
                  __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMinuteFormat minuteFormat,
                  __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CSecondFormat secondFormat,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDateTimeFormatterDateTimeLanguages )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
                  __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CYearFormat yearFormat,
                  __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMonthFormat monthFormat,
                  __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayFormat dayFormat,
                  __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayOfWeekFormat dayOfWeekFormat,
                  __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CHourFormat hourFormat,
                  __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMinuteFormat minuteFormat,
                  __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CSecondFormat secondFormat,
                  __RPC__in_opt __FIIterable_1_HSTRING * languages,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDateTimeFormatterDateTimeContext )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
                  __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CYearFormat yearFormat,
                  __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMonthFormat monthFormat,
                  __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayFormat dayFormat,
                  __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayOfWeekFormat dayOfWeekFormat,
                  __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CHourFormat hourFormat,
                  __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMinuteFormat minuteFormat,
                  __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CSecondFormat secondFormat,
                  __RPC__in_opt __FIIterable_1_HSTRING * languages,
                  __RPC__in HSTRING geographicRegion,
                  __RPC__in HSTRING calendar,
                  __RPC__in HSTRING clock,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactoryVtbl;
interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateDateTimeFormatter(This,formatTemplate,result) )
    ( (This)->lpVtbl->CreateDateTimeFormatterLanguages(This,formatTemplate,languages,result) )
    ( (This)->lpVtbl->CreateDateTimeFormatterContext(This,formatTemplate,languages,geographicRegion,calendar,clock,result) )
    ( (This)->lpVtbl->CreateDateTimeFormatterDate(This,yearFormat,monthFormat,dayFormat,dayOfWeekFormat,result) )
    ( (This)->lpVtbl->CreateDateTimeFormatterTime(This,hourFormat,minuteFormat,secondFormat,result) )
    ( (This)->lpVtbl->CreateDateTimeFormatterDateTimeLanguages(This,yearFormat,monthFormat,dayFormat,dayOfWeekFormat,hourFormat,minuteFormat,secondFormat,languages,result) )
    ( (This)->lpVtbl->CreateDateTimeFormatterDateTimeContext(This,yearFormat,monthFormat,dayFormat,dayOfWeekFormat,hourFormat,minuteFormat,secondFormat,languages,geographicRegion,calendar,clock,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_DateTimeFormatting_IDateTimeFormatterStatics[] = L"Windows.Globalization.DateTimeFormatting.IDateTimeFormatterStatics";
typedef struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LongDate )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LongTime )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShortDate )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShortTime )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStaticsVtbl;
interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LongDate(This,value) )
    ( (This)->lpVtbl->get_LongTime(This,value) )
    ( (This)->lpVtbl->get_ShortDate(This,value) )
    ( (This)->lpVtbl->get_ShortTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_DateTimeFormatting_DateTimeFormatter[] = L"Windows.Globalization.DateTimeFormatting.DateTimeFormatter";
       
       
#pragma clang diagnostic pop
