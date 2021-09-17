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
typedef interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter;
typedef interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics;
typedef interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo;
typedef interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory;
typedef interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics;
typedef interface __x_ABI_CWindows_CFoundation_CIStringable __x_ABI_CWindows_CFoundation_CIStringable;
typedef enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberFormat __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberFormat;
typedef enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberMatchResult __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberMatchResult;
typedef enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberParseResult __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberParseResult;
typedef enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind;
enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberFormat
{
    PhoneNumberFormat_E164 = 0,
    PhoneNumberFormat_International = 1,
    PhoneNumberFormat_National = 2,
    PhoneNumberFormat_Rfc3966 = 3,
};
enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberMatchResult
{
    PhoneNumberMatchResult_NoMatch = 0,
    PhoneNumberMatchResult_ShortNationalSignificantNumberMatch = 1,
    PhoneNumberMatchResult_NationalSignificantNumberMatch = 2,
    PhoneNumberMatchResult_ExactMatch = 3,
};
enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberParseResult
{
    PhoneNumberParseResult_Valid = 0,
    PhoneNumberParseResult_NotANumber = 1,
    PhoneNumberParseResult_InvalidCountryCode = 2,
    PhoneNumberParseResult_TooShort = 3,
    PhoneNumberParseResult_TooLong = 4,
};
enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind
{
    PredictedPhoneNumberKind_FixedLine = 0,
    PredictedPhoneNumberKind_Mobile = 1,
    PredictedPhoneNumberKind_FixedLineOrMobile = 2,
    PredictedPhoneNumberKind_TollFree = 3,
    PredictedPhoneNumberKind_PremiumRate = 4,
    PredictedPhoneNumberKind_SharedCost = 5,
    PredictedPhoneNumberKind_Voip = 6,
    PredictedPhoneNumberKind_PersonalNumber = 7,
    PredictedPhoneNumberKind_Pager = 8,
    PredictedPhoneNumberKind_UniversalAccountNumber = 9,
    PredictedPhoneNumberKind_Voicemail = 10,
    PredictedPhoneNumberKind_Unknown = 11,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatter[] = L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberFormatter";
typedef struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *Format )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * This,
                  __RPC__in_opt __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * number,
                           __RPC__deref_out_opt HSTRING * result
        );
                    HRESULT ( STDMETHODCALLTYPE *FormatWithOutputFormat )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * This,
                  __RPC__in_opt __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * number,
                  __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberFormat numberFormat,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FormatPartialString )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * This,
                  __RPC__in HSTRING number,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FormatString )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * This,
                  __RPC__in HSTRING number,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FormatStringWithLeftToRightMarkers )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * This,
                  __RPC__in HSTRING number,
                           __RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterVtbl;
interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Format(This,number,result) )
    ( (This)->lpVtbl->FormatWithOutputFormat(This,number,numberFormat,result) )
    ( (This)->lpVtbl->FormatPartialString(This,number,result) )
    ( (This)->lpVtbl->FormatString(This,number,result) )
    ( (This)->lpVtbl->FormatStringWithLeftToRightMarkers(This,number,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatterStatics[] = L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberFormatterStatics";
typedef struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryCreate )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics * This,
                  __RPC__in HSTRING regionCode,
                   __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * * phoneNumber
        );
    HRESULT ( STDMETHODCALLTYPE *GetCountryCodeForRegion )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics * This,
                  __RPC__in HSTRING regionCode,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetNationalDirectDialingPrefixForRegion )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics * This,
                  __RPC__in HSTRING regionCode,
                  boolean stripNonDigit,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *WrapWithLeftToRightMarkers )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics * This,
                  __RPC__in HSTRING number,
                           __RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStaticsVtbl;
interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryCreate(This,regionCode,phoneNumber) )
    ( (This)->lpVtbl->GetCountryCodeForRegion(This,regionCode,result) )
    ( (This)->lpVtbl->GetNationalDirectDialingPrefixForRegion(This,regionCode,stripNonDigit,result) )
    ( (This)->lpVtbl->WrapWithLeftToRightMarkers(This,number,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfo[] = L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfo";
typedef struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CountryCode )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhoneNumber )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLengthOfGeographicalAreaCode )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetNationalSignificantNumber )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetLengthOfNationalDestinationCode )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *PredictNumberKind )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
                           __RPC__out __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetGeographicRegionCode )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *CheckNumberMatch )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
                  __RPC__in_opt __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * otherNumber,
                           __RPC__out __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberMatchResult * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoVtbl;
interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CountryCode(This,value) )
    ( (This)->lpVtbl->get_PhoneNumber(This,value) )
    ( (This)->lpVtbl->GetLengthOfGeographicalAreaCode(This,result) )
    ( (This)->lpVtbl->GetNationalSignificantNumber(This,result) )
    ( (This)->lpVtbl->GetLengthOfNationalDestinationCode(This,result) )
    ( (This)->lpVtbl->PredictNumberKind(This,result) )
    ( (This)->lpVtbl->GetGeographicRegionCode(This,result) )
    ( (This)->lpVtbl->CheckNumberMatch(This,otherNumber,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfoFactory[] = L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfoFactory";
typedef struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory * This,
                  __RPC__in HSTRING number,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactoryVtbl;
interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,number,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfoStatics[] = L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfoStatics";
typedef struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics * This,
                  __RPC__in HSTRING input,
                   __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * * phoneNumber,
                           __RPC__out __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberParseResult * result
        );
                    HRESULT ( STDMETHODCALLTYPE *TryParseWithRegion )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics * This,
                  __RPC__in HSTRING input,
                  __RPC__in HSTRING regionCode,
                   __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * * phoneNumber,
                           __RPC__out __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberParseResult * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStaticsVtbl;
interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryParse(This,input,phoneNumber,result) )
    ( (This)->lpVtbl->TryParseWithRegion(This,input,regionCode,phoneNumber,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_PhoneNumberFormatting_PhoneNumberFormatter[] = L"Windows.Globalization.PhoneNumberFormatting.PhoneNumberFormatter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_PhoneNumberFormatting_PhoneNumberInfo[] = L"Windows.Globalization.PhoneNumberFormatting.PhoneNumberInfo";
       
       
#pragma clang diagnostic pop
