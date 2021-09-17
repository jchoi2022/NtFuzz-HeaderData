#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IFunctionDiscoveryNotification IFunctionDiscoveryNotification;
typedef interface IFunctionDiscovery IFunctionDiscovery;
typedef interface IFunctionInstance IFunctionInstance;
typedef interface IFunctionInstanceCollection IFunctionInstanceCollection;
typedef interface IPropertyStoreCollection IPropertyStoreCollection;
typedef interface IFunctionInstanceQuery IFunctionInstanceQuery;
typedef interface IFunctionInstanceCollectionQuery IFunctionInstanceCollectionQuery;
typedef interface IFunctionInstanceQuery2 IFunctionInstanceQuery2;
typedef interface IFunctionInstanceCollectionQuery2 IFunctionInstanceCollectionQuery2;
typedef interface IFunctionInstanceCollectionQueryCollection IFunctionInstanceCollectionQueryCollection;
typedef interface IFunctionDiscoveryProviderRefresh IFunctionDiscoveryProviderRefresh;
#include "oaidl.h"
#include "ocidl.h"
#include "propsys.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
       
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(pop)
#pragma warning(pop)
#pragma region Desktop Family
typedef
enum tagPropertyConstraint
    {
        QC_EQUALS = 0,
        QC_NOTEQUAL = 1,
        QC_LESSTHAN = 2,
        QC_LESSTHANOREQUAL = 3,
        QC_GREATERTHAN = 4,
        QC_GREATERTHANOREQUAL = 5,
        QC_STARTSWITH = 6,
        QC_EXISTS = 7,
        QC_DOESNOTEXIST = 8,
        QC_CONTAINS = 9
    } PropertyConstraint;
#pragma endregion
#include "FunctionDiscoveryCategories.h"
#include "FunctionDiscoveryError.h"
#include "FunctionDiscoveryKeys.h"
#include "FunctionDiscoveryServiceIDs.h"
#include "FunctionDiscoveryConstraints.h"
typedef DWORDLONG FDQUERYCONTEXT;
typedef
enum tagSystemVisibilityFlags
    {
        SVF_SYSTEM = 0,
        SVF_USER = 1
    } SystemVisibilityFlags;
typedef
enum tagQueryUpdateAction
    {
        QUA_ADD = 0,
        QUA_REMOVE = 1,
        QUA_CHANGE = 2
    } QueryUpdateAction;
typedef
enum tagQueryCategoryType
    {
        QCT_PROVIDER = 0,
        QCT_LAYERED = 1
    } QueryCategoryType;
extern RPC_IF_HANDLE __MIDL_itf_functiondiscoveryapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_functiondiscoveryapi_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IFunctionDiscoveryNotification;
    typedef struct IFunctionDiscoveryNotificationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFunctionDiscoveryNotification * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFunctionDiscoveryNotification * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFunctionDiscoveryNotification * This);
        HRESULT ( STDMETHODCALLTYPE *OnUpdate )(
            __RPC__in IFunctionDiscoveryNotification * This,
                       QueryUpdateAction enumQueryUpdateAction,
                       FDQUERYCONTEXT fdqcQueryContext,
                       __RPC__in_opt IFunctionInstance *pIFunctionInstance);
        HRESULT ( STDMETHODCALLTYPE *OnError )(
            __RPC__in IFunctionDiscoveryNotification * This,
                       HRESULT hr,
                       FDQUERYCONTEXT fdqcQueryContext,
                               __RPC__in_string const WCHAR *pszProvider);
        HRESULT ( STDMETHODCALLTYPE *OnEvent )(
            __RPC__in IFunctionDiscoveryNotification * This,
                       DWORD dwEventID,
                       FDQUERYCONTEXT fdqcQueryContext,
                               __RPC__in_string const WCHAR *pszProvider);
        END_INTERFACE
    } IFunctionDiscoveryNotificationVtbl;
    interface IFunctionDiscoveryNotification
    {
        CONST_VTBL struct IFunctionDiscoveryNotificationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnUpdate(This,enumQueryUpdateAction,fdqcQueryContext,pIFunctionInstance) )
    ( (This)->lpVtbl -> OnError(This,hr,fdqcQueryContext,pszProvider) )
    ( (This)->lpVtbl -> OnEvent(This,dwEventID,fdqcQueryContext,pszProvider) )
EXTERN_C const IID IID_IFunctionDiscovery;
    typedef struct IFunctionDiscoveryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFunctionDiscovery * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFunctionDiscovery * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFunctionDiscovery * This);
        HRESULT ( STDMETHODCALLTYPE *GetInstanceCollection )(
            __RPC__in IFunctionDiscovery * This,
                               __RPC__in_string const WCHAR *pszCategory,
                                       __RPC__in_opt_string const WCHAR *pszSubCategory,
                       BOOL fIncludeAllSubCategories,
                                __RPC__deref_out_opt IFunctionInstanceCollection **ppIFunctionInstanceCollection);
        HRESULT ( STDMETHODCALLTYPE *GetInstance )(
            __RPC__in IFunctionDiscovery * This,
                               __RPC__in_string const WCHAR *pszFunctionInstanceIdentity,
                                __RPC__deref_out_opt IFunctionInstance **ppIFunctionInstance);
        HRESULT ( STDMETHODCALLTYPE *CreateInstanceCollectionQuery )(
            __RPC__in IFunctionDiscovery * This,
                               __RPC__in_string const WCHAR *pszCategory,
                                       __RPC__in_opt_string const WCHAR *pszSubCategory,
                       BOOL fIncludeAllSubCategories,
                       __RPC__in_opt IFunctionDiscoveryNotification *pIFunctionDiscoveryNotification,
                                    __RPC__inout_opt FDQUERYCONTEXT *pfdqcQueryContext,
                                __RPC__deref_out_opt IFunctionInstanceCollectionQuery **ppIFunctionInstanceCollectionQuery);
        HRESULT ( STDMETHODCALLTYPE *CreateInstanceQuery )(
            __RPC__in IFunctionDiscovery * This,
                               __RPC__in_string const WCHAR *pszFunctionInstanceIdentity,
                       __RPC__in_opt IFunctionDiscoveryNotification *pIFunctionDiscoveryNotification,
                                    __RPC__inout_opt FDQUERYCONTEXT *pfdqcQueryContext,
                                __RPC__deref_out_opt IFunctionInstanceQuery **ppIFunctionInstanceQuery);
        HRESULT ( STDMETHODCALLTYPE *AddInstance )(
            __RPC__in IFunctionDiscovery * This,
                       SystemVisibilityFlags enumSystemVisibility,
                               __RPC__in_string const WCHAR *pszCategory,
                                       __RPC__in_opt_string const WCHAR *pszSubCategory,
                               __RPC__in_string const WCHAR *pszCategoryIdentity,
                                __RPC__deref_out_opt IFunctionInstance **ppIFunctionInstance);
        HRESULT ( STDMETHODCALLTYPE *RemoveInstance )(
            __RPC__in IFunctionDiscovery * This,
                       SystemVisibilityFlags enumSystemVisibility,
                               __RPC__in_string const WCHAR *pszCategory,
                                       __RPC__in_opt_string const WCHAR *pszSubCategory,
                               __RPC__in_string const WCHAR *pszCategoryIdentity);
        END_INTERFACE
    } IFunctionDiscoveryVtbl;
    interface IFunctionDiscovery
    {
        CONST_VTBL struct IFunctionDiscoveryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetInstanceCollection(This,pszCategory,pszSubCategory,fIncludeAllSubCategories,ppIFunctionInstanceCollection) )
    ( (This)->lpVtbl -> GetInstance(This,pszFunctionInstanceIdentity,ppIFunctionInstance) )
    ( (This)->lpVtbl -> CreateInstanceCollectionQuery(This,pszCategory,pszSubCategory,fIncludeAllSubCategories,pIFunctionDiscoveryNotification,pfdqcQueryContext,ppIFunctionInstanceCollectionQuery) )
    ( (This)->lpVtbl -> CreateInstanceQuery(This,pszFunctionInstanceIdentity,pIFunctionDiscoveryNotification,pfdqcQueryContext,ppIFunctionInstanceQuery) )
    ( (This)->lpVtbl -> AddInstance(This,enumSystemVisibility,pszCategory,pszSubCategory,pszCategoryIdentity,ppIFunctionInstance) )
    ( (This)->lpVtbl -> RemoveInstance(This,enumSystemVisibility,pszCategory,pszSubCategory,pszCategoryIdentity) )
EXTERN_C const IID IID_IFunctionInstance;
    typedef struct IFunctionInstanceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFunctionInstance * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFunctionInstance * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFunctionInstance * This);
                      HRESULT ( STDMETHODCALLTYPE *QueryService )(
            IFunctionInstance * This,
            _In_ REFGUID guidService,
            _In_ REFIID riid,
            _Outptr_ void **ppvObject);
        HRESULT ( STDMETHODCALLTYPE *GetID )(
            __RPC__in IFunctionInstance * This,
                                        __RPC__deref_out_opt_string WCHAR **ppszCoMemIdentity);
        HRESULT ( STDMETHODCALLTYPE *GetProviderInstanceID )(
            __RPC__in IFunctionInstance * This,
                                        __RPC__deref_out_opt_string WCHAR **ppszCoMemProviderInstanceIdentity);
        HRESULT ( STDMETHODCALLTYPE *OpenPropertyStore )(
            __RPC__in IFunctionInstance * This,
                       DWORD dwStgAccess,
                                __RPC__deref_out_opt IPropertyStore **ppIPropertyStore);
        HRESULT ( STDMETHODCALLTYPE *GetCategory )(
            __RPC__in IFunctionInstance * This,
                                __RPC__deref_out_opt_string WCHAR **ppszCoMemCategory,
                                __RPC__deref_out_opt_string WCHAR **ppszCoMemSubCategory);
        END_INTERFACE
    } IFunctionInstanceVtbl;
    interface IFunctionInstance
    {
        CONST_VTBL struct IFunctionInstanceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryService(This,guidService,riid,ppvObject) )
    ( (This)->lpVtbl -> GetID(This,ppszCoMemIdentity) )
    ( (This)->lpVtbl -> GetProviderInstanceID(This,ppszCoMemProviderInstanceIdentity) )
    ( (This)->lpVtbl -> OpenPropertyStore(This,dwStgAccess,ppIPropertyStore) )
    ( (This)->lpVtbl -> GetCategory(This,ppszCoMemCategory,ppszCoMemSubCategory) )
EXTERN_C const IID IID_IFunctionInstanceCollection;
    typedef struct IFunctionInstanceCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFunctionInstanceCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFunctionInstanceCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFunctionInstanceCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IFunctionInstanceCollection * This,
                                __RPC__out DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IFunctionInstanceCollection * This,
                               __RPC__in_string const WCHAR *pszInstanceIdentity,
                        __RPC__out DWORD *pdwIndex,
                                __RPC__deref_out_opt IFunctionInstance **ppIFunctionInstance);
        HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in IFunctionInstanceCollection * This,
                       DWORD dwIndex,
                                __RPC__deref_out_opt IFunctionInstance **ppIFunctionInstance);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IFunctionInstanceCollection * This,
                       __RPC__in_opt IFunctionInstance *pIFunctionInstance);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IFunctionInstanceCollection * This,
                       DWORD dwIndex,
                                __RPC__deref_out_opt IFunctionInstance **ppIFunctionInstance);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFunctionInstanceCollection * This,
                       DWORD dwIndex);
        HRESULT ( STDMETHODCALLTYPE *DeleteAll )(
            __RPC__in IFunctionInstanceCollection * This);
        END_INTERFACE
    } IFunctionInstanceCollectionVtbl;
    interface IFunctionInstanceCollection
    {
        CONST_VTBL struct IFunctionInstanceCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,pdwCount) )
    ( (This)->lpVtbl -> Get(This,pszInstanceIdentity,pdwIndex,ppIFunctionInstance) )
    ( (This)->lpVtbl -> Item(This,dwIndex,ppIFunctionInstance) )
    ( (This)->lpVtbl -> Add(This,pIFunctionInstance) )
    ( (This)->lpVtbl -> Remove(This,dwIndex,ppIFunctionInstance) )
    ( (This)->lpVtbl -> Delete(This,dwIndex) )
    ( (This)->lpVtbl -> DeleteAll(This) )
EXTERN_C const IID IID_IPropertyStoreCollection;
    typedef struct IPropertyStoreCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertyStoreCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertyStoreCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertyStoreCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IPropertyStoreCollection * This,
                                __RPC__out LPDWORD pdwCount);
        HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in IPropertyStoreCollection * This,
                               __RPC__in_string const WCHAR *pszInstanceIdentity,
                        __RPC__out LPDWORD pdwIndex,
                                __RPC__deref_out_opt IPropertyStore **ppIPropertyStore);
        HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in IPropertyStoreCollection * This,
                       DWORD dwIndex,
                                __RPC__deref_out_opt IPropertyStore **ppIPropertyStore);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IPropertyStoreCollection * This,
                       __RPC__in_opt IPropertyStore *pIPropertyStore);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IPropertyStoreCollection * This,
                       DWORD dwIndex,
                                __RPC__deref_out_opt IPropertyStore **pIPropertyStore);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IPropertyStoreCollection * This,
                       DWORD dwIndex);
        HRESULT ( STDMETHODCALLTYPE *DeleteAll )(
            __RPC__in IPropertyStoreCollection * This);
        END_INTERFACE
    } IPropertyStoreCollectionVtbl;
    interface IPropertyStoreCollection
    {
        CONST_VTBL struct IPropertyStoreCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,pdwCount) )
    ( (This)->lpVtbl -> Get(This,pszInstanceIdentity,pdwIndex,ppIPropertyStore) )
    ( (This)->lpVtbl -> Item(This,dwIndex,ppIPropertyStore) )
    ( (This)->lpVtbl -> Add(This,pIPropertyStore) )
    ( (This)->lpVtbl -> Remove(This,dwIndex,pIPropertyStore) )
    ( (This)->lpVtbl -> Delete(This,dwIndex) )
    ( (This)->lpVtbl -> DeleteAll(This) )
EXTERN_C const IID IID_IFunctionInstanceQuery;
    typedef struct IFunctionInstanceQueryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFunctionInstanceQuery * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFunctionInstanceQuery * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFunctionInstanceQuery * This);
        HRESULT ( STDMETHODCALLTYPE *Execute )(
            __RPC__in IFunctionInstanceQuery * This,
                                __RPC__deref_out_opt IFunctionInstance **ppIFunctionInstance);
        END_INTERFACE
    } IFunctionInstanceQueryVtbl;
    interface IFunctionInstanceQuery
    {
        CONST_VTBL struct IFunctionInstanceQueryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Execute(This,ppIFunctionInstance) )
EXTERN_C const IID IID_IFunctionInstanceCollectionQuery;
    typedef struct IFunctionInstanceCollectionQueryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFunctionInstanceCollectionQuery * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFunctionInstanceCollectionQuery * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFunctionInstanceCollectionQuery * This);
        HRESULT ( STDMETHODCALLTYPE *AddQueryConstraint )(
            __RPC__in IFunctionInstanceCollectionQuery * This,
                               __RPC__in_string const WCHAR *pszConstraintName,
                               __RPC__in_string const WCHAR *pszConstraintValue);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyConstraint )(
            __RPC__in IFunctionInstanceCollectionQuery * This,
                       __RPC__in REFPROPERTYKEY Key,
                       __RPC__in const PROPVARIANT *pv,
                       PropertyConstraint enumPropertyConstraint);
        HRESULT ( STDMETHODCALLTYPE *Execute )(
            __RPC__in IFunctionInstanceCollectionQuery * This,
                        __RPC__deref_out_opt IFunctionInstanceCollection **ppIFunctionInstanceCollection);
        END_INTERFACE
    } IFunctionInstanceCollectionQueryVtbl;
    interface IFunctionInstanceCollectionQuery
    {
        CONST_VTBL struct IFunctionInstanceCollectionQueryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddQueryConstraint(This,pszConstraintName,pszConstraintValue) )
    ( (This)->lpVtbl -> AddPropertyConstraint(This,Key,pv,enumPropertyConstraint) )
    ( (This)->lpVtbl -> Execute(This,ppIFunctionInstanceCollection) )
#include "FunctionDiscoveryNotification.h"
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_functiondiscoveryapi_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_functiondiscoveryapi_0000_0011_v0_0_s_ifspec;
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
