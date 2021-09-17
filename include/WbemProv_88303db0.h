#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWbemPropertyProvider IWbemPropertyProvider;
typedef interface IWbemUnboundObjectSink IWbemUnboundObjectSink;
typedef interface IWbemEventProvider IWbemEventProvider;
typedef interface IWbemEventProviderQuerySink IWbemEventProviderQuerySink;
typedef interface IWbemEventProviderSecurity IWbemEventProviderSecurity;
typedef interface IWbemEventConsumerProvider IWbemEventConsumerProvider;
typedef interface IWbemProviderInitSink IWbemProviderInitSink;
typedef interface IWbemProviderInit IWbemProviderInit;
typedef interface IWbemHiPerfProvider IWbemHiPerfProvider;
typedef interface IWbemDecoupledRegistrar IWbemDecoupledRegistrar;
typedef class WbemAdministrativeLocator WbemAdministrativeLocator;
typedef class WbemAuthenticatedLocator WbemAuthenticatedLocator;
typedef class WbemUnauthenticatedLocator WbemUnauthenticatedLocator;
typedef class WbemDecoupledRegistrar WbemDecoupledRegistrar;
typedef class WbemDecoupledBasicEventProvider WbemDecoupledBasicEventProvider;
typedef interface IWbemProviderIdentity IWbemProviderIdentity;
typedef interface IWbemDecoupledBasicEventProvider IWbemDecoupledBasicEventProvider;
typedef interface IWbemEventSink IWbemEventSink;
#include "objidl.h"
#include "oleidl.h"
#include "oaidl.h"
#include "wbemcli.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family or WinMgmt Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WINMGMT)
typedef VARIANT WBEM_VARIANT;
typedef __RPC_string LPWSTR WBEM_WSTR;
typedef __RPC_string LPCWSTR WBEM_CWSTR;
typedef
enum tag_WBEM_PROVIDER_REQUIREMENTS_TYPE
    {
        WBEM_REQUIREMENTS_START_POSTFILTER = 0,
        WBEM_REQUIREMENTS_STOP_POSTFILTER = 1,
        WBEM_REQUIREMENTS_RECHECK_SUBSCRIPTIONS = 2
    } WBEM_PROVIDER_REQUIREMENTS_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_wbemprov_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemprov_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID LIBID_WbemProviders_v1;
EXTERN_C const IID IID_IWbemPropertyProvider;
    typedef struct IWbemPropertyProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWbemPropertyProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWbemPropertyProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWbemPropertyProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IWbemPropertyProvider * This,
                       long lFlags,
                       __RPC__in const BSTR strLocale,
                       __RPC__in const BSTR strClassMapping,
                       __RPC__in const BSTR strInstMapping,
                       __RPC__in const BSTR strPropMapping,
                        __RPC__out VARIANT *pvValue);
        HRESULT ( STDMETHODCALLTYPE *PutProperty )(
            __RPC__in IWbemPropertyProvider * This,
                       long lFlags,
                       __RPC__in const BSTR strLocale,
                       __RPC__in const BSTR strClassMapping,
                       __RPC__in const BSTR strInstMapping,
                       __RPC__in const BSTR strPropMapping,
                       __RPC__in const VARIANT *pvValue);
        END_INTERFACE
    } IWbemPropertyProviderVtbl;
    interface IWbemPropertyProvider
    {
        CONST_VTBL struct IWbemPropertyProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperty(This,lFlags,strLocale,strClassMapping,strInstMapping,strPropMapping,pvValue) )
    ( (This)->lpVtbl -> PutProperty(This,lFlags,strLocale,strClassMapping,strInstMapping,strPropMapping,pvValue) )
EXTERN_C const IID IID_IWbemUnboundObjectSink;
    typedef struct IWbemUnboundObjectSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWbemUnboundObjectSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWbemUnboundObjectSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWbemUnboundObjectSink * This);
        HRESULT ( STDMETHODCALLTYPE *IndicateToConsumer )(
            __RPC__in IWbemUnboundObjectSink * This,
                       __RPC__in_opt IWbemClassObject *pLogicalConsumer,
                       long lNumObjects,
                                __RPC__in_ecount_full(lNumObjects) IWbemClassObject **apObjects);
        END_INTERFACE
    } IWbemUnboundObjectSinkVtbl;
    interface IWbemUnboundObjectSink
    {
        CONST_VTBL struct IWbemUnboundObjectSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IndicateToConsumer(This,pLogicalConsumer,lNumObjects,apObjects) )
EXTERN_C const IID IID_IWbemEventProvider;
    typedef struct IWbemEventProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWbemEventProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWbemEventProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWbemEventProvider * This);
        HRESULT ( STDMETHODCALLTYPE *ProvideEvents )(
            __RPC__in IWbemEventProvider * This,
                       __RPC__in_opt IWbemObjectSink *pSink,
                       long lFlags);
        END_INTERFACE
    } IWbemEventProviderVtbl;
    interface IWbemEventProvider
    {
        CONST_VTBL struct IWbemEventProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ProvideEvents(This,pSink,lFlags) )
EXTERN_C const IID IID_IWbemEventProviderQuerySink;
    typedef struct IWbemEventProviderQuerySinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWbemEventProviderQuerySink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWbemEventProviderQuerySink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWbemEventProviderQuerySink * This);
        HRESULT ( STDMETHODCALLTYPE *NewQuery )(
            __RPC__in IWbemEventProviderQuerySink * This,
                       unsigned long dwId,
                       __RPC__in WBEM_WSTR wszQueryLanguage,
                       __RPC__in WBEM_WSTR wszQuery);
        HRESULT ( STDMETHODCALLTYPE *CancelQuery )(
            __RPC__in IWbemEventProviderQuerySink * This,
                       unsigned long dwId);
        END_INTERFACE
    } IWbemEventProviderQuerySinkVtbl;
    interface IWbemEventProviderQuerySink
    {
        CONST_VTBL struct IWbemEventProviderQuerySinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NewQuery(This,dwId,wszQueryLanguage,wszQuery) )
    ( (This)->lpVtbl -> CancelQuery(This,dwId) )
EXTERN_C const IID IID_IWbemEventProviderSecurity;
    typedef struct IWbemEventProviderSecurityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWbemEventProviderSecurity * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWbemEventProviderSecurity * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWbemEventProviderSecurity * This);
        HRESULT ( STDMETHODCALLTYPE *AccessCheck )(
            __RPC__in IWbemEventProviderSecurity * This,
                       __RPC__in WBEM_CWSTR wszQueryLanguage,
                       __RPC__in WBEM_CWSTR wszQuery,
                       long lSidLength,
                                        __RPC__in_ecount_full_opt(lSidLength) const BYTE *pSid);
        END_INTERFACE
    } IWbemEventProviderSecurityVtbl;
    interface IWbemEventProviderSecurity
    {
        CONST_VTBL struct IWbemEventProviderSecurityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AccessCheck(This,wszQueryLanguage,wszQuery,lSidLength,pSid) )
EXTERN_C const IID IID_IWbemEventConsumerProvider;
    typedef struct IWbemEventConsumerProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWbemEventConsumerProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWbemEventConsumerProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWbemEventConsumerProvider * This);
        HRESULT ( STDMETHODCALLTYPE *FindConsumer )(
            __RPC__in IWbemEventConsumerProvider * This,
                       __RPC__in_opt IWbemClassObject *pLogicalConsumer,
                        __RPC__deref_out_opt IWbemUnboundObjectSink **ppConsumer);
        END_INTERFACE
    } IWbemEventConsumerProviderVtbl;
    interface IWbemEventConsumerProvider
    {
        CONST_VTBL struct IWbemEventConsumerProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FindConsumer(This,pLogicalConsumer,ppConsumer) )
EXTERN_C const IID IID_IWbemProviderInitSink;
    typedef struct IWbemProviderInitSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWbemProviderInitSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWbemProviderInitSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWbemProviderInitSink * This);
        HRESULT ( STDMETHODCALLTYPE *SetStatus )(
            __RPC__in IWbemProviderInitSink * This,
                       LONG lStatus,
                       LONG lFlags);
        END_INTERFACE
    } IWbemProviderInitSinkVtbl;
    interface IWbemProviderInitSink
    {
        CONST_VTBL struct IWbemProviderInitSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetStatus(This,lStatus,lFlags) )
EXTERN_C const IID IID_IWbemProviderInit;
    typedef struct IWbemProviderInitVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWbemProviderInit * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWbemProviderInit * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWbemProviderInit * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IWbemProviderInit * This,
                                       __RPC__in_opt_string LPWSTR wszUser,
                       LONG lFlags,
                               __RPC__in_string LPWSTR wszNamespace,
                                       __RPC__in_opt_string LPWSTR wszLocale,
                       __RPC__in_opt IWbemServices *pNamespace,
                       __RPC__in_opt IWbemContext *pCtx,
                       __RPC__in_opt IWbemProviderInitSink *pInitSink);
        END_INTERFACE
    } IWbemProviderInitVtbl;
    interface IWbemProviderInit
    {
        CONST_VTBL struct IWbemProviderInitVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,wszUser,lFlags,wszNamespace,wszLocale,pNamespace,pCtx,pInitSink) )
EXTERN_C const IID IID_IWbemHiPerfProvider;
    typedef struct IWbemHiPerfProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWbemHiPerfProvider * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWbemHiPerfProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWbemHiPerfProvider * This);
        HRESULT ( STDMETHODCALLTYPE *QueryInstances )(
            IWbemHiPerfProvider * This,
            _In_ IWbemServices *pNamespace,
            _In_ WCHAR *wszClass,
            _In_ long lFlags,
            _In_ IWbemContext *pCtx,
            _Out_ IWbemObjectSink *pSink);
        HRESULT ( STDMETHODCALLTYPE *CreateRefresher )(
            IWbemHiPerfProvider * This,
            _In_ IWbemServices *pNamespace,
            _In_ long lFlags,
            _Out_ IWbemRefresher **ppRefresher);
        HRESULT ( STDMETHODCALLTYPE *CreateRefreshableObject )(
            IWbemHiPerfProvider * This,
            _In_ IWbemServices *pNamespace,
            _In_ IWbemObjectAccess *pTemplate,
            _In_ IWbemRefresher *pRefresher,
            _In_ long lFlags,
            _In_ IWbemContext *pContext,
            _Out_ IWbemObjectAccess **ppRefreshable,
            _Out_ long *plId);
        HRESULT ( STDMETHODCALLTYPE *StopRefreshing )(
            IWbemHiPerfProvider * This,
            _In_ IWbemRefresher *pRefresher,
            _In_ long lId,
            _In_ long lFlags);
        HRESULT ( STDMETHODCALLTYPE *CreateRefreshableEnum )(
            IWbemHiPerfProvider * This,
            _In_ IWbemServices *pNamespace,
            _In_ LPCWSTR wszClass,
            _In_ IWbemRefresher *pRefresher,
            _In_ long lFlags,
            _In_ IWbemContext *pContext,
            _In_ IWbemHiPerfEnum *pHiPerfEnum,
            _Out_ long *plId);
        HRESULT ( STDMETHODCALLTYPE *GetObjects )(
            IWbemHiPerfProvider * This,
            _In_ IWbemServices *pNamespace,
            _In_ long lNumObjects,
            _Out_writes_(lNumObjects) IWbemObjectAccess **apObj,
            _In_ long lFlags,
            _In_ IWbemContext *pContext);
        END_INTERFACE
    } IWbemHiPerfProviderVtbl;
    interface IWbemHiPerfProvider
    {
        CONST_VTBL struct IWbemHiPerfProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryInstances(This,pNamespace,wszClass,lFlags,pCtx,pSink) )
    ( (This)->lpVtbl -> CreateRefresher(This,pNamespace,lFlags,ppRefresher) )
    ( (This)->lpVtbl -> CreateRefreshableObject(This,pNamespace,pTemplate,pRefresher,lFlags,pContext,ppRefreshable,plId) )
    ( (This)->lpVtbl -> StopRefreshing(This,pRefresher,lId,lFlags) )
    ( (This)->lpVtbl -> CreateRefreshableEnum(This,pNamespace,wszClass,pRefresher,lFlags,pContext,pHiPerfEnum,plId) )
    ( (This)->lpVtbl -> GetObjects(This,pNamespace,lNumObjects,apObj,lFlags,pContext) )
EXTERN_C const IID IID_IWbemDecoupledRegistrar;
    typedef struct IWbemDecoupledRegistrarVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWbemDecoupledRegistrar * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWbemDecoupledRegistrar * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWbemDecoupledRegistrar * This);
        HRESULT ( STDMETHODCALLTYPE *Register )(
            IWbemDecoupledRegistrar * This,
                       long a_Flags,
                       IWbemContext *a_Context,
                       LPCWSTR a_User,
                       LPCWSTR a_Locale,
                       LPCWSTR a_Scope,
                       LPCWSTR a_Registration,
                       IUnknown *pIUnknown);
        HRESULT ( STDMETHODCALLTYPE *UnRegister )(
            IWbemDecoupledRegistrar * This);
        END_INTERFACE
    } IWbemDecoupledRegistrarVtbl;
    interface IWbemDecoupledRegistrar
    {
        CONST_VTBL struct IWbemDecoupledRegistrarVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Register(This,a_Flags,a_Context,a_User,a_Locale,a_Scope,a_Registration,pIUnknown) )
    ( (This)->lpVtbl -> UnRegister(This) )
EXTERN_C const CLSID CLSID_WbemAdministrativeLocator;
class DECLSPEC_UUID("cb8555cc-9128-11d1-ad9b-00c04fd8fdff")
WbemAdministrativeLocator;
EXTERN_C const CLSID CLSID_WbemAuthenticatedLocator;
class DECLSPEC_UUID("cd184336-9128-11d1-ad9b-00c04fd8fdff")
WbemAuthenticatedLocator;
EXTERN_C const CLSID CLSID_WbemUnauthenticatedLocator;
class DECLSPEC_UUID("443E7B79-DE31-11d2-B340-00104BCC4B4A")
WbemUnauthenticatedLocator;
EXTERN_C const CLSID CLSID_WbemDecoupledRegistrar;
class DECLSPEC_UUID("4cfc7932-0f9d-4bef-9c32-8ea2a6b56fcb")
WbemDecoupledRegistrar;
EXTERN_C const CLSID CLSID_WbemDecoupledBasicEventProvider;
class DECLSPEC_UUID("f5f75737-2843-4f22-933d-c76a97cda62f")
WbemDecoupledBasicEventProvider;
EXTERN_C const IID IID_IWbemProviderIdentity;
    typedef struct IWbemProviderIdentityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWbemProviderIdentity * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWbemProviderIdentity * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWbemProviderIdentity * This);
        HRESULT ( STDMETHODCALLTYPE *SetRegistrationObject )(
            __RPC__in IWbemProviderIdentity * This,
                       long lFlags,
                       __RPC__in_opt IWbemClassObject *pProvReg);
        END_INTERFACE
    } IWbemProviderIdentityVtbl;
    interface IWbemProviderIdentity
    {
        CONST_VTBL struct IWbemProviderIdentityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetRegistrationObject(This,lFlags,pProvReg) )
typedef
enum tag_WBEM_EXTRA_RETURN_CODES
    {
        WBEM_S_INITIALIZED = 0,
        WBEM_S_LIMITED_SERVICE = 0x43001,
        WBEM_S_INDIRECTLY_UPDATED = ( WBEM_S_LIMITED_SERVICE + 1 ) ,
        WBEM_S_SUBJECT_TO_SDS = ( WBEM_S_INDIRECTLY_UPDATED + 1 ) ,
        WBEM_E_RETRY_LATER = 0x80043001,
        WBEM_E_RESOURCE_CONTENTION = ( WBEM_E_RETRY_LATER + 1 )
    } WBEM_EXTRA_RETURN_CODES;
typedef
enum tag_WBEM_PROVIDER_FLAGS
    {
        WBEM_FLAG_OWNER_UPDATE = 0x10000
    } WBEM_PROVIDER_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_wbemprov_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemprov_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_IWbemDecoupledBasicEventProvider;
    typedef struct IWbemDecoupledBasicEventProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWbemDecoupledBasicEventProvider * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWbemDecoupledBasicEventProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWbemDecoupledBasicEventProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Register )(
            IWbemDecoupledBasicEventProvider * This,
                       long a_Flags,
                       IWbemContext *a_Context,
                       LPCWSTR a_User,
                       LPCWSTR a_Locale,
                       LPCWSTR a_Scope,
                       LPCWSTR a_Registration,
                       IUnknown *pIUnknown);
        HRESULT ( STDMETHODCALLTYPE *UnRegister )(
            IWbemDecoupledBasicEventProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetSink )(
            IWbemDecoupledBasicEventProvider * This,
                       long a_Flags,
                       IWbemContext *a_Context,
                        IWbemObjectSink **a_Sink);
        HRESULT ( STDMETHODCALLTYPE *GetService )(
            IWbemDecoupledBasicEventProvider * This,
                       long a_Flags,
                       IWbemContext *a_Context,
                        IWbemServices **a_Service);
        END_INTERFACE
    } IWbemDecoupledBasicEventProviderVtbl;
    interface IWbemDecoupledBasicEventProvider
    {
        CONST_VTBL struct IWbemDecoupledBasicEventProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Register(This,a_Flags,a_Context,a_User,a_Locale,a_Scope,a_Registration,pIUnknown) )
    ( (This)->lpVtbl -> UnRegister(This) )
    ( (This)->lpVtbl -> GetSink(This,a_Flags,a_Context,a_Sink) )
    ( (This)->lpVtbl -> GetService(This,a_Flags,a_Context,a_Service) )
typedef
enum tag_WBEM_BATCH_TYPE
    {
        WBEM_FLAG_BATCH_IF_NEEDED = 0,
        WBEM_FLAG_MUST_BATCH = 0x1,
        WBEM_FLAG_MUST_NOT_BATCH = 0x2
    } WBEM_BATCH_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_wbemprov_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemprov_0000_0013_v0_0_s_ifspec;
EXTERN_C const IID IID_IWbemEventSink;
    typedef struct IWbemEventSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWbemEventSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWbemEventSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWbemEventSink * This);
        HRESULT ( STDMETHODCALLTYPE *Indicate )(
            __RPC__in IWbemEventSink * This,
                       long lObjectCount,
                                __RPC__in_ecount_full(lObjectCount) IWbemClassObject **apObjArray);
        HRESULT ( STDMETHODCALLTYPE *SetStatus )(
            __RPC__in IWbemEventSink * This,
                       long lFlags,
                       HRESULT hResult,
                               __RPC__in_opt BSTR strParam,
                               __RPC__in_opt IWbemClassObject *pObjParam);
        HRESULT ( STDMETHODCALLTYPE *SetSinkSecurity )(
            __RPC__in IWbemEventSink * This,
                       long lSDLength,
                                __RPC__in_ecount_full(lSDLength) BYTE *pSD);
        HRESULT ( STDMETHODCALLTYPE *IsActive )(
            __RPC__in IWbemEventSink * This);
        HRESULT ( STDMETHODCALLTYPE *GetRestrictedSink )(
            __RPC__in IWbemEventSink * This,
                       long lNumQueries,
                                        __RPC__in_ecount_full(lNumQueries) const LPCWSTR *awszQueries,
                       __RPC__in_opt IUnknown *pCallback,
                        __RPC__deref_out_opt IWbemEventSink **ppSink);
        HRESULT ( STDMETHODCALLTYPE *SetBatchingParameters )(
            __RPC__in IWbemEventSink * This,
                       LONG lFlags,
                       DWORD dwMaxBufferSize,
                       DWORD dwMaxSendLatency);
        END_INTERFACE
    } IWbemEventSinkVtbl;
    interface IWbemEventSink
    {
        CONST_VTBL struct IWbemEventSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Indicate(This,lObjectCount,apObjArray) )
    ( (This)->lpVtbl -> SetStatus(This,lFlags,hResult,strParam,pObjParam) )
    ( (This)->lpVtbl -> SetSinkSecurity(This,lSDLength,pSD) )
    ( (This)->lpVtbl -> IsActive(This) )
    ( (This)->lpVtbl -> GetRestrictedSink(This,lNumQueries,awszQueries,pCallback,ppSink) )
    ( (This)->lpVtbl -> SetBatchingParameters(This,lFlags,dwMaxBufferSize,dwMaxSendLatency) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wbemprov_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemprov_0000_0014_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
