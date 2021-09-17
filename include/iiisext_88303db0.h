#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IISApplicationPool IISApplicationPool;
typedef interface IISApplicationPools IISApplicationPools;
typedef interface IISWebService IISWebService;
typedef interface IISDsCrMap IISDsCrMap;
typedef interface IISApp IISApp;
typedef interface IISApp2 IISApp2;
typedef interface IISApp3 IISApp3;
typedef interface IISComputer IISComputer;
typedef interface IISComputer2 IISComputer2;
typedef class IISExtComputer IISExtComputer;
typedef class IISExtApp IISExtApp;
typedef class IISExtServer IISExtServer;
typedef class IISExtDsCrMap IISExtDsCrMap;
typedef class IISExtApplicationPool IISExtApplicationPool;
typedef class IISExtApplicationPools IISExtApplicationPools;
typedef class IISExtWebService IISExtWebService;
extern "C"{
void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * );
EXTERN_C const IID LIBID_IISExt;
EXTERN_C const IID IID_IISApplicationPool;
    typedef struct IISApplicationPoolVtbl
    {
        BEGIN_INTERFACE
                                             HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IISApplicationPool * This,
                                    struct GUID *riid,
                                     void **ppvObj,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *AddRef )(
            IISApplicationPool * This,
                                unsigned long *retval);
                                             HRESULT ( STDMETHODCALLTYPE *Release )(
            IISApplicationPool * This,
                                unsigned long *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IISApplicationPool * This,
                                     unsigned UINT *pctinfo,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IISApplicationPool * This,
                                    unsigned UINT itinfo,
                                    unsigned long lcid,
                                     void **pptinfo,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IISApplicationPool * This,
                                    struct GUID *riid,
                                    signed char **rgszNames,
                                    unsigned UINT cNames,
                                    unsigned long lcid,
                                     signed long *rgdispid,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IISApplicationPool * This,
                                    signed long dispidMember,
                                    struct GUID *riid,
                                    unsigned long lcid,
                                    unsigned short wFlags,
                                    struct DISPPARAMS *pdispparams,
                                     VARIANT *pvarResult,
                                     struct EXCEPINFO *pexcepinfo,
                                     unsigned UINT *puArgErr,
                                void *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Name )(
            IISApplicationPool * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Class )(
            IISApplicationPool * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            IISApplicationPool * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            IISApplicationPool * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            IISApplicationPool * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            IISApplicationPool * This,
                                BSTR *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            IISApplicationPool * This,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            IISApplicationPool * This,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *Get )(
            IISApplicationPool * This,
                                    BSTR bstrName,
                                VARIANT *retval);
                                 HRESULT ( STDMETHODCALLTYPE *Put )(
            IISApplicationPool * This,
                                    BSTR bstrName,
                                    VARIANT vProp,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetEx )(
            IISApplicationPool * This,
                                    BSTR bstrName,
                                VARIANT *retval);
                                 HRESULT ( STDMETHODCALLTYPE *PutEx )(
            IISApplicationPool * This,
                                    signed long lnControlCode,
                                    BSTR bstrName,
                                    VARIANT vProp,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            IISApplicationPool * This,
                                    VARIANT vProperties,
                                    signed long lnReserved,
                                void *retval);
                   HRESULT ( STDMETHODCALLTYPE *Recycle )(
            IISApplicationPool * This);
                   HRESULT ( STDMETHODCALLTYPE *EnumAppsInPool )(
            IISApplicationPool * This,
                                VARIANT *bstrBuffer);
                   HRESULT ( STDMETHODCALLTYPE *Start )(
            IISApplicationPool * This);
                   HRESULT ( STDMETHODCALLTYPE *Stop )(
            IISApplicationPool * This);
        END_INTERFACE
    } IISApplicationPoolVtbl;
    interface IISApplicationPool
    {
        CONST_VTBL struct IISApplicationPoolVtbl *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval)
    (This)->lpVtbl -> AddRef(This,retval)
    (This)->lpVtbl -> Release(This,retval)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval)
    (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)
    (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)
    (This)->lpVtbl -> get_Name(This,retval)
    (This)->lpVtbl -> get_Class(This,retval)
    (This)->lpVtbl -> get_GUID(This,retval)
    (This)->lpVtbl -> get_ADsPath(This,retval)
    (This)->lpVtbl -> get_Parent(This,retval)
    (This)->lpVtbl -> get_Schema(This,retval)
    (This)->lpVtbl -> GetInfo(This,retval)
    (This)->lpVtbl -> SetInfo(This,retval)
    (This)->lpVtbl -> Get(This,bstrName,retval)
    (This)->lpVtbl -> Put(This,bstrName,vProp,retval)
    (This)->lpVtbl -> GetEx(This,bstrName,retval)
    (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp,retval)
    (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved,retval)
    (This)->lpVtbl -> Recycle(This)
    (This)->lpVtbl -> EnumAppsInPool(This,bstrBuffer)
    (This)->lpVtbl -> Start(This)
    (This)->lpVtbl -> Stop(This)
           HRESULT STDMETHODCALLTYPE IISApplicationPool_Recycle_Proxy(
    IISApplicationPool * This);
void __RPC_STUB IISApplicationPool_Recycle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISApplicationPool_EnumAppsInPool_Proxy(
    IISApplicationPool * This,
                        VARIANT *bstrBuffer);
void __RPC_STUB IISApplicationPool_EnumAppsInPool_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISApplicationPool_Start_Proxy(
    IISApplicationPool * This);
void __RPC_STUB IISApplicationPool_Start_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISApplicationPool_Stop_Proxy(
    IISApplicationPool * This);
void __RPC_STUB IISApplicationPool_Stop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IISApplicationPools;
    typedef struct IISApplicationPoolsVtbl
    {
        BEGIN_INTERFACE
                                             HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IISApplicationPools * This,
                                    struct GUID *riid,
                                     void **ppvObj,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *AddRef )(
            IISApplicationPools * This,
                                unsigned long *retval);
                                             HRESULT ( STDMETHODCALLTYPE *Release )(
            IISApplicationPools * This,
                                unsigned long *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IISApplicationPools * This,
                                     unsigned UINT *pctinfo,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IISApplicationPools * This,
                                    unsigned UINT itinfo,
                                    unsigned long lcid,
                                     void **pptinfo,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IISApplicationPools * This,
                                    struct GUID *riid,
                                    signed char **rgszNames,
                                    unsigned UINT cNames,
                                    unsigned long lcid,
                                     signed long *rgdispid,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IISApplicationPools * This,
                                    signed long dispidMember,
                                    struct GUID *riid,
                                    unsigned long lcid,
                                    unsigned short wFlags,
                                    struct DISPPARAMS *pdispparams,
                                     VARIANT *pvarResult,
                                     struct EXCEPINFO *pexcepinfo,
                                     unsigned UINT *puArgErr,
                                void *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Name )(
            IISApplicationPools * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Class )(
            IISApplicationPools * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            IISApplicationPools * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            IISApplicationPools * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            IISApplicationPools * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            IISApplicationPools * This,
                                BSTR *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            IISApplicationPools * This,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            IISApplicationPools * This,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *Get )(
            IISApplicationPools * This,
                                    BSTR bstrName,
                                VARIANT *retval);
                                 HRESULT ( STDMETHODCALLTYPE *Put )(
            IISApplicationPools * This,
                                    BSTR bstrName,
                                    VARIANT vProp,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetEx )(
            IISApplicationPools * This,
                                    BSTR bstrName,
                                VARIANT *retval);
                                 HRESULT ( STDMETHODCALLTYPE *PutEx )(
            IISApplicationPools * This,
                                    signed long lnControlCode,
                                    BSTR bstrName,
                                    VARIANT vProp,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            IISApplicationPools * This,
                                    VARIANT vProperties,
                                    signed long lnReserved,
                                void *retval);
        END_INTERFACE
    } IISApplicationPoolsVtbl;
    interface IISApplicationPools
    {
        CONST_VTBL struct IISApplicationPoolsVtbl *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval)
    (This)->lpVtbl -> AddRef(This,retval)
    (This)->lpVtbl -> Release(This,retval)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval)
    (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)
    (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)
    (This)->lpVtbl -> get_Name(This,retval)
    (This)->lpVtbl -> get_Class(This,retval)
    (This)->lpVtbl -> get_GUID(This,retval)
    (This)->lpVtbl -> get_ADsPath(This,retval)
    (This)->lpVtbl -> get_Parent(This,retval)
    (This)->lpVtbl -> get_Schema(This,retval)
    (This)->lpVtbl -> GetInfo(This,retval)
    (This)->lpVtbl -> SetInfo(This,retval)
    (This)->lpVtbl -> Get(This,bstrName,retval)
    (This)->lpVtbl -> Put(This,bstrName,vProp,retval)
    (This)->lpVtbl -> GetEx(This,bstrName,retval)
    (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp,retval)
    (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved,retval)
EXTERN_C const IID IID_IISWebService;
    typedef struct IISWebServiceVtbl
    {
        BEGIN_INTERFACE
                                             HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IISWebService * This,
                                    struct GUID *riid,
                                     void **ppvObj,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *AddRef )(
            IISWebService * This,
                                unsigned long *retval);
                                             HRESULT ( STDMETHODCALLTYPE *Release )(
            IISWebService * This,
                                unsigned long *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IISWebService * This,
                                     unsigned UINT *pctinfo,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IISWebService * This,
                                    unsigned UINT itinfo,
                                    unsigned long lcid,
                                     void **pptinfo,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IISWebService * This,
                                    struct GUID *riid,
                                    signed char **rgszNames,
                                    unsigned UINT cNames,
                                    unsigned long lcid,
                                     signed long *rgdispid,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IISWebService * This,
                                    signed long dispidMember,
                                    struct GUID *riid,
                                    unsigned long lcid,
                                    unsigned short wFlags,
                                    struct DISPPARAMS *pdispparams,
                                     VARIANT *pvarResult,
                                     struct EXCEPINFO *pexcepinfo,
                                     unsigned UINT *puArgErr,
                                void *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Name )(
            IISWebService * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Class )(
            IISWebService * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            IISWebService * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            IISWebService * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            IISWebService * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            IISWebService * This,
                                BSTR *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            IISWebService * This,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            IISWebService * This,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *Get )(
            IISWebService * This,
                                    BSTR bstrName,
                                VARIANT *retval);
                                 HRESULT ( STDMETHODCALLTYPE *Put )(
            IISWebService * This,
                                    BSTR bstrName,
                                    VARIANT vProp,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetEx )(
            IISWebService * This,
                                    BSTR bstrName,
                                VARIANT *retval);
                                 HRESULT ( STDMETHODCALLTYPE *PutEx )(
            IISWebService * This,
                                    signed long lnControlCode,
                                    BSTR bstrName,
                                    VARIANT vProp,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            IISWebService * This,
                                    VARIANT vProperties,
                                    signed long lnReserved,
                                void *retval);
                   HRESULT ( STDMETHODCALLTYPE *GetCurrentMode )(
            IISWebService * This,
                                VARIANT *pvServerMode);
                   HRESULT ( STDMETHODCALLTYPE *CreateNewSite )(
            IISWebService * This,
                       BSTR bstrServerComment,
                       VARIANT *pvServerBindings,
                       BSTR bstrRootVDirPath,
                                     VARIANT vServerID,
                                VARIANT *pvActualID);
                   HRESULT ( STDMETHODCALLTYPE *EnableApplication )(
            IISWebService * This,
                       BSTR bstrAppName);
                   HRESULT ( STDMETHODCALLTYPE *RemoveApplication )(
            IISWebService * This,
                       BSTR bstrAppName);
                   HRESULT ( STDMETHODCALLTYPE *ListApplications )(
            IISWebService * This,
                                VARIANT *bstrBuffer);
                   HRESULT ( STDMETHODCALLTYPE *AddDependency )(
            IISWebService * This,
                       BSTR bstrApplication,
                       BSTR bstrGroupID);
                   HRESULT ( STDMETHODCALLTYPE *RemoveDependency )(
            IISWebService * This,
                       BSTR bstrApplication,
                       BSTR bstrGroupID);
                   HRESULT ( STDMETHODCALLTYPE *EnableWebServiceExtension )(
            IISWebService * This,
                       BSTR bstrExtension);
                   HRESULT ( STDMETHODCALLTYPE *DisableWebServiceExtension )(
            IISWebService * This,
                       BSTR bstrExtension);
                   HRESULT ( STDMETHODCALLTYPE *ListWebServiceExtensions )(
            IISWebService * This,
                                VARIANT *bstrBuffer);
                   HRESULT ( STDMETHODCALLTYPE *EnableExtensionFile )(
            IISWebService * This,
                       BSTR bstrExtensionFile);
                   HRESULT ( STDMETHODCALLTYPE *DisableExtensionFile )(
            IISWebService * This,
                       BSTR bstrExtensionFile);
                   HRESULT ( STDMETHODCALLTYPE *AddExtensionFile )(
            IISWebService * This,
                       BSTR bstrExtensionFile,
                       VARIANT bAccess,
                       BSTR bstrGroupID,
                       VARIANT bCanDelete,
                       BSTR bstrDescription);
                   HRESULT ( STDMETHODCALLTYPE *DeleteExtensionFileRecord )(
            IISWebService * This,
                       BSTR bstrExtensionFile);
                   HRESULT ( STDMETHODCALLTYPE *ListExtensionFiles )(
            IISWebService * This,
                                VARIANT *bstrBuffer);
                   HRESULT ( STDMETHODCALLTYPE *QueryGroupIDStatus )(
            IISWebService * This,
                       BSTR bstrGroupID,
                                VARIANT *bstrBuffer);
        END_INTERFACE
    } IISWebServiceVtbl;
    interface IISWebService
    {
        CONST_VTBL struct IISWebServiceVtbl *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval)
    (This)->lpVtbl -> AddRef(This,retval)
    (This)->lpVtbl -> Release(This,retval)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval)
    (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)
    (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)
    (This)->lpVtbl -> get_Name(This,retval)
    (This)->lpVtbl -> get_Class(This,retval)
    (This)->lpVtbl -> get_GUID(This,retval)
    (This)->lpVtbl -> get_ADsPath(This,retval)
    (This)->lpVtbl -> get_Parent(This,retval)
    (This)->lpVtbl -> get_Schema(This,retval)
    (This)->lpVtbl -> GetInfo(This,retval)
    (This)->lpVtbl -> SetInfo(This,retval)
    (This)->lpVtbl -> Get(This,bstrName,retval)
    (This)->lpVtbl -> Put(This,bstrName,vProp,retval)
    (This)->lpVtbl -> GetEx(This,bstrName,retval)
    (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp,retval)
    (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved,retval)
    (This)->lpVtbl -> GetCurrentMode(This,pvServerMode)
    (This)->lpVtbl -> CreateNewSite(This,bstrServerComment,pvServerBindings,bstrRootVDirPath,vServerID,pvActualID)
    (This)->lpVtbl -> EnableApplication(This,bstrAppName)
    (This)->lpVtbl -> RemoveApplication(This,bstrAppName)
    (This)->lpVtbl -> ListApplications(This,bstrBuffer)
    (This)->lpVtbl -> AddDependency(This,bstrApplication,bstrGroupID)
    (This)->lpVtbl -> RemoveDependency(This,bstrApplication,bstrGroupID)
    (This)->lpVtbl -> EnableWebServiceExtension(This,bstrExtension)
    (This)->lpVtbl -> DisableWebServiceExtension(This,bstrExtension)
    (This)->lpVtbl -> ListWebServiceExtensions(This,bstrBuffer)
    (This)->lpVtbl -> EnableExtensionFile(This,bstrExtensionFile)
    (This)->lpVtbl -> DisableExtensionFile(This,bstrExtensionFile)
    (This)->lpVtbl -> AddExtensionFile(This,bstrExtensionFile,bAccess,bstrGroupID,bCanDelete,bstrDescription)
    (This)->lpVtbl -> DeleteExtensionFileRecord(This,bstrExtensionFile)
    (This)->lpVtbl -> ListExtensionFiles(This,bstrBuffer)
    (This)->lpVtbl -> QueryGroupIDStatus(This,bstrGroupID,bstrBuffer)
           HRESULT STDMETHODCALLTYPE IISWebService_GetCurrentMode_Proxy(
    IISWebService * This,
                        VARIANT *pvServerMode);
void __RPC_STUB IISWebService_GetCurrentMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISWebService_CreateNewSite_Proxy(
    IISWebService * This,
               BSTR bstrServerComment,
               VARIANT *pvServerBindings,
               BSTR bstrRootVDirPath,
                             VARIANT vServerID,
                        VARIANT *pvActualID);
void __RPC_STUB IISWebService_CreateNewSite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISWebService_EnableApplication_Proxy(
    IISWebService * This,
               BSTR bstrAppName);
void __RPC_STUB IISWebService_EnableApplication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISWebService_RemoveApplication_Proxy(
    IISWebService * This,
               BSTR bstrAppName);
void __RPC_STUB IISWebService_RemoveApplication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISWebService_ListApplications_Proxy(
    IISWebService * This,
                        VARIANT *bstrBuffer);
void __RPC_STUB IISWebService_ListApplications_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISWebService_AddDependency_Proxy(
    IISWebService * This,
               BSTR bstrApplication,
               BSTR bstrGroupID);
void __RPC_STUB IISWebService_AddDependency_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISWebService_RemoveDependency_Proxy(
    IISWebService * This,
               BSTR bstrApplication,
               BSTR bstrGroupID);
void __RPC_STUB IISWebService_RemoveDependency_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISWebService_EnableWebServiceExtension_Proxy(
    IISWebService * This,
               BSTR bstrExtension);
void __RPC_STUB IISWebService_EnableWebServiceExtension_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISWebService_DisableWebServiceExtension_Proxy(
    IISWebService * This,
               BSTR bstrExtension);
void __RPC_STUB IISWebService_DisableWebServiceExtension_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISWebService_ListWebServiceExtensions_Proxy(
    IISWebService * This,
                        VARIANT *bstrBuffer);
void __RPC_STUB IISWebService_ListWebServiceExtensions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISWebService_EnableExtensionFile_Proxy(
    IISWebService * This,
               BSTR bstrExtensionFile);
void __RPC_STUB IISWebService_EnableExtensionFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISWebService_DisableExtensionFile_Proxy(
    IISWebService * This,
               BSTR bstrExtensionFile);
void __RPC_STUB IISWebService_DisableExtensionFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISWebService_AddExtensionFile_Proxy(
    IISWebService * This,
               BSTR bstrExtensionFile,
               VARIANT bAccess,
               BSTR bstrGroupID,
               VARIANT bCanDelete,
               BSTR bstrDescription);
void __RPC_STUB IISWebService_AddExtensionFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISWebService_DeleteExtensionFileRecord_Proxy(
    IISWebService * This,
               BSTR bstrExtensionFile);
void __RPC_STUB IISWebService_DeleteExtensionFileRecord_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISWebService_ListExtensionFiles_Proxy(
    IISWebService * This,
                        VARIANT *bstrBuffer);
void __RPC_STUB IISWebService_ListExtensionFiles_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISWebService_QueryGroupIDStatus_Proxy(
    IISWebService * This,
               BSTR bstrGroupID,
                        VARIANT *bstrBuffer);
void __RPC_STUB IISWebService_QueryGroupIDStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IISDsCrMap;
    typedef struct IISDsCrMapVtbl
    {
        BEGIN_INTERFACE
                                             HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IISDsCrMap * This,
                                    struct GUID *riid,
                                     void **ppvObj,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *AddRef )(
            IISDsCrMap * This,
                                unsigned long *retval);
                                             HRESULT ( STDMETHODCALLTYPE *Release )(
            IISDsCrMap * This,
                                unsigned long *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IISDsCrMap * This,
                                     unsigned UINT *pctinfo,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IISDsCrMap * This,
                                    unsigned UINT itinfo,
                                    unsigned long lcid,
                                     void **pptinfo,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IISDsCrMap * This,
                                    struct GUID *riid,
                                    signed char **rgszNames,
                                    unsigned UINT cNames,
                                    unsigned long lcid,
                                     signed long *rgdispid,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IISDsCrMap * This,
                                    signed long dispidMember,
                                    struct GUID *riid,
                                    unsigned long lcid,
                                    unsigned short wFlags,
                                    struct DISPPARAMS *pdispparams,
                                     VARIANT *pvarResult,
                                     struct EXCEPINFO *pexcepinfo,
                                     unsigned UINT *puArgErr,
                                void *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Name )(
            IISDsCrMap * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Class )(
            IISDsCrMap * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            IISDsCrMap * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            IISDsCrMap * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            IISDsCrMap * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            IISDsCrMap * This,
                                BSTR *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            IISDsCrMap * This,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            IISDsCrMap * This,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *Get )(
            IISDsCrMap * This,
                                    BSTR bstrName,
                                VARIANT *retval);
                                 HRESULT ( STDMETHODCALLTYPE *Put )(
            IISDsCrMap * This,
                                    BSTR bstrName,
                                    VARIANT vProp,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetEx )(
            IISDsCrMap * This,
                                    BSTR bstrName,
                                VARIANT *retval);
                                 HRESULT ( STDMETHODCALLTYPE *PutEx )(
            IISDsCrMap * This,
                                    signed long lnControlCode,
                                    BSTR bstrName,
                                    VARIANT vProp,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            IISDsCrMap * This,
                                    VARIANT vProperties,
                                    signed long lnReserved,
                                void *retval);
                   HRESULT ( STDMETHODCALLTYPE *CreateMapping )(
            IISDsCrMap * This,
                       VARIANT vCert,
                       BSTR bstrNtAcct,
                       BSTR bstrNtPwd,
                       BSTR bstrName,
                       LONG lEnabled);
                   HRESULT ( STDMETHODCALLTYPE *GetMapping )(
            IISDsCrMap * This,
                       LONG lMethod,
                       VARIANT vKey,
                        VARIANT *pvCert,
                        VARIANT *pbstrNtAcct,
                        VARIANT *pbstrNtPwd,
                        VARIANT *pbstrName,
                        VARIANT *plEnabled);
                   HRESULT ( STDMETHODCALLTYPE *DeleteMapping )(
            IISDsCrMap * This,
                       LONG lMethod,
                       VARIANT vKey);
                   HRESULT ( STDMETHODCALLTYPE *SetEnabled )(
            IISDsCrMap * This,
                       LONG lMethod,
                       VARIANT vKey,
                       LONG lEnabled);
                   HRESULT ( STDMETHODCALLTYPE *SetName )(
            IISDsCrMap * This,
                       LONG lMethod,
                       VARIANT vKey,
                       BSTR bstrName);
                   HRESULT ( STDMETHODCALLTYPE *SetPwd )(
            IISDsCrMap * This,
                       LONG lMethod,
                       VARIANT vKey,
                       BSTR bstrPwd);
                   HRESULT ( STDMETHODCALLTYPE *SetAcct )(
            IISDsCrMap * This,
                       LONG lMethod,
                       VARIANT vKey,
                       BSTR bstrAcct);
        END_INTERFACE
    } IISDsCrMapVtbl;
    interface IISDsCrMap
    {
        CONST_VTBL struct IISDsCrMapVtbl *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval)
    (This)->lpVtbl -> AddRef(This,retval)
    (This)->lpVtbl -> Release(This,retval)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval)
    (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)
    (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)
    (This)->lpVtbl -> get_Name(This,retval)
    (This)->lpVtbl -> get_Class(This,retval)
    (This)->lpVtbl -> get_GUID(This,retval)
    (This)->lpVtbl -> get_ADsPath(This,retval)
    (This)->lpVtbl -> get_Parent(This,retval)
    (This)->lpVtbl -> get_Schema(This,retval)
    (This)->lpVtbl -> GetInfo(This,retval)
    (This)->lpVtbl -> SetInfo(This,retval)
    (This)->lpVtbl -> Get(This,bstrName,retval)
    (This)->lpVtbl -> Put(This,bstrName,vProp,retval)
    (This)->lpVtbl -> GetEx(This,bstrName,retval)
    (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp,retval)
    (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved,retval)
    (This)->lpVtbl -> CreateMapping(This,vCert,bstrNtAcct,bstrNtPwd,bstrName,lEnabled)
    (This)->lpVtbl -> GetMapping(This,lMethod,vKey,pvCert,pbstrNtAcct,pbstrNtPwd,pbstrName,plEnabled)
    (This)->lpVtbl -> DeleteMapping(This,lMethod,vKey)
    (This)->lpVtbl -> SetEnabled(This,lMethod,vKey,lEnabled)
    (This)->lpVtbl -> SetName(This,lMethod,vKey,bstrName)
    (This)->lpVtbl -> SetPwd(This,lMethod,vKey,bstrPwd)
    (This)->lpVtbl -> SetAcct(This,lMethod,vKey,bstrAcct)
           HRESULT STDMETHODCALLTYPE IISDsCrMap_CreateMapping_Proxy(
    IISDsCrMap * This,
               VARIANT vCert,
               BSTR bstrNtAcct,
               BSTR bstrNtPwd,
               BSTR bstrName,
               LONG lEnabled);
void __RPC_STUB IISDsCrMap_CreateMapping_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISDsCrMap_GetMapping_Proxy(
    IISDsCrMap * This,
               LONG lMethod,
               VARIANT vKey,
                VARIANT *pvCert,
                VARIANT *pbstrNtAcct,
                VARIANT *pbstrNtPwd,
                VARIANT *pbstrName,
                VARIANT *plEnabled);
void __RPC_STUB IISDsCrMap_GetMapping_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISDsCrMap_DeleteMapping_Proxy(
    IISDsCrMap * This,
               LONG lMethod,
               VARIANT vKey);
void __RPC_STUB IISDsCrMap_DeleteMapping_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISDsCrMap_SetEnabled_Proxy(
    IISDsCrMap * This,
               LONG lMethod,
               VARIANT vKey,
               LONG lEnabled);
void __RPC_STUB IISDsCrMap_SetEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISDsCrMap_SetName_Proxy(
    IISDsCrMap * This,
               LONG lMethod,
               VARIANT vKey,
               BSTR bstrName);
void __RPC_STUB IISDsCrMap_SetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISDsCrMap_SetPwd_Proxy(
    IISDsCrMap * This,
               LONG lMethod,
               VARIANT vKey,
               BSTR bstrPwd);
void __RPC_STUB IISDsCrMap_SetPwd_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISDsCrMap_SetAcct_Proxy(
    IISDsCrMap * This,
               LONG lMethod,
               VARIANT vKey,
               BSTR bstrAcct);
void __RPC_STUB IISDsCrMap_SetAcct_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IISApp;
    typedef struct IISAppVtbl
    {
        BEGIN_INTERFACE
                                             HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IISApp * This,
                                    struct GUID *riid,
                                     void **ppvObj,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *AddRef )(
            IISApp * This,
                                unsigned long *retval);
                                             HRESULT ( STDMETHODCALLTYPE *Release )(
            IISApp * This,
                                unsigned long *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IISApp * This,
                                     unsigned UINT *pctinfo,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IISApp * This,
                                    unsigned UINT itinfo,
                                    unsigned long lcid,
                                     void **pptinfo,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IISApp * This,
                                    struct GUID *riid,
                                    signed char **rgszNames,
                                    unsigned UINT cNames,
                                    unsigned long lcid,
                                     signed long *rgdispid,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IISApp * This,
                                    signed long dispidMember,
                                    struct GUID *riid,
                                    unsigned long lcid,
                                    unsigned short wFlags,
                                    struct DISPPARAMS *pdispparams,
                                     VARIANT *pvarResult,
                                     struct EXCEPINFO *pexcepinfo,
                                     unsigned UINT *puArgErr,
                                void *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Name )(
            IISApp * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Class )(
            IISApp * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            IISApp * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            IISApp * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            IISApp * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            IISApp * This,
                                BSTR *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            IISApp * This,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            IISApp * This,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *Get )(
            IISApp * This,
                                    BSTR bstrName,
                                VARIANT *retval);
                                 HRESULT ( STDMETHODCALLTYPE *Put )(
            IISApp * This,
                                    BSTR bstrName,
                                    VARIANT vProp,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetEx )(
            IISApp * This,
                                    BSTR bstrName,
                                VARIANT *retval);
                                 HRESULT ( STDMETHODCALLTYPE *PutEx )(
            IISApp * This,
                                    signed long lnControlCode,
                                    BSTR bstrName,
                                    VARIANT vProp,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            IISApp * This,
                                    VARIANT vProperties,
                                    signed long lnReserved,
                                void *retval);
                   HRESULT ( STDMETHODCALLTYPE *AppCreate )(
            IISApp * This,
                       VARIANT_BOOL bSetInProcFlag);
                   HRESULT ( STDMETHODCALLTYPE *AppDelete )(
            IISApp * This);
                   HRESULT ( STDMETHODCALLTYPE *AppDeleteRecursive )(
            IISApp * This);
                   HRESULT ( STDMETHODCALLTYPE *AppUnLoad )(
            IISApp * This);
                   HRESULT ( STDMETHODCALLTYPE *AppUnLoadRecursive )(
            IISApp * This);
                   HRESULT ( STDMETHODCALLTYPE *AppDisable )(
            IISApp * This);
                   HRESULT ( STDMETHODCALLTYPE *AppDisableRecursive )(
            IISApp * This);
                   HRESULT ( STDMETHODCALLTYPE *AppEnable )(
            IISApp * This);
                   HRESULT ( STDMETHODCALLTYPE *AppEnableRecursive )(
            IISApp * This);
                   HRESULT ( STDMETHODCALLTYPE *AppGetStatus )(
            IISApp * This,
                        DWORD *pdwStatus);
                   HRESULT ( STDMETHODCALLTYPE *AspAppRestart )(
            IISApp * This);
        END_INTERFACE
    } IISAppVtbl;
    interface IISApp
    {
        CONST_VTBL struct IISAppVtbl *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval)
    (This)->lpVtbl -> AddRef(This,retval)
    (This)->lpVtbl -> Release(This,retval)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval)
    (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)
    (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)
    (This)->lpVtbl -> get_Name(This,retval)
    (This)->lpVtbl -> get_Class(This,retval)
    (This)->lpVtbl -> get_GUID(This,retval)
    (This)->lpVtbl -> get_ADsPath(This,retval)
    (This)->lpVtbl -> get_Parent(This,retval)
    (This)->lpVtbl -> get_Schema(This,retval)
    (This)->lpVtbl -> GetInfo(This,retval)
    (This)->lpVtbl -> SetInfo(This,retval)
    (This)->lpVtbl -> Get(This,bstrName,retval)
    (This)->lpVtbl -> Put(This,bstrName,vProp,retval)
    (This)->lpVtbl -> GetEx(This,bstrName,retval)
    (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp,retval)
    (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved,retval)
    (This)->lpVtbl -> AppCreate(This,bSetInProcFlag)
    (This)->lpVtbl -> AppDelete(This)
    (This)->lpVtbl -> AppDeleteRecursive(This)
    (This)->lpVtbl -> AppUnLoad(This)
    (This)->lpVtbl -> AppUnLoadRecursive(This)
    (This)->lpVtbl -> AppDisable(This)
    (This)->lpVtbl -> AppDisableRecursive(This)
    (This)->lpVtbl -> AppEnable(This)
    (This)->lpVtbl -> AppEnableRecursive(This)
    (This)->lpVtbl -> AppGetStatus(This,pdwStatus)
    (This)->lpVtbl -> AspAppRestart(This)
           HRESULT STDMETHODCALLTYPE IISApp_AppCreate_Proxy(
    IISApp * This,
               VARIANT_BOOL bSetInProcFlag);
void __RPC_STUB IISApp_AppCreate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISApp_AppDelete_Proxy(
    IISApp * This);
void __RPC_STUB IISApp_AppDelete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISApp_AppDeleteRecursive_Proxy(
    IISApp * This);
void __RPC_STUB IISApp_AppDeleteRecursive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISApp_AppUnLoad_Proxy(
    IISApp * This);
void __RPC_STUB IISApp_AppUnLoad_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISApp_AppUnLoadRecursive_Proxy(
    IISApp * This);
void __RPC_STUB IISApp_AppUnLoadRecursive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISApp_AppDisable_Proxy(
    IISApp * This);
void __RPC_STUB IISApp_AppDisable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISApp_AppDisableRecursive_Proxy(
    IISApp * This);
void __RPC_STUB IISApp_AppDisableRecursive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISApp_AppEnable_Proxy(
    IISApp * This);
void __RPC_STUB IISApp_AppEnable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISApp_AppEnableRecursive_Proxy(
    IISApp * This);
void __RPC_STUB IISApp_AppEnableRecursive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISApp_AppGetStatus_Proxy(
    IISApp * This,
                DWORD *pdwStatus);
void __RPC_STUB IISApp_AppGetStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISApp_AspAppRestart_Proxy(
    IISApp * This);
void __RPC_STUB IISApp_AspAppRestart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IISApp2;
    typedef struct IISApp2Vtbl
    {
        BEGIN_INTERFACE
                                             HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IISApp2 * This,
                                    struct GUID *riid,
                                     void **ppvObj,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *AddRef )(
            IISApp2 * This,
                                unsigned long *retval);
                                             HRESULT ( STDMETHODCALLTYPE *Release )(
            IISApp2 * This,
                                unsigned long *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IISApp2 * This,
                                     unsigned UINT *pctinfo,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IISApp2 * This,
                                    unsigned UINT itinfo,
                                    unsigned long lcid,
                                     void **pptinfo,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IISApp2 * This,
                                    struct GUID *riid,
                                    signed char **rgszNames,
                                    unsigned UINT cNames,
                                    unsigned long lcid,
                                     signed long *rgdispid,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IISApp2 * This,
                                    signed long dispidMember,
                                    struct GUID *riid,
                                    unsigned long lcid,
                                    unsigned short wFlags,
                                    struct DISPPARAMS *pdispparams,
                                     VARIANT *pvarResult,
                                     struct EXCEPINFO *pexcepinfo,
                                     unsigned UINT *puArgErr,
                                void *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Name )(
            IISApp2 * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Class )(
            IISApp2 * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            IISApp2 * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            IISApp2 * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            IISApp2 * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            IISApp2 * This,
                                BSTR *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            IISApp2 * This,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            IISApp2 * This,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *Get )(
            IISApp2 * This,
                                    BSTR bstrName,
                                VARIANT *retval);
                                 HRESULT ( STDMETHODCALLTYPE *Put )(
            IISApp2 * This,
                                    BSTR bstrName,
                                    VARIANT vProp,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetEx )(
            IISApp2 * This,
                                    BSTR bstrName,
                                VARIANT *retval);
                                 HRESULT ( STDMETHODCALLTYPE *PutEx )(
            IISApp2 * This,
                                    signed long lnControlCode,
                                    BSTR bstrName,
                                    VARIANT vProp,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            IISApp2 * This,
                                    VARIANT vProperties,
                                    signed long lnReserved,
                                void *retval);
                   HRESULT ( STDMETHODCALLTYPE *AppCreate )(
            IISApp2 * This,
                       VARIANT_BOOL bSetInProcFlag);
                   HRESULT ( STDMETHODCALLTYPE *AppDelete )(
            IISApp2 * This);
                   HRESULT ( STDMETHODCALLTYPE *AppDeleteRecursive )(
            IISApp2 * This);
                   HRESULT ( STDMETHODCALLTYPE *AppUnLoad )(
            IISApp2 * This);
                   HRESULT ( STDMETHODCALLTYPE *AppUnLoadRecursive )(
            IISApp2 * This);
                   HRESULT ( STDMETHODCALLTYPE *AppDisable )(
            IISApp2 * This);
                   HRESULT ( STDMETHODCALLTYPE *AppDisableRecursive )(
            IISApp2 * This);
                   HRESULT ( STDMETHODCALLTYPE *AppEnable )(
            IISApp2 * This);
                   HRESULT ( STDMETHODCALLTYPE *AppEnableRecursive )(
            IISApp2 * This);
                   HRESULT ( STDMETHODCALLTYPE *AppGetStatus )(
            IISApp2 * This,
                        DWORD *pdwStatus);
                   HRESULT ( STDMETHODCALLTYPE *AspAppRestart )(
            IISApp2 * This);
                   HRESULT ( STDMETHODCALLTYPE *AppCreate2 )(
            IISApp2 * This,
                       LONG lAppMode);
                   HRESULT ( STDMETHODCALLTYPE *AppGetStatus2 )(
            IISApp2 * This,
                                LONG *lpStatus);
        END_INTERFACE
    } IISApp2Vtbl;
    interface IISApp2
    {
        CONST_VTBL struct IISApp2Vtbl *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval)
    (This)->lpVtbl -> AddRef(This,retval)
    (This)->lpVtbl -> Release(This,retval)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval)
    (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)
    (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)
    (This)->lpVtbl -> get_Name(This,retval)
    (This)->lpVtbl -> get_Class(This,retval)
    (This)->lpVtbl -> get_GUID(This,retval)
    (This)->lpVtbl -> get_ADsPath(This,retval)
    (This)->lpVtbl -> get_Parent(This,retval)
    (This)->lpVtbl -> get_Schema(This,retval)
    (This)->lpVtbl -> GetInfo(This,retval)
    (This)->lpVtbl -> SetInfo(This,retval)
    (This)->lpVtbl -> Get(This,bstrName,retval)
    (This)->lpVtbl -> Put(This,bstrName,vProp,retval)
    (This)->lpVtbl -> GetEx(This,bstrName,retval)
    (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp,retval)
    (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved,retval)
    (This)->lpVtbl -> AppCreate(This,bSetInProcFlag)
    (This)->lpVtbl -> AppDelete(This)
    (This)->lpVtbl -> AppDeleteRecursive(This)
    (This)->lpVtbl -> AppUnLoad(This)
    (This)->lpVtbl -> AppUnLoadRecursive(This)
    (This)->lpVtbl -> AppDisable(This)
    (This)->lpVtbl -> AppDisableRecursive(This)
    (This)->lpVtbl -> AppEnable(This)
    (This)->lpVtbl -> AppEnableRecursive(This)
    (This)->lpVtbl -> AppGetStatus(This,pdwStatus)
    (This)->lpVtbl -> AspAppRestart(This)
    (This)->lpVtbl -> AppCreate2(This,lAppMode)
    (This)->lpVtbl -> AppGetStatus2(This,lpStatus)
           HRESULT STDMETHODCALLTYPE IISApp2_AppCreate2_Proxy(
    IISApp2 * This,
               LONG lAppMode);
void __RPC_STUB IISApp2_AppCreate2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISApp2_AppGetStatus2_Proxy(
    IISApp2 * This,
                        LONG *lpStatus);
void __RPC_STUB IISApp2_AppGetStatus2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IISApp3;
    typedef struct IISApp3Vtbl
    {
        BEGIN_INTERFACE
                                             HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IISApp3 * This,
                                    struct GUID *riid,
                                     void **ppvObj,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *AddRef )(
            IISApp3 * This,
                                unsigned long *retval);
                                             HRESULT ( STDMETHODCALLTYPE *Release )(
            IISApp3 * This,
                                unsigned long *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IISApp3 * This,
                                     unsigned UINT *pctinfo,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IISApp3 * This,
                                    unsigned UINT itinfo,
                                    unsigned long lcid,
                                     void **pptinfo,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IISApp3 * This,
                                    struct GUID *riid,
                                    signed char **rgszNames,
                                    unsigned UINT cNames,
                                    unsigned long lcid,
                                     signed long *rgdispid,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IISApp3 * This,
                                    signed long dispidMember,
                                    struct GUID *riid,
                                    unsigned long lcid,
                                    unsigned short wFlags,
                                    struct DISPPARAMS *pdispparams,
                                     VARIANT *pvarResult,
                                     struct EXCEPINFO *pexcepinfo,
                                     unsigned UINT *puArgErr,
                                void *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Name )(
            IISApp3 * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Class )(
            IISApp3 * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            IISApp3 * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            IISApp3 * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            IISApp3 * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            IISApp3 * This,
                                BSTR *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            IISApp3 * This,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            IISApp3 * This,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *Get )(
            IISApp3 * This,
                                    BSTR bstrName,
                                VARIANT *retval);
                                 HRESULT ( STDMETHODCALLTYPE *Put )(
            IISApp3 * This,
                                    BSTR bstrName,
                                    VARIANT vProp,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetEx )(
            IISApp3 * This,
                                    BSTR bstrName,
                                VARIANT *retval);
                                 HRESULT ( STDMETHODCALLTYPE *PutEx )(
            IISApp3 * This,
                                    signed long lnControlCode,
                                    BSTR bstrName,
                                    VARIANT vProp,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            IISApp3 * This,
                                    VARIANT vProperties,
                                    signed long lnReserved,
                                void *retval);
                   HRESULT ( STDMETHODCALLTYPE *AppCreate )(
            IISApp3 * This,
                       VARIANT_BOOL bSetInProcFlag);
                   HRESULT ( STDMETHODCALLTYPE *AppDelete )(
            IISApp3 * This);
                   HRESULT ( STDMETHODCALLTYPE *AppDeleteRecursive )(
            IISApp3 * This);
                   HRESULT ( STDMETHODCALLTYPE *AppUnLoad )(
            IISApp3 * This);
                   HRESULT ( STDMETHODCALLTYPE *AppUnLoadRecursive )(
            IISApp3 * This);
                   HRESULT ( STDMETHODCALLTYPE *AppDisable )(
            IISApp3 * This);
                   HRESULT ( STDMETHODCALLTYPE *AppDisableRecursive )(
            IISApp3 * This);
                   HRESULT ( STDMETHODCALLTYPE *AppEnable )(
            IISApp3 * This);
                   HRESULT ( STDMETHODCALLTYPE *AppEnableRecursive )(
            IISApp3 * This);
                   HRESULT ( STDMETHODCALLTYPE *AppGetStatus )(
            IISApp3 * This,
                        DWORD *pdwStatus);
                   HRESULT ( STDMETHODCALLTYPE *AspAppRestart )(
            IISApp3 * This);
                   HRESULT ( STDMETHODCALLTYPE *AppCreate2 )(
            IISApp3 * This,
                       LONG lAppMode);
                   HRESULT ( STDMETHODCALLTYPE *AppGetStatus2 )(
            IISApp3 * This,
                                LONG *lpStatus);
                   HRESULT ( STDMETHODCALLTYPE *AppCreate3 )(
            IISApp3 * This,
                       LONG lAppMode,
                       VARIANT bstrAppPooI,
                       VARIANT bCreatePool);
        END_INTERFACE
    } IISApp3Vtbl;
    interface IISApp3
    {
        CONST_VTBL struct IISApp3Vtbl *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval)
    (This)->lpVtbl -> AddRef(This,retval)
    (This)->lpVtbl -> Release(This,retval)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval)
    (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)
    (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)
    (This)->lpVtbl -> get_Name(This,retval)
    (This)->lpVtbl -> get_Class(This,retval)
    (This)->lpVtbl -> get_GUID(This,retval)
    (This)->lpVtbl -> get_ADsPath(This,retval)
    (This)->lpVtbl -> get_Parent(This,retval)
    (This)->lpVtbl -> get_Schema(This,retval)
    (This)->lpVtbl -> GetInfo(This,retval)
    (This)->lpVtbl -> SetInfo(This,retval)
    (This)->lpVtbl -> Get(This,bstrName,retval)
    (This)->lpVtbl -> Put(This,bstrName,vProp,retval)
    (This)->lpVtbl -> GetEx(This,bstrName,retval)
    (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp,retval)
    (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved,retval)
    (This)->lpVtbl -> AppCreate(This,bSetInProcFlag)
    (This)->lpVtbl -> AppDelete(This)
    (This)->lpVtbl -> AppDeleteRecursive(This)
    (This)->lpVtbl -> AppUnLoad(This)
    (This)->lpVtbl -> AppUnLoadRecursive(This)
    (This)->lpVtbl -> AppDisable(This)
    (This)->lpVtbl -> AppDisableRecursive(This)
    (This)->lpVtbl -> AppEnable(This)
    (This)->lpVtbl -> AppEnableRecursive(This)
    (This)->lpVtbl -> AppGetStatus(This,pdwStatus)
    (This)->lpVtbl -> AspAppRestart(This)
    (This)->lpVtbl -> AppCreate2(This,lAppMode)
    (This)->lpVtbl -> AppGetStatus2(This,lpStatus)
    (This)->lpVtbl -> AppCreate3(This,lAppMode,bstrAppPooI,bCreatePool)
           HRESULT STDMETHODCALLTYPE IISApp3_AppCreate3_Proxy(
    IISApp3 * This,
               LONG lAppMode,
               VARIANT bstrAppPooI,
               VARIANT bCreatePool);
void __RPC_STUB IISApp3_AppCreate3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IISComputer;
    typedef struct IISComputerVtbl
    {
        BEGIN_INTERFACE
                                             HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IISComputer * This,
                                    struct GUID *riid,
                                     void **ppvObj,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *AddRef )(
            IISComputer * This,
                                unsigned long *retval);
                                             HRESULT ( STDMETHODCALLTYPE *Release )(
            IISComputer * This,
                                unsigned long *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IISComputer * This,
                                     unsigned UINT *pctinfo,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IISComputer * This,
                                    unsigned UINT itinfo,
                                    unsigned long lcid,
                                     void **pptinfo,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IISComputer * This,
                                    struct GUID *riid,
                                    signed char **rgszNames,
                                    unsigned UINT cNames,
                                    unsigned long lcid,
                                     signed long *rgdispid,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IISComputer * This,
                                    signed long dispidMember,
                                    struct GUID *riid,
                                    unsigned long lcid,
                                    unsigned short wFlags,
                                    struct DISPPARAMS *pdispparams,
                                     VARIANT *pvarResult,
                                     struct EXCEPINFO *pexcepinfo,
                                     unsigned UINT *puArgErr,
                                void *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Name )(
            IISComputer * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Class )(
            IISComputer * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            IISComputer * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            IISComputer * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            IISComputer * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            IISComputer * This,
                                BSTR *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            IISComputer * This,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            IISComputer * This,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *Get )(
            IISComputer * This,
                                    BSTR bstrName,
                                VARIANT *retval);
                                 HRESULT ( STDMETHODCALLTYPE *Put )(
            IISComputer * This,
                                    BSTR bstrName,
                                    VARIANT vProp,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetEx )(
            IISComputer * This,
                                    BSTR bstrName,
                                VARIANT *retval);
                                 HRESULT ( STDMETHODCALLTYPE *PutEx )(
            IISComputer * This,
                                    signed long lnControlCode,
                                    BSTR bstrName,
                                    VARIANT vProp,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            IISComputer * This,
                                    VARIANT vProperties,
                                    signed long lnReserved,
                                void *retval);
                   HRESULT ( STDMETHODCALLTYPE *Backup )(
            IISComputer * This,
                       BSTR bstrLocation,
                       LONG lVersion,
                       LONG lFlags);
                   HRESULT ( STDMETHODCALLTYPE *Restore )(
            IISComputer * This,
                       BSTR bstrLocation,
                       LONG lVersion,
                       LONG lFlags);
                   HRESULT ( STDMETHODCALLTYPE *EnumBackups )(
            IISComputer * This,
                       BSTR bstrLocation,
                       LONG lIndex,
                        VARIANT *pvVersion,
                        VARIANT *pvLocations,
                        VARIANT *pvDate);
                   HRESULT ( STDMETHODCALLTYPE *DeleteBackup )(
            IISComputer * This,
                       BSTR bstrLocation,
                       LONG lVersion);
        END_INTERFACE
    } IISComputerVtbl;
    interface IISComputer
    {
        CONST_VTBL struct IISComputerVtbl *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval)
    (This)->lpVtbl -> AddRef(This,retval)
    (This)->lpVtbl -> Release(This,retval)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval)
    (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)
    (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)
    (This)->lpVtbl -> get_Name(This,retval)
    (This)->lpVtbl -> get_Class(This,retval)
    (This)->lpVtbl -> get_GUID(This,retval)
    (This)->lpVtbl -> get_ADsPath(This,retval)
    (This)->lpVtbl -> get_Parent(This,retval)
    (This)->lpVtbl -> get_Schema(This,retval)
    (This)->lpVtbl -> GetInfo(This,retval)
    (This)->lpVtbl -> SetInfo(This,retval)
    (This)->lpVtbl -> Get(This,bstrName,retval)
    (This)->lpVtbl -> Put(This,bstrName,vProp,retval)
    (This)->lpVtbl -> GetEx(This,bstrName,retval)
    (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp,retval)
    (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved,retval)
    (This)->lpVtbl -> Backup(This,bstrLocation,lVersion,lFlags)
    (This)->lpVtbl -> Restore(This,bstrLocation,lVersion,lFlags)
    (This)->lpVtbl -> EnumBackups(This,bstrLocation,lIndex,pvVersion,pvLocations,pvDate)
    (This)->lpVtbl -> DeleteBackup(This,bstrLocation,lVersion)
           HRESULT STDMETHODCALLTYPE IISComputer_Backup_Proxy(
    IISComputer * This,
               BSTR bstrLocation,
               LONG lVersion,
               LONG lFlags);
void __RPC_STUB IISComputer_Backup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISComputer_Restore_Proxy(
    IISComputer * This,
               BSTR bstrLocation,
               LONG lVersion,
               LONG lFlags);
void __RPC_STUB IISComputer_Restore_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISComputer_EnumBackups_Proxy(
    IISComputer * This,
               BSTR bstrLocation,
               LONG lIndex,
                VARIANT *pvVersion,
                VARIANT *pvLocations,
                VARIANT *pvDate);
void __RPC_STUB IISComputer_EnumBackups_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISComputer_DeleteBackup_Proxy(
    IISComputer * This,
               BSTR bstrLocation,
               LONG lVersion);
void __RPC_STUB IISComputer_DeleteBackup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IISComputer2;
    typedef struct IISComputer2Vtbl
    {
        BEGIN_INTERFACE
                                             HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IISComputer2 * This,
                                    struct GUID *riid,
                                     void **ppvObj,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *AddRef )(
            IISComputer2 * This,
                                unsigned long *retval);
                                             HRESULT ( STDMETHODCALLTYPE *Release )(
            IISComputer2 * This,
                                unsigned long *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IISComputer2 * This,
                                     unsigned UINT *pctinfo,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IISComputer2 * This,
                                    unsigned UINT itinfo,
                                    unsigned long lcid,
                                     void **pptinfo,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IISComputer2 * This,
                                    struct GUID *riid,
                                    signed char **rgszNames,
                                    unsigned UINT cNames,
                                    unsigned long lcid,
                                     signed long *rgdispid,
                                void *retval);
                                             HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IISComputer2 * This,
                                    signed long dispidMember,
                                    struct GUID *riid,
                                    unsigned long lcid,
                                    unsigned short wFlags,
                                    struct DISPPARAMS *pdispparams,
                                     VARIANT *pvarResult,
                                     struct EXCEPINFO *pexcepinfo,
                                     unsigned UINT *puArgErr,
                                void *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Name )(
            IISComputer2 * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Class )(
            IISComputer2 * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            IISComputer2 * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_ADsPath )(
            IISComputer2 * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            IISComputer2 * This,
                                BSTR *retval);
                                          HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            IISComputer2 * This,
                                BSTR *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            IISComputer2 * This,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *SetInfo )(
            IISComputer2 * This,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *Get )(
            IISComputer2 * This,
                                    BSTR bstrName,
                                VARIANT *retval);
                                 HRESULT ( STDMETHODCALLTYPE *Put )(
            IISComputer2 * This,
                                    BSTR bstrName,
                                    VARIANT vProp,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetEx )(
            IISComputer2 * This,
                                    BSTR bstrName,
                                VARIANT *retval);
                                 HRESULT ( STDMETHODCALLTYPE *PutEx )(
            IISComputer2 * This,
                                    signed long lnControlCode,
                                    BSTR bstrName,
                                    VARIANT vProp,
                                void *retval);
                                 HRESULT ( STDMETHODCALLTYPE *GetInfoEx )(
            IISComputer2 * This,
                                    VARIANT vProperties,
                                    signed long lnReserved,
                                void *retval);
                   HRESULT ( STDMETHODCALLTYPE *Backup )(
            IISComputer2 * This,
                       BSTR bstrLocation,
                       LONG lVersion,
                       LONG lFlags);
                   HRESULT ( STDMETHODCALLTYPE *Restore )(
            IISComputer2 * This,
                       BSTR bstrLocation,
                       LONG lVersion,
                       LONG lFlags);
                   HRESULT ( STDMETHODCALLTYPE *EnumBackups )(
            IISComputer2 * This,
                       BSTR bstrLocation,
                       LONG lIndex,
                        VARIANT *pvVersion,
                        VARIANT *pvLocations,
                        VARIANT *pvDate);
                   HRESULT ( STDMETHODCALLTYPE *DeleteBackup )(
            IISComputer2 * This,
                       BSTR bstrLocation,
                       LONG lVersion);
                   HRESULT ( STDMETHODCALLTYPE *BackupWithPassword )(
            IISComputer2 * This,
                       BSTR bstrLocation,
                       LONG lVersion,
                       LONG lFlags,
                       BSTR bstrPassword);
                   HRESULT ( STDMETHODCALLTYPE *RestoreWithPassword )(
            IISComputer2 * This,
                       BSTR bstrLocation,
                       LONG lVersion,
                       LONG lFlags,
                       BSTR bstrPassword);
                   HRESULT ( STDMETHODCALLTYPE *Export )(
            IISComputer2 * This,
                       BSTR bstrPassword,
                       BSTR bstrFilename,
                       BSTR bstrSourcePath,
                       LONG lFlags);
                   HRESULT ( STDMETHODCALLTYPE *Import )(
            IISComputer2 * This,
                       BSTR bstrPassword,
                       BSTR bstrFilename,
                       BSTR bstrSourcePath,
                       BSTR bstrDestPath,
                       LONG lFlags);
                   HRESULT ( STDMETHODCALLTYPE *SaveData )(
            IISComputer2 * This);
        END_INTERFACE
    } IISComputer2Vtbl;
    interface IISComputer2
    {
        CONST_VTBL struct IISComputer2Vtbl *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval)
    (This)->lpVtbl -> AddRef(This,retval)
    (This)->lpVtbl -> Release(This,retval)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval)
    (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)
    (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)
    (This)->lpVtbl -> get_Name(This,retval)
    (This)->lpVtbl -> get_Class(This,retval)
    (This)->lpVtbl -> get_GUID(This,retval)
    (This)->lpVtbl -> get_ADsPath(This,retval)
    (This)->lpVtbl -> get_Parent(This,retval)
    (This)->lpVtbl -> get_Schema(This,retval)
    (This)->lpVtbl -> GetInfo(This,retval)
    (This)->lpVtbl -> SetInfo(This,retval)
    (This)->lpVtbl -> Get(This,bstrName,retval)
    (This)->lpVtbl -> Put(This,bstrName,vProp,retval)
    (This)->lpVtbl -> GetEx(This,bstrName,retval)
    (This)->lpVtbl -> PutEx(This,lnControlCode,bstrName,vProp,retval)
    (This)->lpVtbl -> GetInfoEx(This,vProperties,lnReserved,retval)
    (This)->lpVtbl -> Backup(This,bstrLocation,lVersion,lFlags)
    (This)->lpVtbl -> Restore(This,bstrLocation,lVersion,lFlags)
    (This)->lpVtbl -> EnumBackups(This,bstrLocation,lIndex,pvVersion,pvLocations,pvDate)
    (This)->lpVtbl -> DeleteBackup(This,bstrLocation,lVersion)
    (This)->lpVtbl -> BackupWithPassword(This,bstrLocation,lVersion,lFlags,bstrPassword)
    (This)->lpVtbl -> RestoreWithPassword(This,bstrLocation,lVersion,lFlags,bstrPassword)
    (This)->lpVtbl -> Export(This,bstrPassword,bstrFilename,bstrSourcePath,lFlags)
    (This)->lpVtbl -> Import(This,bstrPassword,bstrFilename,bstrSourcePath,bstrDestPath,lFlags)
    (This)->lpVtbl -> SaveData(This)
           HRESULT STDMETHODCALLTYPE IISComputer2_BackupWithPassword_Proxy(
    IISComputer2 * This,
               BSTR bstrLocation,
               LONG lVersion,
               LONG lFlags,
               BSTR bstrPassword);
void __RPC_STUB IISComputer2_BackupWithPassword_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISComputer2_RestoreWithPassword_Proxy(
    IISComputer2 * This,
               BSTR bstrLocation,
               LONG lVersion,
               LONG lFlags,
               BSTR bstrPassword);
void __RPC_STUB IISComputer2_RestoreWithPassword_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISComputer2_Export_Proxy(
    IISComputer2 * This,
               BSTR bstrPassword,
               BSTR bstrFilename,
               BSTR bstrSourcePath,
               LONG lFlags);
void __RPC_STUB IISComputer2_Export_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISComputer2_Import_Proxy(
    IISComputer2 * This,
               BSTR bstrPassword,
               BSTR bstrFilename,
               BSTR bstrSourcePath,
               BSTR bstrDestPath,
               LONG lFlags);
void __RPC_STUB IISComputer2_Import_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
           HRESULT STDMETHODCALLTYPE IISComputer2_SaveData_Proxy(
    IISComputer2 * This);
void __RPC_STUB IISComputer2_SaveData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const CLSID CLSID_IISExtComputer;
class DECLSPEC_UUID("91ef9258-afec-11d1-9868-00a0c922e703")
IISExtComputer;
EXTERN_C const CLSID CLSID_IISExtApp;
class DECLSPEC_UUID("b4f34438-afec-11d1-9868-00a0c922e703")
IISExtApp;
EXTERN_C const CLSID CLSID_IISExtServer;
class DECLSPEC_UUID("c3b32488-afec-11d1-9868-00a0c922e703")
IISExtServer;
EXTERN_C const CLSID CLSID_IISExtDsCrMap;
class DECLSPEC_UUID("bc36cde8-afeb-11d1-9868-00a0c922e703")
IISExtDsCrMap;
EXTERN_C const CLSID CLSID_IISExtApplicationPool;
class DECLSPEC_UUID("E99F9D0C-FB39-402b-9EEB-AA185237BD34")
IISExtApplicationPool;
EXTERN_C const CLSID CLSID_IISExtApplicationPools;
class DECLSPEC_UUID("95863074-A389-406a-A2D7-D98BFC95B905")
IISExtApplicationPools;
EXTERN_C const CLSID CLSID_IISExtWebService;
class DECLSPEC_UUID("40B8F873-B30E-475d-BEC5-4D0EBB0DBAF3")
IISExtWebService;
}
#endif
#pragma endregion
