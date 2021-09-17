#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IProvisioningDomain IProvisioningDomain;
typedef interface IProvisioningProfileWireless IProvisioningProfileWireless;
typedef class NetProvisioning NetProvisioning;
#include "oaidl.h"
#include "prsht.h"
#include "msxml.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_netprov_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netprov_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IProvisioningDomain;
    typedef struct IProvisioningDomainVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProvisioningDomain * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProvisioningDomain * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProvisioningDomain * This);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IProvisioningDomain * This,
                               __RPC__in_string LPCWSTR pszwPathToFolder);
        HRESULT ( STDMETHODCALLTYPE *Query )(
            __RPC__in IProvisioningDomain * This,
                               __RPC__in_string LPCWSTR pszwDomain,
                               __RPC__in_string LPCWSTR pszwLanguage,
                               __RPC__in_string LPCWSTR pszwXPathQuery,
                        __RPC__deref_out_opt IXMLDOMNodeList **Nodes);
        END_INTERFACE
    } IProvisioningDomainVtbl;
    interface IProvisioningDomain
    {
        CONST_VTBL struct IProvisioningDomainVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Add(This,pszwPathToFolder) )
    ( (This)->lpVtbl -> Query(This,pszwDomain,pszwLanguage,pszwXPathQuery,Nodes) )
extern RPC_IF_HANDLE __MIDL_itf_netprov_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netprov_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IProvisioningProfileWireless;
    typedef struct IProvisioningProfileWirelessVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProvisioningProfileWireless * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProvisioningProfileWireless * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProvisioningProfileWireless * This);
        HRESULT ( STDMETHODCALLTYPE *CreateProfile )(
            __RPC__in IProvisioningProfileWireless * This,
                       __RPC__in BSTR bstrXMLWirelessConfigProfile,
                       __RPC__in BSTR bstrXMLConnectionConfigProfile,
                       __RPC__in GUID *pAdapterInstanceGuid,
                        __RPC__out ULONG *pulStatus);
        END_INTERFACE
    } IProvisioningProfileWirelessVtbl;
    interface IProvisioningProfileWireless
    {
        CONST_VTBL struct IProvisioningProfileWirelessVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateProfile(This,bstrXMLWirelessConfigProfile,bstrXMLConnectionConfigProfile,pAdapterInstanceGuid,pulStatus) )
EXTERN_C const IID LIBID_NETPROVLib;
EXTERN_C const CLSID CLSID_NetProvisioning;
class DECLSPEC_UUID("2aa2b5fe-b846-4d07-810c-b21ee45320e3")
NetProvisioning;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_netprov_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netprov_0000_0003_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
