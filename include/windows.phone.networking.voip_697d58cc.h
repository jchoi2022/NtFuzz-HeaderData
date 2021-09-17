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
#include "Windows.Phone.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs;
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs;
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs;
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs;
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation;
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator;
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2 __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2;
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3 __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3;
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics;
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade;
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade;
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation;
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager;
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall;
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2 __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2;
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3 __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3;
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady;
typedef interface __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * sender, __RPC__in_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * sender, __RPC__in_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * sender, __RPC__in_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * sender, __RPC__in_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef enum __x_ABI_CWindows_CPhone_CNetworking_CVoip_CSeamlessCallUpgradeSupport __x_ABI_CWindows_CPhone_CNetworking_CVoip_CSeamlessCallUpgradeSupport;
typedef enum __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia;
typedef enum __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallRejectReason __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallRejectReason;
typedef enum __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallState __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallState;
typedef enum __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipOperationType __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipOperationType;
enum __x_ABI_CWindows_CPhone_CNetworking_CVoip_CSeamlessCallUpgradeSupport
{
    SeamlessCallUpgradeSupport_Unknown = 0,
    SeamlessCallUpgradeSupport_NotSupported = 1,
    SeamlessCallUpgradeSupport_Supported = 2,
};
enum __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia
{
    VoipCallMedia_None = 0,
    VoipCallMedia_Audio = 0x1,
    VoipCallMedia_Video = 0x2,
};
enum __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallRejectReason
{
    VoipCallRejectReason_UserIgnored = 0,
    VoipCallRejectReason_TimedOut = 1,
    VoipCallRejectReason_OtherIncomingCall = 2,
    VoipCallRejectReason_EmergencyCallExists = 3,
    VoipCallRejectReason_InvalidCallState = 4,
};
enum __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallState
{
    VoipCallState_Ended = 0,
    VoipCallState_Held = 1,
    VoipCallState_Active = 2,
    VoipCallState_Incoming = 3,
    VoipCallState_Outgoing = 4,
};
enum __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipOperationType
{
    VoipOperationType_QueryRemotePartySeamless = 0,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_ICallAnswerEventArgs[] = L"Windows.Phone.Networking.Voip.ICallAnswerEventArgs";
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AcceptedMedia )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgsVtbl;
interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AcceptedMedia(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_ICallRejectEventArgs[] = L"Windows.Phone.Networking.Voip.ICallRejectEventArgs";
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RejectReason )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallRejectReason * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgsVtbl;
interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RejectReason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_ICallStateChangeEventArgs[] = L"Windows.Phone.Networking.Voip.ICallStateChangeEventArgs";
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallState * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgsVtbl;
interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_State(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IMuteChangeEventArgs[] = L"Windows.Phone.Networking.Voip.IMuteChangeEventArgs";
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Muted )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgsVtbl;
interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Muted(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IQuerySeamlessUpgradeSupportOperation[] = L"Windows.Phone.Networking.Voip.IQuerySeamlessUpgradeSupportOperation";
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RemoteId )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyCompletion )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation * This,
                  boolean succeeded,
                  __x_ABI_CWindows_CPhone_CNetworking_CVoip_CSeamlessCallUpgradeSupport seamlessCallUpgradeSupport
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperationVtbl;
interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RemoteId(This,value) )
    ( (This)->lpVtbl->NotifyCompletion(This,succeeded,seamlessCallUpgradeSupport) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipCallCoordinator[] = L"Windows.Phone.Networking.Voip.IVoipCallCoordinator";
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_MuteRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs * muteChangeHandler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MuteRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_UnmuteRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs * muteChangeHandler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_UnmuteRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *RequestNewIncomingCall )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This,
                  __RPC__in HSTRING context,
                  __RPC__in HSTRING contactName,
                  __RPC__in HSTRING contactNumber,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * contactImage,
                  __RPC__in HSTRING serviceName,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * brandingImage,
                  __RPC__in HSTRING callDetails,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * ringtone,
                  __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia media,
                  __x_ABI_CWindows_CFoundation_CTimeSpan ringTimeout,
                   __RPC__deref_out_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * * call
        );
    HRESULT ( STDMETHODCALLTYPE *RequestNewOutgoingCall )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This,
                  __RPC__in HSTRING context,
                  __RPC__in HSTRING contactName,
                  __RPC__in HSTRING serviceName,
                  __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia media,
                   __RPC__deref_out_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * * call
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyMuted )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyUnmuted )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorVtbl;
interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_MuteRequested(This,muteChangeHandler,token) )
    ( (This)->lpVtbl->remove_MuteRequested(This,token) )
    ( (This)->lpVtbl->add_UnmuteRequested(This,muteChangeHandler,token) )
    ( (This)->lpVtbl->remove_UnmuteRequested(This,token) )
    ( (This)->lpVtbl->RequestNewIncomingCall(This,context,contactName,contactNumber,contactImage,serviceName,brandingImage,callDetails,ringtone,media,ringTimeout,call) )
    ( (This)->lpVtbl->RequestNewOutgoingCall(This,context,contactName,serviceName,media,call) )
    ( (This)->lpVtbl->NotifyMuted(This) )
    ( (This)->lpVtbl->NotifyUnmuted(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipCallCoordinator2[] = L"Windows.Phone.Networking.Voip.IVoipCallCoordinator2";
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetupNewAcceptedCall )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2 * This,
                  __RPC__in HSTRING context,
                  __RPC__in HSTRING contactName,
                  __RPC__in HSTRING contactNumber,
                  __RPC__in HSTRING serviceName,
                  __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia media,
                   __RPC__deref_out_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * * call
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2Vtbl;
interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetupNewAcceptedCall(This,context,contactName,contactNumber,serviceName,media,call) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipCallCoordinator3[] = L"Windows.Phone.Networking.Voip.IVoipCallCoordinator3";
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *RequestNewIncomingCallWithContactRemoteId )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3 * This,
                  __RPC__in HSTRING context,
                  __RPC__in HSTRING contactName,
                  __RPC__in HSTRING contactNumber,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * contactImage,
                  __RPC__in HSTRING serviceName,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * brandingImage,
                  __RPC__in HSTRING callDetails,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * ringtone,
                  __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia media,
                  __x_ABI_CWindows_CFoundation_CTimeSpan ringTimeout,
                  __RPC__in HSTRING contactRemoteId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * * call
        );
    HRESULT ( STDMETHODCALLTYPE *RequestNewAppInitiatedCall )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3 * This,
                  __RPC__in HSTRING context,
                  __RPC__in HSTRING contactName,
                  __RPC__in HSTRING contactNumber,
                  __RPC__in HSTRING serviceName,
                  __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia media,
                   __RPC__deref_out_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * * call
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3Vtbl;
interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestNewIncomingCallWithContactRemoteId(This,context,contactName,contactNumber,contactImage,serviceName,brandingImage,callDetails,ringtone,media,ringTimeout,contactRemoteId,call) )
    ( (This)->lpVtbl->RequestNewAppInitiatedCall(This,context,contactName,contactNumber,serviceName,media,call) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipCallCoordinatorStatics[] = L"Windows.Phone.Networking.Voip.IVoipCallCoordinatorStatics";
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * * coordinator
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStaticsVtbl;
interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,coordinator) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipCallCoordinatorWithAppDeterminedUpgrade[] = L"Windows.Phone.Networking.Voip.IVoipCallCoordinatorWithAppDeterminedUpgrade";
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgradeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ConfirmNonSeamlessUpgrade )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade * This,
                  GUID callUpgradeGuid
        );
    HRESULT ( STDMETHODCALLTYPE *CancelUpgrade )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade * This,
                  GUID callUpgradeGuid
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgradeVtbl;
interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgradeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ConfirmNonSeamlessUpgrade(This,callUpgradeGuid) )
    ( (This)->lpVtbl->CancelUpgrade(This,callUpgradeGuid) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipCallCoordinatorWithUpgrade[] = L"Windows.Phone.Networking.Voip.IVoipCallCoordinatorWithUpgrade";
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgradeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestOutgoingUpgradeToVideoCall )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade * This,
                  GUID callUpgradeGuid,
                  __RPC__in HSTRING context,
                  __RPC__in HSTRING contactName,
                  __RPC__in HSTRING serviceName,
                   __RPC__deref_out_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * * call
        );
    HRESULT ( STDMETHODCALLTYPE *RequestIncomingUpgradeToVideoCall )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade * This,
                  __RPC__in HSTRING context,
                  __RPC__in HSTRING contactName,
                  __RPC__in HSTRING contactNumber,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * contactImage,
                  __RPC__in HSTRING serviceName,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * brandingImage,
                  __RPC__in HSTRING callDetails,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * ringtone,
                  __x_ABI_CWindows_CFoundation_CTimeSpan ringTimeout,
                   __RPC__deref_out_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * * call
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgradeVtbl;
interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgradeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestOutgoingUpgradeToVideoCall(This,callUpgradeGuid,context,contactName,serviceName,call) )
    ( (This)->lpVtbl->RequestIncomingUpgradeToVideoCall(This,context,contactName,contactNumber,contactImage,serviceName,brandingImage,callDetails,ringtone,ringTimeout,call) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipOperation[] = L"Windows.Phone.Networking.Voip.IVoipOperation";
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation * This,
                           __RPC__out UINT32 * operationId
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation * This,
                           __RPC__out __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipOperationType * operationType
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationVtbl;
interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,operationId) )
    ( (This)->lpVtbl->get_Type(This,operationType) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipOperationsManager[] = L"Windows.Phone.Networking.Voip.IVoipOperationsManager";
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetNextOperation )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation * * voipOperation
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManagerVtbl;
interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetNextOperation(This,voipOperation) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipPhoneCall[] = L"Windows.Phone.Networking.Voip.IVoipPhoneCall";
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_EndRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_EndRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_HoldRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_HoldRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ResumeRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ResumeRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AnswerRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs * acceptHandler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AnswerRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RejectRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs * rejectHandler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RejectRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyCallHeld )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyCallActive )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyCallEnded )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContactName )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContactName )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StartTime )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CallMedia )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
                           __RPC__out __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CallMedia )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
                  __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallVtbl;
interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_EndRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_EndRequested(This,token) )
    ( (This)->lpVtbl->add_HoldRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_HoldRequested(This,token) )
    ( (This)->lpVtbl->add_ResumeRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_ResumeRequested(This,token) )
    ( (This)->lpVtbl->add_AnswerRequested(This,acceptHandler,token) )
    ( (This)->lpVtbl->remove_AnswerRequested(This,token) )
    ( (This)->lpVtbl->add_RejectRequested(This,rejectHandler,token) )
    ( (This)->lpVtbl->remove_RejectRequested(This,token) )
    ( (This)->lpVtbl->NotifyCallHeld(This) )
    ( (This)->lpVtbl->NotifyCallActive(This) )
    ( (This)->lpVtbl->NotifyCallEnded(This) )
    ( (This)->lpVtbl->get_ContactName(This,value) )
    ( (This)->lpVtbl->put_ContactName(This,value) )
    ( (This)->lpVtbl->get_StartTime(This,value) )
    ( (This)->lpVtbl->put_StartTime(This,value) )
    ( (This)->lpVtbl->get_CallMedia(This,value) )
    ( (This)->lpVtbl->put_CallMedia(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipPhoneCall2[] = L"Windows.Phone.Networking.Voip.IVoipPhoneCall2";
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryShowAppUI )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2 * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2Vtbl;
interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryShowAppUI(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipPhoneCall3[] = L"Windows.Phone.Networking.Voip.IVoipPhoneCall3";
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *NotifyCallAccepted )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3 * This,
                  __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia media
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3Vtbl;
interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->NotifyCallAccepted(This,media) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipPhoneCallReady[] = L"Windows.Phone.Networking.Voip.IVoipPhoneCallReady";
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReadyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *NotifyCallReady )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReadyVtbl;
interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReadyVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->NotifyCallReady(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Networking_Voip_CallAnswerEventArgs[] = L"Windows.Phone.Networking.Voip.CallAnswerEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Networking_Voip_CallRejectEventArgs[] = L"Windows.Phone.Networking.Voip.CallRejectEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Networking_Voip_CallStateChangeEventArgs[] = L"Windows.Phone.Networking.Voip.CallStateChangeEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Networking_Voip_MuteChangeEventArgs[] = L"Windows.Phone.Networking.Voip.MuteChangeEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Networking_Voip_QuerySeamlessUpgradeSupportOperation[] = L"Windows.Phone.Networking.Voip.QuerySeamlessUpgradeSupportOperation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Networking_Voip_VoipCallCoordinator[] = L"Windows.Phone.Networking.Voip.VoipCallCoordinator";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Networking_Voip_VoipPhoneCall[] = L"Windows.Phone.Networking.Voip.VoipPhoneCall";
       
       
#pragma clang diagnostic pop
