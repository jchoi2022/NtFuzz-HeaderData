#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ISyncProviderRegistration ISyncProviderRegistration;
typedef interface IEnumSyncProviderConfigUIInfos IEnumSyncProviderConfigUIInfos;
typedef interface IEnumSyncProviderInfos IEnumSyncProviderInfos;
typedef interface ISyncProviderInfo ISyncProviderInfo;
typedef interface ISyncProviderConfigUIInfo ISyncProviderConfigUIInfo;
typedef interface ISyncProviderConfigUI ISyncProviderConfigUI;
typedef interface IRegisteredSyncProvider IRegisteredSyncProvider;
typedef interface ISyncRegistrationChange ISyncRegistrationChange;
typedef class SyncProviderRegistration SyncProviderRegistration;
#include "oleidl.h"
#include "propsys.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_PROPERTYKEY(PKEY_PROVIDER_INSTANCEID, 0x84179e61, 0x60f6, 0x4c1c, 0x88, 0xed, 0xf1, 0xc5, 0x31, 0xb3, 0x2b, 0xda, 2);
DEFINE_PROPERTYKEY(PKEY_PROVIDER_CLSID, 0x84179e61, 0x60f6, 0x4c1c, 0x88, 0xed, 0xf1, 0xc5, 0x31, 0xb3, 0x2b, 0xda, 3);
DEFINE_PROPERTYKEY(PKEY_PROVIDER_CONFIGUI, 0x84179e61, 0x60f6, 0x4c1c, 0x88, 0xed, 0xf1, 0xc5, 0x31, 0xb3, 0x2b, 0xda, 4);
DEFINE_PROPERTYKEY(PKEY_PROVIDER_CONTENTTYPE, 0x84179e61, 0x60f6, 0x4c1c, 0x88, 0xed, 0xf1, 0xc5, 0x31, 0xb3, 0x2b, 0xda, 5);
DEFINE_PROPERTYKEY(PKEY_PROVIDER_CAPABILITIES, 0x84179e61, 0x60f6, 0x4c1c, 0x88, 0xed, 0xf1, 0xc5, 0x31, 0xb3, 0x2b, 0xda, 6);
DEFINE_PROPERTYKEY(PKEY_PROVIDER_SUPPORTED_ARCHITECTURE, 0x84179e61, 0x60f6, 0x4c1c, 0x88, 0xed, 0xf1, 0xc5, 0x31, 0xb3, 0x2b, 0xda, 7);
DEFINE_PROPERTYKEY(PKEY_PROVIDER_NAME, 0x84179e61, 0x60f6, 0x4c1c, 0x88, 0xed, 0xf1, 0xc5, 0x31, 0xb3, 0x2b, 0xda, 8);
DEFINE_PROPERTYKEY(PKEY_PROVIDER_DESCRIPTION, 0x84179e61, 0x60f6, 0x4c1c, 0x88, 0xed, 0xf1, 0xc5, 0x31, 0xb3, 0x2b, 0xda, 9);
DEFINE_PROPERTYKEY(PKEY_PROVIDER_TOOLTIPS, 0x84179e61, 0x60f6, 0x4c1c, 0x88, 0xed, 0xf1, 0xc5, 0x31, 0xb3, 0x2b, 0xda, 10);
DEFINE_PROPERTYKEY(PKEY_PROVIDER_ICON, 0x84179e61, 0x60f6, 0x4c1c, 0x88, 0xed, 0xf1, 0xc5, 0x31, 0xb3, 0x2b, 0xda, 11);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_INSTANCEID, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 2);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_CLSID, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 3);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_CONTENTTYPE, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 4);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_CAPABILITIES, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 5);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_SUPPORTED_ARCHITECTURE, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 6);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_IS_GLOBAL, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 7);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_NAME, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 8);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_DESCRIPTION, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 9);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_TOOLTIPS, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 10);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_ICON, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 11);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_MENUITEM_NOUI, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 12);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_MENUITEM, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 13);
typedef struct _SyncProviderConfiguration
    {
    DWORD dwVersion;
    GUID guidInstanceId;
    CLSID clsidProvider;
    GUID guidConfigUIInstanceId;
    GUID guidContentType;
    DWORD dwCapabilities;
    DWORD dwSupportedArchitecture;
    } SyncProviderConfiguration;
typedef struct _SyncProviderConfigUIConfiguration
    {
    DWORD dwVersion;
    GUID guidInstanceId;
    CLSID clsidConfigUI;
    GUID guidContentType;
    DWORD dwCapabilities;
    DWORD dwSupportedArchitecture;
    BOOL fIsGlobal;
    } SyncProviderConfigUIConfiguration;
extern RPC_IF_HANDLE __MIDL_itf_syncregistration_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncregistration_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ISyncProviderRegistration;
    typedef struct ISyncProviderRegistrationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncProviderRegistration * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncProviderRegistration * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncProviderRegistration * This);
        HRESULT ( STDMETHODCALLTYPE *CreateSyncProviderConfigUIRegistrationInstance )(
            __RPC__in ISyncProviderRegistration * This,
                       __RPC__in const SyncProviderConfigUIConfiguration *pConfigUIConfig,
                                __RPC__deref_out_opt ISyncProviderConfigUIInfo **ppConfigUIInfo);
        HRESULT ( STDMETHODCALLTYPE *UnregisterSyncProviderConfigUI )(
            __RPC__in ISyncProviderRegistration * This,
                       __RPC__in LPCGUID pguidInstanceId);
        HRESULT ( STDMETHODCALLTYPE *EnumerateSyncProviderConfigUIs )(
            __RPC__in ISyncProviderRegistration * This,
                               __RPC__in_opt LPCGUID pguidContentType,
                       DWORD dwSupportedArchitecture,
                                __RPC__deref_out_opt IEnumSyncProviderConfigUIInfos **ppEnumSyncProviderConfigUIInfos);
        HRESULT ( STDMETHODCALLTYPE *CreateSyncProviderRegistrationInstance )(
            __RPC__in ISyncProviderRegistration * This,
                       __RPC__in const SyncProviderConfiguration *pProviderConfiguration,
                                __RPC__deref_out_opt ISyncProviderInfo **ppProviderInfo);
        HRESULT ( STDMETHODCALLTYPE *UnregisterSyncProvider )(
            __RPC__in ISyncProviderRegistration * This,
                       __RPC__in LPCGUID pguidInstanceId);
        HRESULT ( STDMETHODCALLTYPE *GetSyncProviderConfigUIInfoforProvider )(
            __RPC__in ISyncProviderRegistration * This,
                       __RPC__in LPCGUID pguidProviderInstanceId,
                                __RPC__deref_out_opt ISyncProviderConfigUIInfo **ppProviderConfigUIInfo);
        HRESULT ( STDMETHODCALLTYPE *EnumerateSyncProviders )(
            __RPC__in ISyncProviderRegistration * This,
                               __RPC__in_opt LPCGUID pguidContentType,
                       DWORD dwStateFlagsToFilterMask,
                       DWORD dwStateFlagsToFilter,
                       __RPC__in REFCLSID refProviderClsId,
                       DWORD dwSupportedArchitecture,
                                __RPC__deref_out_opt IEnumSyncProviderInfos **ppEnumSyncProviderInfos);
        HRESULT ( STDMETHODCALLTYPE *GetSyncProviderInfo )(
            __RPC__in ISyncProviderRegistration * This,
                       __RPC__in LPCGUID pguidInstanceId,
                                __RPC__deref_out_opt ISyncProviderInfo **ppProviderInfo);
        HRESULT ( STDMETHODCALLTYPE *GetSyncProviderFromInstanceId )(
            __RPC__in ISyncProviderRegistration * This,
                       __RPC__in LPCGUID pguidInstanceId,
                       DWORD dwClsContext,
                                __RPC__deref_out_opt IRegisteredSyncProvider **ppSyncProvider);
        HRESULT ( STDMETHODCALLTYPE *GetSyncProviderConfigUIInfo )(
            __RPC__in ISyncProviderRegistration * This,
                       __RPC__in LPCGUID pguidInstanceId,
                                __RPC__deref_out_opt ISyncProviderConfigUIInfo **ppConfigUIInfo);
        HRESULT ( STDMETHODCALLTYPE *GetSyncProviderConfigUIFromInstanceId )(
            __RPC__in ISyncProviderRegistration * This,
                       __RPC__in LPCGUID pguidInstanceId,
                       DWORD dwClsContext,
                                __RPC__deref_out_opt ISyncProviderConfigUI **ppConfigUI);
        HRESULT ( STDMETHODCALLTYPE *GetSyncProviderState )(
            __RPC__in ISyncProviderRegistration * This,
                       __RPC__in LPCGUID pguidInstanceId,
                                __RPC__out DWORD *pdwStateFlags);
        HRESULT ( STDMETHODCALLTYPE *SetSyncProviderState )(
            __RPC__in ISyncProviderRegistration * This,
                       __RPC__in LPCGUID pguidInstanceId,
                       DWORD dwStateFlagsMask,
                       DWORD dwStateFlags);
                      HRESULT ( STDMETHODCALLTYPE *RegisterForEvent )(
            ISyncProviderRegistration * This,
                                HANDLE *phEvent);
                      HRESULT ( STDMETHODCALLTYPE *RevokeEvent )(
            ISyncProviderRegistration * This,
                       HANDLE hEvent);
                      HRESULT ( STDMETHODCALLTYPE *GetChange )(
            ISyncProviderRegistration * This,
                       HANDLE hEvent,
                                ISyncRegistrationChange **ppChange);
        END_INTERFACE
    } ISyncProviderRegistrationVtbl;
    interface ISyncProviderRegistration
    {
        CONST_VTBL struct ISyncProviderRegistrationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateSyncProviderConfigUIRegistrationInstance(This,pConfigUIConfig,ppConfigUIInfo) )
    ( (This)->lpVtbl -> UnregisterSyncProviderConfigUI(This,pguidInstanceId) )
    ( (This)->lpVtbl -> EnumerateSyncProviderConfigUIs(This,pguidContentType,dwSupportedArchitecture,ppEnumSyncProviderConfigUIInfos) )
    ( (This)->lpVtbl -> CreateSyncProviderRegistrationInstance(This,pProviderConfiguration,ppProviderInfo) )
    ( (This)->lpVtbl -> UnregisterSyncProvider(This,pguidInstanceId) )
    ( (This)->lpVtbl -> GetSyncProviderConfigUIInfoforProvider(This,pguidProviderInstanceId,ppProviderConfigUIInfo) )
    ( (This)->lpVtbl -> EnumerateSyncProviders(This,pguidContentType,dwStateFlagsToFilterMask,dwStateFlagsToFilter,refProviderClsId,dwSupportedArchitecture,ppEnumSyncProviderInfos) )
    ( (This)->lpVtbl -> GetSyncProviderInfo(This,pguidInstanceId,ppProviderInfo) )
    ( (This)->lpVtbl -> GetSyncProviderFromInstanceId(This,pguidInstanceId,dwClsContext,ppSyncProvider) )
    ( (This)->lpVtbl -> GetSyncProviderConfigUIInfo(This,pguidInstanceId,ppConfigUIInfo) )
    ( (This)->lpVtbl -> GetSyncProviderConfigUIFromInstanceId(This,pguidInstanceId,dwClsContext,ppConfigUI) )
    ( (This)->lpVtbl -> GetSyncProviderState(This,pguidInstanceId,pdwStateFlags) )
    ( (This)->lpVtbl -> SetSyncProviderState(This,pguidInstanceId,dwStateFlagsMask,dwStateFlags) )
    ( (This)->lpVtbl -> RegisterForEvent(This,phEvent) )
    ( (This)->lpVtbl -> RevokeEvent(This,hEvent) )
    ( (This)->lpVtbl -> GetChange(This,hEvent,ppChange) )
EXTERN_C const IID IID_IEnumSyncProviderConfigUIInfos;
    typedef struct IEnumSyncProviderConfigUIInfosVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumSyncProviderConfigUIInfos * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumSyncProviderConfigUIInfos * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumSyncProviderConfigUIInfos * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumSyncProviderConfigUIInfos * This,
                              __RPC__in_range(0,1) ULONG cFactories,
                                            __RPC__out_ecount_part(cFactories, *pcFetched) ISyncProviderConfigUIInfo **ppSyncProviderConfigUIInfo,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumSyncProviderConfigUIInfos * This,
                       ULONG cFactories);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumSyncProviderConfigUIInfos * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumSyncProviderConfigUIInfos * This,
                                __RPC__deref_out_opt IEnumSyncProviderConfigUIInfos **ppEnum);
        END_INTERFACE
    } IEnumSyncProviderConfigUIInfosVtbl;
    interface IEnumSyncProviderConfigUIInfos
    {
        CONST_VTBL struct IEnumSyncProviderConfigUIInfosVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cFactories,ppSyncProviderConfigUIInfo,pcFetched) )
    ( (This)->lpVtbl -> Skip(This,cFactories) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IEnumSyncProviderInfos;
    typedef struct IEnumSyncProviderInfosVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumSyncProviderInfos * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumSyncProviderInfos * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumSyncProviderInfos * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumSyncProviderInfos * This,
                              __RPC__in_range(0,1) ULONG cInstances,
                                            __RPC__out_ecount_part(cInstances, *pcFetched) ISyncProviderInfo **ppSyncProviderInfo,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumSyncProviderInfos * This,
                       ULONG cInstances);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumSyncProviderInfos * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumSyncProviderInfos * This,
                                __RPC__deref_out_opt IEnumSyncProviderInfos **ppEnum);
        END_INTERFACE
    } IEnumSyncProviderInfosVtbl;
    interface IEnumSyncProviderInfos
    {
        CONST_VTBL struct IEnumSyncProviderInfosVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cInstances,ppSyncProviderInfo,pcFetched) )
    ( (This)->lpVtbl -> Skip(This,cInstances) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_ISyncProviderInfo;
    typedef struct ISyncProviderInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncProviderInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncProviderInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncProviderInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in ISyncProviderInfo * This,
                        __RPC__out DWORD *cProps);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in ISyncProviderInfo * This,
                       DWORD iProp,
                        __RPC__out PROPERTYKEY *pkey);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in ISyncProviderInfo * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__out PROPVARIANT *pv);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            __RPC__in ISyncProviderInfo * This,
                       __RPC__in REFPROPERTYKEY key,
                       __RPC__in REFPROPVARIANT propvar);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in ISyncProviderInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetSyncProvider )(
            __RPC__in ISyncProviderInfo * This,
                       DWORD dwClsContext,
                                __RPC__deref_out_opt IRegisteredSyncProvider **ppSyncProvider);
        END_INTERFACE
    } ISyncProviderInfoVtbl;
    interface ISyncProviderInfo
    {
        CONST_VTBL struct ISyncProviderInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,cProps) )
    ( (This)->lpVtbl -> GetAt(This,iProp,pkey) )
    ( (This)->lpVtbl -> GetValue(This,key,pv) )
    ( (This)->lpVtbl -> SetValue(This,key,propvar) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> GetSyncProvider(This,dwClsContext,ppSyncProvider) )
EXTERN_C const IID IID_ISyncProviderConfigUIInfo;
    typedef struct ISyncProviderConfigUIInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncProviderConfigUIInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncProviderConfigUIInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncProviderConfigUIInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in ISyncProviderConfigUIInfo * This,
                        __RPC__out DWORD *cProps);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in ISyncProviderConfigUIInfo * This,
                       DWORD iProp,
                        __RPC__out PROPERTYKEY *pkey);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in ISyncProviderConfigUIInfo * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__out PROPVARIANT *pv);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            __RPC__in ISyncProviderConfigUIInfo * This,
                       __RPC__in REFPROPERTYKEY key,
                       __RPC__in REFPROPVARIANT propvar);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in ISyncProviderConfigUIInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetSyncProviderConfigUI )(
            __RPC__in ISyncProviderConfigUIInfo * This,
                       DWORD dwClsContext,
                                __RPC__deref_out_opt ISyncProviderConfigUI **ppSyncProviderConfigUI);
        END_INTERFACE
    } ISyncProviderConfigUIInfoVtbl;
    interface ISyncProviderConfigUIInfo
    {
        CONST_VTBL struct ISyncProviderConfigUIInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,cProps) )
    ( (This)->lpVtbl -> GetAt(This,iProp,pkey) )
    ( (This)->lpVtbl -> GetValue(This,key,pv) )
    ( (This)->lpVtbl -> SetValue(This,key,propvar) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> GetSyncProviderConfigUI(This,dwClsContext,ppSyncProviderConfigUI) )
EXTERN_C const IID IID_ISyncProviderConfigUI;
    typedef struct ISyncProviderConfigUIVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncProviderConfigUI * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncProviderConfigUI * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncProviderConfigUI * This);
        HRESULT ( STDMETHODCALLTYPE *Init )(
            __RPC__in ISyncProviderConfigUI * This,
                       __RPC__in LPCGUID pguidInstanceId,
                       __RPC__in LPCGUID pguidContentType,
                       __RPC__in_opt IPropertyStore *pConfigurationProperties);
        HRESULT ( STDMETHODCALLTYPE *GetRegisteredProperties )(
            __RPC__in ISyncProviderConfigUI * This,
                                __RPC__deref_out_opt IPropertyStore **ppConfigUIProperties);
        HRESULT ( STDMETHODCALLTYPE *CreateAndRegisterNewSyncProvider )(
            __RPC__in ISyncProviderConfigUI * This,
                               __RPC__in_opt HWND hwndParent,
                               __RPC__in_opt IUnknown *pUnkContext,
                                __RPC__deref_out_opt ISyncProviderInfo **ppProviderInfo);
        HRESULT ( STDMETHODCALLTYPE *ModifySyncProvider )(
            __RPC__in ISyncProviderConfigUI * This,
                               __RPC__in_opt HWND hwndParent,
                               __RPC__in_opt IUnknown *pUnkContext,
                       __RPC__in_opt ISyncProviderInfo *pProviderInfo);
        END_INTERFACE
    } ISyncProviderConfigUIVtbl;
    interface ISyncProviderConfigUI
    {
        CONST_VTBL struct ISyncProviderConfigUIVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Init(This,pguidInstanceId,pguidContentType,pConfigurationProperties) )
    ( (This)->lpVtbl -> GetRegisteredProperties(This,ppConfigUIProperties) )
    ( (This)->lpVtbl -> CreateAndRegisterNewSyncProvider(This,hwndParent,pUnkContext,ppProviderInfo) )
    ( (This)->lpVtbl -> ModifySyncProvider(This,hwndParent,pUnkContext,pProviderInfo) )
EXTERN_C const IID IID_IRegisteredSyncProvider;
    typedef struct IRegisteredSyncProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRegisteredSyncProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRegisteredSyncProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRegisteredSyncProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Init )(
            __RPC__in IRegisteredSyncProvider * This,
                       __RPC__in LPCGUID pguidInstanceId,
                       __RPC__in LPCGUID pguidContentType,
                       __RPC__in_opt IPropertyStore *pContextPropertyStore);
        HRESULT ( STDMETHODCALLTYPE *GetInstanceId )(
            __RPC__in IRegisteredSyncProvider * This,
                                __RPC__out GUID *pguidInstanceId);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IRegisteredSyncProvider * This);
        END_INTERFACE
    } IRegisteredSyncProviderVtbl;
    interface IRegisteredSyncProvider
    {
        CONST_VTBL struct IRegisteredSyncProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Init(This,pguidInstanceId,pguidContentType,pContextPropertyStore) )
    ( (This)->lpVtbl -> GetInstanceId(This,pguidInstanceId) )
    ( (This)->lpVtbl -> Reset(This) )
typedef
enum __MIDL___MIDL_itf_syncregistration_0000_0007_0001
    {
        SRE_PROVIDER_ADDED = 0,
        SRE_PROVIDER_REMOVED = ( SRE_PROVIDER_ADDED + 1 ) ,
        SRE_PROVIDER_UPDATED = ( SRE_PROVIDER_REMOVED + 1 ) ,
        SRE_PROVIDER_STATE_CHANGED = ( SRE_PROVIDER_UPDATED + 1 ) ,
        SRE_CONFIGUI_ADDED = ( SRE_PROVIDER_STATE_CHANGED + 1 ) ,
        SRE_CONFIGUI_REMOVED = ( SRE_CONFIGUI_ADDED + 1 ) ,
        SRE_CONFIGUI_UPDATED = ( SRE_CONFIGUI_REMOVED + 1 )
    } SYNC_REGISTRATION_EVENT;
extern RPC_IF_HANDLE __MIDL_itf_syncregistration_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncregistration_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_ISyncRegistrationChange;
    typedef struct ISyncRegistrationChangeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISyncRegistrationChange * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISyncRegistrationChange * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISyncRegistrationChange * This);
        HRESULT ( STDMETHODCALLTYPE *GetEvent )(
            __RPC__in ISyncRegistrationChange * This,
                                __RPC__out SYNC_REGISTRATION_EVENT *psreEvent);
        HRESULT ( STDMETHODCALLTYPE *GetInstanceId )(
            __RPC__in ISyncRegistrationChange * This,
                                __RPC__out LPGUID pguidInstanceId);
        END_INTERFACE
    } ISyncRegistrationChangeVtbl;
    interface ISyncRegistrationChange
    {
        CONST_VTBL struct ISyncRegistrationChangeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEvent(This,psreEvent) )
    ( (This)->lpVtbl -> GetInstanceId(This,pguidInstanceId) )
EXTERN_C const IID LIBID_SyncRegistration;
EXTERN_C const CLSID CLSID_SyncProviderRegistration;
class DECLSPEC_UUID("F82B4EF1-93A9-4dde-8015-F7950A1A6E31")
SyncProviderRegistration;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_syncregistration_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncregistration_0000_0009_v0_0_s_ifspec;
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
}
