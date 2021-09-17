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
#include "Windows.Storage.h"
typedef interface __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager;
typedef interface __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics;
typedef interface __x_ABI_CWindows_CStorage_CIApplicationData __x_ABI_CWindows_CStorage_CIApplicationData;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Core_IApplicationDataManager[] = L"Windows.Management.Core.IApplicationDataManager";
typedef struct __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerVtbl;
interface __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Core_IApplicationDataManagerStatics[] = L"Windows.Management.Core.IApplicationDataManagerStatics";
typedef struct __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateForPackageFamily )(
        __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics * This,
                  __RPC__in HSTRING packageFamilyName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIApplicationData * * applicationData
        );
    END_INTERFACE
} __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStaticsVtbl;
interface __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateForPackageFamily(This,packageFamilyName,applicationData) )
EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Core_ApplicationDataManager[] = L"Windows.Management.Core.ApplicationDataManager";
       
       
#pragma clang diagnostic pop
