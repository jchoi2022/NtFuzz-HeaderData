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
#include "Windows.ApplicationModel.Calls.h"
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneIncomingCallDismissedTriggerDetails __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneIncomingCallDismissedTriggerDetails;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails;
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneCallBlockedReason __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneCallBlockedReason;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneIncomingCallDismissedReason __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneIncomingCallDismissedReason;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneLineChangeKind __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneLineChangeKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneLineProperties __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneLineProperties;
typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneTriggerType __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneTriggerType;
enum __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneCallBlockedReason
{
    PhoneCallBlockedReason_InCallBlockingList = 0,
    PhoneCallBlockedReason_PrivateNumber = 1,
    PhoneCallBlockedReason_UnknownNumber = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneIncomingCallDismissedReason
{
    PhoneIncomingCallDismissedReason_Unknown = 0,
    PhoneIncomingCallDismissedReason_CallRejected = 1,
    PhoneIncomingCallDismissedReason_TextReply = 2,
    PhoneIncomingCallDismissedReason_ConnectionLost = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneLineChangeKind
{
    PhoneLineChangeKind_Added = 0,
    PhoneLineChangeKind_Removed = 1,
    PhoneLineChangeKind_PropertiesChanged = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneLineProperties
{
    PhoneLineProperties_None = 0,
    PhoneLineProperties_BrandingOptions = 0x1,
    PhoneLineProperties_CanDial = 0x2,
    PhoneLineProperties_CellularDetails = 0x4,
    PhoneLineProperties_DisplayColor = 0x8,
    PhoneLineProperties_DisplayName = 0x10,
    PhoneLineProperties_NetworkName = 0x20,
    PhoneLineProperties_NetworkState = 0x40,
    PhoneLineProperties_Transport = 0x80,
    PhoneLineProperties_Voicemail = 0x100,
};
enum __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneTriggerType
{
    PhoneTriggerType_NewVoicemailMessage = 0,
    PhoneTriggerType_CallHistoryChanged = 1,
    PhoneTriggerType_LineChanged = 2,
    PhoneTriggerType_AirplaneModeDisabledForEmergencyCall = 3,
    PhoneTriggerType_CallOriginDataRequest = 4,
    PhoneTriggerType_CallBlocked = 5,
    PhoneTriggerType_IncomingCallDismissed = 6,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_Background_IPhoneCallBlockedTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.IPhoneCallBlockedTriggerDetails";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PhoneNumber )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LineId )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CallBlockedReason )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneCallBlockedReason * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetailsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PhoneNumber(This,value) )
    ( (This)->lpVtbl->get_LineId(This,value) )
    ( (This)->lpVtbl->get_CallBlockedReason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_Background_IPhoneCallOriginDataRequestTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.IPhoneCallOriginDataRequestTriggerDetails";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RequestId )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails * This,
                           __RPC__out GUID * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhoneNumber )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetailsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RequestId(This,result) )
    ( (This)->lpVtbl->get_PhoneNumber(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_Background_IPhoneIncomingCallDismissedTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.IPhoneIncomingCallDismissedTriggerDetails";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneIncomingCallDismissedTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneIncomingCallDismissedTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneIncomingCallDismissedTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneIncomingCallDismissedTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneIncomingCallDismissedTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneIncomingCallDismissedTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneIncomingCallDismissedTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LineId )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneIncomingCallDismissedTriggerDetails * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhoneNumber )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneIncomingCallDismissedTriggerDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneIncomingCallDismissedTriggerDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DismissalTime )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneIncomingCallDismissedTriggerDetails * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TextReplyMessage )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneIncomingCallDismissedTriggerDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneIncomingCallDismissedTriggerDetails * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneIncomingCallDismissedReason * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneIncomingCallDismissedTriggerDetailsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneIncomingCallDismissedTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneIncomingCallDismissedTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LineId(This,value) )
    ( (This)->lpVtbl->get_PhoneNumber(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_DismissalTime(This,value) )
    ( (This)->lpVtbl->get_TextReplyMessage(This,value) )
    ( (This)->lpVtbl->get_Reason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneIncomingCallDismissedTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_Background_IPhoneLineChangedTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.IPhoneLineChangedTriggerDetails";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LineId )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails * This,
                           __RPC__out GUID * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChangeType )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneLineChangeKind * result
        );
    HRESULT ( STDMETHODCALLTYPE *HasLinePropertyChanged )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails * This,
                  __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneLineProperties lineProperty,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetailsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LineId(This,result) )
    ( (This)->lpVtbl->get_ChangeType(This,result) )
    ( (This)->lpVtbl->HasLinePropertyChanged(This,lineProperty,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_Background_IPhoneNewVoicemailMessageTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.IPhoneNewVoicemailMessageTriggerDetails";
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LineId )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails * This,
                           __RPC__out GUID * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VoicemailCount )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails * This,
                           __RPC__out INT32 * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OperatorMessage )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetailsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LineId(This,result) )
    ( (This)->lpVtbl->get_VoicemailCount(This,result) )
    ( (This)->lpVtbl->get_OperatorMessage(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_Background_PhoneCallBlockedTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.PhoneCallBlockedTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_Background_PhoneCallOriginDataRequestTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.PhoneCallOriginDataRequestTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_Background_PhoneIncomingCallDismissedTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.PhoneIncomingCallDismissedTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_Background_PhoneLineChangedTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.PhoneLineChangedTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_Background_PhoneNewVoicemailMessageTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.PhoneNewVoicemailMessageTriggerDetails";
       
       
#pragma clang diagnostic pop
