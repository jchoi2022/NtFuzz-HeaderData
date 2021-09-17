#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITDirectoryObjectConference ITDirectoryObjectConference;
typedef interface ITDirectoryObjectUser ITDirectoryObjectUser;
typedef interface IEnumDialableAddrs IEnumDialableAddrs;
typedef interface ITDirectoryObject ITDirectoryObject;
typedef interface IEnumDirectoryObject IEnumDirectoryObject;
typedef interface ITILSConfig ITILSConfig;
typedef interface ITDirectory ITDirectory;
typedef interface IEnumDirectory IEnumDirectory;
typedef interface ITRendezvous ITRendezvous;
typedef class Rendezvous Rendezvous;
#include "oaidl.h"
#include "tapi3if.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum DIRECTORY_TYPE
    {
        DT_NTDS = 1,
        DT_ILS = 2
    } DIRECTORY_TYPE;
typedef
enum DIRECTORY_OBJECT_TYPE
    {
        OT_CONFERENCE = 1,
        OT_USER = 2
    } DIRECTORY_OBJECT_TYPE;
typedef
enum RND_ADVERTISING_SCOPE
    {
        RAS_LOCAL = 1,
        RAS_SITE = 2,
        RAS_REGION = 3,
        RAS_WORLD = 4
    } RND_ADVERTISING_SCOPE;
extern RPC_IF_HANDLE __MIDL_itf_rend_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rend_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITDirectoryObjectConference;
    typedef struct ITDirectoryObjectConferenceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITDirectoryObjectConference * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITDirectoryObjectConference * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITDirectoryObjectConference * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITDirectoryObjectConference * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITDirectoryObjectConference * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITDirectoryObjectConference * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITDirectoryObjectConference * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Protocol )(
            __RPC__in ITDirectoryObjectConference * This,
                                __RPC__deref_out_opt BSTR *ppProtocol);
                                        HRESULT ( STDMETHODCALLTYPE *get_Originator )(
            __RPC__in ITDirectoryObjectConference * This,
                                __RPC__deref_out_opt BSTR *ppOriginator);
                                        HRESULT ( STDMETHODCALLTYPE *put_Originator )(
            __RPC__in ITDirectoryObjectConference * This,
                       __RPC__in BSTR pOriginator);
                                        HRESULT ( STDMETHODCALLTYPE *get_AdvertisingScope )(
            __RPC__in ITDirectoryObjectConference * This,
                                __RPC__out RND_ADVERTISING_SCOPE *pAdvertisingScope);
                                        HRESULT ( STDMETHODCALLTYPE *put_AdvertisingScope )(
            __RPC__in ITDirectoryObjectConference * This,
                       RND_ADVERTISING_SCOPE AdvertisingScope);
                                        HRESULT ( STDMETHODCALLTYPE *get_Url )(
            __RPC__in ITDirectoryObjectConference * This,
                                __RPC__deref_out_opt BSTR *ppUrl);
                                        HRESULT ( STDMETHODCALLTYPE *put_Url )(
            __RPC__in ITDirectoryObjectConference * This,
                       __RPC__in BSTR pUrl);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in ITDirectoryObjectConference * This,
                                __RPC__deref_out_opt BSTR *ppDescription);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in ITDirectoryObjectConference * This,
                       __RPC__in BSTR pDescription);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsEncrypted )(
            __RPC__in ITDirectoryObjectConference * This,
                                __RPC__out VARIANT_BOOL *pfEncrypted);
                                        HRESULT ( STDMETHODCALLTYPE *put_IsEncrypted )(
            __RPC__in ITDirectoryObjectConference * This,
                       VARIANT_BOOL fEncrypted);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
            __RPC__in ITDirectoryObjectConference * This,
                                __RPC__out DATE *pDate);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartTime )(
            __RPC__in ITDirectoryObjectConference * This,
                       DATE Date);
                                        HRESULT ( STDMETHODCALLTYPE *get_StopTime )(
            __RPC__in ITDirectoryObjectConference * This,
                                __RPC__out DATE *pDate);
                                        HRESULT ( STDMETHODCALLTYPE *put_StopTime )(
            __RPC__in ITDirectoryObjectConference * This,
                       DATE Date);
        END_INTERFACE
    } ITDirectoryObjectConferenceVtbl;
    interface ITDirectoryObjectConference
    {
        CONST_VTBL struct ITDirectoryObjectConferenceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Protocol(This,ppProtocol) )
    ( (This)->lpVtbl -> get_Originator(This,ppOriginator) )
    ( (This)->lpVtbl -> put_Originator(This,pOriginator) )
    ( (This)->lpVtbl -> get_AdvertisingScope(This,pAdvertisingScope) )
    ( (This)->lpVtbl -> put_AdvertisingScope(This,AdvertisingScope) )
    ( (This)->lpVtbl -> get_Url(This,ppUrl) )
    ( (This)->lpVtbl -> put_Url(This,pUrl) )
    ( (This)->lpVtbl -> get_Description(This,ppDescription) )
    ( (This)->lpVtbl -> put_Description(This,pDescription) )
    ( (This)->lpVtbl -> get_IsEncrypted(This,pfEncrypted) )
    ( (This)->lpVtbl -> put_IsEncrypted(This,fEncrypted) )
    ( (This)->lpVtbl -> get_StartTime(This,pDate) )
    ( (This)->lpVtbl -> put_StartTime(This,Date) )
    ( (This)->lpVtbl -> get_StopTime(This,pDate) )
    ( (This)->lpVtbl -> put_StopTime(This,Date) )
EXTERN_C const IID IID_ITDirectoryObjectUser;
    typedef struct ITDirectoryObjectUserVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITDirectoryObjectUser * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITDirectoryObjectUser * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITDirectoryObjectUser * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITDirectoryObjectUser * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITDirectoryObjectUser * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITDirectoryObjectUser * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITDirectoryObjectUser * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_IPPhonePrimary )(
            __RPC__in ITDirectoryObjectUser * This,
                                __RPC__deref_out_opt BSTR *ppName);
                                        HRESULT ( STDMETHODCALLTYPE *put_IPPhonePrimary )(
            __RPC__in ITDirectoryObjectUser * This,
                       __RPC__in BSTR pName);
        END_INTERFACE
    } ITDirectoryObjectUserVtbl;
    interface ITDirectoryObjectUser
    {
        CONST_VTBL struct ITDirectoryObjectUserVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_IPPhonePrimary(This,ppName) )
    ( (This)->lpVtbl -> put_IPPhonePrimary(This,pName) )
EXTERN_C const IID IID_IEnumDialableAddrs;
    typedef struct IEnumDialableAddrsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumDialableAddrs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumDialableAddrs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumDialableAddrs * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumDialableAddrs * This,
                       ULONG celt,
                                 __RPC__out_ecount_full(celt) BSTR *ppElements,
                                  __RPC__inout_opt ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumDialableAddrs * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumDialableAddrs * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumDialableAddrs * This,
                                __RPC__deref_out_opt IEnumDialableAddrs **ppEnum);
        END_INTERFACE
    } IEnumDialableAddrsVtbl;
    interface IEnumDialableAddrs
    {
        CONST_VTBL struct IEnumDialableAddrsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pcFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_ITDirectoryObject;
    typedef struct ITDirectoryObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITDirectoryObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITDirectoryObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITDirectoryObject * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITDirectoryObject * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITDirectoryObject * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITDirectoryObject * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITDirectoryObject * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ObjectType )(
            __RPC__in ITDirectoryObject * This,
                                __RPC__out DIRECTORY_OBJECT_TYPE *pObjectType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ITDirectoryObject * This,
                                __RPC__deref_out_opt BSTR *ppName);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in ITDirectoryObject * This,
                       __RPC__in BSTR pName);
                                        HRESULT ( STDMETHODCALLTYPE *get_DialableAddrs )(
            __RPC__in ITDirectoryObject * This,
                       long dwAddressType,
                                __RPC__out VARIANT *pVariant);
                                                   HRESULT ( STDMETHODCALLTYPE *EnumerateDialableAddrs )(
            __RPC__in ITDirectoryObject * This,
                       DWORD dwAddressType,
                        __RPC__deref_out_opt IEnumDialableAddrs **ppEnumDialableAddrs);
                                        HRESULT ( STDMETHODCALLTYPE *get_SecurityDescriptor )(
            __RPC__in ITDirectoryObject * This,
                                __RPC__deref_out_opt IDispatch **ppSecDes);
                                        HRESULT ( STDMETHODCALLTYPE *put_SecurityDescriptor )(
            __RPC__in ITDirectoryObject * This,
                       __RPC__in_opt IDispatch *pSecDes);
        END_INTERFACE
    } ITDirectoryObjectVtbl;
    interface ITDirectoryObject
    {
        CONST_VTBL struct ITDirectoryObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ObjectType(This,pObjectType) )
    ( (This)->lpVtbl -> get_Name(This,ppName) )
    ( (This)->lpVtbl -> put_Name(This,pName) )
    ( (This)->lpVtbl -> get_DialableAddrs(This,dwAddressType,pVariant) )
    ( (This)->lpVtbl -> EnumerateDialableAddrs(This,dwAddressType,ppEnumDialableAddrs) )
    ( (This)->lpVtbl -> get_SecurityDescriptor(This,ppSecDes) )
    ( (This)->lpVtbl -> put_SecurityDescriptor(This,pSecDes) )
EXTERN_C const IID IID_IEnumDirectoryObject;
    typedef struct IEnumDirectoryObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumDirectoryObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumDirectoryObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumDirectoryObject * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumDirectoryObject * This,
                       ULONG celt,
                                 __RPC__out_ecount_full(celt) ITDirectoryObject **pVal,
                                  __RPC__inout_opt ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumDirectoryObject * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumDirectoryObject * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumDirectoryObject * This,
                                __RPC__deref_out_opt IEnumDirectoryObject **ppEnum);
        END_INTERFACE
    } IEnumDirectoryObjectVtbl;
    interface IEnumDirectoryObject
    {
        CONST_VTBL struct IEnumDirectoryObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,pVal,pcFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_ITILSConfig;
    typedef struct ITILSConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITILSConfig * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITILSConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITILSConfig * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITILSConfig * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITILSConfig * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITILSConfig * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITILSConfig * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Port )(
            __RPC__in ITILSConfig * This,
                                __RPC__out long *pPort);
                                        HRESULT ( STDMETHODCALLTYPE *put_Port )(
            __RPC__in ITILSConfig * This,
                       long Port);
        END_INTERFACE
    } ITILSConfigVtbl;
    interface ITILSConfig
    {
        CONST_VTBL struct ITILSConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Port(This,pPort) )
    ( (This)->lpVtbl -> put_Port(This,Port) )
EXTERN_C const IID IID_ITDirectory;
    typedef struct ITDirectoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITDirectory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITDirectory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITDirectory * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITDirectory * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITDirectory * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITDirectory * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITDirectory * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_DirectoryType )(
            __RPC__in ITDirectory * This,
                                __RPC__out DIRECTORY_TYPE *pDirectoryType);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in ITDirectory * This,
                                __RPC__deref_out_opt BSTR *pName);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsDynamic )(
            __RPC__in ITDirectory * This,
                                __RPC__out VARIANT_BOOL *pfDynamic);
                                        HRESULT ( STDMETHODCALLTYPE *get_DefaultObjectTTL )(
            __RPC__in ITDirectory * This,
                                __RPC__out long *pTTL);
                                        HRESULT ( STDMETHODCALLTYPE *put_DefaultObjectTTL )(
            __RPC__in ITDirectory * This,
                       long TTL);
                               HRESULT ( STDMETHODCALLTYPE *EnableAutoRefresh )(
            __RPC__in ITDirectory * This,
                       VARIANT_BOOL fEnable);
                               HRESULT ( STDMETHODCALLTYPE *Connect )(
            __RPC__in ITDirectory * This,
                       VARIANT_BOOL fSecure);
                               HRESULT ( STDMETHODCALLTYPE *Bind )(
            __RPC__in ITDirectory * This,
                       __RPC__in BSTR pDomainName,
                       __RPC__in BSTR pUserName,
                       __RPC__in BSTR pPassword,
                       long lFlags);
                               HRESULT ( STDMETHODCALLTYPE *AddDirectoryObject )(
            __RPC__in ITDirectory * This,
                       __RPC__in_opt ITDirectoryObject *pDirectoryObject);
                               HRESULT ( STDMETHODCALLTYPE *ModifyDirectoryObject )(
            __RPC__in ITDirectory * This,
                       __RPC__in_opt ITDirectoryObject *pDirectoryObject);
                               HRESULT ( STDMETHODCALLTYPE *RefreshDirectoryObject )(
            __RPC__in ITDirectory * This,
                       __RPC__in_opt ITDirectoryObject *pDirectoryObject);
                               HRESULT ( STDMETHODCALLTYPE *DeleteDirectoryObject )(
            __RPC__in ITDirectory * This,
                       __RPC__in_opt ITDirectoryObject *pDirectoryObject);
                                        HRESULT ( STDMETHODCALLTYPE *get_DirectoryObjects )(
            __RPC__in ITDirectory * This,
                       DIRECTORY_OBJECT_TYPE DirectoryObjectType,
                       __RPC__in BSTR pName,
                                __RPC__out VARIANT *pVariant);
                                                   HRESULT ( STDMETHODCALLTYPE *EnumerateDirectoryObjects )(
            __RPC__in ITDirectory * This,
                       DIRECTORY_OBJECT_TYPE DirectoryObjectType,
                       __RPC__in BSTR pName,
                        __RPC__deref_out_opt IEnumDirectoryObject **ppEnumObject);
        END_INTERFACE
    } ITDirectoryVtbl;
    interface ITDirectory
    {
        CONST_VTBL struct ITDirectoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DirectoryType(This,pDirectoryType) )
    ( (This)->lpVtbl -> get_DisplayName(This,pName) )
    ( (This)->lpVtbl -> get_IsDynamic(This,pfDynamic) )
    ( (This)->lpVtbl -> get_DefaultObjectTTL(This,pTTL) )
    ( (This)->lpVtbl -> put_DefaultObjectTTL(This,TTL) )
    ( (This)->lpVtbl -> EnableAutoRefresh(This,fEnable) )
    ( (This)->lpVtbl -> Connect(This,fSecure) )
    ( (This)->lpVtbl -> Bind(This,pDomainName,pUserName,pPassword,lFlags) )
    ( (This)->lpVtbl -> AddDirectoryObject(This,pDirectoryObject) )
    ( (This)->lpVtbl -> ModifyDirectoryObject(This,pDirectoryObject) )
    ( (This)->lpVtbl -> RefreshDirectoryObject(This,pDirectoryObject) )
    ( (This)->lpVtbl -> DeleteDirectoryObject(This,pDirectoryObject) )
    ( (This)->lpVtbl -> get_DirectoryObjects(This,DirectoryObjectType,pName,pVariant) )
    ( (This)->lpVtbl -> EnumerateDirectoryObjects(This,DirectoryObjectType,pName,ppEnumObject) )
EXTERN_C const IID IID_IEnumDirectory;
    typedef struct IEnumDirectoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumDirectory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumDirectory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumDirectory * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumDirectory * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pcFetched) ITDirectory **ppElements,
                                  __RPC__inout_opt ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumDirectory * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumDirectory * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumDirectory * This,
                                __RPC__deref_out_opt IEnumDirectory **ppEnum);
        END_INTERFACE
    } IEnumDirectoryVtbl;
    interface IEnumDirectory
    {
        CONST_VTBL struct IEnumDirectoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pcFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_ITRendezvous;
    typedef struct ITRendezvousVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITRendezvous * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITRendezvous * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITRendezvous * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITRendezvous * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITRendezvous * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITRendezvous * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITRendezvous * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_DefaultDirectories )(
            __RPC__in ITRendezvous * This,
                                __RPC__out VARIANT *pVariant);
                                                   HRESULT ( STDMETHODCALLTYPE *EnumerateDefaultDirectories )(
            __RPC__in ITRendezvous * This,
                        __RPC__deref_out_opt IEnumDirectory **ppEnumDirectory);
                               HRESULT ( STDMETHODCALLTYPE *CreateDirectory )(
            __RPC__in ITRendezvous * This,
                       DIRECTORY_TYPE DirectoryType,
                       __RPC__in BSTR pName,
                                __RPC__deref_out_opt ITDirectory **ppDir);
                               HRESULT ( STDMETHODCALLTYPE *CreateDirectoryObject )(
            __RPC__in ITRendezvous * This,
                       DIRECTORY_OBJECT_TYPE DirectoryObjectType,
                       __RPC__in BSTR pName,
                                __RPC__deref_out_opt ITDirectoryObject **ppDirectoryObject);
        END_INTERFACE
    } ITRendezvousVtbl;
    interface ITRendezvous
    {
        CONST_VTBL struct ITRendezvousVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DefaultDirectories(This,pVariant) )
    ( (This)->lpVtbl -> EnumerateDefaultDirectories(This,ppEnumDirectory) )
    ( (This)->lpVtbl -> CreateDirectory(This,DirectoryType,pName,ppDir) )
    ( (This)->lpVtbl -> CreateDirectoryObject(This,DirectoryObjectType,pName,ppDirectoryObject) )
extern RPC_IF_HANDLE __MIDL_itf_rend_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rend_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID LIBID_RENDLib;
EXTERN_C const CLSID CLSID_Rendezvous;
class DECLSPEC_UUID("F1029E5B-CB5B-11D0-8D59-00C04FD91AC0")
Rendezvous;
const long RENDBIND_AUTHENTICATE = 0x1;
const long RENDBIND_DEFAULTDOMAINNAME = 0x2;
const long RENDBIND_DEFAULTUSERNAME = 0x4;
const long RENDBIND_DEFAULTPASSWORD = 0x8;
const long RENDBIND_DEFAULTCREDENTIALS = 0xe;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_rend_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rend_0000_0010_v0_0_s_ifspec;
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
