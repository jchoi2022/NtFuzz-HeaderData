#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IIdentityAdvise IIdentityAdvise;
typedef interface AsyncIIdentityAdvise AsyncIIdentityAdvise;
typedef interface IIdentityProvider IIdentityProvider;
typedef interface AsyncIIdentityProvider AsyncIIdentityProvider;
typedef interface IAssociatedIdentityProvider IAssociatedIdentityProvider;
typedef interface AsyncIAssociatedIdentityProvider AsyncIAssociatedIdentityProvider;
typedef interface IConnectedIdentityProvider IConnectedIdentityProvider;
typedef interface AsyncIConnectedIdentityProvider AsyncIConnectedIdentityProvider;
typedef interface IIdentityAuthentication IIdentityAuthentication;
typedef interface AsyncIIdentityAuthentication AsyncIIdentityAuthentication;
#include "oaidl.h"
#include "ocidl.h"
#include "propsys.h"
#include "IdentityCommon.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#if 0
#endif
enum tag_IdentityUpdateEvent
    {
        IDENTITY_ASSOCIATED = 0x1,
        IDENTITY_DISASSOCIATED = 0x2,
        IDENTITY_CREATED = 0x4,
        IDENTITY_IMPORTED = 0x8,
        IDENTITY_DELETED = 0x10,
        IDENTITY_PROPCHANGED = 0x20,
        IDENTITY_CONNECTED = 0x40,
        IDENTITY_DISCONNECTED = 0x80
    } ;
DEFINE_GUID(OID_OAssociatedIdentityProviderObject, 0x98c5a3dd, 0xdb68, 0x4f1a, 0x8d, 0x2b, 0x90, 0x79, 0xcd, 0xfe, 0xaf, 0x61);
extern RPC_IF_HANDLE __MIDL_itf_identityprovider_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_identityprovider_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IIdentityAdvise;
    typedef struct IIdentityAdviseVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IIdentityAdvise * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IIdentityAdvise * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IIdentityAdvise * This);
        HRESULT ( STDMETHODCALLTYPE *IdentityUpdated )(
            __RPC__in IIdentityAdvise * This,
                       DWORD dwIdentityUpdateEvents,
                       __RPC__in LPCWSTR lpszUniqueID);
        END_INTERFACE
    } IIdentityAdviseVtbl;
    interface IIdentityAdvise
    {
        CONST_VTBL struct IIdentityAdviseVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IdentityUpdated(This,dwIdentityUpdateEvents,lpszUniqueID) )
EXTERN_C const IID IID_AsyncIIdentityAdvise;
    typedef struct AsyncIIdentityAdviseVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in AsyncIIdentityAdvise * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in AsyncIIdentityAdvise * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in AsyncIIdentityAdvise * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_IdentityUpdated )(
            __RPC__in AsyncIIdentityAdvise * This,
                       DWORD dwIdentityUpdateEvents,
                       __RPC__in LPCWSTR lpszUniqueID);
        HRESULT ( STDMETHODCALLTYPE *Finish_IdentityUpdated )(
            __RPC__in AsyncIIdentityAdvise * This);
        END_INTERFACE
    } AsyncIIdentityAdviseVtbl;
    interface AsyncIIdentityAdvise
    {
        CONST_VTBL struct AsyncIIdentityAdviseVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_IdentityUpdated(This,dwIdentityUpdateEvents,lpszUniqueID) )
    ( (This)->lpVtbl -> Finish_IdentityUpdated(This) )
EXTERN_C const IID IID_IIdentityProvider;
    typedef struct IIdentityProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IIdentityProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IIdentityProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IIdentityProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetIdentityEnum )(
            __RPC__in IIdentityProvider * This,
                       const IDENTITY_TYPE eIdentityType,
                               __RPC__in_opt const PROPERTYKEY *pFilterkey,
                               __RPC__in_opt const PROPVARIANT *pFilterPropVarValue,
                        __RPC__deref_out_opt IEnumUnknown **ppIdentityEnum);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in IIdentityProvider * This,
                       __RPC__in LPCWSTR lpszUserName,
                        __RPC__deref_out_opt IPropertyStore **ppPropertyStore,
                       __RPC__in const PROPVARIANT *pKeywordsToAdd);
        HRESULT ( STDMETHODCALLTYPE *Import )(
            __RPC__in IIdentityProvider * This,
                       __RPC__in_opt IPropertyStore *pPropertyStore);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IIdentityProvider * This,
                       __RPC__in LPCWSTR lpszUniqueID,
                       __RPC__in const PROPVARIANT *pKeywordsToDelete);
        HRESULT ( STDMETHODCALLTYPE *FindByUniqueID )(
            __RPC__in IIdentityProvider * This,
                       __RPC__in LPCWSTR lpszUniqueID,
                        __RPC__deref_out_opt IPropertyStore **ppPropertyStore);
        HRESULT ( STDMETHODCALLTYPE *GetProviderPropertyStore )(
            __RPC__in IIdentityProvider * This,
                        __RPC__deref_out_opt IPropertyStore **ppPropertyStore);
        HRESULT ( STDMETHODCALLTYPE *Advise )(
            __RPC__in IIdentityProvider * This,
                       __RPC__in_opt IIdentityAdvise *pIdentityAdvise,
                       DWORD dwIdentityUpdateEvents,
                        __RPC__out DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *UnAdvise )(
            __RPC__in IIdentityProvider * This,
                       const DWORD dwCookie);
        END_INTERFACE
    } IIdentityProviderVtbl;
    interface IIdentityProvider
    {
        CONST_VTBL struct IIdentityProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIdentityEnum(This,eIdentityType,pFilterkey,pFilterPropVarValue,ppIdentityEnum) )
    ( (This)->lpVtbl -> Create(This,lpszUserName,ppPropertyStore,pKeywordsToAdd) )
    ( (This)->lpVtbl -> Import(This,pPropertyStore) )
    ( (This)->lpVtbl -> Delete(This,lpszUniqueID,pKeywordsToDelete) )
    ( (This)->lpVtbl -> FindByUniqueID(This,lpszUniqueID,ppPropertyStore) )
    ( (This)->lpVtbl -> GetProviderPropertyStore(This,ppPropertyStore) )
    ( (This)->lpVtbl -> Advise(This,pIdentityAdvise,dwIdentityUpdateEvents,pdwCookie) )
    ( (This)->lpVtbl -> UnAdvise(This,dwCookie) )
EXTERN_C const IID IID_AsyncIIdentityProvider;
    typedef struct AsyncIIdentityProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in AsyncIIdentityProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in AsyncIIdentityProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in AsyncIIdentityProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_GetIdentityEnum )(
            __RPC__in AsyncIIdentityProvider * This,
                       const IDENTITY_TYPE eIdentityType,
                               __RPC__in_opt const PROPERTYKEY *pFilterkey,
                               __RPC__in_opt const PROPVARIANT *pFilterPropVarValue);
        HRESULT ( STDMETHODCALLTYPE *Finish_GetIdentityEnum )(
            __RPC__in AsyncIIdentityProvider * This,
                        __RPC__deref_out_opt IEnumUnknown **ppIdentityEnum);
        HRESULT ( STDMETHODCALLTYPE *Begin_Create )(
            __RPC__in AsyncIIdentityProvider * This,
                       __RPC__in LPCWSTR lpszUserName,
                       __RPC__in const PROPVARIANT *pKeywordsToAdd);
        HRESULT ( STDMETHODCALLTYPE *Finish_Create )(
            __RPC__in AsyncIIdentityProvider * This,
                        __RPC__deref_out_opt IPropertyStore **ppPropertyStore);
        HRESULT ( STDMETHODCALLTYPE *Begin_Import )(
            __RPC__in AsyncIIdentityProvider * This,
                       __RPC__in_opt IPropertyStore *pPropertyStore);
        HRESULT ( STDMETHODCALLTYPE *Finish_Import )(
            __RPC__in AsyncIIdentityProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_Delete )(
            __RPC__in AsyncIIdentityProvider * This,
                       __RPC__in LPCWSTR lpszUniqueID,
                       __RPC__in const PROPVARIANT *pKeywordsToDelete);
        HRESULT ( STDMETHODCALLTYPE *Finish_Delete )(
            __RPC__in AsyncIIdentityProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_FindByUniqueID )(
            __RPC__in AsyncIIdentityProvider * This,
                       __RPC__in LPCWSTR lpszUniqueID);
        HRESULT ( STDMETHODCALLTYPE *Finish_FindByUniqueID )(
            __RPC__in AsyncIIdentityProvider * This,
                        __RPC__deref_out_opt IPropertyStore **ppPropertyStore);
        HRESULT ( STDMETHODCALLTYPE *Begin_GetProviderPropertyStore )(
            __RPC__in AsyncIIdentityProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Finish_GetProviderPropertyStore )(
            __RPC__in AsyncIIdentityProvider * This,
                        __RPC__deref_out_opt IPropertyStore **ppPropertyStore);
        HRESULT ( STDMETHODCALLTYPE *Begin_Advise )(
            __RPC__in AsyncIIdentityProvider * This,
                       __RPC__in_opt IIdentityAdvise *pIdentityAdvise,
                       DWORD dwIdentityUpdateEvents);
        HRESULT ( STDMETHODCALLTYPE *Finish_Advise )(
            __RPC__in AsyncIIdentityProvider * This,
                        __RPC__out DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *Begin_UnAdvise )(
            __RPC__in AsyncIIdentityProvider * This,
                       const DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *Finish_UnAdvise )(
            __RPC__in AsyncIIdentityProvider * This);
        END_INTERFACE
    } AsyncIIdentityProviderVtbl;
    interface AsyncIIdentityProvider
    {
        CONST_VTBL struct AsyncIIdentityProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_GetIdentityEnum(This,eIdentityType,pFilterkey,pFilterPropVarValue) )
    ( (This)->lpVtbl -> Finish_GetIdentityEnum(This,ppIdentityEnum) )
    ( (This)->lpVtbl -> Begin_Create(This,lpszUserName,pKeywordsToAdd) )
    ( (This)->lpVtbl -> Finish_Create(This,ppPropertyStore) )
    ( (This)->lpVtbl -> Begin_Import(This,pPropertyStore) )
    ( (This)->lpVtbl -> Finish_Import(This) )
    ( (This)->lpVtbl -> Begin_Delete(This,lpszUniqueID,pKeywordsToDelete) )
    ( (This)->lpVtbl -> Finish_Delete(This) )
    ( (This)->lpVtbl -> Begin_FindByUniqueID(This,lpszUniqueID) )
    ( (This)->lpVtbl -> Finish_FindByUniqueID(This,ppPropertyStore) )
    ( (This)->lpVtbl -> Begin_GetProviderPropertyStore(This) )
    ( (This)->lpVtbl -> Finish_GetProviderPropertyStore(This,ppPropertyStore) )
    ( (This)->lpVtbl -> Begin_Advise(This,pIdentityAdvise,dwIdentityUpdateEvents) )
    ( (This)->lpVtbl -> Finish_Advise(This,pdwCookie) )
    ( (This)->lpVtbl -> Begin_UnAdvise(This,dwCookie) )
    ( (This)->lpVtbl -> Finish_UnAdvise(This) )
EXTERN_C const IID IID_IAssociatedIdentityProvider;
    typedef struct IAssociatedIdentityProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAssociatedIdentityProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAssociatedIdentityProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAssociatedIdentityProvider * This);
        HRESULT ( STDMETHODCALLTYPE *AssociateIdentity )(
            __RPC__in IAssociatedIdentityProvider * This,
                       __RPC__in HWND hwndParent,
                        __RPC__deref_out_opt IPropertyStore **ppPropertyStore);
        HRESULT ( STDMETHODCALLTYPE *DisassociateIdentity )(
            __RPC__in IAssociatedIdentityProvider * This,
                       __RPC__in HWND hwndParent,
                       __RPC__in LPCWSTR lpszUniqueID);
        HRESULT ( STDMETHODCALLTYPE *ChangeCredential )(
            __RPC__in IAssociatedIdentityProvider * This,
                       __RPC__in HWND hwndParent,
                       __RPC__in LPCWSTR lpszUniqueID);
        END_INTERFACE
    } IAssociatedIdentityProviderVtbl;
    interface IAssociatedIdentityProvider
    {
        CONST_VTBL struct IAssociatedIdentityProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AssociateIdentity(This,hwndParent,ppPropertyStore) )
    ( (This)->lpVtbl -> DisassociateIdentity(This,hwndParent,lpszUniqueID) )
    ( (This)->lpVtbl -> ChangeCredential(This,hwndParent,lpszUniqueID) )
EXTERN_C const IID IID_AsyncIAssociatedIdentityProvider;
    typedef struct AsyncIAssociatedIdentityProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in AsyncIAssociatedIdentityProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in AsyncIAssociatedIdentityProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in AsyncIAssociatedIdentityProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_AssociateIdentity )(
            __RPC__in AsyncIAssociatedIdentityProvider * This,
                       __RPC__in HWND hwndParent);
        HRESULT ( STDMETHODCALLTYPE *Finish_AssociateIdentity )(
            __RPC__in AsyncIAssociatedIdentityProvider * This,
                        __RPC__deref_out_opt IPropertyStore **ppPropertyStore);
        HRESULT ( STDMETHODCALLTYPE *Begin_DisassociateIdentity )(
            __RPC__in AsyncIAssociatedIdentityProvider * This,
                       __RPC__in HWND hwndParent,
                       __RPC__in LPCWSTR lpszUniqueID);
        HRESULT ( STDMETHODCALLTYPE *Finish_DisassociateIdentity )(
            __RPC__in AsyncIAssociatedIdentityProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_ChangeCredential )(
            __RPC__in AsyncIAssociatedIdentityProvider * This,
                       __RPC__in HWND hwndParent,
                       __RPC__in LPCWSTR lpszUniqueID);
        HRESULT ( STDMETHODCALLTYPE *Finish_ChangeCredential )(
            __RPC__in AsyncIAssociatedIdentityProvider * This);
        END_INTERFACE
    } AsyncIAssociatedIdentityProviderVtbl;
    interface AsyncIAssociatedIdentityProvider
    {
        CONST_VTBL struct AsyncIAssociatedIdentityProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_AssociateIdentity(This,hwndParent) )
    ( (This)->lpVtbl -> Finish_AssociateIdentity(This,ppPropertyStore) )
    ( (This)->lpVtbl -> Begin_DisassociateIdentity(This,hwndParent,lpszUniqueID) )
    ( (This)->lpVtbl -> Finish_DisassociateIdentity(This) )
    ( (This)->lpVtbl -> Begin_ChangeCredential(This,hwndParent,lpszUniqueID) )
    ( (This)->lpVtbl -> Finish_ChangeCredential(This) )
typedef
enum __MIDL___MIDL_itf_identityprovider_0000_0003_0001
    {
        IDENTITY_URL_CREATE_ACCOUNT_WIZARD = 0,
        IDENTITY_URL_SIGN_IN_WIZARD = 1,
        IDENTITY_URL_CHANGE_PASSWORD_WIZARD = 2,
        IDENTITY_URL_IFEXISTS_WIZARD = 3,
        IDENTITY_URL_ACCOUNT_SETTINGS = 4,
        IDENTITY_URL_RESTORE_WIZARD = 5,
        IDENTITY_URL_CONNECT_WIZARD = 6
    } IDENTITY_URL;
typedef
enum __MIDL___MIDL_itf_identityprovider_0000_0003_0002
    {
        NOT_CONNECTED = 0,
        CONNECTING = 1,
        CONNECT_COMPLETED = 2
    } ACCOUNT_STATE;
extern RPC_IF_HANDLE __MIDL_itf_identityprovider_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_identityprovider_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IConnectedIdentityProvider;
    typedef struct IConnectedIdentityProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IConnectedIdentityProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IConnectedIdentityProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IConnectedIdentityProvider * This);
        HRESULT ( STDMETHODCALLTYPE *ConnectIdentity )(
            __RPC__in IConnectedIdentityProvider * This,
                                     __RPC__in_ecount_full(AuthBufferSize) BYTE *AuthBuffer,
                       ULONG AuthBufferSize);
        HRESULT ( STDMETHODCALLTYPE *DisconnectIdentity )(
            __RPC__in IConnectedIdentityProvider * This);
        HRESULT ( STDMETHODCALLTYPE *IsConnected )(
            __RPC__in IConnectedIdentityProvider * This,
                             __RPC__out BOOL *Connected);
        HRESULT ( STDMETHODCALLTYPE *GetUrl )(
            __RPC__in IConnectedIdentityProvider * This,
                       IDENTITY_URL Identifier,
                               __RPC__in_opt IBindCtx *Context,
                        __RPC__out VARIANT *PostData,
                                __RPC__deref_out_opt_string LPWSTR *Url);
        HRESULT ( STDMETHODCALLTYPE *GetAccountState )(
            __RPC__in IConnectedIdentityProvider * This,
                        __RPC__out ACCOUNT_STATE *pState);
        END_INTERFACE
    } IConnectedIdentityProviderVtbl;
    interface IConnectedIdentityProvider
    {
        CONST_VTBL struct IConnectedIdentityProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ConnectIdentity(This,AuthBuffer,AuthBufferSize) )
    ( (This)->lpVtbl -> DisconnectIdentity(This) )
    ( (This)->lpVtbl -> IsConnected(This,Connected) )
    ( (This)->lpVtbl -> GetUrl(This,Identifier,Context,PostData,Url) )
    ( (This)->lpVtbl -> GetAccountState(This,pState) )
EXTERN_C const IID IID_AsyncIConnectedIdentityProvider;
    typedef struct AsyncIConnectedIdentityProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in AsyncIConnectedIdentityProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in AsyncIConnectedIdentityProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in AsyncIConnectedIdentityProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_ConnectIdentity )(
            __RPC__in AsyncIConnectedIdentityProvider * This,
                                     __RPC__in_xcount_full(AuthBufferSize) BYTE *AuthBuffer,
                       ULONG AuthBufferSize);
        HRESULT ( STDMETHODCALLTYPE *Finish_ConnectIdentity )(
            __RPC__in AsyncIConnectedIdentityProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_DisconnectIdentity )(
            __RPC__in AsyncIConnectedIdentityProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Finish_DisconnectIdentity )(
            __RPC__in AsyncIConnectedIdentityProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_IsConnected )(
            __RPC__in AsyncIConnectedIdentityProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Finish_IsConnected )(
            __RPC__in AsyncIConnectedIdentityProvider * This,
                             __RPC__out BOOL *Connected);
        HRESULT ( STDMETHODCALLTYPE *Begin_GetUrl )(
            __RPC__in AsyncIConnectedIdentityProvider * This,
                       IDENTITY_URL Identifier,
                               __RPC__in_opt IBindCtx *Context);
        HRESULT ( STDMETHODCALLTYPE *Finish_GetUrl )(
            __RPC__in AsyncIConnectedIdentityProvider * This,
                        __RPC__out VARIANT *PostData,
                                __RPC__deref_out_opt_string LPWSTR *Url);
        HRESULT ( STDMETHODCALLTYPE *Begin_GetAccountState )(
            __RPC__in AsyncIConnectedIdentityProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Finish_GetAccountState )(
            __RPC__in AsyncIConnectedIdentityProvider * This,
                        __RPC__out ACCOUNT_STATE *pState);
        END_INTERFACE
    } AsyncIConnectedIdentityProviderVtbl;
    interface AsyncIConnectedIdentityProvider
    {
        CONST_VTBL struct AsyncIConnectedIdentityProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_ConnectIdentity(This,AuthBuffer,AuthBufferSize) )
    ( (This)->lpVtbl -> Finish_ConnectIdentity(This) )
    ( (This)->lpVtbl -> Begin_DisconnectIdentity(This) )
    ( (This)->lpVtbl -> Finish_DisconnectIdentity(This) )
    ( (This)->lpVtbl -> Begin_IsConnected(This) )
    ( (This)->lpVtbl -> Finish_IsConnected(This,Connected) )
    ( (This)->lpVtbl -> Begin_GetUrl(This,Identifier,Context) )
    ( (This)->lpVtbl -> Finish_GetUrl(This,PostData,Url) )
    ( (This)->lpVtbl -> Begin_GetAccountState(This) )
    ( (This)->lpVtbl -> Finish_GetAccountState(This,pState) )
EXTERN_C const IID IID_IIdentityAuthentication;
    typedef struct IIdentityAuthenticationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IIdentityAuthentication * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IIdentityAuthentication * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IIdentityAuthentication * This);
        HRESULT ( STDMETHODCALLTYPE *SetIdentityCredential )(
            __RPC__in IIdentityAuthentication * This,
                                        __RPC__in_ecount_full_opt(CredBufferLength) BYTE *CredBuffer,
                       ULONG CredBufferLength);
        HRESULT ( STDMETHODCALLTYPE *ValidateIdentityCredential )(
            __RPC__in IIdentityAuthentication * This,
                                     __RPC__in_ecount_full(CredBufferLength) BYTE *CredBuffer,
                       ULONG CredBufferLength,
                                    __RPC__deref_opt_inout_opt IPropertyStore **ppIdentityProperties);
        END_INTERFACE
    } IIdentityAuthenticationVtbl;
    interface IIdentityAuthentication
    {
        CONST_VTBL struct IIdentityAuthenticationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetIdentityCredential(This,CredBuffer,CredBufferLength) )
    ( (This)->lpVtbl -> ValidateIdentityCredential(This,CredBuffer,CredBufferLength,ppIdentityProperties) )
EXTERN_C const IID IID_AsyncIIdentityAuthentication;
    typedef struct AsyncIIdentityAuthenticationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in AsyncIIdentityAuthentication * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in AsyncIIdentityAuthentication * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in AsyncIIdentityAuthentication * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_SetIdentityCredential )(
            __RPC__in AsyncIIdentityAuthentication * This,
                                        __RPC__in_xcount_full_opt(CredBufferLength) BYTE *CredBuffer,
                       ULONG CredBufferLength);
        HRESULT ( STDMETHODCALLTYPE *Finish_SetIdentityCredential )(
            __RPC__in AsyncIIdentityAuthentication * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_ValidateIdentityCredential )(
            __RPC__in AsyncIIdentityAuthentication * This,
                                     __RPC__in_xcount_full(CredBufferLength) BYTE *CredBuffer,
                       ULONG CredBufferLength,
                                    __RPC__deref_opt_inout_opt IPropertyStore **ppIdentityProperties);
        HRESULT ( STDMETHODCALLTYPE *Finish_ValidateIdentityCredential )(
            __RPC__in AsyncIIdentityAuthentication * This,
                                    __RPC__deref_opt_inout_opt IPropertyStore **ppIdentityProperties);
        END_INTERFACE
    } AsyncIIdentityAuthenticationVtbl;
    interface AsyncIIdentityAuthentication
    {
        CONST_VTBL struct AsyncIIdentityAuthenticationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_SetIdentityCredential(This,CredBuffer,CredBufferLength) )
    ( (This)->lpVtbl -> Finish_SetIdentityCredential(This) )
    ( (This)->lpVtbl -> Begin_ValidateIdentityCredential(This,CredBuffer,CredBufferLength,ppIdentityProperties) )
    ( (This)->lpVtbl -> Finish_ValidateIdentityCredential(This,ppIdentityProperties) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_identityprovider_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_identityprovider_0000_0005_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
