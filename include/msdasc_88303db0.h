#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IService IService;
typedef interface IDBPromptInitialize IDBPromptInitialize;
typedef interface IDataInitialize IDataInitialize;
typedef interface IDataSourceLocator IDataSourceLocator;
typedef class DataLinks DataLinks;
typedef class MSDAINITIALIZE MSDAINITIALIZE;
typedef class PDPO PDPO;
typedef class RootBinder RootBinder;
#include "oaidl.h"
#include "ocidl.h"
#include "oledb.h"
extern "C"{
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef LONGLONG COMPATIBLE_LONG;
typedef
enum tagEBindInfoOptions
    {
        BIO_BINDER = 0x1
    } EBindInfoOptions;
extern RPC_IF_HANDLE __MIDL_itf_msdasc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdasc_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IService;
    typedef struct IServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IService * This);
                      HRESULT ( STDMETHODCALLTYPE *InvokeService )(
            IService * This,
            _In_ IUnknown *pUnkInner);
        END_INTERFACE
    } IServiceVtbl;
    interface IService
    {
        CONST_VTBL struct IServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InvokeService(This,pUnkInner) )
typedef DWORD DBPROMPTOPTIONS;
typedef
enum tagDBPROMPTOPTIONSENUM
    {
        DBPROMPTOPTIONS_NONE = 0,
        DBPROMPTOPTIONS_WIZARDSHEET = 0x1,
        DBPROMPTOPTIONS_PROPERTYSHEET = 0x2,
        DBPROMPTOPTIONS_BROWSEONLY = 0x8,
        DBPROMPTOPTIONS_DISABLE_PROVIDER_SELECTION = 0x10,
        DBPROMPTOPTIONS_DISABLESAVEPASSWORD = 0x20
    } DBPROMPTOPTIONSENUM;
extern RPC_IF_HANDLE __MIDL_itf_msdasc_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdasc_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IDBPromptInitialize;
    typedef struct IDBPromptInitializeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDBPromptInitialize * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDBPromptInitialize * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDBPromptInitialize * This);
                                  HRESULT ( STDMETHODCALLTYPE *PromptDataSource )(
            IDBPromptInitialize * This,
            _In_opt_ IUnknown *pUnkOuter,
                       HWND hWndParent,
                       DBPROMPTOPTIONS dwPromptOptions,
                       ULONG cSourceTypeFilter,
            _In_reads_opt_(cSourceTypeFilter) DBSOURCETYPE *rgSourceTypeFilter,
            _In_opt_z_ LPCOLESTR pwszszzProviderFilter,
                       REFIID riid,
            _Inout_ IUnknown **ppDataSource);
                           HRESULT ( STDMETHODCALLTYPE *PromptFileName )(
            IDBPromptInitialize * This,
                       HWND hWndParent,
                       DBPROMPTOPTIONS dwPromptOptions,
                       LPCOLESTR pwszInitialDirectory,
                       LPCOLESTR pwszInitialFile,
            _Outptr_ LPOLESTR *ppwszSelectedFile);
        END_INTERFACE
    } IDBPromptInitializeVtbl;
    interface IDBPromptInitialize
    {
        CONST_VTBL struct IDBPromptInitializeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PromptDataSource(This,pUnkOuter,hWndParent,dwPromptOptions,cSourceTypeFilter,rgSourceTypeFilter,pwszszzProviderFilter,riid,ppDataSource) )
    ( (This)->lpVtbl -> PromptFileName(This,hWndParent,dwPromptOptions,pwszInitialDirectory,pwszInitialFile,ppwszSelectedFile) )
EXTERN_C const IID IID_IDataInitialize;
    typedef struct IDataInitializeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDataInitialize * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDataInitialize * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDataInitialize * This);
                           HRESULT ( STDMETHODCALLTYPE *GetDataSource )(
            __RPC__in IDataInitialize * This,
                       __RPC__in_opt IUnknown *pUnkOuter,
                       DWORD dwClsCtx,
                               __RPC__in_opt LPCOLESTR pwszInitializationString,
                       __RPC__in REFIID riid,
                                    __RPC__deref_inout_opt IUnknown **ppDataSource);
                           HRESULT ( STDMETHODCALLTYPE *GetInitializationString )(
            __RPC__in IDataInitialize * This,
                       __RPC__in_opt IUnknown *pDataSource,
                       boolean fIncludePassword,
                        __RPC__deref_out_opt LPOLESTR *ppwszInitString);
                           HRESULT ( STDMETHODCALLTYPE *CreateDBInstance )(
            __RPC__in IDataInitialize * This,
                       __RPC__in REFCLSID clsidProvider,
                       __RPC__in_opt IUnknown *pUnkOuter,
                       DWORD dwClsCtx,
                               __RPC__in_opt LPOLESTR pwszReserved,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **ppDataSource);
                                  HRESULT ( STDMETHODCALLTYPE *CreateDBInstanceEx )(
            IDataInitialize * This,
                       REFCLSID clsidProvider,
            _In_opt_ IUnknown *pUnkOuter,
                       DWORD dwClsCtx,
            _In_opt_z_ LPOLESTR pwszReserved,
            _In_ COSERVERINFO *pServerInfo,
                       ULONG cmq,
            _Out_writes_(cmq) MULTI_QI *rgmqResults);
                           HRESULT ( STDMETHODCALLTYPE *LoadStringFromStorage )(
            __RPC__in IDataInitialize * This,
                               __RPC__in_opt LPCOLESTR pwszFileName,
                        __RPC__deref_out_opt LPOLESTR *ppwszInitializationString);
                           HRESULT ( STDMETHODCALLTYPE *WriteStringToStorage )(
            __RPC__in IDataInitialize * This,
                               __RPC__in_opt LPCOLESTR pwszFileName,
                               __RPC__in_opt LPCOLESTR pwszInitializationString,
                       DWORD dwCreationDisposition);
        END_INTERFACE
    } IDataInitializeVtbl;
    interface IDataInitialize
    {
        CONST_VTBL struct IDataInitializeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDataSource(This,pUnkOuter,dwClsCtx,pwszInitializationString,riid,ppDataSource) )
    ( (This)->lpVtbl -> GetInitializationString(This,pDataSource,fIncludePassword,ppwszInitString) )
    ( (This)->lpVtbl -> CreateDBInstance(This,clsidProvider,pUnkOuter,dwClsCtx,pwszReserved,riid,ppDataSource) )
    ( (This)->lpVtbl -> CreateDBInstanceEx(This,clsidProvider,pUnkOuter,dwClsCtx,pwszReserved,pServerInfo,cmq,rgmqResults) )
    ( (This)->lpVtbl -> LoadStringFromStorage(This,pwszFileName,ppwszInitializationString) )
    ( (This)->lpVtbl -> WriteStringToStorage(This,pwszFileName,pwszInitializationString,dwCreationDisposition) )
                HRESULT STDMETHODCALLTYPE IDataInitialize_RemoteCreateDBInstanceEx_Proxy(
    __RPC__in IDataInitialize * This,
               __RPC__in REFCLSID clsidProvider,
               __RPC__in_opt IUnknown *pUnkOuter,
               DWORD dwClsCtx,
                       __RPC__in_opt LPOLESTR pwszReserved,
                       __RPC__in_opt COSERVERINFO *pServerInfo,
               ULONG cmq,
                        __RPC__in_ecount_full(cmq) const IID **rgpIID,
                         __RPC__out_ecount_full(cmq) IUnknown **rgpItf,
                         __RPC__out_ecount_full(cmq) HRESULT *rghr);
void __RPC_STUB IDataInitialize_RemoteCreateDBInstanceEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID LIBID_MSDASC;
EXTERN_C const IID IID_IDataSourceLocator;
    typedef struct IDataSourceLocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDataSourceLocator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDataSourceLocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDataSourceLocator * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDataSourceLocator * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDataSourceLocator * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDataSourceLocator * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDataSourceLocator * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_hWnd )(
            __RPC__in IDataSourceLocator * This,
                                __RPC__out COMPATIBLE_LONG *phwndParent);
                                    HRESULT ( STDMETHODCALLTYPE *put_hWnd )(
            __RPC__in IDataSourceLocator * This,
                       COMPATIBLE_LONG hwndParent);
                           HRESULT ( STDMETHODCALLTYPE *PromptNew )(
            __RPC__in IDataSourceLocator * This,
                                __RPC__deref_out_opt IDispatch **ppADOConnection);
                           HRESULT ( STDMETHODCALLTYPE *PromptEdit )(
            __RPC__in IDataSourceLocator * This,
                            __RPC__deref_inout_opt IDispatch **ppADOConnection,
                                __RPC__out VARIANT_BOOL *pbSuccess);
        END_INTERFACE
    } IDataSourceLocatorVtbl;
    interface IDataSourceLocator
    {
        CONST_VTBL struct IDataSourceLocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_hWnd(This,phwndParent) )
    ( (This)->lpVtbl -> put_hWnd(This,hwndParent) )
    ( (This)->lpVtbl -> PromptNew(This,ppADOConnection) )
    ( (This)->lpVtbl -> PromptEdit(This,ppADOConnection,pbSuccess) )
EXTERN_C const CLSID CLSID_DataLinks;
class DECLSPEC_UUID("2206CDB2-19C1-11D1-89E0-00C04FD7A829")
DataLinks;
EXTERN_C const CLSID CLSID_MSDAINITIALIZE;
class DECLSPEC_UUID("2206CDB0-19C1-11D1-89E0-00C04FD7A829")
MSDAINITIALIZE;
EXTERN_C const CLSID CLSID_PDPO;
class DECLSPEC_UUID("CCB4EC60-B9DC-11D1-AC80-00A0C9034873")
PDPO;
EXTERN_C const CLSID CLSID_RootBinder;
class DECLSPEC_UUID("FF151822-B0BF-11D1-A80D-000000000000")
RootBinder;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_msdasc_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdasc_0000_0004_v0_0_s_ifspec;
                          HRESULT STDMETHODCALLTYPE IDataInitialize_CreateDBInstanceEx_Proxy(
    IDataInitialize * This,
               REFCLSID clsidProvider,
    _In_opt_ IUnknown *pUnkOuter,
               DWORD dwClsCtx,
    _In_opt_z_ LPOLESTR pwszReserved,
    _In_ COSERVERINFO *pServerInfo,
               ULONG cmq,
    _Out_writes_(cmq) MULTI_QI *rgmqResults);
                HRESULT STDMETHODCALLTYPE IDataInitialize_CreateDBInstanceEx_Stub(
    __RPC__in IDataInitialize * This,
               __RPC__in REFCLSID clsidProvider,
               __RPC__in_opt IUnknown *pUnkOuter,
               DWORD dwClsCtx,
                       __RPC__in_opt LPOLESTR pwszReserved,
                       __RPC__in_opt COSERVERINFO *pServerInfo,
               ULONG cmq,
                        __RPC__in_ecount_full(cmq) const IID **rgpIID,
                         __RPC__out_ecount_full(cmq) IUnknown **rgpItf,
                         __RPC__out_ecount_full(cmq) HRESULT *rghr);
}
