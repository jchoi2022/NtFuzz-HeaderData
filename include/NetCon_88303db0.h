#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IEnumNetConnection IEnumNetConnection;
typedef interface INetConnection INetConnection;
typedef interface INetConnectionManager INetConnectionManager;
typedef interface INetConnectionConnectUi INetConnectionConnectUi;
typedef interface IEnumNetSharingPortMapping IEnumNetSharingPortMapping;
typedef interface INetSharingPortMappingProps INetSharingPortMappingProps;
typedef interface INetSharingPortMapping INetSharingPortMapping;
typedef interface IEnumNetSharingEveryConnection IEnumNetSharingEveryConnection;
typedef interface IEnumNetSharingPublicConnection IEnumNetSharingPublicConnection;
typedef interface IEnumNetSharingPrivateConnection IEnumNetSharingPrivateConnection;
typedef interface INetSharingPortMappingCollection INetSharingPortMappingCollection;
typedef interface INetConnectionProps INetConnectionProps;
typedef interface INetSharingConfiguration INetSharingConfiguration;
typedef interface INetSharingEveryConnectionCollection INetSharingEveryConnectionCollection;
typedef interface INetSharingPublicConnectionCollection INetSharingPublicConnectionCollection;
typedef interface INetSharingPrivateConnectionCollection INetSharingPrivateConnectionCollection;
typedef interface INetSharingManager INetSharingManager;
typedef class NetSharingManager NetSharingManager;
#include "oaidl.h"
#include "prsht.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_C const CLSID CLSID_ConnectionManager;
EXTERN_C const CLSID CLSID_NetSharingManager;
extern RPC_IF_HANDLE __MIDL_itf_netcon_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netcon_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnumNetConnection;
    typedef struct IEnumNetConnectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumNetConnection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumNetConnection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumNetConnection * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumNetConnection * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) INetConnection **rgelt,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumNetConnection * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumNetConnection * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumNetConnection * This,
                        __RPC__deref_out_opt IEnumNetConnection **ppenum);
        END_INTERFACE
    } IEnumNetConnectionVtbl;
    interface IEnumNetConnection
    {
        CONST_VTBL struct IEnumNetConnectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
typedef
enum tagNETCON_CHARACTERISTIC_FLAGS
    {
        NCCF_NONE = 0,
        NCCF_ALL_USERS = 0x1,
        NCCF_ALLOW_DUPLICATION = 0x2,
        NCCF_ALLOW_REMOVAL = 0x4,
        NCCF_ALLOW_RENAME = 0x8,
        NCCF_INCOMING_ONLY = 0x20,
        NCCF_OUTGOING_ONLY = 0x40,
        NCCF_BRANDED = 0x80,
        NCCF_SHARED = 0x100,
        NCCF_BRIDGED = 0x200,
        NCCF_FIREWALLED = 0x400,
        NCCF_DEFAULT = 0x800,
        NCCF_HOMENET_CAPABLE = 0x1000,
        NCCF_SHARED_PRIVATE = 0x2000,
        NCCF_QUARANTINED = 0x4000,
        NCCF_RESERVED = 0x8000,
        NCCF_HOSTED_NETWORK = 0x10000,
        NCCF_VIRTUAL_STATION = 0x20000,
        NCCF_WIFI_DIRECT = 0x40000,
        NCCF_BLUETOOTH_MASK = 0xf0000,
        NCCF_LAN_MASK = 0xf00000
    } NETCON_CHARACTERISTIC_FLAGS;
typedef
enum tagNETCON_STATUS
    {
        NCS_DISCONNECTED = 0,
        NCS_CONNECTING = ( NCS_DISCONNECTED + 1 ) ,
        NCS_CONNECTED = ( NCS_CONNECTING + 1 ) ,
        NCS_DISCONNECTING = ( NCS_CONNECTED + 1 ) ,
        NCS_HARDWARE_NOT_PRESENT = ( NCS_DISCONNECTING + 1 ) ,
        NCS_HARDWARE_DISABLED = ( NCS_HARDWARE_NOT_PRESENT + 1 ) ,
        NCS_HARDWARE_MALFUNCTION = ( NCS_HARDWARE_DISABLED + 1 ) ,
        NCS_MEDIA_DISCONNECTED = ( NCS_HARDWARE_MALFUNCTION + 1 ) ,
        NCS_AUTHENTICATING = ( NCS_MEDIA_DISCONNECTED + 1 ) ,
        NCS_AUTHENTICATION_SUCCEEDED = ( NCS_AUTHENTICATING + 1 ) ,
        NCS_AUTHENTICATION_FAILED = ( NCS_AUTHENTICATION_SUCCEEDED + 1 ) ,
        NCS_INVALID_ADDRESS = ( NCS_AUTHENTICATION_FAILED + 1 ) ,
        NCS_CREDENTIALS_REQUIRED = ( NCS_INVALID_ADDRESS + 1 ) ,
        NCS_ACTION_REQUIRED = ( NCS_CREDENTIALS_REQUIRED + 1 ) ,
        NCS_ACTION_REQUIRED_RETRY = ( NCS_ACTION_REQUIRED + 1 ) ,
        NCS_CONNECT_FAILED = ( NCS_ACTION_REQUIRED_RETRY + 1 )
    } NETCON_STATUS;
typedef
enum tagNETCON_TYPE
    {
        NCT_DIRECT_CONNECT = 0,
        NCT_INBOUND = 1,
        NCT_INTERNET = ( NCT_INBOUND + 1 ) ,
        NCT_LAN = ( NCT_INTERNET + 1 ) ,
        NCT_PHONE = ( NCT_LAN + 1 ) ,
        NCT_TUNNEL = ( NCT_PHONE + 1 ) ,
        NCT_BRIDGE = ( NCT_TUNNEL + 1 )
    } NETCON_TYPE;
typedef
enum tagNETCON_MEDIATYPE
    {
        NCM_NONE = 0,
        NCM_DIRECT = ( NCM_NONE + 1 ) ,
        NCM_ISDN = 2,
        NCM_LAN = ( NCM_ISDN + 1 ) ,
        NCM_PHONE = ( NCM_LAN + 1 ) ,
        NCM_TUNNEL = ( NCM_PHONE + 1 ) ,
        NCM_PPPOE = ( NCM_TUNNEL + 1 ) ,
        NCM_BRIDGE = ( NCM_PPPOE + 1 ) ,
        NCM_SHAREDACCESSHOST_LAN = ( NCM_BRIDGE + 1 ) ,
        NCM_SHAREDACCESSHOST_RAS = ( NCM_SHAREDACCESSHOST_LAN + 1 )
    } NETCON_MEDIATYPE;
typedef struct tagNETCON_PROPERTIES
    {
    GUID guidId;
                   LPWSTR pszwName;
                   LPWSTR pszwDeviceName;
    NETCON_STATUS Status;
    NETCON_MEDIATYPE MediaType;
    DWORD dwCharacter;
    CLSID clsidThisObject;
    CLSID clsidUiObject;
    } NETCON_PROPERTIES;
EXTERN_C const IID IID_INetConnection;
    typedef struct INetConnectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetConnection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetConnection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetConnection * This);
        HRESULT ( STDMETHODCALLTYPE *Connect )(
            __RPC__in INetConnection * This);
        HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            __RPC__in INetConnection * This);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in INetConnection * This);
        HRESULT ( STDMETHODCALLTYPE *Duplicate )(
            __RPC__in INetConnection * This,
                               __RPC__in_string LPCWSTR pszwDuplicateName,
                        __RPC__deref_out_opt INetConnection **ppCon);
        HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in INetConnection * This,
                        __RPC__deref_out_opt NETCON_PROPERTIES **ppProps);
        HRESULT ( STDMETHODCALLTYPE *GetUiObjectClassId )(
            __RPC__in INetConnection * This,
                             __RPC__out CLSID *pclsid);
        HRESULT ( STDMETHODCALLTYPE *Rename )(
            __RPC__in INetConnection * This,
                               __RPC__in_string LPCWSTR pszwNewName);
        END_INTERFACE
    } INetConnectionVtbl;
    interface INetConnection
    {
        CONST_VTBL struct INetConnectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Connect(This) )
    ( (This)->lpVtbl -> Disconnect(This) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Duplicate(This,pszwDuplicateName,ppCon) )
    ( (This)->lpVtbl -> GetProperties(This,ppProps) )
    ( (This)->lpVtbl -> GetUiObjectClassId(This,pclsid) )
    ( (This)->lpVtbl -> Rename(This,pszwNewName) )
STDAPI_(VOID) NcFreeNetconProperties (NETCON_PROPERTIES* pProps);
STDAPI_(BOOL) NcIsValidConnectionName (PCWSTR pszwName);
extern RPC_IF_HANDLE __MIDL_itf_netcon_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netcon_0000_0002_v0_0_s_ifspec;
typedef
enum tagNETCONMGR_ENUM_FLAGS
    {
        NCME_DEFAULT = 0,
        NCME_HIDDEN = 0x1
    } NETCONMGR_ENUM_FLAGS;
EXTERN_C const IID IID_INetConnectionManager;
    typedef struct INetConnectionManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetConnectionManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetConnectionManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetConnectionManager * This);
        HRESULT ( STDMETHODCALLTYPE *EnumConnections )(
            __RPC__in INetConnectionManager * This,
                       NETCONMGR_ENUM_FLAGS Flags,
                        __RPC__deref_out_opt IEnumNetConnection **ppEnum);
        END_INTERFACE
    } INetConnectionManagerVtbl;
    interface INetConnectionManager
    {
        CONST_VTBL struct INetConnectionManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnumConnections(This,Flags,ppEnum) )
typedef
enum tagNETCONUI_CONNECT_FLAGS
    {
        NCUC_DEFAULT = 0,
        NCUC_NO_UI = 0x1,
        NCUC_ENABLE_DISABLE = 0x2
    } NETCONUI_CONNECT_FLAGS;
EXTERN_C const IID IID_INetConnectionConnectUi;
    typedef struct INetConnectionConnectUiVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetConnectionConnectUi * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetConnectionConnectUi * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetConnectionConnectUi * This);
        HRESULT ( STDMETHODCALLTYPE *SetConnection )(
            __RPC__in INetConnectionConnectUi * This,
                       __RPC__in_opt INetConnection *pCon);
        HRESULT ( STDMETHODCALLTYPE *Connect )(
            __RPC__in INetConnectionConnectUi * This,
                       __RPC__in HWND hwndParent,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            __RPC__in INetConnectionConnectUi * This,
                       __RPC__in HWND hwndParent,
                       DWORD dwFlags);
        END_INTERFACE
    } INetConnectionConnectUiVtbl;
    interface INetConnectionConnectUi
    {
        CONST_VTBL struct INetConnectionConnectUiVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetConnection(This,pCon) )
    ( (This)->lpVtbl -> Connect(This,hwndParent,dwFlags) )
    ( (This)->lpVtbl -> Disconnect(This,hwndParent,dwFlags) )
EXTERN_C const IID IID_IEnumNetSharingPortMapping;
    typedef struct IEnumNetSharingPortMappingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumNetSharingPortMapping * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumNetSharingPortMapping * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumNetSharingPortMapping * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumNetSharingPortMapping * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) VARIANT *rgVar,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumNetSharingPortMapping * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumNetSharingPortMapping * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumNetSharingPortMapping * This,
                        __RPC__deref_out_opt IEnumNetSharingPortMapping **ppenum);
        END_INTERFACE
    } IEnumNetSharingPortMappingVtbl;
    interface IEnumNetSharingPortMapping
    {
        CONST_VTBL struct IEnumNetSharingPortMappingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgVar,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
EXTERN_C const IID IID_INetSharingPortMappingProps;
    typedef struct INetSharingPortMappingPropsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetSharingPortMappingProps * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetSharingPortMappingProps * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetSharingPortMappingProps * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INetSharingPortMappingProps * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INetSharingPortMappingProps * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INetSharingPortMappingProps * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetSharingPortMappingProps * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in INetSharingPortMappingProps * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                        HRESULT ( STDMETHODCALLTYPE *get_IPProtocol )(
            __RPC__in INetSharingPortMappingProps * This,
                                __RPC__out UCHAR *pucIPProt);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExternalPort )(
            __RPC__in INetSharingPortMappingProps * This,
                                __RPC__out long *pusPort);
                                        HRESULT ( STDMETHODCALLTYPE *get_InternalPort )(
            __RPC__in INetSharingPortMappingProps * This,
                                __RPC__out long *pusPort);
                                        HRESULT ( STDMETHODCALLTYPE *get_Options )(
            __RPC__in INetSharingPortMappingProps * This,
                                __RPC__out long *pdwOptions);
                                        HRESULT ( STDMETHODCALLTYPE *get_TargetName )(
            __RPC__in INetSharingPortMappingProps * This,
                                __RPC__deref_out_opt BSTR *pbstrTargetName);
                                        HRESULT ( STDMETHODCALLTYPE *get_TargetIPAddress )(
            __RPC__in INetSharingPortMappingProps * This,
                                __RPC__deref_out_opt BSTR *pbstrTargetIPAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in INetSharingPortMappingProps * This,
                                __RPC__out VARIANT_BOOL *pbool);
        END_INTERFACE
    } INetSharingPortMappingPropsVtbl;
    interface INetSharingPortMappingProps
    {
        CONST_VTBL struct INetSharingPortMappingPropsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_IPProtocol(This,pucIPProt) )
    ( (This)->lpVtbl -> get_ExternalPort(This,pusPort) )
    ( (This)->lpVtbl -> get_InternalPort(This,pusPort) )
    ( (This)->lpVtbl -> get_Options(This,pdwOptions) )
    ( (This)->lpVtbl -> get_TargetName(This,pbstrTargetName) )
    ( (This)->lpVtbl -> get_TargetIPAddress(This,pbstrTargetIPAddress) )
    ( (This)->lpVtbl -> get_Enabled(This,pbool) )
EXTERN_C const IID IID_INetSharingPortMapping;
    typedef struct INetSharingPortMappingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetSharingPortMapping * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetSharingPortMapping * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetSharingPortMapping * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INetSharingPortMapping * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INetSharingPortMapping * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INetSharingPortMapping * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetSharingPortMapping * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Disable )(
            __RPC__in INetSharingPortMapping * This);
                               HRESULT ( STDMETHODCALLTYPE *Enable )(
            __RPC__in INetSharingPortMapping * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in INetSharingPortMapping * This,
                                __RPC__deref_out_opt INetSharingPortMappingProps **ppNSPMP);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in INetSharingPortMapping * This);
        END_INTERFACE
    } INetSharingPortMappingVtbl;
    interface INetSharingPortMapping
    {
        CONST_VTBL struct INetSharingPortMappingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Disable(This) )
    ( (This)->lpVtbl -> Enable(This) )
    ( (This)->lpVtbl -> get_Properties(This,ppNSPMP) )
    ( (This)->lpVtbl -> Delete(This) )
EXTERN_C const IID IID_IEnumNetSharingEveryConnection;
    typedef struct IEnumNetSharingEveryConnectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumNetSharingEveryConnection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumNetSharingEveryConnection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumNetSharingEveryConnection * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumNetSharingEveryConnection * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) VARIANT *rgVar,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumNetSharingEveryConnection * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumNetSharingEveryConnection * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumNetSharingEveryConnection * This,
                        __RPC__deref_out_opt IEnumNetSharingEveryConnection **ppenum);
        END_INTERFACE
    } IEnumNetSharingEveryConnectionVtbl;
    interface IEnumNetSharingEveryConnection
    {
        CONST_VTBL struct IEnumNetSharingEveryConnectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgVar,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
EXTERN_C const IID IID_IEnumNetSharingPublicConnection;
    typedef struct IEnumNetSharingPublicConnectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumNetSharingPublicConnection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumNetSharingPublicConnection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumNetSharingPublicConnection * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumNetSharingPublicConnection * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) VARIANT *rgVar,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumNetSharingPublicConnection * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumNetSharingPublicConnection * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumNetSharingPublicConnection * This,
                        __RPC__deref_out_opt IEnumNetSharingPublicConnection **ppenum);
        END_INTERFACE
    } IEnumNetSharingPublicConnectionVtbl;
    interface IEnumNetSharingPublicConnection
    {
        CONST_VTBL struct IEnumNetSharingPublicConnectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgVar,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
EXTERN_C const IID IID_IEnumNetSharingPrivateConnection;
    typedef struct IEnumNetSharingPrivateConnectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumNetSharingPrivateConnection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumNetSharingPrivateConnection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumNetSharingPrivateConnection * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumNetSharingPrivateConnection * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pCeltFetched) VARIANT *rgVar,
                        __RPC__out ULONG *pCeltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumNetSharingPrivateConnection * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumNetSharingPrivateConnection * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumNetSharingPrivateConnection * This,
                        __RPC__deref_out_opt IEnumNetSharingPrivateConnection **ppenum);
        END_INTERFACE
    } IEnumNetSharingPrivateConnectionVtbl;
    interface IEnumNetSharingPrivateConnection
    {
        CONST_VTBL struct IEnumNetSharingPrivateConnectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgVar,pCeltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
EXTERN_C const IID IID_INetSharingPortMappingCollection;
    typedef struct INetSharingPortMappingCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetSharingPortMappingCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetSharingPortMappingCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetSharingPortMappingCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INetSharingPortMappingCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INetSharingPortMappingCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INetSharingPortMappingCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetSharingPortMappingCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in INetSharingPortMappingCollection * This,
                                __RPC__deref_out_opt IUnknown **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in INetSharingPortMappingCollection * This,
                                __RPC__out long *pVal);
        END_INTERFACE
    } INetSharingPortMappingCollectionVtbl;
    interface INetSharingPortMappingCollection
    {
        CONST_VTBL struct INetSharingPortMappingCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
extern RPC_IF_HANDLE __MIDL_itf_netcon_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netcon_0000_0011_v0_0_s_ifspec;
EXTERN_C const IID IID_INetConnectionProps;
    typedef struct INetConnectionPropsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetConnectionProps * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetConnectionProps * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetConnectionProps * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INetConnectionProps * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INetConnectionProps * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INetConnectionProps * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetConnectionProps * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Guid )(
            __RPC__in INetConnectionProps * This,
                                __RPC__deref_out_opt BSTR *pbstrGuid);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in INetConnectionProps * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceName )(
            __RPC__in INetConnectionProps * This,
                                __RPC__deref_out_opt BSTR *pbstrDeviceName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in INetConnectionProps * This,
                                __RPC__out NETCON_STATUS *pStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaType )(
            __RPC__in INetConnectionProps * This,
                                __RPC__out NETCON_MEDIATYPE *pMediaType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Characteristics )(
            __RPC__in INetConnectionProps * This,
                                __RPC__out DWORD *pdwFlags);
        END_INTERFACE
    } INetConnectionPropsVtbl;
    interface INetConnectionProps
    {
        CONST_VTBL struct INetConnectionPropsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Guid(This,pbstrGuid) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_DeviceName(This,pbstrDeviceName) )
    ( (This)->lpVtbl -> get_Status(This,pStatus) )
    ( (This)->lpVtbl -> get_MediaType(This,pMediaType) )
    ( (This)->lpVtbl -> get_Characteristics(This,pdwFlags) )
typedef
enum tagSHARINGCONNECTIONTYPE
    {
        ICSSHARINGTYPE_PUBLIC = 0,
        ICSSHARINGTYPE_PRIVATE = ( ICSSHARINGTYPE_PUBLIC + 1 )
    } SHARINGCONNECTIONTYPE;
typedef enum tagSHARINGCONNECTIONTYPE *LPSHARINGCONNECTIONTYPE;
typedef
enum tagSHARINGCONNECTION_ENUM_FLAGS
    {
        ICSSC_DEFAULT = 0,
        ICSSC_ENABLED = ( ICSSC_DEFAULT + 1 )
    } SHARINGCONNECTION_ENUM_FLAGS;
typedef
enum tagICS_TARGETTYPE
    {
        ICSTT_NAME = 0,
        ICSTT_IPADDRESS = ( ICSTT_NAME + 1 )
    } ICS_TARGETTYPE;
EXTERN_C const IID IID_INetSharingConfiguration;
    typedef struct INetSharingConfigurationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetSharingConfiguration * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetSharingConfiguration * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetSharingConfiguration * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INetSharingConfiguration * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INetSharingConfiguration * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INetSharingConfiguration * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetSharingConfiguration * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_SharingEnabled )(
            __RPC__in INetSharingConfiguration * This,
                                __RPC__out VARIANT_BOOL *pbEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_SharingConnectionType )(
            __RPC__in INetSharingConfiguration * This,
                                __RPC__out SHARINGCONNECTIONTYPE *pType);
                               HRESULT ( STDMETHODCALLTYPE *DisableSharing )(
            __RPC__in INetSharingConfiguration * This);
                               HRESULT ( STDMETHODCALLTYPE *EnableSharing )(
            __RPC__in INetSharingConfiguration * This,
                       SHARINGCONNECTIONTYPE Type);
                                        HRESULT ( STDMETHODCALLTYPE *get_InternetFirewallEnabled )(
            __RPC__in INetSharingConfiguration * This,
                                __RPC__out VARIANT_BOOL *pbEnabled);
                               HRESULT ( STDMETHODCALLTYPE *DisableInternetFirewall )(
            __RPC__in INetSharingConfiguration * This);
                               HRESULT ( STDMETHODCALLTYPE *EnableInternetFirewall )(
            __RPC__in INetSharingConfiguration * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_EnumPortMappings )(
            __RPC__in INetSharingConfiguration * This,
                       SHARINGCONNECTION_ENUM_FLAGS Flags,
                                __RPC__deref_out_opt INetSharingPortMappingCollection **ppColl);
                               HRESULT ( STDMETHODCALLTYPE *AddPortMapping )(
            __RPC__in INetSharingConfiguration * This,
                       __RPC__in BSTR bstrName,
                       UCHAR ucIPProtocol,
                       USHORT usExternalPort,
                       USHORT usInternalPort,
                       DWORD dwOptions,
                       __RPC__in BSTR bstrTargetNameOrIPAddress,
                       ICS_TARGETTYPE eTargetType,
                                __RPC__deref_out_opt INetSharingPortMapping **ppMapping);
                               HRESULT ( STDMETHODCALLTYPE *RemovePortMapping )(
            __RPC__in INetSharingConfiguration * This,
                       __RPC__in_opt INetSharingPortMapping *pMapping);
        END_INTERFACE
    } INetSharingConfigurationVtbl;
    interface INetSharingConfiguration
    {
        CONST_VTBL struct INetSharingConfigurationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_SharingEnabled(This,pbEnabled) )
    ( (This)->lpVtbl -> get_SharingConnectionType(This,pType) )
    ( (This)->lpVtbl -> DisableSharing(This) )
    ( (This)->lpVtbl -> EnableSharing(This,Type) )
    ( (This)->lpVtbl -> get_InternetFirewallEnabled(This,pbEnabled) )
    ( (This)->lpVtbl -> DisableInternetFirewall(This) )
    ( (This)->lpVtbl -> EnableInternetFirewall(This) )
    ( (This)->lpVtbl -> get_EnumPortMappings(This,Flags,ppColl) )
    ( (This)->lpVtbl -> AddPortMapping(This,bstrName,ucIPProtocol,usExternalPort,usInternalPort,dwOptions,bstrTargetNameOrIPAddress,eTargetType,ppMapping) )
    ( (This)->lpVtbl -> RemovePortMapping(This,pMapping) )
EXTERN_C const IID IID_INetSharingEveryConnectionCollection;
    typedef struct INetSharingEveryConnectionCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetSharingEveryConnectionCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetSharingEveryConnectionCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetSharingEveryConnectionCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INetSharingEveryConnectionCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INetSharingEveryConnectionCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INetSharingEveryConnectionCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetSharingEveryConnectionCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in INetSharingEveryConnectionCollection * This,
                                __RPC__deref_out_opt IUnknown **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in INetSharingEveryConnectionCollection * This,
                                __RPC__out long *pVal);
        END_INTERFACE
    } INetSharingEveryConnectionCollectionVtbl;
    interface INetSharingEveryConnectionCollection
    {
        CONST_VTBL struct INetSharingEveryConnectionCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
EXTERN_C const IID IID_INetSharingPublicConnectionCollection;
    typedef struct INetSharingPublicConnectionCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetSharingPublicConnectionCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetSharingPublicConnectionCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetSharingPublicConnectionCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INetSharingPublicConnectionCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INetSharingPublicConnectionCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INetSharingPublicConnectionCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetSharingPublicConnectionCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in INetSharingPublicConnectionCollection * This,
                                __RPC__deref_out_opt IUnknown **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in INetSharingPublicConnectionCollection * This,
                                __RPC__out long *pVal);
        END_INTERFACE
    } INetSharingPublicConnectionCollectionVtbl;
    interface INetSharingPublicConnectionCollection
    {
        CONST_VTBL struct INetSharingPublicConnectionCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
EXTERN_C const IID IID_INetSharingPrivateConnectionCollection;
    typedef struct INetSharingPrivateConnectionCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetSharingPrivateConnectionCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetSharingPrivateConnectionCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetSharingPrivateConnectionCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INetSharingPrivateConnectionCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INetSharingPrivateConnectionCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INetSharingPrivateConnectionCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetSharingPrivateConnectionCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in INetSharingPrivateConnectionCollection * This,
                                __RPC__deref_out_opt IUnknown **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in INetSharingPrivateConnectionCollection * This,
                                __RPC__out long *pVal);
        END_INTERFACE
    } INetSharingPrivateConnectionCollectionVtbl;
    interface INetSharingPrivateConnectionCollection
    {
        CONST_VTBL struct INetSharingPrivateConnectionCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
EXTERN_C const IID IID_INetSharingManager;
    typedef struct INetSharingManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetSharingManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetSharingManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetSharingManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INetSharingManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INetSharingManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INetSharingManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetSharingManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_SharingInstalled )(
            __RPC__in INetSharingManager * This,
                                __RPC__out VARIANT_BOOL *pbInstalled);
                                        HRESULT ( STDMETHODCALLTYPE *get_EnumPublicConnections )(
            __RPC__in INetSharingManager * This,
                       SHARINGCONNECTION_ENUM_FLAGS Flags,
                                __RPC__deref_out_opt INetSharingPublicConnectionCollection **ppColl);
                                        HRESULT ( STDMETHODCALLTYPE *get_EnumPrivateConnections )(
            __RPC__in INetSharingManager * This,
                       SHARINGCONNECTION_ENUM_FLAGS Flags,
                                __RPC__deref_out_opt INetSharingPrivateConnectionCollection **ppColl);
                                        HRESULT ( STDMETHODCALLTYPE *get_INetSharingConfigurationForINetConnection )(
            __RPC__in INetSharingManager * This,
                       __RPC__in_opt INetConnection *pNetConnection,
                                __RPC__deref_out_opt INetSharingConfiguration **ppNetSharingConfiguration);
                                        HRESULT ( STDMETHODCALLTYPE *get_EnumEveryConnection )(
            __RPC__in INetSharingManager * This,
                                __RPC__deref_out_opt INetSharingEveryConnectionCollection **ppColl);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetConnectionProps )(
            __RPC__in INetSharingManager * This,
                       __RPC__in_opt INetConnection *pNetConnection,
                                __RPC__deref_out_opt INetConnectionProps **ppProps);
        END_INTERFACE
    } INetSharingManagerVtbl;
    interface INetSharingManager
    {
        CONST_VTBL struct INetSharingManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_SharingInstalled(This,pbInstalled) )
    ( (This)->lpVtbl -> get_EnumPublicConnections(This,Flags,ppColl) )
    ( (This)->lpVtbl -> get_EnumPrivateConnections(This,Flags,ppColl) )
    ( (This)->lpVtbl -> get_INetSharingConfigurationForINetConnection(This,pNetConnection,ppNetSharingConfiguration) )
    ( (This)->lpVtbl -> get_EnumEveryConnection(This,ppColl) )
    ( (This)->lpVtbl -> get_NetConnectionProps(This,pNetConnection,ppProps) )
EXTERN_C const IID LIBID_NETCONLib;
EXTERN_C const CLSID CLSID_NetSharingManager;
class DECLSPEC_UUID("5C63C1AD-3956-4FF8-8486-40034758315B")
NetSharingManager;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_netcon_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netcon_0000_0018_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
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
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
