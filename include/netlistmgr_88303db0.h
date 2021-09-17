#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface INetworkListManager INetworkListManager;
typedef interface INetworkListManagerEvents INetworkListManagerEvents;
typedef interface INetwork INetwork;
typedef interface IEnumNetworks IEnumNetworks;
typedef interface INetworkEvents INetworkEvents;
typedef interface INetworkConnection INetworkConnection;
typedef interface IEnumNetworkConnections IEnumNetworkConnections;
typedef interface INetworkConnectionEvents INetworkConnectionEvents;
typedef interface INetworkCostManager INetworkCostManager;
typedef interface INetworkCostManagerEvents INetworkCostManagerEvents;
typedef interface INetworkConnectionCost INetworkConnectionCost;
typedef interface INetworkConnectionCostEvents INetworkConnectionCostEvents;
typedef class NetworkListManager NetworkListManager;
#include "unknwn.h"
#include "objidl.h"
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum NLM_CONNECTION_COST
    {
        NLM_CONNECTION_COST_UNKNOWN = 0,
        NLM_CONNECTION_COST_UNRESTRICTED = 0x1,
        NLM_CONNECTION_COST_FIXED = 0x2,
        NLM_CONNECTION_COST_VARIABLE = 0x4,
        NLM_CONNECTION_COST_OVERDATALIMIT = 0x10000,
        NLM_CONNECTION_COST_CONGESTED = 0x20000,
        NLM_CONNECTION_COST_ROAMING = 0x40000,
        NLM_CONNECTION_COST_APPROACHINGDATALIMIT = 0x80000
    } NLM_CONNECTION_COST;
typedef struct NLM_USAGE_DATA
    {
    DWORD UsageInMegabytes;
    FILETIME LastSyncTime;
    } NLM_USAGE_DATA;
typedef struct NLM_DATAPLAN_STATUS
    {
    GUID InterfaceGuid;
    NLM_USAGE_DATA UsageData;
    DWORD DataLimitInMegabytes;
    DWORD InboundBandwidthInKbps;
    DWORD OutboundBandwidthInKbps;
    FILETIME NextBillingCycle;
    DWORD MaxTransferSizeInMegabytes;
    DWORD Reserved;
    } NLM_DATAPLAN_STATUS;
typedef struct NLM_SOCKADDR
    {
    BYTE data[ 128 ];
    } NLM_SOCKADDR;
typedef
enum NLM_NETWORK_CLASS
    {
        NLM_NETWORK_IDENTIFYING = 0x1,
        NLM_NETWORK_IDENTIFIED = 0x2,
        NLM_NETWORK_UNIDENTIFIED = 0x3
    } NLM_NETWORK_CLASS;
typedef struct NLM_SIMULATED_PROFILE_INFO
    {
    WCHAR ProfileName[ 256 ];
    NLM_CONNECTION_COST cost;
    DWORD UsageInMegabytes;
    DWORD DataLimitInMegabytes;
    } NLM_SIMULATED_PROFILE_INFO;
typedef
enum NLM_INTERNET_CONNECTIVITY
    {
        NLM_INTERNET_CONNECTIVITY_WEBHIJACK = 0x1,
        NLM_INTERNET_CONNECTIVITY_PROXIED = 0x2,
        NLM_INTERNET_CONNECTIVITY_CORPORATE = 0x4
    } NLM_INTERNET_CONNECTIVITY;
typedef
enum NLM_CONNECTIVITY
    {
        NLM_CONNECTIVITY_DISCONNECTED = 0,
        NLM_CONNECTIVITY_IPV4_NOTRAFFIC = 0x1,
        NLM_CONNECTIVITY_IPV6_NOTRAFFIC = 0x2,
        NLM_CONNECTIVITY_IPV4_SUBNET = 0x10,
        NLM_CONNECTIVITY_IPV4_LOCALNETWORK = 0x20,
        NLM_CONNECTIVITY_IPV4_INTERNET = 0x40,
        NLM_CONNECTIVITY_IPV6_SUBNET = 0x100,
        NLM_CONNECTIVITY_IPV6_LOCALNETWORK = 0x200,
        NLM_CONNECTIVITY_IPV6_INTERNET = 0x400
    } NLM_CONNECTIVITY;
typedef
enum NLM_DOMAIN_TYPE
    {
        NLM_DOMAIN_TYPE_NON_DOMAIN_NETWORK = 0,
        NLM_DOMAIN_TYPE_DOMAIN_NETWORK = 0x1,
        NLM_DOMAIN_TYPE_DOMAIN_AUTHENTICATED = 0x2
    } NLM_DOMAIN_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_netlistmgr_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netlistmgr_0000_0000_v0_0_s_ifspec;
typedef
enum NLM_ENUM_NETWORK
    {
        NLM_ENUM_NETWORK_CONNECTED = 0x1,
        NLM_ENUM_NETWORK_DISCONNECTED = 0x2,
        NLM_ENUM_NETWORK_ALL = 0x3
    } NLM_ENUM_NETWORK;
EXTERN_C const IID IID_INetworkListManager;
    typedef struct INetworkListManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetworkListManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetworkListManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetworkListManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INetworkListManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INetworkListManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INetworkListManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetworkListManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *GetNetworks )(
            __RPC__in INetworkListManager * This,
                       NLM_ENUM_NETWORK Flags,
                                __RPC__deref_out_opt IEnumNetworks **ppEnumNetwork);
                               HRESULT ( STDMETHODCALLTYPE *GetNetwork )(
            __RPC__in INetworkListManager * This,
                       GUID gdNetworkId,
                                __RPC__deref_out_opt INetwork **ppNetwork);
                               HRESULT ( STDMETHODCALLTYPE *GetNetworkConnections )(
            __RPC__in INetworkListManager * This,
                                __RPC__deref_out_opt IEnumNetworkConnections **ppEnum);
                               HRESULT ( STDMETHODCALLTYPE *GetNetworkConnection )(
            __RPC__in INetworkListManager * This,
                       GUID gdNetworkConnectionId,
                                __RPC__deref_out_opt INetworkConnection **ppNetworkConnection);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsConnectedToInternet )(
            __RPC__in INetworkListManager * This,
                                __RPC__out VARIANT_BOOL *pbIsConnected);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsConnected )(
            __RPC__in INetworkListManager * This,
                                __RPC__out VARIANT_BOOL *pbIsConnected);
                               HRESULT ( STDMETHODCALLTYPE *GetConnectivity )(
            __RPC__in INetworkListManager * This,
                                __RPC__out NLM_CONNECTIVITY *pConnectivity);
                               HRESULT ( STDMETHODCALLTYPE *SetSimulatedProfileInfo )(
            __RPC__in INetworkListManager * This,
                       __RPC__in NLM_SIMULATED_PROFILE_INFO *pSimulatedInfo);
                               HRESULT ( STDMETHODCALLTYPE *ClearSimulatedProfileInfo )(
            __RPC__in INetworkListManager * This);
        END_INTERFACE
    } INetworkListManagerVtbl;
    interface INetworkListManager
    {
        CONST_VTBL struct INetworkListManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetNetworks(This,Flags,ppEnumNetwork) )
    ( (This)->lpVtbl -> GetNetwork(This,gdNetworkId,ppNetwork) )
    ( (This)->lpVtbl -> GetNetworkConnections(This,ppEnum) )
    ( (This)->lpVtbl -> GetNetworkConnection(This,gdNetworkConnectionId,ppNetworkConnection) )
    ( (This)->lpVtbl -> get_IsConnectedToInternet(This,pbIsConnected) )
    ( (This)->lpVtbl -> get_IsConnected(This,pbIsConnected) )
    ( (This)->lpVtbl -> GetConnectivity(This,pConnectivity) )
    ( (This)->lpVtbl -> SetSimulatedProfileInfo(This,pSimulatedInfo) )
    ( (This)->lpVtbl -> ClearSimulatedProfileInfo(This) )
EXTERN_C const IID IID_INetworkListManagerEvents;
    typedef struct INetworkListManagerEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetworkListManagerEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetworkListManagerEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetworkListManagerEvents * This);
        HRESULT ( STDMETHODCALLTYPE *ConnectivityChanged )(
            __RPC__in INetworkListManagerEvents * This,
                       NLM_CONNECTIVITY newConnectivity);
        END_INTERFACE
    } INetworkListManagerEventsVtbl;
    interface INetworkListManagerEvents
    {
        CONST_VTBL struct INetworkListManagerEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ConnectivityChanged(This,newConnectivity) )
typedef
enum NLM_NETWORK_CATEGORY
    {
        NLM_NETWORK_CATEGORY_PUBLIC = 0,
        NLM_NETWORK_CATEGORY_PRIVATE = 0x1,
        NLM_NETWORK_CATEGORY_DOMAIN_AUTHENTICATED = 0x2
    } NLM_NETWORK_CATEGORY;
EXTERN_C const IID IID_INetwork;
    typedef struct INetworkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetwork * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetwork * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetwork * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INetwork * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INetwork * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INetwork * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetwork * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in INetwork * This,
                                        __RPC__deref_out_opt_string BSTR *pszNetworkName);
                               HRESULT ( STDMETHODCALLTYPE *SetName )(
            __RPC__in INetwork * This,
                               __RPC__in_string BSTR szNetworkNewName);
                               HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            __RPC__in INetwork * This,
                                        __RPC__deref_out_opt_string BSTR *pszDescription);
                               HRESULT ( STDMETHODCALLTYPE *SetDescription )(
            __RPC__in INetwork * This,
                               __RPC__in_string BSTR szDescription);
                               HRESULT ( STDMETHODCALLTYPE *GetNetworkId )(
            __RPC__in INetwork * This,
                                __RPC__out GUID *pgdGuidNetworkId);
                               HRESULT ( STDMETHODCALLTYPE *GetDomainType )(
            __RPC__in INetwork * This,
                                __RPC__out NLM_DOMAIN_TYPE *pNetworkType);
                               HRESULT ( STDMETHODCALLTYPE *GetNetworkConnections )(
            __RPC__in INetwork * This,
                                __RPC__deref_out_opt IEnumNetworkConnections **ppEnumNetworkConnection);
                               HRESULT ( STDMETHODCALLTYPE *GetTimeCreatedAndConnected )(
            __RPC__in INetwork * This,
                        __RPC__out DWORD *pdwLowDateTimeCreated,
                        __RPC__out DWORD *pdwHighDateTimeCreated,
                        __RPC__out DWORD *pdwLowDateTimeConnected,
                        __RPC__out DWORD *pdwHighDateTimeConnected);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsConnectedToInternet )(
            __RPC__in INetwork * This,
                                __RPC__out VARIANT_BOOL *pbIsConnected);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsConnected )(
            __RPC__in INetwork * This,
                                __RPC__out VARIANT_BOOL *pbIsConnected);
                               HRESULT ( STDMETHODCALLTYPE *GetConnectivity )(
            __RPC__in INetwork * This,
                                __RPC__out NLM_CONNECTIVITY *pConnectivity);
                               HRESULT ( STDMETHODCALLTYPE *GetCategory )(
            __RPC__in INetwork * This,
                                __RPC__out NLM_NETWORK_CATEGORY *pCategory);
                               HRESULT ( STDMETHODCALLTYPE *SetCategory )(
            __RPC__in INetwork * This,
                       NLM_NETWORK_CATEGORY NewCategory);
        END_INTERFACE
    } INetworkVtbl;
    interface INetwork
    {
        CONST_VTBL struct INetworkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetName(This,pszNetworkName) )
    ( (This)->lpVtbl -> SetName(This,szNetworkNewName) )
    ( (This)->lpVtbl -> GetDescription(This,pszDescription) )
    ( (This)->lpVtbl -> SetDescription(This,szDescription) )
    ( (This)->lpVtbl -> GetNetworkId(This,pgdGuidNetworkId) )
    ( (This)->lpVtbl -> GetDomainType(This,pNetworkType) )
    ( (This)->lpVtbl -> GetNetworkConnections(This,ppEnumNetworkConnection) )
    ( (This)->lpVtbl -> GetTimeCreatedAndConnected(This,pdwLowDateTimeCreated,pdwHighDateTimeCreated,pdwLowDateTimeConnected,pdwHighDateTimeConnected) )
    ( (This)->lpVtbl -> get_IsConnectedToInternet(This,pbIsConnected) )
    ( (This)->lpVtbl -> get_IsConnected(This,pbIsConnected) )
    ( (This)->lpVtbl -> GetConnectivity(This,pConnectivity) )
    ( (This)->lpVtbl -> GetCategory(This,pCategory) )
    ( (This)->lpVtbl -> SetCategory(This,NewCategory) )
EXTERN_C const IID IID_IEnumNetworks;
    typedef struct IEnumNetworksVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumNetworks * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumNetworks * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumNetworks * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IEnumNetworks * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IEnumNetworks * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IEnumNetworks * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IEnumNetworks * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IEnumNetworks * This,
                                __RPC__deref_out_opt IEnumVARIANT **ppEnumVar);
                               HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumNetworks * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) INetwork **rgelt,
                                  __RPC__inout_opt ULONG *pceltFetched);
                               HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumNetworks * This,
                       ULONG celt);
                               HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumNetworks * This);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumNetworks * This,
                                __RPC__deref_out_opt IEnumNetworks **ppEnumNetwork);
        END_INTERFACE
    } IEnumNetworksVtbl;
    interface IEnumNetworks
    {
        CONST_VTBL struct IEnumNetworksVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumVar) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnumNetwork) )
typedef
enum NLM_NETWORK_PROPERTY_CHANGE
    {
        NLM_NETWORK_PROPERTY_CHANGE_CONNECTION = 0x1,
        NLM_NETWORK_PROPERTY_CHANGE_DESCRIPTION = 0x2,
        NLM_NETWORK_PROPERTY_CHANGE_NAME = 0x4,
        NLM_NETWORK_PROPERTY_CHANGE_ICON = 0x8,
        NLM_NETWORK_PROPERTY_CHANGE_CATEGORY_VALUE = 0x10
    } NLM_NETWORK_PROPERTY_CHANGE;
EXTERN_C const IID IID_INetworkEvents;
    typedef struct INetworkEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetworkEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetworkEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetworkEvents * This);
        HRESULT ( STDMETHODCALLTYPE *NetworkAdded )(
            __RPC__in INetworkEvents * This,
                       GUID networkId);
        HRESULT ( STDMETHODCALLTYPE *NetworkDeleted )(
            __RPC__in INetworkEvents * This,
                       GUID networkId);
        HRESULT ( STDMETHODCALLTYPE *NetworkConnectivityChanged )(
            __RPC__in INetworkEvents * This,
                       GUID networkId,
                       NLM_CONNECTIVITY newConnectivity);
        HRESULT ( STDMETHODCALLTYPE *NetworkPropertyChanged )(
            __RPC__in INetworkEvents * This,
                       GUID networkId,
                       NLM_NETWORK_PROPERTY_CHANGE flags);
        END_INTERFACE
    } INetworkEventsVtbl;
    interface INetworkEvents
    {
        CONST_VTBL struct INetworkEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NetworkAdded(This,networkId) )
    ( (This)->lpVtbl -> NetworkDeleted(This,networkId) )
    ( (This)->lpVtbl -> NetworkConnectivityChanged(This,networkId,newConnectivity) )
    ( (This)->lpVtbl -> NetworkPropertyChanged(This,networkId,flags) )
EXTERN_C const IID IID_INetworkConnection;
    typedef struct INetworkConnectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetworkConnection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetworkConnection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetworkConnection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INetworkConnection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INetworkConnection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INetworkConnection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetworkConnection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *GetNetwork )(
            __RPC__in INetworkConnection * This,
                                __RPC__deref_out_opt INetwork **ppNetwork);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsConnectedToInternet )(
            __RPC__in INetworkConnection * This,
                                __RPC__out VARIANT_BOOL *pbIsConnected);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsConnected )(
            __RPC__in INetworkConnection * This,
                                __RPC__out VARIANT_BOOL *pbIsConnected);
                               HRESULT ( STDMETHODCALLTYPE *GetConnectivity )(
            __RPC__in INetworkConnection * This,
                                __RPC__out NLM_CONNECTIVITY *pConnectivity);
                               HRESULT ( STDMETHODCALLTYPE *GetConnectionId )(
            __RPC__in INetworkConnection * This,
                                __RPC__out GUID *pgdConnectionId);
                               HRESULT ( STDMETHODCALLTYPE *GetAdapterId )(
            __RPC__in INetworkConnection * This,
                                __RPC__out GUID *pgdAdapterId);
                               HRESULT ( STDMETHODCALLTYPE *GetDomainType )(
            __RPC__in INetworkConnection * This,
                                __RPC__out NLM_DOMAIN_TYPE *pDomainType);
        END_INTERFACE
    } INetworkConnectionVtbl;
    interface INetworkConnection
    {
        CONST_VTBL struct INetworkConnectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetNetwork(This,ppNetwork) )
    ( (This)->lpVtbl -> get_IsConnectedToInternet(This,pbIsConnected) )
    ( (This)->lpVtbl -> get_IsConnected(This,pbIsConnected) )
    ( (This)->lpVtbl -> GetConnectivity(This,pConnectivity) )
    ( (This)->lpVtbl -> GetConnectionId(This,pgdConnectionId) )
    ( (This)->lpVtbl -> GetAdapterId(This,pgdAdapterId) )
    ( (This)->lpVtbl -> GetDomainType(This,pDomainType) )
EXTERN_C const IID IID_IEnumNetworkConnections;
    typedef struct IEnumNetworkConnectionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumNetworkConnections * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumNetworkConnections * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumNetworkConnections * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IEnumNetworkConnections * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IEnumNetworkConnections * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IEnumNetworkConnections * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IEnumNetworkConnections * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IEnumNetworkConnections * This,
                                __RPC__deref_out_opt IEnumVARIANT **ppEnumVar);
                               HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumNetworkConnections * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) INetworkConnection **rgelt,
                                  __RPC__inout_opt ULONG *pceltFetched);
                               HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumNetworkConnections * This,
                       ULONG celt);
                               HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumNetworkConnections * This);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumNetworkConnections * This,
                                __RPC__deref_out_opt IEnumNetworkConnections **ppEnumNetwork);
        END_INTERFACE
    } IEnumNetworkConnectionsVtbl;
    interface IEnumNetworkConnections
    {
        CONST_VTBL struct IEnumNetworkConnectionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumVar) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnumNetwork) )
typedef
enum NLM_CONNECTION_PROPERTY_CHANGE
    {
        NLM_CONNECTION_PROPERTY_CHANGE_AUTHENTICATION = 0x1
    } NLM_CONNECTION_PROPERTY_CHANGE;
EXTERN_C const IID IID_INetworkConnectionEvents;
    typedef struct INetworkConnectionEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetworkConnectionEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetworkConnectionEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetworkConnectionEvents * This);
        HRESULT ( STDMETHODCALLTYPE *NetworkConnectionConnectivityChanged )(
            __RPC__in INetworkConnectionEvents * This,
                       GUID connectionId,
                       NLM_CONNECTIVITY newConnectivity);
        HRESULT ( STDMETHODCALLTYPE *NetworkConnectionPropertyChanged )(
            __RPC__in INetworkConnectionEvents * This,
                       GUID connectionId,
                       NLM_CONNECTION_PROPERTY_CHANGE flags);
        END_INTERFACE
    } INetworkConnectionEventsVtbl;
    interface INetworkConnectionEvents
    {
        CONST_VTBL struct INetworkConnectionEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NetworkConnectionConnectivityChanged(This,connectionId,newConnectivity) )
    ( (This)->lpVtbl -> NetworkConnectionPropertyChanged(This,connectionId,flags) )
EXTERN_C const IID IID_INetworkCostManager;
    typedef struct INetworkCostManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetworkCostManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetworkCostManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetworkCostManager * This);
                               HRESULT ( STDMETHODCALLTYPE *GetCost )(
            __RPC__in INetworkCostManager * This,
                        __RPC__out DWORD *pCost,
                               __RPC__in_opt NLM_SOCKADDR *pDestIPAddr);
                               HRESULT ( STDMETHODCALLTYPE *GetDataPlanStatus )(
            __RPC__in INetworkCostManager * This,
                        __RPC__out NLM_DATAPLAN_STATUS *pDataPlanStatus,
                               __RPC__in_opt NLM_SOCKADDR *pDestIPAddr);
                               HRESULT ( STDMETHODCALLTYPE *SetDestinationAddresses )(
            __RPC__in INetworkCostManager * This,
                              __RPC__in_range(0,NLM_MAX_ADDRESS_LIST_SIZE) UINT32 length,
                                        __RPC__in_ecount_full_opt(length) NLM_SOCKADDR *pDestIPAddrList,
                       VARIANT_BOOL bAppend);
        END_INTERFACE
    } INetworkCostManagerVtbl;
    interface INetworkCostManager
    {
        CONST_VTBL struct INetworkCostManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCost(This,pCost,pDestIPAddr) )
    ( (This)->lpVtbl -> GetDataPlanStatus(This,pDataPlanStatus,pDestIPAddr) )
    ( (This)->lpVtbl -> SetDestinationAddresses(This,length,pDestIPAddrList,bAppend) )
EXTERN_C const IID IID_INetworkCostManagerEvents;
    typedef struct INetworkCostManagerEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetworkCostManagerEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetworkCostManagerEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetworkCostManagerEvents * This);
        HRESULT ( STDMETHODCALLTYPE *CostChanged )(
            __RPC__in INetworkCostManagerEvents * This,
                       DWORD newCost,
                               __RPC__in_opt NLM_SOCKADDR *pDestAddr);
        HRESULT ( STDMETHODCALLTYPE *DataPlanStatusChanged )(
            __RPC__in INetworkCostManagerEvents * This,
                               __RPC__in_opt NLM_SOCKADDR *pDestAddr);
        END_INTERFACE
    } INetworkCostManagerEventsVtbl;
    interface INetworkCostManagerEvents
    {
        CONST_VTBL struct INetworkCostManagerEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CostChanged(This,newCost,pDestAddr) )
    ( (This)->lpVtbl -> DataPlanStatusChanged(This,pDestAddr) )
EXTERN_C const IID IID_INetworkConnectionCost;
    typedef struct INetworkConnectionCostVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetworkConnectionCost * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetworkConnectionCost * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetworkConnectionCost * This);
                               HRESULT ( STDMETHODCALLTYPE *GetCost )(
            __RPC__in INetworkConnectionCost * This,
                        __RPC__out DWORD *pCost);
                               HRESULT ( STDMETHODCALLTYPE *GetDataPlanStatus )(
            __RPC__in INetworkConnectionCost * This,
                        __RPC__out NLM_DATAPLAN_STATUS *pDataPlanStatus);
        END_INTERFACE
    } INetworkConnectionCostVtbl;
    interface INetworkConnectionCost
    {
        CONST_VTBL struct INetworkConnectionCostVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCost(This,pCost) )
    ( (This)->lpVtbl -> GetDataPlanStatus(This,pDataPlanStatus) )
EXTERN_C const IID IID_INetworkConnectionCostEvents;
    typedef struct INetworkConnectionCostEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetworkConnectionCostEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetworkConnectionCostEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetworkConnectionCostEvents * This);
        HRESULT ( STDMETHODCALLTYPE *ConnectionCostChanged )(
            __RPC__in INetworkConnectionCostEvents * This,
                       GUID connectionId,
                       DWORD newCost);
        HRESULT ( STDMETHODCALLTYPE *ConnectionDataPlanStatusChanged )(
            __RPC__in INetworkConnectionCostEvents * This,
                       GUID connectionId);
        END_INTERFACE
    } INetworkConnectionCostEventsVtbl;
    interface INetworkConnectionCostEvents
    {
        CONST_VTBL struct INetworkConnectionCostEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ConnectionCostChanged(This,connectionId,newCost) )
    ( (This)->lpVtbl -> ConnectionDataPlanStatusChanged(This,connectionId) )
EXTERN_C const IID LIBID_NETWORKLIST;
EXTERN_C const CLSID CLSID_NetworkListManager;
class DECLSPEC_UUID("DCB00C01-570F-4A9B-8D69-199FDBA5723B")
NetworkListManager;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_netlistmgr_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netlistmgr_0000_0013_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
