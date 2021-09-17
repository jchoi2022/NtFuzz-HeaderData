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
#include "Windows.ApplicationModel.UserActivities.h"
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CCore_CICoreUserActivityManagerStatics __x_ABI_CWindows_CApplicationModel_CUserActivities_CCore_CICoreUserActivityManagerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_Core_ICoreUserActivityManagerStatics[] = L"Windows.ApplicationModel.UserActivities.Core.ICoreUserActivityManagerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CCore_CICoreUserActivityManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CCore_CICoreUserActivityManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CCore_CICoreUserActivityManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CCore_CICoreUserActivityManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CCore_CICoreUserActivityManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CCore_CICoreUserActivityManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CCore_CICoreUserActivityManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateUserActivitySessionInBackground )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CCore_CICoreUserActivityManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * activity,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteUserActivitySessionsInTimeRangeAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CCore_CICoreUserActivityManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel * channel,
                  __x_ABI_CWindows_CFoundation_CDateTime startTime,
                  __x_ABI_CWindows_CFoundation_CDateTime endTime,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CCore_CICoreUserActivityManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CCore_CICoreUserActivityManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CCore_CICoreUserActivityManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateUserActivitySessionInBackground(This,activity,result) )
    ( (This)->lpVtbl->DeleteUserActivitySessionsInTimeRangeAsync(This,channel,startTime,endTime,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CCore_CICoreUserActivityManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserActivities_Core_CoreUserActivityManager[] = L"Windows.ApplicationModel.UserActivities.Core.CoreUserActivityManager";
       
       
#pragma clang diagnostic pop
