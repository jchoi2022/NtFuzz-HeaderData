#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMcastScope IMcastScope;
typedef interface IMcastLeaseInfo IMcastLeaseInfo;
typedef interface IEnumMcastScope IEnumMcastScope;
typedef interface IMcastAddressAllocation IMcastAddressAllocation;
typedef class McastAddressAllocation McastAddressAllocation;
#include "oaidl.h"
#include "ocidl.h"
#include "tapi3if.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mdhcp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mdhcp_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMcastScope;
    typedef struct IMcastScopeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMcastScope * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMcastScope * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMcastScope * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMcastScope * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMcastScope * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMcastScope * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMcastScope * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ScopeID )(
            __RPC__in IMcastScope * This,
                                __RPC__out long *pID);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServerID )(
            __RPC__in IMcastScope * This,
                                __RPC__out long *pID);
                                        HRESULT ( STDMETHODCALLTYPE *get_InterfaceID )(
            __RPC__in IMcastScope * This,
                                __RPC__out long *pID);
                                        HRESULT ( STDMETHODCALLTYPE *get_ScopeDescription )(
            __RPC__in IMcastScope * This,
                                __RPC__deref_out_opt BSTR *ppDescription);
                                        HRESULT ( STDMETHODCALLTYPE *get_TTL )(
            __RPC__in IMcastScope * This,
                                __RPC__out long *pTTL);
        END_INTERFACE
    } IMcastScopeVtbl;
    interface IMcastScope
    {
        CONST_VTBL struct IMcastScopeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ScopeID(This,pID) )
    ( (This)->lpVtbl -> get_ServerID(This,pID) )
    ( (This)->lpVtbl -> get_InterfaceID(This,pID) )
    ( (This)->lpVtbl -> get_ScopeDescription(This,ppDescription) )
    ( (This)->lpVtbl -> get_TTL(This,pTTL) )
EXTERN_C const IID IID_IMcastLeaseInfo;
    typedef struct IMcastLeaseInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMcastLeaseInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMcastLeaseInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMcastLeaseInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMcastLeaseInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMcastLeaseInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMcastLeaseInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMcastLeaseInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_RequestID )(
            __RPC__in IMcastLeaseInfo * This,
                                __RPC__deref_out_opt BSTR *ppRequestID);
                                        HRESULT ( STDMETHODCALLTYPE *get_LeaseStartTime )(
            __RPC__in IMcastLeaseInfo * This,
                                __RPC__out DATE *pTime);
                                        HRESULT ( STDMETHODCALLTYPE *put_LeaseStartTime )(
            __RPC__in IMcastLeaseInfo * This,
                       DATE time);
                                        HRESULT ( STDMETHODCALLTYPE *get_LeaseStopTime )(
            __RPC__in IMcastLeaseInfo * This,
                                __RPC__out DATE *pTime);
                                        HRESULT ( STDMETHODCALLTYPE *put_LeaseStopTime )(
            __RPC__in IMcastLeaseInfo * This,
                       DATE time);
                                        HRESULT ( STDMETHODCALLTYPE *get_AddressCount )(
            __RPC__in IMcastLeaseInfo * This,
                                __RPC__out long *pCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServerAddress )(
            __RPC__in IMcastLeaseInfo * This,
                                __RPC__deref_out_opt BSTR *ppAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_TTL )(
            __RPC__in IMcastLeaseInfo * This,
                                __RPC__out long *pTTL);
                                        HRESULT ( STDMETHODCALLTYPE *get_Addresses )(
            __RPC__in IMcastLeaseInfo * This,
                                __RPC__out VARIANT *pVariant);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateAddresses )(
            __RPC__in IMcastLeaseInfo * This,
                                __RPC__deref_out_opt IEnumBstr **ppEnumAddresses);
        END_INTERFACE
    } IMcastLeaseInfoVtbl;
    interface IMcastLeaseInfo
    {
        CONST_VTBL struct IMcastLeaseInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_RequestID(This,ppRequestID) )
    ( (This)->lpVtbl -> get_LeaseStartTime(This,pTime) )
    ( (This)->lpVtbl -> put_LeaseStartTime(This,time) )
    ( (This)->lpVtbl -> get_LeaseStopTime(This,pTime) )
    ( (This)->lpVtbl -> put_LeaseStopTime(This,time) )
    ( (This)->lpVtbl -> get_AddressCount(This,pCount) )
    ( (This)->lpVtbl -> get_ServerAddress(This,ppAddress) )
    ( (This)->lpVtbl -> get_TTL(This,pTTL) )
    ( (This)->lpVtbl -> get_Addresses(This,pVariant) )
    ( (This)->lpVtbl -> EnumerateAddresses(This,ppEnumAddresses) )
EXTERN_C const IID IID_IEnumMcastScope;
    typedef struct IEnumMcastScopeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumMcastScope * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumMcastScope * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumMcastScope * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumMcastScope * This,
                       ULONG celt,
                        __RPC__deref_out_opt IMcastScope **ppScopes,
                                  __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumMcastScope * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumMcastScope * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumMcastScope * This,
                                __RPC__deref_out_opt IEnumMcastScope **ppEnum);
        END_INTERFACE
    } IEnumMcastScopeVtbl;
    interface IEnumMcastScope
    {
        CONST_VTBL struct IEnumMcastScopeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppScopes,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IMcastAddressAllocation;
    typedef struct IMcastAddressAllocationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMcastAddressAllocation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMcastAddressAllocation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMcastAddressAllocation * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMcastAddressAllocation * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMcastAddressAllocation * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMcastAddressAllocation * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMcastAddressAllocation * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Scopes )(
            __RPC__in IMcastAddressAllocation * This,
                                __RPC__out VARIANT *pVariant);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateScopes )(
            __RPC__in IMcastAddressAllocation * This,
                        __RPC__deref_out_opt IEnumMcastScope **ppEnumMcastScope);
                               HRESULT ( STDMETHODCALLTYPE *RequestAddress )(
            __RPC__in IMcastAddressAllocation * This,
                       __RPC__in_opt IMcastScope *pScope,
                       DATE LeaseStartTime,
                       DATE LeaseStopTime,
                       long NumAddresses,
                                __RPC__deref_out_opt IMcastLeaseInfo **ppLeaseResponse);
                               HRESULT ( STDMETHODCALLTYPE *RenewAddress )(
            __RPC__in IMcastAddressAllocation * This,
                       long lReserved,
                       __RPC__in_opt IMcastLeaseInfo *pRenewRequest,
                                __RPC__deref_out_opt IMcastLeaseInfo **ppRenewResponse);
                               HRESULT ( STDMETHODCALLTYPE *ReleaseAddress )(
            __RPC__in IMcastAddressAllocation * This,
                       __RPC__in_opt IMcastLeaseInfo *pReleaseRequest);
                                       HRESULT ( STDMETHODCALLTYPE *CreateLeaseInfo )(
            __RPC__in IMcastAddressAllocation * This,
                       DATE LeaseStartTime,
                       DATE LeaseStopTime,
                       DWORD dwNumAddresses,
                       __RPC__deref_in_opt LPWSTR *ppAddresses,
                       __RPC__in LPWSTR pRequestID,
                       __RPC__in LPWSTR pServerAddress,
                                __RPC__deref_out_opt IMcastLeaseInfo **ppReleaseRequest);
                               HRESULT ( STDMETHODCALLTYPE *CreateLeaseInfoFromVariant )(
            __RPC__in IMcastAddressAllocation * This,
                       DATE LeaseStartTime,
                       DATE LeaseStopTime,
                       VARIANT vAddresses,
                       __RPC__in BSTR pRequestID,
                       __RPC__in BSTR pServerAddress,
                                __RPC__deref_out_opt IMcastLeaseInfo **ppReleaseRequest);
        END_INTERFACE
    } IMcastAddressAllocationVtbl;
    interface IMcastAddressAllocation
    {
        CONST_VTBL struct IMcastAddressAllocationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Scopes(This,pVariant) )
    ( (This)->lpVtbl -> EnumerateScopes(This,ppEnumMcastScope) )
    ( (This)->lpVtbl -> RequestAddress(This,pScope,LeaseStartTime,LeaseStopTime,NumAddresses,ppLeaseResponse) )
    ( (This)->lpVtbl -> RenewAddress(This,lReserved,pRenewRequest,ppRenewResponse) )
    ( (This)->lpVtbl -> ReleaseAddress(This,pReleaseRequest) )
    ( (This)->lpVtbl -> CreateLeaseInfo(This,LeaseStartTime,LeaseStopTime,dwNumAddresses,ppAddresses,pRequestID,pServerAddress,ppReleaseRequest) )
    ( (This)->lpVtbl -> CreateLeaseInfoFromVariant(This,LeaseStartTime,LeaseStopTime,vAddresses,pRequestID,pServerAddress,ppReleaseRequest) )
EXTERN_C const IID LIBID_McastLib;
EXTERN_C const CLSID CLSID_McastAddressAllocation;
class DECLSPEC_UUID("DF0DAEF2-A289-11D1-8697-006008B0E5D2")
McastAddressAllocation;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mdhcp_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mdhcp_0000_0005_v0_0_s_ifspec;
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
