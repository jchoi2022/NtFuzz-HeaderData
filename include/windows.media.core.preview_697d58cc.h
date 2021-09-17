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
#include "Windows.Media.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics;
typedef interface __FIEventHandler_1_IInspectable __FIEventHandler_1_IInspectable;
EXTERN_C const IID IID___FIEventHandler_1_IInspectable;
typedef struct __FIEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_IInspectable * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FIEventHandler_1_IInspectableVtbl;
interface __FIEventHandler_1_IInspectable
{
    CONST_VTBL struct __FIEventHandler_1_IInspectableVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef enum __x_ABI_CWindows_CMedia_CSoundLevel __x_ABI_CWindows_CMedia_CSoundLevel;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_Preview_ISoundLevelBrokerStatics[] = L"Windows.Media.Core.Preview.ISoundLevelBrokerStatics";
typedef struct __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SoundLevel )(
        __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CSoundLevel * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SoundLevelChanged )(
        __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SoundLevelChanged )(
        __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SoundLevel(This,value) )
    ( (This)->lpVtbl->add_SoundLevelChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_SoundLevelChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CPreview_CISoundLevelBrokerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_Preview_SoundLevelBroker[] = L"Windows.Media.Core.Preview.SoundLevelBroker";
       
       
#pragma clang diagnostic pop
