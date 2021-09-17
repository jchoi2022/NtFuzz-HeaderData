#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IFunctionDiscoveryProvider IFunctionDiscoveryProvider;
typedef interface IProviderProperties IProviderProperties;
typedef interface IProviderPublishing IProviderPublishing;
typedef interface IFunctionDiscoveryProviderFactory IFunctionDiscoveryProviderFactory;
typedef interface IFunctionDiscoveryProviderQuery IFunctionDiscoveryProviderQuery;
typedef interface IProviderQueryConstraintCollection IProviderQueryConstraintCollection;
typedef interface IProviderPropertyConstraintCollection IProviderPropertyConstraintCollection;
typedef interface IFunctionDiscoveryServiceProvider IFunctionDiscoveryServiceProvider;
#include "oaidl.h"
#include "ocidl.h"
#include "propsys.h"
#include "FunctionDiscoveryAPI.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_functiondiscoveryprovider_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_functiondiscoveryprovider_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IFunctionDiscoveryProvider;
    typedef struct IFunctionDiscoveryProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFunctionDiscoveryProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFunctionDiscoveryProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFunctionDiscoveryProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IFunctionDiscoveryProvider * This,
                       __RPC__in_opt IFunctionDiscoveryProviderFactory *pIFunctionDiscoveryProviderFactory,
                       __RPC__in_opt IFunctionDiscoveryNotification *pIFunctionDiscoveryNotification,
                       LCID lcidUserDefault,
                        __RPC__out DWORD *pdwStgAccessCapabilities);
        HRESULT ( STDMETHODCALLTYPE *Query )(
            __RPC__in IFunctionDiscoveryProvider * This,
                       __RPC__in_opt IFunctionDiscoveryProviderQuery *pIFunctionDiscoveryProviderQuery,
                        __RPC__deref_out_opt IFunctionInstanceCollection **ppIFunctionInstanceCollection);
        HRESULT ( STDMETHODCALLTYPE *EndQuery )(
            __RPC__in IFunctionDiscoveryProvider * This);
        HRESULT ( STDMETHODCALLTYPE *InstancePropertyStoreValidateAccess )(
            __RPC__in IFunctionDiscoveryProvider * This,
                       __RPC__in_opt IFunctionInstance *pIFunctionInstance,
                       INT_PTR iProviderInstanceContext,
                       const DWORD dwStgAccess);
        HRESULT ( STDMETHODCALLTYPE *InstancePropertyStoreOpen )(
            __RPC__in IFunctionDiscoveryProvider * This,
                       __RPC__in_opt IFunctionInstance *pIFunctionInstance,
                       INT_PTR iProviderInstanceContext,
                       const DWORD dwStgAccess,
                        __RPC__deref_out_opt IPropertyStore **ppIPropertyStore);
        HRESULT ( STDMETHODCALLTYPE *InstancePropertyStoreFlush )(
            __RPC__in IFunctionDiscoveryProvider * This,
                       __RPC__in_opt IFunctionInstance *pIFunctionInstance,
                       INT_PTR iProviderInstanceContext);
        HRESULT ( STDMETHODCALLTYPE *InstanceQueryService )(
            __RPC__in IFunctionDiscoveryProvider * This,
                       __RPC__in_opt IFunctionInstance *pIFunctionInstance,
                       INT_PTR iProviderInstanceContext,
                       __RPC__in REFGUID guidService,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **ppIUnknown);
        HRESULT ( STDMETHODCALLTYPE *InstanceReleased )(
            __RPC__in IFunctionDiscoveryProvider * This,
                       __RPC__in_opt IFunctionInstance *pIFunctionInstance,
                       INT_PTR iProviderInstanceContext);
        END_INTERFACE
    } IFunctionDiscoveryProviderVtbl;
    interface IFunctionDiscoveryProvider
    {
        CONST_VTBL struct IFunctionDiscoveryProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pIFunctionDiscoveryProviderFactory,pIFunctionDiscoveryNotification,lcidUserDefault,pdwStgAccessCapabilities) )
    ( (This)->lpVtbl -> Query(This,pIFunctionDiscoveryProviderQuery,ppIFunctionInstanceCollection) )
    ( (This)->lpVtbl -> EndQuery(This) )
    ( (This)->lpVtbl -> InstancePropertyStoreValidateAccess(This,pIFunctionInstance,iProviderInstanceContext,dwStgAccess) )
    ( (This)->lpVtbl -> InstancePropertyStoreOpen(This,pIFunctionInstance,iProviderInstanceContext,dwStgAccess,ppIPropertyStore) )
    ( (This)->lpVtbl -> InstancePropertyStoreFlush(This,pIFunctionInstance,iProviderInstanceContext) )
    ( (This)->lpVtbl -> InstanceQueryService(This,pIFunctionInstance,iProviderInstanceContext,guidService,riid,ppIUnknown) )
    ( (This)->lpVtbl -> InstanceReleased(This,pIFunctionInstance,iProviderInstanceContext) )
EXTERN_C const IID IID_IProviderProperties;
    typedef struct IProviderPropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProviderProperties * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProviderProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProviderProperties * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IProviderProperties * This,
                       __RPC__in_opt IFunctionInstance *pIFunctionInstance,
                       INT_PTR iProviderInstanceContext,
                        __RPC__out DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IProviderProperties * This,
                       __RPC__in_opt IFunctionInstance *pIFunctionInstance,
                       INT_PTR iProviderInstanceContext,
                       DWORD dwIndex,
                        __RPC__out PROPERTYKEY *pKey);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in IProviderProperties * This,
                       __RPC__in_opt IFunctionInstance *pIFunctionInstance,
                       INT_PTR iProviderInstanceContext,
                       __RPC__in REFPROPERTYKEY Key,
                        __RPC__out PROPVARIANT *ppropVar);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            __RPC__in IProviderProperties * This,
                       __RPC__in_opt IFunctionInstance *pIFunctionInstance,
                       INT_PTR iProviderInstanceContext,
                       __RPC__in REFPROPERTYKEY Key,
                       __RPC__in const PROPVARIANT *ppropVar);
        END_INTERFACE
    } IProviderPropertiesVtbl;
    interface IProviderProperties
    {
        CONST_VTBL struct IProviderPropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,pIFunctionInstance,iProviderInstanceContext,pdwCount) )
    ( (This)->lpVtbl -> GetAt(This,pIFunctionInstance,iProviderInstanceContext,dwIndex,pKey) )
    ( (This)->lpVtbl -> GetValue(This,pIFunctionInstance,iProviderInstanceContext,Key,ppropVar) )
    ( (This)->lpVtbl -> SetValue(This,pIFunctionInstance,iProviderInstanceContext,Key,ppropVar) )
EXTERN_C const IID IID_IProviderPublishing;
    typedef struct IProviderPublishingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProviderPublishing * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProviderPublishing * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProviderPublishing * This);
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            __RPC__in IProviderPublishing * This,
                       SystemVisibilityFlags enumVisibilityFlags,
                                       __RPC__in_opt_string const WCHAR *pszSubCategory,
                               __RPC__in_string const WCHAR *pszProviderInstanceIdentity,
                        __RPC__deref_out_opt IFunctionInstance **ppIFunctionInstance);
        HRESULT ( STDMETHODCALLTYPE *RemoveInstance )(
            __RPC__in IProviderPublishing * This,
                       SystemVisibilityFlags enumVisibilityFlags,
                                       __RPC__in_opt_string const WCHAR *pszSubCategory,
                               __RPC__in_string const WCHAR *pszProviderInstanceIdentity);
        END_INTERFACE
    } IProviderPublishingVtbl;
    interface IProviderPublishing
    {
        CONST_VTBL struct IProviderPublishingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateInstance(This,enumVisibilityFlags,pszSubCategory,pszProviderInstanceIdentity,ppIFunctionInstance) )
    ( (This)->lpVtbl -> RemoveInstance(This,enumVisibilityFlags,pszSubCategory,pszProviderInstanceIdentity) )
EXTERN_C const IID IID_IFunctionDiscoveryProviderFactory;
    typedef struct IFunctionDiscoveryProviderFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFunctionDiscoveryProviderFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFunctionDiscoveryProviderFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFunctionDiscoveryProviderFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyStore )(
            __RPC__in IFunctionDiscoveryProviderFactory * This,
                        __RPC__deref_out_opt IPropertyStore **ppIPropertyStore);
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            __RPC__in IFunctionDiscoveryProviderFactory * This,
                                       __RPC__in_opt_string const WCHAR *pszSubCategory,
                               __RPC__in_string const WCHAR *pszProviderInstanceIdentity,
                       INT_PTR iProviderInstanceContext,
                       __RPC__in_opt IPropertyStore *pIPropertyStore,
                       __RPC__in_opt IFunctionDiscoveryProvider *pIFunctionDiscoveryProvider,
                        __RPC__deref_out_opt IFunctionInstance **ppIFunctionInstance);
        HRESULT ( STDMETHODCALLTYPE *CreateFunctionInstanceCollection )(
            __RPC__in IFunctionDiscoveryProviderFactory * This,
                        __RPC__deref_out_opt IFunctionInstanceCollection **ppIFunctionInstanceCollection);
        END_INTERFACE
    } IFunctionDiscoveryProviderFactoryVtbl;
    interface IFunctionDiscoveryProviderFactory
    {
        CONST_VTBL struct IFunctionDiscoveryProviderFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreatePropertyStore(This,ppIPropertyStore) )
    ( (This)->lpVtbl -> CreateInstance(This,pszSubCategory,pszProviderInstanceIdentity,iProviderInstanceContext,pIPropertyStore,pIFunctionDiscoveryProvider,ppIFunctionInstance) )
    ( (This)->lpVtbl -> CreateFunctionInstanceCollection(This,ppIFunctionInstanceCollection) )
EXTERN_C const IID IID_IFunctionDiscoveryProviderQuery;
    typedef struct IFunctionDiscoveryProviderQueryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFunctionDiscoveryProviderQuery * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFunctionDiscoveryProviderQuery * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFunctionDiscoveryProviderQuery * This);
        HRESULT ( STDMETHODCALLTYPE *IsInstanceQuery )(
            __RPC__in IFunctionDiscoveryProviderQuery * This,
                        __RPC__out BOOL *pisInstanceQuery,
                                __RPC__deref_out_opt_string WCHAR **ppszConstraintValue);
        HRESULT ( STDMETHODCALLTYPE *IsSubcategoryQuery )(
            __RPC__in IFunctionDiscoveryProviderQuery * This,
                        __RPC__out BOOL *pisSubcategoryQuery,
                                __RPC__deref_out_opt_string WCHAR **ppszConstraintValue);
        HRESULT ( STDMETHODCALLTYPE *GetQueryConstraints )(
            __RPC__in IFunctionDiscoveryProviderQuery * This,
                        __RPC__deref_out_opt IProviderQueryConstraintCollection **ppIProviderQueryConstraints);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyConstraints )(
            __RPC__in IFunctionDiscoveryProviderQuery * This,
                        __RPC__deref_out_opt IProviderPropertyConstraintCollection **ppIProviderPropertyConstraints);
        END_INTERFACE
    } IFunctionDiscoveryProviderQueryVtbl;
    interface IFunctionDiscoveryProviderQuery
    {
        CONST_VTBL struct IFunctionDiscoveryProviderQueryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsInstanceQuery(This,pisInstanceQuery,ppszConstraintValue) )
    ( (This)->lpVtbl -> IsSubcategoryQuery(This,pisSubcategoryQuery,ppszConstraintValue) )
    ( (This)->lpVtbl -> GetQueryConstraints(This,ppIProviderQueryConstraints) )
    ( (This)->lpVtbl -> GetPropertyConstraints(This,ppIProviderPropertyConstraints) )
EXTERN_C const IID IID_IProviderQueryConstraintCollection;
    typedef struct IProviderQueryConstraintCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProviderQueryConstraintCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProviderQueryConstraintCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProviderQueryConstraintCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IProviderQueryConstraintCollection * This,
                        __RPC__out DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IProviderQueryConstraintCollection * This,
                               __RPC__in_string const WCHAR *pszConstraintName,
                                __RPC__deref_out_opt_string WCHAR **ppszConstraintValue);
        HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in IProviderQueryConstraintCollection * This,
                       DWORD dwIndex,
                                __RPC__deref_out_opt_string WCHAR **ppszConstraintName,
                                __RPC__deref_out_opt_string WCHAR **ppszConstraintValue);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IProviderQueryConstraintCollection * This,
                                __RPC__deref_out_opt_string WCHAR **ppszConstraintName,
                                __RPC__deref_out_opt_string WCHAR **ppszConstraintValue);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IProviderQueryConstraintCollection * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IProviderQueryConstraintCollection * This);
        END_INTERFACE
    } IProviderQueryConstraintCollectionVtbl;
    interface IProviderQueryConstraintCollection
    {
        CONST_VTBL struct IProviderQueryConstraintCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,pdwCount) )
    ( (This)->lpVtbl -> Get(This,pszConstraintName,ppszConstraintValue) )
    ( (This)->lpVtbl -> Item(This,dwIndex,ppszConstraintName,ppszConstraintValue) )
    ( (This)->lpVtbl -> Next(This,ppszConstraintName,ppszConstraintValue) )
    ( (This)->lpVtbl -> Skip(This) )
    ( (This)->lpVtbl -> Reset(This) )
EXTERN_C const IID IID_IProviderPropertyConstraintCollection;
    typedef struct IProviderPropertyConstraintCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProviderPropertyConstraintCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProviderPropertyConstraintCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProviderPropertyConstraintCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IProviderPropertyConstraintCollection * This,
                        __RPC__out DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IProviderPropertyConstraintCollection * This,
                       __RPC__in REFPROPERTYKEY Key,
                        __RPC__out PROPVARIANT *pPropVar,
                        __RPC__out DWORD *pdwPropertyConstraint);
        HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in IProviderPropertyConstraintCollection * This,
                       DWORD dwIndex,
                        __RPC__out PROPERTYKEY *pKey,
                        __RPC__out PROPVARIANT *pPropVar,
                        __RPC__out DWORD *pdwPropertyConstraint);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IProviderPropertyConstraintCollection * This,
                        __RPC__out PROPERTYKEY *pKey,
                        __RPC__out PROPVARIANT *pPropVar,
                        __RPC__out DWORD *pdwPropertyConstraint);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IProviderPropertyConstraintCollection * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IProviderPropertyConstraintCollection * This);
        END_INTERFACE
    } IProviderPropertyConstraintCollectionVtbl;
    interface IProviderPropertyConstraintCollection
    {
        CONST_VTBL struct IProviderPropertyConstraintCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,pdwCount) )
    ( (This)->lpVtbl -> Get(This,Key,pPropVar,pdwPropertyConstraint) )
    ( (This)->lpVtbl -> Item(This,dwIndex,pKey,pPropVar,pdwPropertyConstraint) )
    ( (This)->lpVtbl -> Next(This,pKey,pPropVar,pdwPropertyConstraint) )
    ( (This)->lpVtbl -> Skip(This) )
    ( (This)->lpVtbl -> Reset(This) )
EXTERN_C const IID IID_IFunctionDiscoveryServiceProvider;
    typedef struct IFunctionDiscoveryServiceProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFunctionDiscoveryServiceProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFunctionDiscoveryServiceProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFunctionDiscoveryServiceProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IFunctionDiscoveryServiceProvider * This,
                       __RPC__in_opt IFunctionInstance *pIFunctionInstance,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **ppv);
        END_INTERFACE
    } IFunctionDiscoveryServiceProviderVtbl;
    interface IFunctionDiscoveryServiceProvider
    {
        CONST_VTBL struct IFunctionDiscoveryServiceProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pIFunctionInstance,riid,ppv) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_functiondiscoveryprovider_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_functiondiscoveryprovider_0000_0008_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
}
