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
#include "Windows.Security.Credentials.h"
#include "Windows.System.h"
#include "Windows.UI.Popups.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler;
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler;
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler;
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane;
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs2 __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral;
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics;
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2 __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2;
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics3 __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics3;
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand;
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory;
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory;
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics;
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane;
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest;
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics;
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand;
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory;
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs;
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand;
typedef interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory;
typedef interface __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand;
typedef struct __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, __RPC__out __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl;
interface __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand;
typedef struct __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CApplicationSettings__CCredentialCommand **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl;
interface __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommand
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __x_ABI_CWindows_CUI_CPopups_CIUICommand __x_ABI_CWindows_CUI_CPopups_CIUICommand;
typedef interface __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand;
typedef struct __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, __RPC__out __x_ABI_CWindows_CUI_CPopups_CIUICommand * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl;
interface __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand;
typedef struct __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CApplicationSettings__CSettingsCommand **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl;
interface __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommand
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand;
typedef struct __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, __RPC__out __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl;
interface __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand;
typedef struct __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountCommand **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl;
interface __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommand
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand;
typedef struct __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, __RPC__out __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl;
interface __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand;
typedef struct __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl;
interface __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand;
typedef struct __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                       __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl;
interface __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand;
typedef struct __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CPopups_CIUICommand * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                       __x_ABI_CWindows_CUI_CPopups_CIUICommand * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl;
interface __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand;
typedef struct __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                       __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl;
interface __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand;
typedef struct __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                       __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl;
interface __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand;
typedef struct __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CApplicationSettings__CCredentialCommand **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                   __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This, __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl;
interface __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommandVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> SetAt(This,index,item) )
    ( (This)->lpVtbl -> InsertAt(This,index,item) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> Append(This,item) )
    ( (This)->lpVtbl -> RemoveAtEnd(This) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) )
typedef interface __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand;
typedef struct __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CApplicationSettings__CSettingsCommand **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                   __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This, __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl;
interface __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommandVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> SetAt(This,index,item) )
    ( (This)->lpVtbl -> InsertAt(This,index,item) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> Append(This,item) )
    ( (This)->lpVtbl -> RemoveAtEnd(This) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) )
typedef interface __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand;
typedef struct __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountCommand **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                   __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This, __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl;
interface __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommandVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> SetAt(This,index,item) )
    ( (This)->lpVtbl -> InsertAt(This,index,item) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> Append(This,item) )
    ( (This)->lpVtbl -> RemoveAtEnd(This) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) )
typedef interface __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand;
typedef struct __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                   __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This, __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl;
interface __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommandVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> SetAt(This,index,item) )
    ( (This)->lpVtbl -> InsertAt(This,index,item) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> Append(This,item) )
    ( (This)->lpVtbl -> RemoveAtEnd(This) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef interface __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler;
typedef enum __x_ABI_CWindows_CUI_CApplicationSettings_CSettingsEdgeLocation __x_ABI_CWindows_CUI_CApplicationSettings_CSettingsEdgeLocation;
typedef enum __x_ABI_CWindows_CUI_CApplicationSettings_CSupportedWebAccountActions __x_ABI_CWindows_CUI_CApplicationSettings_CSupportedWebAccountActions;
typedef enum __x_ABI_CWindows_CUI_CApplicationSettings_CWebAccountAction __x_ABI_CWindows_CUI_CApplicationSettings_CWebAccountAction;
enum
DEPRECATED("SettingsEdgeLocation is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CUI_CApplicationSettings_CSettingsEdgeLocation
{
    SettingsEdgeLocation_Right = 0,
    SettingsEdgeLocation_Left = 1,
};
enum __x_ABI_CWindows_CUI_CApplicationSettings_CSupportedWebAccountActions
{
    SupportedWebAccountActions_None = 0,
    SupportedWebAccountActions_Reconnect = 0x1,
    SupportedWebAccountActions_Remove = 0x2,
    SupportedWebAccountActions_ViewDetails = 0x4,
    SupportedWebAccountActions_Manage = 0x8,
    SupportedWebAccountActions_More = 0x10,
};
enum __x_ABI_CWindows_CUI_CApplicationSettings_CWebAccountAction
{
    WebAccountAction_Reconnect = 0,
    WebAccountAction_Remove = 1,
    WebAccountAction_ViewDetails = 2,
    WebAccountAction_Manage = 3,
    WebAccountAction_More = 4,
};
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * command
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandlerVtbl;
interface __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,command) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler;
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * command,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs * args
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandlerVtbl;
interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,command,args) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler;
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * command
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandlerVtbl;
interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,command) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IAccountsSettingsPane[] = L"Windows.UI.ApplicationSettings.IAccountsSettingsPane";
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_AccountCommandsRequested )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CAccountsSettingsPane_Windows__CUI__CApplicationSettings__CAccountsSettingsPaneCommandsRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AccountCommandsRequested )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneVtbl;
interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_AccountCommandsRequested(This,handler,cookie) )
    ( (This)->lpVtbl->remove_AccountCommandsRequested(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs[] = L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneCommandsRequestedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_WebAccountProviderCommands )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountProviderCommand * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WebAccountCommands )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CApplicationSettings__CWebAccountCommand * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CredentialCommands )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CApplicationSettings__CCredentialCommand * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Commands )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HeaderText )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HeaderText )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This,
                  __RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral * * deferral
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_WebAccountProviderCommands(This,value) )
    ( (This)->lpVtbl->get_WebAccountCommands(This,value) )
    ( (This)->lpVtbl->get_CredentialCommands(This,value) )
    ( (This)->lpVtbl->get_Commands(This,value) )
    ( (This)->lpVtbl->get_HeaderText(This,value) )
    ( (This)->lpVtbl->put_HeaderText(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,deferral) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs2[] = L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneCommandsRequestedEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_User(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneCommandsRequestedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IAccountsSettingsPaneEventDeferral[] = L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneEventDeferral";
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferralVtbl;
interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneEventDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics[] = L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics";
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPane * * current
        );
    HRESULT ( STDMETHODCALLTYPE *Show )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStaticsVtbl;
interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,current) )
    ( (This)->lpVtbl->Show(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics2[] = L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics2";
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ShowManageAccountsAsync )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *ShowAddAccountAsync )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ShowManageAccountsAsync(This,asyncInfo) )
    ( (This)->lpVtbl->ShowAddAccountAsync(This,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics3[] = L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics3";
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ShowManageAccountsForUserAsync )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ShowAddAccountForUserAsync )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics3Vtbl;
interface __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ShowManageAccountsForUserAsync(This,user,operation) )
    ( (This)->lpVtbl->ShowAddAccountForUserAsync(This,user,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIAccountsSettingsPaneStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ICredentialCommand[] = L"Windows.UI.ApplicationSettings.ICredentialCommand";
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PasswordCredential )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CredentialDeleted )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandVtbl;
interface __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PasswordCredential(This,value) )
    ( (This)->lpVtbl->get_CredentialDeleted(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ICredentialCommandFactory[] = L"Windows.UI.ApplicationSettings.ICredentialCommandFactory";
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateCredentialCommand )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * passwordCredential,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * * instance
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCredentialCommandWithHandler )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * passwordCredential,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandCredentialDeletedHandler * deleted,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommand * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactoryVtbl;
interface __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateCredentialCommand(This,passwordCredential,instance) )
    ( (This)->lpVtbl->CreateCredentialCommandWithHandler(This,passwordCredential,deleted,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CICredentialCommandFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ISettingsCommandFactory[] = L"Windows.UI.ApplicationSettings.ISettingsCommandFactory";
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSettingsCommand )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory * This,
                  __RPC__in_opt IInspectable * settingsCommandId,
                  __RPC__in HSTRING label,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler * handler,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactoryVtbl;
interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateSettingsCommand(This,settingsCommandId,label,handler,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ISettingsCommandStatics[] = L"Windows.UI.ApplicationSettings.ISettingsCommandStatics";
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AccountsCommand )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStaticsVtbl;
interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AccountsCommand(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CISettingsCommandStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ISettingsPane[] = L"Windows.UI.ApplicationSettings.ISettingsPane";
typedef struct
DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *add_CommandsRequested )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CApplicationSettings__CSettingsPane_Windows__CUI__CApplicationSettings__CSettingsPaneCommandsRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
    DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_CommandsRequested )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneVtbl;
interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->add_CommandsRequested(This,handler,cookie) )
DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->remove_CommandsRequested(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ISettingsPaneCommandsRequest[] = L"Windows.UI.ApplicationSettings.ISettingsPaneCommandsRequest";
typedef struct
DEPRECATED("SettingsPaneCommandsRequest is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("SettingsPaneCommandsRequest is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ApplicationCommands )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CApplicationSettings__CSettingsCommand * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestVtbl;
interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("SettingsPaneCommandsRequest is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ApplicationCommands(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ISettingsPaneCommandsRequestedEventArgs[] = L"Windows.UI.ApplicationSettings.ISettingsPaneCommandsRequestedEventArgs";
typedef struct
DEPRECATED("SettingsPaneCommandsRequestedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("SettingsPaneCommandsRequestedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequest * * request
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("SettingsPaneCommandsRequestedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Request(This,request) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneCommandsRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_ISettingsPaneStatics[] = L"Windows.UI.ApplicationSettings.ISettingsPaneStatics";
typedef struct
DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPane * * current
        );
    DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *Show )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics * This
        );
    DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Edge )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CApplicationSettings_CSettingsEdgeLocation * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStaticsVtbl;
interface __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->GetForCurrentView(This,current) )
DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->Show(This) )
DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Edge(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CISettingsPaneStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IWebAccountCommand[] = L"Windows.UI.ApplicationSettings.IWebAccountCommand";
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_WebAccount )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Invoked )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Actions )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * This,
                           __RPC__out __x_ABI_CWindows_CUI_CApplicationSettings_CSupportedWebAccountActions * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandVtbl;
interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_WebAccount(This,value) )
    ( (This)->lpVtbl->get_Invoked(This,value) )
    ( (This)->lpVtbl->get_Actions(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IWebAccountCommandFactory[] = L"Windows.UI.ApplicationSettings.IWebAccountCommandFactory";
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWebAccountCommand )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandInvokedHandler * invoked,
                  __x_ABI_CWindows_CUI_CApplicationSettings_CSupportedWebAccountActions actions,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommand * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactoryVtbl;
interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWebAccountCommand(This,webAccount,invoked,actions,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountCommandFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IWebAccountInvokedArgs[] = L"Windows.UI.ApplicationSettings.IWebAccountInvokedArgs";
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Action )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CApplicationSettings_CWebAccountAction * action
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgsVtbl;
interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Action(This,action) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountInvokedArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IWebAccountProviderCommand[] = L"Windows.UI.ApplicationSettings.IWebAccountProviderCommand";
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_WebAccountProvider )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Invoked )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandVtbl;
interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_WebAccountProvider(This,value) )
    ( (This)->lpVtbl->get_Invoked(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ApplicationSettings_IWebAccountProviderCommandFactory[] = L"Windows.UI.ApplicationSettings.IWebAccountProviderCommandFactory";
typedef struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWebAccountProviderCommand )(
        __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * webAccountProvider,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandInvokedHandler * invoked,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommand * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactoryVtbl;
interface __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWebAccountProviderCommand(This,webAccountProvider,invoked,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CApplicationSettings_CIWebAccountProviderCommandFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_AccountsSettingsPane[] = L"Windows.UI.ApplicationSettings.AccountsSettingsPane";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_AccountsSettingsPaneCommandsRequestedEventArgs[] = L"Windows.UI.ApplicationSettings.AccountsSettingsPaneCommandsRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_AccountsSettingsPaneEventDeferral[] = L"Windows.UI.ApplicationSettings.AccountsSettingsPaneEventDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_CredentialCommand[] = L"Windows.UI.ApplicationSettings.CredentialCommand";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_SettingsCommand[] = L"Windows.UI.ApplicationSettings.SettingsCommand";
DEPRECATED("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_SettingsPane[] = L"Windows.UI.ApplicationSettings.SettingsPane";
DEPRECATED("SettingsPaneCommandsRequest is deprecated and might not work on all platforms. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_SettingsPaneCommandsRequest[] = L"Windows.UI.ApplicationSettings.SettingsPaneCommandsRequest";
DEPRECATED("SettingsPaneCommandsRequestedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_SettingsPaneCommandsRequestedEventArgs[] = L"Windows.UI.ApplicationSettings.SettingsPaneCommandsRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_WebAccountCommand[] = L"Windows.UI.ApplicationSettings.WebAccountCommand";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_WebAccountInvokedArgs[] = L"Windows.UI.ApplicationSettings.WebAccountInvokedArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ApplicationSettings_WebAccountProviderCommand[] = L"Windows.UI.ApplicationSettings.WebAccountProviderCommand";
       
       
#pragma clang diagnostic pop
