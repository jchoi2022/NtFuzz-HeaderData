#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IIdentityStore IIdentityStore;
typedef interface AsyncIIdentityStore AsyncIIdentityStore;
typedef interface IIdentityStoreEx IIdentityStoreEx;
typedef interface AsyncIIdentityStoreEx AsyncIIdentityStoreEx;
typedef class CoClassIdentityStore CoClassIdentityStore;
typedef class CIdentityProfileHandler CIdentityProfileHandler;
#include "oaidl.h"
#include "ocidl.h"
#include "propsys.h"
#include "IdentityCommon.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_identitystore_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_identitystore_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IIdentityStore;
    typedef struct IIdentityStoreVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IIdentityStore * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IIdentityStore * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IIdentityStore * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IIdentityStore * This,
                        __RPC__out DWORD *pdwProviders);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IIdentityStore * This,
                       const DWORD dwProvider,
                                    __RPC__inout_opt GUID *pProvGuid,
                        __RPC__deref_out_opt IUnknown **ppIdentityProvider);
        HRESULT ( STDMETHODCALLTYPE *AddToCache )(
            __RPC__in IIdentityStore * This,
                       __RPC__in LPCWSTR lpszUniqueID,
                       __RPC__in REFGUID ProviderGUID);
        HRESULT ( STDMETHODCALLTYPE *ConvertToSid )(
            __RPC__in IIdentityStore * This,
                       __RPC__in LPCWSTR lpszUniqueID,
                       __RPC__in REFGUID ProviderGUID,
                       USHORT cbSid,
                                             __RPC__inout_ecount_full_opt(cbSid) BYTE *pSid,
                        __RPC__out USHORT *pcbRequiredSid);
        HRESULT ( STDMETHODCALLTYPE *EnumerateIdentities )(
            __RPC__in IIdentityStore * This,
                       const IDENTITY_TYPE eIdentityType,
                               __RPC__in_opt const PROPERTYKEY *pFilterkey,
                               __RPC__in_opt const PROPVARIANT *pFilterPropVarValue,
                        __RPC__deref_out_opt IEnumUnknown **ppIdentityEnum);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IIdentityStore * This);
        END_INTERFACE
    } IIdentityStoreVtbl;
    interface IIdentityStore
    {
        CONST_VTBL struct IIdentityStoreVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,pdwProviders) )
    ( (This)->lpVtbl -> GetAt(This,dwProvider,pProvGuid,ppIdentityProvider) )
    ( (This)->lpVtbl -> AddToCache(This,lpszUniqueID,ProviderGUID) )
    ( (This)->lpVtbl -> ConvertToSid(This,lpszUniqueID,ProviderGUID,cbSid,pSid,pcbRequiredSid) )
    ( (This)->lpVtbl -> EnumerateIdentities(This,eIdentityType,pFilterkey,pFilterPropVarValue,ppIdentityEnum) )
    ( (This)->lpVtbl -> Reset(This) )
EXTERN_C const IID IID_AsyncIIdentityStore;
    typedef struct AsyncIIdentityStoreVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in AsyncIIdentityStore * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in AsyncIIdentityStore * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in AsyncIIdentityStore * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_GetCount )(
            __RPC__in AsyncIIdentityStore * This);
        HRESULT ( STDMETHODCALLTYPE *Finish_GetCount )(
            __RPC__in AsyncIIdentityStore * This,
                        __RPC__out DWORD *pdwProviders);
        HRESULT ( STDMETHODCALLTYPE *Begin_GetAt )(
            __RPC__in AsyncIIdentityStore * This,
                       const DWORD dwProvider,
                                    __RPC__inout_opt GUID *pProvGuid);
        HRESULT ( STDMETHODCALLTYPE *Finish_GetAt )(
            __RPC__in AsyncIIdentityStore * This,
                                    __RPC__inout_opt GUID *pProvGuid,
                        __RPC__deref_out_opt IUnknown **ppIdentityProvider);
        HRESULT ( STDMETHODCALLTYPE *Begin_AddToCache )(
            __RPC__in AsyncIIdentityStore * This,
                       __RPC__in LPCWSTR lpszUniqueID,
                       __RPC__in REFGUID ProviderGUID);
        HRESULT ( STDMETHODCALLTYPE *Finish_AddToCache )(
            __RPC__in AsyncIIdentityStore * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_ConvertToSid )(
            __RPC__in AsyncIIdentityStore * This,
                       __RPC__in LPCWSTR lpszUniqueID,
                       __RPC__in REFGUID ProviderGUID,
                       USHORT cbSid,
                                             __RPC__inout_xcount_full_opt(cbSid) BYTE *pSid);
        HRESULT ( STDMETHODCALLTYPE *Finish_ConvertToSid )(
            __RPC__in AsyncIIdentityStore * This,
                                             __RPC__inout_xcount_full_opt(cbSid) BYTE *pSid,
                        __RPC__out USHORT *pcbRequiredSid);
        HRESULT ( STDMETHODCALLTYPE *Begin_EnumerateIdentities )(
            __RPC__in AsyncIIdentityStore * This,
                       const IDENTITY_TYPE eIdentityType,
                               __RPC__in_opt const PROPERTYKEY *pFilterkey,
                               __RPC__in_opt const PROPVARIANT *pFilterPropVarValue);
        HRESULT ( STDMETHODCALLTYPE *Finish_EnumerateIdentities )(
            __RPC__in AsyncIIdentityStore * This,
                        __RPC__deref_out_opt IEnumUnknown **ppIdentityEnum);
        HRESULT ( STDMETHODCALLTYPE *Begin_Reset )(
            __RPC__in AsyncIIdentityStore * This);
        HRESULT ( STDMETHODCALLTYPE *Finish_Reset )(
            __RPC__in AsyncIIdentityStore * This);
        END_INTERFACE
    } AsyncIIdentityStoreVtbl;
    interface AsyncIIdentityStore
    {
        CONST_VTBL struct AsyncIIdentityStoreVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_GetCount(This) )
    ( (This)->lpVtbl -> Finish_GetCount(This,pdwProviders) )
    ( (This)->lpVtbl -> Begin_GetAt(This,dwProvider,pProvGuid) )
    ( (This)->lpVtbl -> Finish_GetAt(This,pProvGuid,ppIdentityProvider) )
    ( (This)->lpVtbl -> Begin_AddToCache(This,lpszUniqueID,ProviderGUID) )
    ( (This)->lpVtbl -> Finish_AddToCache(This) )
    ( (This)->lpVtbl -> Begin_ConvertToSid(This,lpszUniqueID,ProviderGUID,cbSid,pSid) )
    ( (This)->lpVtbl -> Finish_ConvertToSid(This,pSid,pcbRequiredSid) )
    ( (This)->lpVtbl -> Begin_EnumerateIdentities(This,eIdentityType,pFilterkey,pFilterPropVarValue) )
    ( (This)->lpVtbl -> Finish_EnumerateIdentities(This,ppIdentityEnum) )
    ( (This)->lpVtbl -> Begin_Reset(This) )
    ( (This)->lpVtbl -> Finish_Reset(This) )
EXTERN_C const IID IID_IIdentityStoreEx;
    typedef struct IIdentityStoreExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IIdentityStoreEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IIdentityStoreEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IIdentityStoreEx * This);
        HRESULT ( STDMETHODCALLTYPE *CreateConnectedIdentity )(
            __RPC__in IIdentityStoreEx * This,
                               __RPC__in_opt LPCWSTR LocalName,
                       __RPC__in LPCWSTR ConnectedName,
                       __RPC__in REFGUID ProviderGUID);
        HRESULT ( STDMETHODCALLTYPE *DeleteConnectedIdentity )(
            __RPC__in IIdentityStoreEx * This,
                       __RPC__in LPCWSTR ConnectedName,
                       __RPC__in REFGUID ProviderGUID);
        END_INTERFACE
    } IIdentityStoreExVtbl;
    interface IIdentityStoreEx
    {
        CONST_VTBL struct IIdentityStoreExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateConnectedIdentity(This,LocalName,ConnectedName,ProviderGUID) )
    ( (This)->lpVtbl -> DeleteConnectedIdentity(This,ConnectedName,ProviderGUID) )
EXTERN_C const IID IID_AsyncIIdentityStoreEx;
    typedef struct AsyncIIdentityStoreExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in AsyncIIdentityStoreEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in AsyncIIdentityStoreEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in AsyncIIdentityStoreEx * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_CreateConnectedIdentity )(
            __RPC__in AsyncIIdentityStoreEx * This,
                               __RPC__in_opt LPCWSTR LocalName,
                       __RPC__in LPCWSTR ConnectedName,
                       __RPC__in REFGUID ProviderGUID);
        HRESULT ( STDMETHODCALLTYPE *Finish_CreateConnectedIdentity )(
            __RPC__in AsyncIIdentityStoreEx * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_DeleteConnectedIdentity )(
            __RPC__in AsyncIIdentityStoreEx * This,
                       __RPC__in LPCWSTR ConnectedName,
                       __RPC__in REFGUID ProviderGUID);
        HRESULT ( STDMETHODCALLTYPE *Finish_DeleteConnectedIdentity )(
            __RPC__in AsyncIIdentityStoreEx * This);
        END_INTERFACE
    } AsyncIIdentityStoreExVtbl;
    interface AsyncIIdentityStoreEx
    {
        CONST_VTBL struct AsyncIIdentityStoreExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_CreateConnectedIdentity(This,LocalName,ConnectedName,ProviderGUID) )
    ( (This)->lpVtbl -> Finish_CreateConnectedIdentity(This) )
    ( (This)->lpVtbl -> Begin_DeleteConnectedIdentity(This,ConnectedName,ProviderGUID) )
    ( (This)->lpVtbl -> Finish_DeleteConnectedIdentity(This) )
EXTERN_C const IID LIBID_IdentityStoreLib;
EXTERN_C const CLSID CLSID_CoClassIdentityStore;
class DECLSPEC_UUID("30d49246-d217-465f-b00b-ac9ddd652eb7")
CoClassIdentityStore;
EXTERN_C const CLSID CLSID_CIdentityProfileHandler;
class DECLSPEC_UUID("ecf5bf46-e3b6-449a-b56b-43f58f867814")
CIdentityProfileHandler;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_identitystore_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_identitystore_0000_0003_v0_0_s_ifspec;
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
