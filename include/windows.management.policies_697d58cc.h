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
#include "Windows.Storage.Streams.h"
#include "Windows.System.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData;
typedef interface __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics;
typedef interface __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CManagement_CPolicies_CNamedPolicyKind __x_ABI_CWindows_CManagement_CPolicies_CNamedPolicyKind;
enum __x_ABI_CWindows_CManagement_CPolicies_CNamedPolicyKind
{
    NamedPolicyKind_Invalid = 0,
    NamedPolicyKind_Binary = 1,
    NamedPolicyKind_Boolean = 2,
    NamedPolicyKind_Int32 = 3,
    NamedPolicyKind_Int64 = 4,
    NamedPolicyKind_String = 5,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Policies_INamedPolicyData[] = L"Windows.Management.Policies.INamedPolicyData";
typedef struct __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Area )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
                           __RPC__out __x_ABI_CWindows_CManagement_CPolicies_CNamedPolicyKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsManaged )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsUserPolicy )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetBoolean )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetBinary )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetInt32 )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetInt64 )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
                           __RPC__out INT64 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetString )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
                           __RPC__deref_out_opt HSTRING * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Changed )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable * changedHandler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Changed )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyDataVtbl;
interface __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyDataVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Area(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->get_IsManaged(This,value) )
    ( (This)->lpVtbl->get_IsUserPolicy(This,value) )
    ( (This)->lpVtbl->get_User(This,value) )
    ( (This)->lpVtbl->GetBoolean(This,result) )
    ( (This)->lpVtbl->GetBinary(This,result) )
    ( (This)->lpVtbl->GetInt32(This,result) )
    ( (This)->lpVtbl->GetInt64(This,result) )
    ( (This)->lpVtbl->GetString(This,result) )
    ( (This)->lpVtbl->add_Changed(This,changedHandler,cookie) )
    ( (This)->lpVtbl->remove_Changed(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Policies_INamedPolicyStatics[] = L"Windows.Management.Policies.INamedPolicyStatics";
typedef struct __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPolicyFromPath )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This,
                  __RPC__in HSTRING area,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetPolicyFromPathForUser )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING area,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStaticsVtbl;
interface __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetPolicyFromPath(This,area,name,result) )
    ( (This)->lpVtbl->GetPolicyFromPathForUser(This,user,area,name,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Policies_NamedPolicy[] = L"Windows.Management.Policies.NamedPolicy";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Policies_NamedPolicyData[] = L"Windows.Management.Policies.NamedPolicyData";
       
       
#pragma clang diagnostic pop
