#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IEnumGUID IEnumGUID;
typedef interface IEnumCATEGORYINFO IEnumCATEGORYINFO;
typedef interface ICatRegister ICatRegister;
typedef interface ICatInformation ICatInformation;
#include "unknwn.h"
extern "C"{
#pragma comment(lib,"uuid.lib")
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_C const CLSID CLSID_StdComponentCategoriesMgr;
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef GUID CATID;
typedef REFGUID REFCATID;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_C const CATID CATID_Insertable;
EXTERN_C const CATID CATID_Control;
EXTERN_C const CATID CATID_Programmable;
EXTERN_C const CATID CATID_IsShortcut;
EXTERN_C const CATID CATID_NeverShowExt;
EXTERN_C const CATID CATID_DocObject;
EXTERN_C const CATID CATID_Printable;
EXTERN_C const CATID CATID_RequiresDataPathHost;
EXTERN_C const CATID CATID_PersistsToMoniker;
EXTERN_C const CATID CATID_PersistsToStorage;
EXTERN_C const CATID CATID_PersistsToStreamInit;
EXTERN_C const CATID CATID_PersistsToStream;
EXTERN_C const CATID CATID_PersistsToMemory;
EXTERN_C const CATID CATID_PersistsToFile;
EXTERN_C const CATID CATID_PersistsToPropertyBag;
EXTERN_C const CATID CATID_InternetAware;
EXTERN_C const CATID CATID_DesignTimeUIActivatableControl;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_comcat_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_comcat_0000_0000_v0_0_s_ifspec;
typedef __RPC_unique_pointer IEnumGUID *LPENUMGUID;
EXTERN_C const IID IID_IEnumGUID;
    typedef struct IEnumGUIDVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumGUID * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumGUID * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumGUID * This);
                      HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumGUID * This,
                       ULONG celt,
            _Out_writes_to_(celt,*pceltFetched) GUID *rgelt,
            _Out_opt_ ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumGUID * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumGUID * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumGUID * This,
                        __RPC__deref_out_opt IEnumGUID **ppenum);
        END_INTERFACE
    } IEnumGUIDVtbl;
    interface IEnumGUID
    {
        CONST_VTBL struct IEnumGUIDVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
                HRESULT STDMETHODCALLTYPE IEnumGUID_RemoteNext_Proxy(
    __RPC__in IEnumGUID * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) GUID *rgelt,
                __RPC__out ULONG *pceltFetched);
void __RPC_STUB IEnumGUID_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_comcat_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_comcat_0000_0001_v0_0_s_ifspec;
typedef __RPC_unique_pointer IEnumCATEGORYINFO *LPENUMCATEGORYINFO;
typedef struct tagCATEGORYINFO
    {
    CATID catid;
    LCID lcid;
    OLECHAR szDescription[ 128 ];
    } CATEGORYINFO;
typedef struct tagCATEGORYINFO *LPCATEGORYINFO;
EXTERN_C const IID IID_IEnumCATEGORYINFO;
    typedef struct IEnumCATEGORYINFOVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumCATEGORYINFO * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumCATEGORYINFO * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumCATEGORYINFO * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumCATEGORYINFO * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) CATEGORYINFO *rgelt,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumCATEGORYINFO * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumCATEGORYINFO * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumCATEGORYINFO * This,
                        __RPC__deref_out_opt IEnumCATEGORYINFO **ppenum);
        END_INTERFACE
    } IEnumCATEGORYINFOVtbl;
    interface IEnumCATEGORYINFO
    {
        CONST_VTBL struct IEnumCATEGORYINFOVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
extern RPC_IF_HANDLE __MIDL_itf_comcat_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_comcat_0000_0002_v0_0_s_ifspec;
typedef __RPC_unique_pointer ICatRegister *LPCATREGISTER;
EXTERN_C const IID IID_ICatRegister;
    typedef struct ICatRegisterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICatRegister * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICatRegister * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICatRegister * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterCategories )(
            __RPC__in ICatRegister * This,
                       ULONG cCategories,
                                __RPC__in_ecount_full(cCategories) CATEGORYINFO rgCategoryInfo[ ]);
        HRESULT ( STDMETHODCALLTYPE *UnRegisterCategories )(
            __RPC__in ICatRegister * This,
                       ULONG cCategories,
                                __RPC__in_ecount_full(cCategories) CATID rgcatid[ ]);
        HRESULT ( STDMETHODCALLTYPE *RegisterClassImplCategories )(
            __RPC__in ICatRegister * This,
                       __RPC__in REFCLSID rclsid,
                       ULONG cCategories,
                                __RPC__in_ecount_full(cCategories) CATID rgcatid[ ]);
        HRESULT ( STDMETHODCALLTYPE *UnRegisterClassImplCategories )(
            __RPC__in ICatRegister * This,
                       __RPC__in REFCLSID rclsid,
                       ULONG cCategories,
                                __RPC__in_ecount_full(cCategories) CATID rgcatid[ ]);
        HRESULT ( STDMETHODCALLTYPE *RegisterClassReqCategories )(
            __RPC__in ICatRegister * This,
                       __RPC__in REFCLSID rclsid,
                       ULONG cCategories,
                                __RPC__in_ecount_full(cCategories) CATID rgcatid[ ]);
        HRESULT ( STDMETHODCALLTYPE *UnRegisterClassReqCategories )(
            __RPC__in ICatRegister * This,
                       __RPC__in REFCLSID rclsid,
                       ULONG cCategories,
                                __RPC__in_ecount_full(cCategories) CATID rgcatid[ ]);
        END_INTERFACE
    } ICatRegisterVtbl;
    interface ICatRegister
    {
        CONST_VTBL struct ICatRegisterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterCategories(This,cCategories,rgCategoryInfo) )
    ( (This)->lpVtbl -> UnRegisterCategories(This,cCategories,rgcatid) )
    ( (This)->lpVtbl -> RegisterClassImplCategories(This,rclsid,cCategories,rgcatid) )
    ( (This)->lpVtbl -> UnRegisterClassImplCategories(This,rclsid,cCategories,rgcatid) )
    ( (This)->lpVtbl -> RegisterClassReqCategories(This,rclsid,cCategories,rgcatid) )
    ( (This)->lpVtbl -> UnRegisterClassReqCategories(This,rclsid,cCategories,rgcatid) )
extern RPC_IF_HANDLE __MIDL_itf_comcat_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_comcat_0000_0003_v0_0_s_ifspec;
typedef __RPC_unique_pointer ICatInformation *LPCATINFORMATION;
EXTERN_C const IID IID_ICatInformation;
    typedef struct ICatInformationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICatInformation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICatInformation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICatInformation * This);
        HRESULT ( STDMETHODCALLTYPE *EnumCategories )(
            __RPC__in ICatInformation * This,
                       LCID lcid,
                        __RPC__deref_out_opt IEnumCATEGORYINFO **ppenumCategoryInfo);
        HRESULT ( STDMETHODCALLTYPE *GetCategoryDesc )(
            __RPC__in ICatInformation * This,
                       __RPC__in REFCATID rcatid,
                       LCID lcid,
                        __RPC__deref_out_opt LPWSTR *pszDesc);
                      HRESULT ( STDMETHODCALLTYPE *EnumClassesOfCategories )(
            ICatInformation * This,
                       ULONG cImplemented,
                                const CATID rgcatidImpl[ ],
                       ULONG cRequired,
                                const CATID rgcatidReq[ ],
                        IEnumGUID **ppenumClsid);
                      HRESULT ( STDMETHODCALLTYPE *IsClassOfCategories )(
            ICatInformation * This,
                       REFCLSID rclsid,
                       ULONG cImplemented,
                                const CATID rgcatidImpl[ ],
                       ULONG cRequired,
                                const CATID rgcatidReq[ ]);
        HRESULT ( STDMETHODCALLTYPE *EnumImplCategoriesOfClass )(
            __RPC__in ICatInformation * This,
                       __RPC__in REFCLSID rclsid,
                        __RPC__deref_out_opt IEnumGUID **ppenumCatid);
        HRESULT ( STDMETHODCALLTYPE *EnumReqCategoriesOfClass )(
            __RPC__in ICatInformation * This,
                       __RPC__in REFCLSID rclsid,
                        __RPC__deref_out_opt IEnumGUID **ppenumCatid);
        END_INTERFACE
    } ICatInformationVtbl;
    interface ICatInformation
    {
        CONST_VTBL struct ICatInformationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnumCategories(This,lcid,ppenumCategoryInfo) )
    ( (This)->lpVtbl -> GetCategoryDesc(This,rcatid,lcid,pszDesc) )
    ( (This)->lpVtbl -> EnumClassesOfCategories(This,cImplemented,rgcatidImpl,cRequired,rgcatidReq,ppenumClsid) )
    ( (This)->lpVtbl -> IsClassOfCategories(This,rclsid,cImplemented,rgcatidImpl,cRequired,rgcatidReq) )
    ( (This)->lpVtbl -> EnumImplCategoriesOfClass(This,rclsid,ppenumCatid) )
    ( (This)->lpVtbl -> EnumReqCategoriesOfClass(This,rclsid,ppenumCatid) )
                HRESULT STDMETHODCALLTYPE ICatInformation_RemoteEnumClassesOfCategories_Proxy(
    __RPC__in ICatInformation * This,
               ULONG cImplemented,
                                __RPC__in_ecount_full_opt(cImplemented) const CATID rgcatidImpl[ ],
               ULONG cRequired,
                                __RPC__in_ecount_full_opt(cRequired) const CATID rgcatidReq[ ],
                __RPC__deref_out_opt IEnumGUID **ppenumClsid);
void __RPC_STUB ICatInformation_RemoteEnumClassesOfCategories_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE ICatInformation_RemoteIsClassOfCategories_Proxy(
    __RPC__in ICatInformation * This,
               __RPC__in REFCLSID rclsid,
               ULONG cImplemented,
                                __RPC__in_ecount_full_opt(cImplemented) const CATID rgcatidImpl[ ],
               ULONG cRequired,
                                __RPC__in_ecount_full_opt(cRequired) const CATID rgcatidReq[ ]);
void __RPC_STUB ICatInformation_RemoteIsClassOfCategories_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_comcat_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_comcat_0000_0004_v0_0_s_ifspec;
              HRESULT STDMETHODCALLTYPE IEnumGUID_Next_Proxy(
    IEnumGUID * This,
               ULONG celt,
    _Out_writes_to_(celt,*pceltFetched) GUID *rgelt,
    _Out_opt_ ULONG *pceltFetched);
                HRESULT STDMETHODCALLTYPE IEnumGUID_Next_Stub(
    __RPC__in IEnumGUID * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) GUID *rgelt,
                __RPC__out ULONG *pceltFetched);
              HRESULT STDMETHODCALLTYPE ICatInformation_EnumClassesOfCategories_Proxy(
    ICatInformation * This,
               ULONG cImplemented,
                        const CATID rgcatidImpl[ ],
               ULONG cRequired,
                        const CATID rgcatidReq[ ],
                IEnumGUID **ppenumClsid);
                HRESULT STDMETHODCALLTYPE ICatInformation_EnumClassesOfCategories_Stub(
    __RPC__in ICatInformation * This,
               ULONG cImplemented,
                                __RPC__in_ecount_full_opt(cImplemented) const CATID rgcatidImpl[ ],
               ULONG cRequired,
                                __RPC__in_ecount_full_opt(cRequired) const CATID rgcatidReq[ ],
                __RPC__deref_out_opt IEnumGUID **ppenumClsid);
              HRESULT STDMETHODCALLTYPE ICatInformation_IsClassOfCategories_Proxy(
    ICatInformation * This,
               REFCLSID rclsid,
               ULONG cImplemented,
                        const CATID rgcatidImpl[ ],
               ULONG cRequired,
                        const CATID rgcatidReq[ ]);
                HRESULT STDMETHODCALLTYPE ICatInformation_IsClassOfCategories_Stub(
    __RPC__in ICatInformation * This,
               __RPC__in REFCLSID rclsid,
               ULONG cImplemented,
                                __RPC__in_ecount_full_opt(cImplemented) const CATID rgcatidImpl[ ],
               ULONG cRequired,
                                __RPC__in_ecount_full_opt(cRequired) const CATID rgcatidReq[ ]);
}
