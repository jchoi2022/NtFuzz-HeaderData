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
typedef interface __x_ABI_CWindows_CPerception_CIPerceptionTimestamp __x_ABI_CWindows_CPerception_CIPerceptionTimestamp;
typedef interface __x_ABI_CWindows_CPerception_CIPerceptionTimestamp2 __x_ABI_CWindows_CPerception_CIPerceptionTimestamp2;
typedef interface __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics;
typedef interface __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics2 __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics2;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_IPerceptionTimestamp[] = L"Windows.Perception.IPerceptionTimestamp";
typedef struct __x_ABI_CWindows_CPerception_CIPerceptionTimestampVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TargetTime )(
        __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PredictionAmount )(
        __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CIPerceptionTimestampVtbl;
interface __x_ABI_CWindows_CPerception_CIPerceptionTimestamp
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CIPerceptionTimestampVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TargetTime(This,value) )
    ( (This)->lpVtbl->get_PredictionAmount(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CIPerceptionTimestamp;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_IPerceptionTimestamp2[] = L"Windows.Perception.IPerceptionTimestamp2";
typedef struct __x_ABI_CWindows_CPerception_CIPerceptionTimestamp2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SystemRelativeTargetTime )(
        __x_ABI_CWindows_CPerception_CIPerceptionTimestamp2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CIPerceptionTimestamp2Vtbl;
interface __x_ABI_CWindows_CPerception_CIPerceptionTimestamp2
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CIPerceptionTimestamp2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SystemRelativeTargetTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CIPerceptionTimestamp2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_IPerceptionTimestampHelperStatics[] = L"Windows.Perception.IPerceptionTimestampHelperStatics";
typedef struct __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromHistoricalTargetTime )(
        __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics * This,
                  __x_ABI_CWindows_CFoundation_CDateTime targetTime,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStaticsVtbl;
interface __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromHistoricalTargetTime(This,targetTime,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_IPerceptionTimestampHelperStatics2[] = L"Windows.Perception.IPerceptionTimestampHelperStatics2";
typedef struct __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromSystemRelativeTargetTime )(
        __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics2 * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan targetTime,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics2Vtbl;
interface __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromSystemRelativeTargetTime(This,targetTime,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_PerceptionTimestamp[] = L"Windows.Perception.PerceptionTimestamp";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_PerceptionTimestampHelper[] = L"Windows.Perception.PerceptionTimestampHelper";
       
       
#pragma clang diagnostic pop
