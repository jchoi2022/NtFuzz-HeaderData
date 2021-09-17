#include "rpc.h"
#include "rpcndr.h"
#include "windows.h"
#include "ole2.h"
extern "C"{
typedef interface ICatalog ICatalog;
typedef interface ICatalogObject ICatalogObject;
typedef interface ICatalogCollection ICatalogCollection;
typedef interface IComponentUtil IComponentUtil;
typedef interface IPackageUtil IPackageUtil;
typedef interface IRemoteComponentUtil IRemoteComponentUtil;
typedef interface IRoleAssociationUtil IRoleAssociationUtil;
typedef class Catalog Catalog;
typedef class CatalogObject CatalogObject;
typedef class CatalogCollection CatalogCollection;
typedef class ComponentUtil ComponentUtil;
typedef class PackageUtil PackageUtil;
typedef class RemoteComponentUtil RemoteComponentUtil;
typedef class RoleAssociationUtil RoleAssociationUtil;
#include "unknwn.h"
#include "oaidl.h"
#include <objbase.h>
extern RPC_IF_HANDLE __MIDL_itf_mtxadmin_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mtxadmin_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ICatalog;
    typedef struct ICatalogVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            ICatalog __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            ICatalog __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            ICatalog __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )(
            ICatalog __RPC_FAR * This,
                        UINT __RPC_FAR *pctinfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )(
            ICatalog __RPC_FAR * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )(
            ICatalog __RPC_FAR * This,
                       REFIID riid,
                                LPOLESTR __RPC_FAR *rgszNames,
                       UINT cNames,
                       LCID lcid,
                                 DISPID __RPC_FAR *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )(
            ICatalog __RPC_FAR * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS __RPC_FAR *pDispParams,
                        VARIANT __RPC_FAR *pVarResult,
                        EXCEPINFO __RPC_FAR *pExcepInfo,
                        UINT __RPC_FAR *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCollection )(
            ICatalog __RPC_FAR * This,
                       BSTR bstrCollName,
                                IDispatch __RPC_FAR *__RPC_FAR *ppCatalogCollection);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Connect )(
            ICatalog __RPC_FAR * This,
                       BSTR bstrConnectString,
                                IDispatch __RPC_FAR *__RPC_FAR *ppCatalogCollection);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MajorVersion )(
            ICatalog __RPC_FAR * This,
                                long __RPC_FAR *retval);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MinorVersion )(
            ICatalog __RPC_FAR * This,
                                long __RPC_FAR *retval);
        END_INTERFACE
    } ICatalogVtbl;
    interface ICatalog
    {
        CONST_VTBL struct ICatalogVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
    (This)->lpVtbl -> GetCollection(This,bstrCollName,ppCatalogCollection)
    (This)->lpVtbl -> Connect(This,bstrConnectString,ppCatalogCollection)
    (This)->lpVtbl -> get_MajorVersion(This,retval)
    (This)->lpVtbl -> get_MinorVersion(This,retval)
                       HRESULT STDMETHODCALLTYPE ICatalog_GetCollection_Proxy(
    ICatalog __RPC_FAR * This,
               BSTR bstrCollName,
                        IDispatch __RPC_FAR *__RPC_FAR *ppCatalogCollection);
void __RPC_STUB ICatalog_GetCollection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE ICatalog_Connect_Proxy(
    ICatalog __RPC_FAR * This,
               BSTR bstrConnectString,
                        IDispatch __RPC_FAR *__RPC_FAR *ppCatalogCollection);
void __RPC_STUB ICatalog_Connect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE ICatalog_get_MajorVersion_Proxy(
    ICatalog __RPC_FAR * This,
                        long __RPC_FAR *retval);
void __RPC_STUB ICatalog_get_MajorVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE ICatalog_get_MinorVersion_Proxy(
    ICatalog __RPC_FAR * This,
                        long __RPC_FAR *retval);
void __RPC_STUB ICatalog_get_MinorVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_ICatalogObject;
    typedef struct ICatalogObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            ICatalogObject __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            ICatalogObject __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            ICatalogObject __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )(
            ICatalogObject __RPC_FAR * This,
                        UINT __RPC_FAR *pctinfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )(
            ICatalogObject __RPC_FAR * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )(
            ICatalogObject __RPC_FAR * This,
                       REFIID riid,
                                LPOLESTR __RPC_FAR *rgszNames,
                       UINT cNames,
                       LCID lcid,
                                 DISPID __RPC_FAR *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )(
            ICatalogObject __RPC_FAR * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS __RPC_FAR *pDispParams,
                        VARIANT __RPC_FAR *pVarResult,
                        EXCEPINFO __RPC_FAR *pExcepInfo,
                        UINT __RPC_FAR *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Value )(
            ICatalogObject __RPC_FAR * This,
                       BSTR bstrPropName,
                                VARIANT __RPC_FAR *retval);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Value )(
            ICatalogObject __RPC_FAR * This,
                       BSTR bstrPropName,
                       VARIANT val);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Key )(
            ICatalogObject __RPC_FAR * This,
                                VARIANT __RPC_FAR *retval);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )(
            ICatalogObject __RPC_FAR * This,
                                VARIANT __RPC_FAR *retval);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsPropertyReadOnly )(
            ICatalogObject __RPC_FAR * This,
                       BSTR bstrPropName,
                                VARIANT_BOOL __RPC_FAR *retval);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Valid )(
            ICatalogObject __RPC_FAR * This,
                                VARIANT_BOOL __RPC_FAR *retval);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsPropertyWriteOnly )(
            ICatalogObject __RPC_FAR * This,
                       BSTR bstrPropName,
                                VARIANT_BOOL __RPC_FAR *retval);
        END_INTERFACE
    } ICatalogObjectVtbl;
    interface ICatalogObject
    {
        CONST_VTBL struct ICatalogObjectVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
    (This)->lpVtbl -> get_Value(This,bstrPropName,retval)
    (This)->lpVtbl -> put_Value(This,bstrPropName,val)
    (This)->lpVtbl -> get_Key(This,retval)
    (This)->lpVtbl -> get_Name(This,retval)
    (This)->lpVtbl -> IsPropertyReadOnly(This,bstrPropName,retval)
    (This)->lpVtbl -> get_Valid(This,retval)
    (This)->lpVtbl -> IsPropertyWriteOnly(This,bstrPropName,retval)
                                HRESULT STDMETHODCALLTYPE ICatalogObject_get_Value_Proxy(
    ICatalogObject __RPC_FAR * This,
               BSTR bstrPropName,
                        VARIANT __RPC_FAR *retval);
void __RPC_STUB ICatalogObject_get_Value_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE ICatalogObject_put_Value_Proxy(
    ICatalogObject __RPC_FAR * This,
               BSTR bstrPropName,
               VARIANT val);
void __RPC_STUB ICatalogObject_put_Value_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE ICatalogObject_get_Key_Proxy(
    ICatalogObject __RPC_FAR * This,
                        VARIANT __RPC_FAR *retval);
void __RPC_STUB ICatalogObject_get_Key_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE ICatalogObject_get_Name_Proxy(
    ICatalogObject __RPC_FAR * This,
                        VARIANT __RPC_FAR *retval);
void __RPC_STUB ICatalogObject_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE ICatalogObject_IsPropertyReadOnly_Proxy(
    ICatalogObject __RPC_FAR * This,
               BSTR bstrPropName,
                        VARIANT_BOOL __RPC_FAR *retval);
void __RPC_STUB ICatalogObject_IsPropertyReadOnly_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE ICatalogObject_get_Valid_Proxy(
    ICatalogObject __RPC_FAR * This,
                        VARIANT_BOOL __RPC_FAR *retval);
void __RPC_STUB ICatalogObject_get_Valid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE ICatalogObject_IsPropertyWriteOnly_Proxy(
    ICatalogObject __RPC_FAR * This,
               BSTR bstrPropName,
                        VARIANT_BOOL __RPC_FAR *retval);
void __RPC_STUB ICatalogObject_IsPropertyWriteOnly_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_ICatalogCollection;
    typedef struct ICatalogCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            ICatalogCollection __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            ICatalogCollection __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            ICatalogCollection __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )(
            ICatalogCollection __RPC_FAR * This,
                        UINT __RPC_FAR *pctinfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )(
            ICatalogCollection __RPC_FAR * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )(
            ICatalogCollection __RPC_FAR * This,
                       REFIID riid,
                                LPOLESTR __RPC_FAR *rgszNames,
                       UINT cNames,
                       LCID lcid,
                                 DISPID __RPC_FAR *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )(
            ICatalogCollection __RPC_FAR * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS __RPC_FAR *pDispParams,
                        VARIANT __RPC_FAR *pVarResult,
                        EXCEPINFO __RPC_FAR *pExcepInfo,
                        UINT __RPC_FAR *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__NewEnum )(
            ICatalogCollection __RPC_FAR * This,
                                IUnknown __RPC_FAR *__RPC_FAR *ppEnumVariant);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Item )(
            ICatalogCollection __RPC_FAR * This,
                       long lIndex,
                                IDispatch __RPC_FAR *__RPC_FAR *ppCatalogObject);
                                    HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )(
            ICatalogCollection __RPC_FAR * This,
                                long __RPC_FAR *retval);
                           HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Remove )(
            ICatalogCollection __RPC_FAR * This,
                       long lIndex);
                           HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Add )(
            ICatalogCollection __RPC_FAR * This,
                                IDispatch __RPC_FAR *__RPC_FAR *ppCatalogObject);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Populate )(
            ICatalogCollection __RPC_FAR * This);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SaveChanges )(
            ICatalogCollection __RPC_FAR * This,
                                long __RPC_FAR *retval);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCollection )(
            ICatalogCollection __RPC_FAR * This,
                       BSTR bstrCollName,
                       VARIANT varObjectKey,
                                IDispatch __RPC_FAR *__RPC_FAR *ppCatalogCollection);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )(
            ICatalogCollection __RPC_FAR * This,
                                VARIANT __RPC_FAR *retval);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_AddEnabled )(
            ICatalogCollection __RPC_FAR * This,
                                VARIANT_BOOL __RPC_FAR *retval);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_RemoveEnabled )(
            ICatalogCollection __RPC_FAR * This,
                                VARIANT_BOOL __RPC_FAR *retval);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetUtilInterface )(
            ICatalogCollection __RPC_FAR * This,
                                IDispatch __RPC_FAR *__RPC_FAR *ppUtil);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_DataStoreMajorVersion )(
            ICatalogCollection __RPC_FAR * This,
                                long __RPC_FAR *retval);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_DataStoreMinorVersion )(
            ICatalogCollection __RPC_FAR * This,
                                long __RPC_FAR *retval);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *PopulateByKey )(
            ICatalogCollection __RPC_FAR * This,
                       SAFEARRAY __RPC_FAR * aKeys);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *PopulateByQuery )(
            ICatalogCollection __RPC_FAR * This,
                       BSTR bstrQueryString,
                       long lQueryType);
        END_INTERFACE
    } ICatalogCollectionVtbl;
    interface ICatalogCollection
    {
        CONST_VTBL struct ICatalogCollectionVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
    (This)->lpVtbl -> get__NewEnum(This,ppEnumVariant)
    (This)->lpVtbl -> get_Item(This,lIndex,ppCatalogObject)
    (This)->lpVtbl -> get_Count(This,retval)
    (This)->lpVtbl -> Remove(This,lIndex)
    (This)->lpVtbl -> Add(This,ppCatalogObject)
    (This)->lpVtbl -> Populate(This)
    (This)->lpVtbl -> SaveChanges(This,retval)
    (This)->lpVtbl -> GetCollection(This,bstrCollName,varObjectKey,ppCatalogCollection)
    (This)->lpVtbl -> get_Name(This,retval)
    (This)->lpVtbl -> get_AddEnabled(This,retval)
    (This)->lpVtbl -> get_RemoveEnabled(This,retval)
    (This)->lpVtbl -> GetUtilInterface(This,ppUtil)
    (This)->lpVtbl -> get_DataStoreMajorVersion(This,retval)
    (This)->lpVtbl -> get_DataStoreMinorVersion(This,retval)
    (This)->lpVtbl -> PopulateByKey(This,aKeys)
    (This)->lpVtbl -> PopulateByQuery(This,bstrQueryString,lQueryType)
                                HRESULT STDMETHODCALLTYPE ICatalogCollection_get__NewEnum_Proxy(
    ICatalogCollection __RPC_FAR * This,
                        IUnknown __RPC_FAR *__RPC_FAR *ppEnumVariant);
void __RPC_STUB ICatalogCollection_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE ICatalogCollection_get_Item_Proxy(
    ICatalogCollection __RPC_FAR * This,
               long lIndex,
                        IDispatch __RPC_FAR *__RPC_FAR *ppCatalogObject);
void __RPC_STUB ICatalogCollection_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                            HRESULT STDMETHODCALLTYPE ICatalogCollection_get_Count_Proxy(
    ICatalogCollection __RPC_FAR * This,
                        long __RPC_FAR *retval);
void __RPC_STUB ICatalogCollection_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                   HRESULT STDMETHODCALLTYPE ICatalogCollection_Remove_Proxy(
    ICatalogCollection __RPC_FAR * This,
               long lIndex);
void __RPC_STUB ICatalogCollection_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                   HRESULT STDMETHODCALLTYPE ICatalogCollection_Add_Proxy(
    ICatalogCollection __RPC_FAR * This,
                        IDispatch __RPC_FAR *__RPC_FAR *ppCatalogObject);
void __RPC_STUB ICatalogCollection_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE ICatalogCollection_Populate_Proxy(
    ICatalogCollection __RPC_FAR * This);
void __RPC_STUB ICatalogCollection_Populate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE ICatalogCollection_SaveChanges_Proxy(
    ICatalogCollection __RPC_FAR * This,
                        long __RPC_FAR *retval);
void __RPC_STUB ICatalogCollection_SaveChanges_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE ICatalogCollection_GetCollection_Proxy(
    ICatalogCollection __RPC_FAR * This,
               BSTR bstrCollName,
               VARIANT varObjectKey,
                        IDispatch __RPC_FAR *__RPC_FAR *ppCatalogCollection);
void __RPC_STUB ICatalogCollection_GetCollection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE ICatalogCollection_get_Name_Proxy(
    ICatalogCollection __RPC_FAR * This,
                        VARIANT __RPC_FAR *retval);
void __RPC_STUB ICatalogCollection_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE ICatalogCollection_get_AddEnabled_Proxy(
    ICatalogCollection __RPC_FAR * This,
                        VARIANT_BOOL __RPC_FAR *retval);
void __RPC_STUB ICatalogCollection_get_AddEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE ICatalogCollection_get_RemoveEnabled_Proxy(
    ICatalogCollection __RPC_FAR * This,
                        VARIANT_BOOL __RPC_FAR *retval);
void __RPC_STUB ICatalogCollection_get_RemoveEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE ICatalogCollection_GetUtilInterface_Proxy(
    ICatalogCollection __RPC_FAR * This,
                        IDispatch __RPC_FAR *__RPC_FAR *ppUtil);
void __RPC_STUB ICatalogCollection_GetUtilInterface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE ICatalogCollection_get_DataStoreMajorVersion_Proxy(
    ICatalogCollection __RPC_FAR * This,
                        long __RPC_FAR *retval);
void __RPC_STUB ICatalogCollection_get_DataStoreMajorVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE ICatalogCollection_get_DataStoreMinorVersion_Proxy(
    ICatalogCollection __RPC_FAR * This,
                        long __RPC_FAR *retval);
void __RPC_STUB ICatalogCollection_get_DataStoreMinorVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE ICatalogCollection_PopulateByKey_Proxy(
    ICatalogCollection __RPC_FAR * This,
               SAFEARRAY __RPC_FAR * aKeys);
void __RPC_STUB ICatalogCollection_PopulateByKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE ICatalogCollection_PopulateByQuery_Proxy(
    ICatalogCollection __RPC_FAR * This,
               BSTR bstrQueryString,
               long lQueryType);
void __RPC_STUB ICatalogCollection_PopulateByQuery_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IComponentUtil;
    typedef struct IComponentUtilVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IComponentUtil __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IComponentUtil __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IComponentUtil __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )(
            IComponentUtil __RPC_FAR * This,
                        UINT __RPC_FAR *pctinfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )(
            IComponentUtil __RPC_FAR * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )(
            IComponentUtil __RPC_FAR * This,
                       REFIID riid,
                                LPOLESTR __RPC_FAR *rgszNames,
                       UINT cNames,
                       LCID lcid,
                                 DISPID __RPC_FAR *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )(
            IComponentUtil __RPC_FAR * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS __RPC_FAR *pDispParams,
                        VARIANT __RPC_FAR *pVarResult,
                        EXCEPINFO __RPC_FAR *pExcepInfo,
                        UINT __RPC_FAR *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InstallComponent )(
            IComponentUtil __RPC_FAR * This,
                       BSTR bstrDLLFile,
                       BSTR bstrTypelibFile,
                       BSTR bstrProxyStubDLLFile);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ImportComponent )(
            IComponentUtil __RPC_FAR * This,
                       BSTR bstrCLSID);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ImportComponentByName )(
            IComponentUtil __RPC_FAR * This,
                       BSTR bstrProgID);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCLSIDs )(
            IComponentUtil __RPC_FAR * This,
                       BSTR bstrDLLFile,
                       BSTR bstrTypelibFile,
                        SAFEARRAY __RPC_FAR * __RPC_FAR *aCLSIDs);
        END_INTERFACE
    } IComponentUtilVtbl;
    interface IComponentUtil
    {
        CONST_VTBL struct IComponentUtilVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
    (This)->lpVtbl -> InstallComponent(This,bstrDLLFile,bstrTypelibFile,bstrProxyStubDLLFile)
    (This)->lpVtbl -> ImportComponent(This,bstrCLSID)
    (This)->lpVtbl -> ImportComponentByName(This,bstrProgID)
    (This)->lpVtbl -> GetCLSIDs(This,bstrDLLFile,bstrTypelibFile,aCLSIDs)
                       HRESULT STDMETHODCALLTYPE IComponentUtil_InstallComponent_Proxy(
    IComponentUtil __RPC_FAR * This,
               BSTR bstrDLLFile,
               BSTR bstrTypelibFile,
               BSTR bstrProxyStubDLLFile);
void __RPC_STUB IComponentUtil_InstallComponent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IComponentUtil_ImportComponent_Proxy(
    IComponentUtil __RPC_FAR * This,
               BSTR bstrCLSID);
void __RPC_STUB IComponentUtil_ImportComponent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IComponentUtil_ImportComponentByName_Proxy(
    IComponentUtil __RPC_FAR * This,
               BSTR bstrProgID);
void __RPC_STUB IComponentUtil_ImportComponentByName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IComponentUtil_GetCLSIDs_Proxy(
    IComponentUtil __RPC_FAR * This,
               BSTR bstrDLLFile,
               BSTR bstrTypelibFile,
                SAFEARRAY __RPC_FAR * __RPC_FAR *aCLSIDs);
void __RPC_STUB IComponentUtil_GetCLSIDs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IPackageUtil;
    typedef struct IPackageUtilVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IPackageUtil __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IPackageUtil __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IPackageUtil __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )(
            IPackageUtil __RPC_FAR * This,
                        UINT __RPC_FAR *pctinfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )(
            IPackageUtil __RPC_FAR * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )(
            IPackageUtil __RPC_FAR * This,
                       REFIID riid,
                                LPOLESTR __RPC_FAR *rgszNames,
                       UINT cNames,
                       LCID lcid,
                                 DISPID __RPC_FAR *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )(
            IPackageUtil __RPC_FAR * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS __RPC_FAR *pDispParams,
                        VARIANT __RPC_FAR *pVarResult,
                        EXCEPINFO __RPC_FAR *pExcepInfo,
                        UINT __RPC_FAR *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InstallPackage )(
            IPackageUtil __RPC_FAR * This,
                       BSTR bstrPackageFile,
                       BSTR bstrInstallPath,
                       long lOptions);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ExportPackage )(
            IPackageUtil __RPC_FAR * This,
                       BSTR bstrPackageID,
                       BSTR bstrPackageFile,
                       long lOptions);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ShutdownPackage )(
            IPackageUtil __RPC_FAR * This,
                       BSTR bstrPackageID);
        END_INTERFACE
    } IPackageUtilVtbl;
    interface IPackageUtil
    {
        CONST_VTBL struct IPackageUtilVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
    (This)->lpVtbl -> InstallPackage(This,bstrPackageFile,bstrInstallPath,lOptions)
    (This)->lpVtbl -> ExportPackage(This,bstrPackageID,bstrPackageFile,lOptions)
    (This)->lpVtbl -> ShutdownPackage(This,bstrPackageID)
                       HRESULT STDMETHODCALLTYPE IPackageUtil_InstallPackage_Proxy(
    IPackageUtil __RPC_FAR * This,
               BSTR bstrPackageFile,
               BSTR bstrInstallPath,
               long lOptions);
void __RPC_STUB IPackageUtil_InstallPackage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IPackageUtil_ExportPackage_Proxy(
    IPackageUtil __RPC_FAR * This,
               BSTR bstrPackageID,
               BSTR bstrPackageFile,
               long lOptions);
void __RPC_STUB IPackageUtil_ExportPackage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IPackageUtil_ShutdownPackage_Proxy(
    IPackageUtil __RPC_FAR * This,
               BSTR bstrPackageID);
void __RPC_STUB IPackageUtil_ShutdownPackage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IRemoteComponentUtil;
    typedef struct IRemoteComponentUtilVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IRemoteComponentUtil __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IRemoteComponentUtil __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IRemoteComponentUtil __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )(
            IRemoteComponentUtil __RPC_FAR * This,
                        UINT __RPC_FAR *pctinfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )(
            IRemoteComponentUtil __RPC_FAR * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )(
            IRemoteComponentUtil __RPC_FAR * This,
                       REFIID riid,
                                LPOLESTR __RPC_FAR *rgszNames,
                       UINT cNames,
                       LCID lcid,
                                 DISPID __RPC_FAR *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )(
            IRemoteComponentUtil __RPC_FAR * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS __RPC_FAR *pDispParams,
                        VARIANT __RPC_FAR *pVarResult,
                        EXCEPINFO __RPC_FAR *pExcepInfo,
                        UINT __RPC_FAR *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InstallRemoteComponent )(
            IRemoteComponentUtil __RPC_FAR * This,
                       BSTR bstrServer,
                       BSTR bstrPackageID,
                       BSTR bstrCLSID);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InstallRemoteComponentByName )(
            IRemoteComponentUtil __RPC_FAR * This,
                       BSTR bstrServer,
                       BSTR bstrPackageName,
                       BSTR bstrProgID);
        END_INTERFACE
    } IRemoteComponentUtilVtbl;
    interface IRemoteComponentUtil
    {
        CONST_VTBL struct IRemoteComponentUtilVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
    (This)->lpVtbl -> InstallRemoteComponent(This,bstrServer,bstrPackageID,bstrCLSID)
    (This)->lpVtbl -> InstallRemoteComponentByName(This,bstrServer,bstrPackageName,bstrProgID)
                       HRESULT STDMETHODCALLTYPE IRemoteComponentUtil_InstallRemoteComponent_Proxy(
    IRemoteComponentUtil __RPC_FAR * This,
               BSTR bstrServer,
               BSTR bstrPackageID,
               BSTR bstrCLSID);
void __RPC_STUB IRemoteComponentUtil_InstallRemoteComponent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IRemoteComponentUtil_InstallRemoteComponentByName_Proxy(
    IRemoteComponentUtil __RPC_FAR * This,
               BSTR bstrServer,
               BSTR bstrPackageName,
               BSTR bstrProgID);
void __RPC_STUB IRemoteComponentUtil_InstallRemoteComponentByName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IRoleAssociationUtil;
    typedef struct IRoleAssociationUtilVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IRoleAssociationUtil __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IRoleAssociationUtil __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IRoleAssociationUtil __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )(
            IRoleAssociationUtil __RPC_FAR * This,
                        UINT __RPC_FAR *pctinfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )(
            IRoleAssociationUtil __RPC_FAR * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )(
            IRoleAssociationUtil __RPC_FAR * This,
                       REFIID riid,
                                LPOLESTR __RPC_FAR *rgszNames,
                       UINT cNames,
                       LCID lcid,
                                 DISPID __RPC_FAR *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )(
            IRoleAssociationUtil __RPC_FAR * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS __RPC_FAR *pDispParams,
                        VARIANT __RPC_FAR *pVarResult,
                        EXCEPINFO __RPC_FAR *pExcepInfo,
                        UINT __RPC_FAR *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AssociateRole )(
            IRoleAssociationUtil __RPC_FAR * This,
                       BSTR bstrRoleID);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AssociateRoleByName )(
            IRoleAssociationUtil __RPC_FAR * This,
                       BSTR bstrRoleName);
        END_INTERFACE
    } IRoleAssociationUtilVtbl;
    interface IRoleAssociationUtil
    {
        CONST_VTBL struct IRoleAssociationUtilVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
    (This)->lpVtbl -> AssociateRole(This,bstrRoleID)
    (This)->lpVtbl -> AssociateRoleByName(This,bstrRoleName)
                       HRESULT STDMETHODCALLTYPE IRoleAssociationUtil_AssociateRole_Proxy(
    IRoleAssociationUtil __RPC_FAR * This,
               BSTR bstrRoleID);
void __RPC_STUB IRoleAssociationUtil_AssociateRole_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IRoleAssociationUtil_AssociateRoleByName_Proxy(
    IRoleAssociationUtil __RPC_FAR * This,
               BSTR bstrRoleName);
void __RPC_STUB IRoleAssociationUtil_AssociateRoleByName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef
enum __MIDL___MIDL_itf_mtxadmin_0107_0001
    { mtsInstallUsers = 1
    } MTSPackageInstallOptions;
typedef
enum __MIDL___MIDL_itf_mtxadmin_0107_0002
    { mtsExportUsers = 1
    } MTSPackageExportOptions;
typedef
enum __MIDL___MIDL_itf_mtxadmin_0107_0003
    { mtsErrObjectErrors = 0x80110401,
 mtsErrObjectInvalid = 0x80110402,
 mtsErrKeyMissing = 0x80110403,
 mtsErrAlreadyInstalled = 0x80110404,
 mtsErrDownloadFailed = 0x80110405,
 mtsErrPDFWriteFail = 0x80110407,
 mtsErrPDFReadFail = 0x80110408,
 mtsErrPDFVersion = 0x80110409,
 mtsErrCoReqCompInstalled = 0x80110410,
 mtsErrBadPath = 0x8011040a,
 mtsErrPackageExists = 0x8011040b,
 mtsErrRoleExists = 0x8011040c,
 mtsErrCantCopyFile = 0x8011040d,
 mtsErrNoTypeLib = 0x8011040e,
 mtsErrNoUser = 0x8011040f,
 mtsErrInvalidUserids = 0x80110410,
 mtsErrNoRegistryCLSID = 0x80110411,
 mtsErrBadRegistryProgID = 0x80110412,
 mtsErrAuthenticationLevel = 0x80110413,
 mtsErrUserPasswdNotValid = 0x80110414,
 mtsErrNoRegistryRead = 0x80110415,
 mtsErrNoRegistryWrite = 0x80110416,
 mtsErrNoRegistryRepair = 0x80110417,
 mtsErrCLSIDOrIIDMismatch = 0x80110418,
 mtsErrRemoteInterface = 0x80110419,
 mtsErrDllRegisterServer = 0x8011041a,
 mtsErrNoServerShare = 0x8011041b,
 mtsErrNoAccessToUNC = 0x8011041c,
 mtsErrDllLoadFailed = 0x8011041d,
 mtsErrBadRegistryLibID = 0x8011041e,
 mtsErrPackDirNotFound = 0x8011041f,
 mtsErrTreatAs = 0x80110420,
 mtsErrBadForward = 0x80110421,
 mtsErrBadIID = 0x80110422,
 mtsErrRegistrarFailed = 0x80110423,
 mtsErrCompFileDoesNotExist = 0x80110424,
 mtsErrCompFileLoadDLLFail = 0x80110425,
 mtsErrCompFileGetClassObj = 0x80110426,
 mtsErrCompFileClassNotAvail = 0x80110427,
 mtsErrCompFileBadTLB = 0x80110428,
 mtsErrCompFileNotInstallable = 0x80110429,
 mtsErrNotChangeable = 0x8011042a,
 mtsErrNotDeletable = 0x8011042b,
 mtsErrSession = 0x8011042c,
 mtsErrCompFileNoRegistrar = 0x80110434
    } MTSAdminErrorCodes;
EXTERN_C const IID LIBID_MTSAdmin;
EXTERN_C const CLSID CLSID_Catalog;
class DECLSPEC_UUID("6eb22881-8a19-11d0-81b6-00a0c9231c29")
Catalog;
EXTERN_C const CLSID CLSID_CatalogObject;
class DECLSPEC_UUID("6eb22882-8a19-11d0-81b6-00a0c9231c29")
CatalogObject;
EXTERN_C const CLSID CLSID_CatalogCollection;
class DECLSPEC_UUID("6eb22883-8a19-11d0-81b6-00a0c9231c29")
CatalogCollection;
EXTERN_C const CLSID CLSID_ComponentUtil;
class DECLSPEC_UUID("6eb22884-8a19-11d0-81b6-00a0c9231c29")
ComponentUtil;
EXTERN_C const CLSID CLSID_PackageUtil;
class DECLSPEC_UUID("6eb22885-8a19-11d0-81b6-00a0c9231c29")
PackageUtil;
EXTERN_C const CLSID CLSID_RemoteComponentUtil;
class DECLSPEC_UUID("6eb22886-8a19-11d0-81b6-00a0c9231c29")
RemoteComponentUtil;
EXTERN_C const CLSID CLSID_RoleAssociationUtil;
class DECLSPEC_UUID("6eb22887-8a19-11d0-81b6-00a0c9231c29")
RoleAssociationUtil;
unsigned long __RPC_USER BSTR_UserSize( unsigned long __RPC_FAR *, unsigned long , BSTR __RPC_FAR * );
unsigned char __RPC_FAR * __RPC_USER BSTR_UserMarshal( unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * );
unsigned char __RPC_FAR * __RPC_USER BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * );
void __RPC_USER BSTR_UserFree( unsigned long __RPC_FAR *, BSTR __RPC_FAR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( unsigned long __RPC_FAR *, unsigned long , LPSAFEARRAY __RPC_FAR * );
unsigned char __RPC_FAR * __RPC_USER LPSAFEARRAY_UserMarshal( unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, LPSAFEARRAY __RPC_FAR * );
unsigned char __RPC_FAR * __RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, LPSAFEARRAY __RPC_FAR * );
void __RPC_USER LPSAFEARRAY_UserFree( unsigned long __RPC_FAR *, LPSAFEARRAY __RPC_FAR * );
unsigned long __RPC_USER VARIANT_UserSize( unsigned long __RPC_FAR *, unsigned long , VARIANT __RPC_FAR * );
unsigned char __RPC_FAR * __RPC_USER VARIANT_UserMarshal( unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * );
unsigned char __RPC_FAR * __RPC_USER VARIANT_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * );
void __RPC_USER VARIANT_UserFree( unsigned long __RPC_FAR *, VARIANT __RPC_FAR * );
}
