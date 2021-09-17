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
#include "Windows.ApplicationModel.UserDataAccounts.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation;
typedef interface __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo;
typedef struct __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfoVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo;
typedef struct __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfoVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
                       __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfoVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfoVtbl *lpVtbl;
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
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CUserDataAccountContentKinds __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CUserDataAccountContentKinds;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CUserDataAccountProviderOperationKind __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CUserDataAccountProviderOperationKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CUserDataAccountProviderPartnerAccountKind __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CUserDataAccountProviderPartnerAccountKind;
enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CUserDataAccountProviderOperationKind
{
    UserDataAccountProviderOperationKind_AddAccount = 0,
    UserDataAccountProviderOperationKind_Settings = 1,
    UserDataAccountProviderOperationKind_ResolveErrors = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CUserDataAccountProviderPartnerAccountKind
{
    UserDataAccountProviderPartnerAccountKind_Exchange = 0,
    UserDataAccountProviderPartnerAccountKind_PopOrImap = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountPartnerAccountInfo[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountPartnerAccountInfo";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Priority )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccountKind )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CUserDataAccountProviderPartnerAccountKind * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfoVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_Priority(This,value) )
    ( (This)->lpVtbl->get_AccountKind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountPartnerAccountInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderAddAccountOperation[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderAddAccountOperation";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ContentKinds )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CUserDataAccountContentKinds * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PartnerAccountInfos )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CUserDataAccounts__CProvider__CUserDataAccountPartnerAccountInfo * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompleted )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation * This,
                  __RPC__in HSTRING userDataAccountId
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperationVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ContentKinds(This,value) )
    ( (This)->lpVtbl->get_PartnerAccountInfos(This,value) )
    ( (This)->lpVtbl->ReportCompleted(This,userDataAccountId) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderAddAccountOperation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderOperation[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderOperation";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CUserDataAccountProviderOperationKind * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperationVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Kind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderOperation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderResolveErrorsOperation[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderResolveErrorsOperation";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UserDataAccountId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompleted )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperationVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UserDataAccountId(This,value) )
    ( (This)->lpVtbl->ReportCompleted(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderResolveErrorsOperation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderSettingsOperation[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderSettingsOperation";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UserDataAccountId )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompleted )(
        __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperationVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UserDataAccountId(This,value) )
    ( (This)->lpVtbl->ReportCompleted(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserDataAccounts_CProvider_CIUserDataAccountProviderSettingsOperation;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountPartnerAccountInfo[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountPartnerAccountInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountProviderAddAccountOperation[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderAddAccountOperation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountProviderResolveErrorsOperation[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderResolveErrorsOperation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserDataAccounts_Provider_UserDataAccountProviderSettingsOperation[] = L"Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderSettingsOperation";
       
       
#pragma clang diagnostic pop
