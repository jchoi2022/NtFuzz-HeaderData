#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWdsTransportCacheable IWdsTransportCacheable;
typedef interface IWdsTransportCollection IWdsTransportCollection;
typedef interface IWdsTransportManager IWdsTransportManager;
typedef interface IWdsTransportServer IWdsTransportServer;
typedef interface IWdsTransportServer2 IWdsTransportServer2;
typedef interface IWdsTransportSetupManager IWdsTransportSetupManager;
typedef interface IWdsTransportSetupManager2 IWdsTransportSetupManager2;
typedef interface IWdsTransportConfigurationManager IWdsTransportConfigurationManager;
typedef interface IWdsTransportConfigurationManager2 IWdsTransportConfigurationManager2;
typedef interface IWdsTransportNamespaceManager IWdsTransportNamespaceManager;
typedef interface IWdsTransportTftpManager IWdsTransportTftpManager;
typedef interface IWdsTransportServicePolicy IWdsTransportServicePolicy;
typedef interface IWdsTransportServicePolicy2 IWdsTransportServicePolicy2;
typedef interface IWdsTransportDiagnosticsPolicy IWdsTransportDiagnosticsPolicy;
typedef interface IWdsTransportMulticastSessionPolicy IWdsTransportMulticastSessionPolicy;
typedef interface IWdsTransportNamespace IWdsTransportNamespace;
typedef interface IWdsTransportNamespaceAutoCast IWdsTransportNamespaceAutoCast;
typedef interface IWdsTransportNamespaceScheduledCast IWdsTransportNamespaceScheduledCast;
typedef interface IWdsTransportNamespaceScheduledCastManualStart IWdsTransportNamespaceScheduledCastManualStart;
typedef interface IWdsTransportNamespaceScheduledCastAutoStart IWdsTransportNamespaceScheduledCastAutoStart;
typedef interface IWdsTransportContent IWdsTransportContent;
typedef interface IWdsTransportSession IWdsTransportSession;
typedef interface IWdsTransportClient IWdsTransportClient;
typedef interface IWdsTransportTftpClient IWdsTransportTftpClient;
typedef interface IWdsTransportContentProvider IWdsTransportContentProvider;
typedef class WdsTransportCacheable WdsTransportCacheable;
typedef class WdsTransportCollection WdsTransportCollection;
typedef class WdsTransportManager WdsTransportManager;
typedef class WdsTransportServer WdsTransportServer;
typedef class WdsTransportSetupManager WdsTransportSetupManager;
typedef class WdsTransportConfigurationManager WdsTransportConfigurationManager;
typedef class WdsTransportNamespaceManager WdsTransportNamespaceManager;
typedef class WdsTransportServicePolicy WdsTransportServicePolicy;
typedef class WdsTransportDiagnosticsPolicy WdsTransportDiagnosticsPolicy;
typedef class WdsTransportMulticastSessionPolicy WdsTransportMulticastSessionPolicy;
typedef class WdsTransportNamespace WdsTransportNamespace;
typedef class WdsTransportNamespaceAutoCast WdsTransportNamespaceAutoCast;
typedef class WdsTransportNamespaceScheduledCast WdsTransportNamespaceScheduledCast;
typedef class WdsTransportNamespaceScheduledCastManualStart WdsTransportNamespaceScheduledCastManualStart;
typedef class WdsTransportNamespaceScheduledCastAutoStart WdsTransportNamespaceScheduledCastAutoStart;
typedef class WdsTransportContent WdsTransportContent;
typedef class WdsTransportSession WdsTransportSession;
typedef class WdsTransportClient WdsTransportClient;
typedef class WdsTransportTftpClient WdsTransportTftpClient;
typedef class WdsTransportTftpManager WdsTransportTftpManager;
typedef class WdsTransportContentProvider WdsTransportContentProvider;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0001
    {
        WdsTptFeatureAdminPack = 0x1,
        WdsTptFeatureTransportServer = 0x2,
        WdsTptFeatureDeploymentServer = 0x4
    } WDSTRANSPORT_FEATURE_FLAGS;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0001 *PWDSTRANSPORT_FEATURE_FLAGS;
typedef
enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0002
    {
        WdsTptProtocolUnicast = 0x1,
        WdsTptProtocolMulticast = 0x2
    } WDSTRANSPORT_PROTOCOL_FLAGS;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0002 *PWDSTRANSPORT_PROTOCOL_FLAGS;
typedef
enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0003
    {
        WdsTptNamespaceTypeUnknown = 0,
        WdsTptNamespaceTypeAutoCast = 1,
        WdsTptNamespaceTypeScheduledCastManualStart = 2,
        WdsTptNamespaceTypeScheduledCastAutoStart = 3
    } WDSTRANSPORT_NAMESPACE_TYPE;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0003 *PWDSTRANSPORT_NAMESPACE_TYPE;
typedef
enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0004
    {
        WdsTptDisconnectUnknown = 0,
        WdsTptDisconnectFallback = 1,
        WdsTptDisconnectAbort = 2
    } WDSTRANSPORT_DISCONNECT_TYPE;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0004 *PWDSTRANSPORT_DISCONNECT_TYPE;
typedef
enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0005
    {
        WdsTptServiceNotifyUnknown = 0,
        WdsTptServiceNotifyReadSettings = 1
    } WDSTRANSPORT_SERVICE_NOTIFICATION;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0005 *PWDSTRANSPORT_SERVICE_NOTIFICATION;
typedef
enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0006
    {
        WdsTptIpAddressUnknown = 0,
        WdsTptIpAddressIpv4 = 1,
        WdsTptIpAddressIpv6 = 2
    } WDSTRANSPORT_IP_ADDRESS_TYPE;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0006 *PWDSTRANSPORT_IP_ADDRESS_TYPE;
typedef
enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0007
    {
        WdsTptIpAddressSourceUnknown = 0,
        WdsTptIpAddressSourceDhcp = 1,
        WdsTptIpAddressSourceRange = 2
    } WDSTRANSPORT_IP_ADDRESS_SOURCE_TYPE;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0007 *PWDSTRANSPORT_IP_ADDRESS_SOURCE_TYPE;
typedef
enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0008
    {
        WdsTptNetworkProfileUnknown = 0,
        WdsTptNetworkProfileCustom = 1,
        WdsTptNetworkProfile10Mbps = 2,
        WdsTptNetworkProfile100Mbps = 3,
        WdsTptNetworkProfile1Gbps = 4
    } WDSTRANSPORT_NETWORK_PROFILE_TYPE;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0008 *PWDSTRANSPORT_NETWORK_PROFILE_TYPE;
typedef
enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0009
    {
        WdsTptDiagnosticsComponentPxe = 0x1,
        WdsTptDiagnosticsComponentTftp = 0x2,
        WdsTptDiagnosticsComponentImageServer = 0x4,
        WdsTptDiagnosticsComponentMulticast = 0x8
    } WDSTRANSPORT_DIAGNOSTICS_COMPONENT_FLAGS;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0009 *PWDSTRANSPORT_DIAGNOSTICS_COMPONENT_FLAGS;
typedef
enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0010
    {
        WdsTptSlowClientHandlingUnknown = 0,
        WdsTptSlowClientHandlingNone = 1,
        WdsTptSlowClientHandlingAutoDisconnect = 2,
        WdsTptSlowClientHandlingMultistream = 3
    } WDSTRANSPORT_SLOW_CLIENT_HANDLING_TYPE;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0010 *PWDSTRANSPORT_SLOW_CLIENT_HANDLING_TYPE;
typedef
enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0011
    {
        WdsTptUdpPortPolicyDynamic = 0,
        WdsTptUdpPortPolicyFixed = 1
    } WDSTRANSPORT_UDP_PORT_POLICY;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0011 *PWDSTRANSPORT_UDP_PORT_POLICY;
typedef
enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0012
    {
        WdsTptTftpCapMaximumBlockSize = 0x1,
        WdsTptTftpCapVariableWindow = 0x2
    } WDSTRANSPORT_TFTP_CAPABILITY;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0012 *PWDSTRANSPORT_TFTP_CAPABILITY;
extern RPC_IF_HANDLE __MIDL_itf_wdstptmgmt_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wdstptmgmt_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWdsTransportCacheable;
    typedef struct IWdsTransportCacheableVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportCacheable * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportCacheable * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportCacheable * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportCacheable * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportCacheable * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportCacheable * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportCacheable * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Dirty )(
            __RPC__in IWdsTransportCacheable * This,
                                __RPC__out VARIANT_BOOL *pbDirty);
                               HRESULT ( STDMETHODCALLTYPE *Discard )(
            __RPC__in IWdsTransportCacheable * This);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IWdsTransportCacheable * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IWdsTransportCacheable * This);
        END_INTERFACE
    } IWdsTransportCacheableVtbl;
    interface IWdsTransportCacheable
    {
        CONST_VTBL struct IWdsTransportCacheableVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Dirty(This,pbDirty) )
    ( (This)->lpVtbl -> Discard(This) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Commit(This) )
EXTERN_C const IID IID_IWdsTransportCollection;
    typedef struct IWdsTransportCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IWdsTransportCollection * This,
                                __RPC__out ULONG *pulCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IWdsTransportCollection * This,
                       ULONG ulIndex,
                                __RPC__deref_out_opt IDispatch **ppVal);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IWdsTransportCollection * This,
                                __RPC__deref_out_opt IUnknown **ppVal);
        END_INTERFACE
    } IWdsTransportCollectionVtbl;
    interface IWdsTransportCollection
    {
        CONST_VTBL struct IWdsTransportCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pulCount) )
    ( (This)->lpVtbl -> get_Item(This,ulIndex,ppVal) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppVal) )
EXTERN_C const IID IID_IWdsTransportManager;
    typedef struct IWdsTransportManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *GetWdsTransportServer )(
            __RPC__in IWdsTransportManager * This,
                       __RPC__in BSTR bszServerName,
                                __RPC__deref_out_opt IWdsTransportServer **ppWdsTransportServer);
        END_INTERFACE
    } IWdsTransportManagerVtbl;
    interface IWdsTransportManager
    {
        CONST_VTBL struct IWdsTransportManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetWdsTransportServer(This,bszServerName,ppWdsTransportServer) )
EXTERN_C const IID IID_IWdsTransportServer;
    typedef struct IWdsTransportServerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportServer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportServer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportServer * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportServer * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportServer * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportServer * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportServer * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IWdsTransportServer * This,
                                __RPC__deref_out_opt BSTR *pbszName);
                                        HRESULT ( STDMETHODCALLTYPE *get_SetupManager )(
            __RPC__in IWdsTransportServer * This,
                                __RPC__deref_out_opt IWdsTransportSetupManager **ppWdsTransportSetupManager);
                                        HRESULT ( STDMETHODCALLTYPE *get_ConfigurationManager )(
            __RPC__in IWdsTransportServer * This,
                                __RPC__deref_out_opt IWdsTransportConfigurationManager **ppWdsTransportConfigurationManager);
                                        HRESULT ( STDMETHODCALLTYPE *get_NamespaceManager )(
            __RPC__in IWdsTransportServer * This,
                                __RPC__deref_out_opt IWdsTransportNamespaceManager **ppWdsTransportNamespaceManager);
                               HRESULT ( STDMETHODCALLTYPE *DisconnectClient )(
            __RPC__in IWdsTransportServer * This,
                       ULONG ulClientId,
            WDSTRANSPORT_DISCONNECT_TYPE DisconnectionType);
        END_INTERFACE
    } IWdsTransportServerVtbl;
    interface IWdsTransportServer
    {
        CONST_VTBL struct IWdsTransportServerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbszName) )
    ( (This)->lpVtbl -> get_SetupManager(This,ppWdsTransportSetupManager) )
    ( (This)->lpVtbl -> get_ConfigurationManager(This,ppWdsTransportConfigurationManager) )
    ( (This)->lpVtbl -> get_NamespaceManager(This,ppWdsTransportNamespaceManager) )
    ( (This)->lpVtbl -> DisconnectClient(This,ulClientId,DisconnectionType) )
EXTERN_C const IID IID_IWdsTransportServer2;
    typedef struct IWdsTransportServer2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportServer2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportServer2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportServer2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportServer2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportServer2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportServer2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportServer2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IWdsTransportServer2 * This,
                                __RPC__deref_out_opt BSTR *pbszName);
                                        HRESULT ( STDMETHODCALLTYPE *get_SetupManager )(
            __RPC__in IWdsTransportServer2 * This,
                                __RPC__deref_out_opt IWdsTransportSetupManager **ppWdsTransportSetupManager);
                                        HRESULT ( STDMETHODCALLTYPE *get_ConfigurationManager )(
            __RPC__in IWdsTransportServer2 * This,
                                __RPC__deref_out_opt IWdsTransportConfigurationManager **ppWdsTransportConfigurationManager);
                                        HRESULT ( STDMETHODCALLTYPE *get_NamespaceManager )(
            __RPC__in IWdsTransportServer2 * This,
                                __RPC__deref_out_opt IWdsTransportNamespaceManager **ppWdsTransportNamespaceManager);
                               HRESULT ( STDMETHODCALLTYPE *DisconnectClient )(
            __RPC__in IWdsTransportServer2 * This,
                       ULONG ulClientId,
            WDSTRANSPORT_DISCONNECT_TYPE DisconnectionType);
                                        HRESULT ( STDMETHODCALLTYPE *get_TftpManager )(
            __RPC__in IWdsTransportServer2 * This,
                                __RPC__deref_out_opt IWdsTransportTftpManager **ppWdsTransportTftpManager);
        END_INTERFACE
    } IWdsTransportServer2Vtbl;
    interface IWdsTransportServer2
    {
        CONST_VTBL struct IWdsTransportServer2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbszName) )
    ( (This)->lpVtbl -> get_SetupManager(This,ppWdsTransportSetupManager) )
    ( (This)->lpVtbl -> get_ConfigurationManager(This,ppWdsTransportConfigurationManager) )
    ( (This)->lpVtbl -> get_NamespaceManager(This,ppWdsTransportNamespaceManager) )
    ( (This)->lpVtbl -> DisconnectClient(This,ulClientId,DisconnectionType) )
    ( (This)->lpVtbl -> get_TftpManager(This,ppWdsTransportTftpManager) )
EXTERN_C const IID IID_IWdsTransportSetupManager;
    typedef struct IWdsTransportSetupManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportSetupManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportSetupManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportSetupManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportSetupManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportSetupManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportSetupManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportSetupManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Version )(
            __RPC__in IWdsTransportSetupManager * This,
                                __RPC__out ULONGLONG *pullVersion);
                                        HRESULT ( STDMETHODCALLTYPE *get_InstalledFeatures )(
            __RPC__in IWdsTransportSetupManager * This,
                                __RPC__out ULONG *pulInstalledFeatures);
                                        HRESULT ( STDMETHODCALLTYPE *get_Protocols )(
            __RPC__in IWdsTransportSetupManager * This,
                                __RPC__out ULONG *pulProtocols);
                               HRESULT ( STDMETHODCALLTYPE *RegisterContentProvider )(
            __RPC__in IWdsTransportSetupManager * This,
                       __RPC__in BSTR bszName,
                       __RPC__in BSTR bszDescription,
                       __RPC__in BSTR bszFilePath,
                       __RPC__in BSTR bszInitializationRoutine);
                               HRESULT ( STDMETHODCALLTYPE *DeregisterContentProvider )(
            __RPC__in IWdsTransportSetupManager * This,
                       __RPC__in BSTR bszName);
        END_INTERFACE
    } IWdsTransportSetupManagerVtbl;
    interface IWdsTransportSetupManager
    {
        CONST_VTBL struct IWdsTransportSetupManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Version(This,pullVersion) )
    ( (This)->lpVtbl -> get_InstalledFeatures(This,pulInstalledFeatures) )
    ( (This)->lpVtbl -> get_Protocols(This,pulProtocols) )
    ( (This)->lpVtbl -> RegisterContentProvider(This,bszName,bszDescription,bszFilePath,bszInitializationRoutine) )
    ( (This)->lpVtbl -> DeregisterContentProvider(This,bszName) )
EXTERN_C const IID IID_IWdsTransportSetupManager2;
    typedef struct IWdsTransportSetupManager2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportSetupManager2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportSetupManager2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportSetupManager2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportSetupManager2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportSetupManager2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportSetupManager2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportSetupManager2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Version )(
            __RPC__in IWdsTransportSetupManager2 * This,
                                __RPC__out ULONGLONG *pullVersion);
                                        HRESULT ( STDMETHODCALLTYPE *get_InstalledFeatures )(
            __RPC__in IWdsTransportSetupManager2 * This,
                                __RPC__out ULONG *pulInstalledFeatures);
                                        HRESULT ( STDMETHODCALLTYPE *get_Protocols )(
            __RPC__in IWdsTransportSetupManager2 * This,
                                __RPC__out ULONG *pulProtocols);
                               HRESULT ( STDMETHODCALLTYPE *RegisterContentProvider )(
            __RPC__in IWdsTransportSetupManager2 * This,
                       __RPC__in BSTR bszName,
                       __RPC__in BSTR bszDescription,
                       __RPC__in BSTR bszFilePath,
                       __RPC__in BSTR bszInitializationRoutine);
                               HRESULT ( STDMETHODCALLTYPE *DeregisterContentProvider )(
            __RPC__in IWdsTransportSetupManager2 * This,
                       __RPC__in BSTR bszName);
                                        HRESULT ( STDMETHODCALLTYPE *get_TftpCapabilities )(
            __RPC__in IWdsTransportSetupManager2 * This,
                                __RPC__out ULONG *pulTftpCapabilities);
                                        HRESULT ( STDMETHODCALLTYPE *get_ContentProviders )(
            __RPC__in IWdsTransportSetupManager2 * This,
                                __RPC__deref_out_opt IWdsTransportCollection **ppProviderCollection);
        END_INTERFACE
    } IWdsTransportSetupManager2Vtbl;
    interface IWdsTransportSetupManager2
    {
        CONST_VTBL struct IWdsTransportSetupManager2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Version(This,pullVersion) )
    ( (This)->lpVtbl -> get_InstalledFeatures(This,pulInstalledFeatures) )
    ( (This)->lpVtbl -> get_Protocols(This,pulProtocols) )
    ( (This)->lpVtbl -> RegisterContentProvider(This,bszName,bszDescription,bszFilePath,bszInitializationRoutine) )
    ( (This)->lpVtbl -> DeregisterContentProvider(This,bszName) )
    ( (This)->lpVtbl -> get_TftpCapabilities(This,pulTftpCapabilities) )
    ( (This)->lpVtbl -> get_ContentProviders(This,ppProviderCollection) )
EXTERN_C const IID IID_IWdsTransportConfigurationManager;
    typedef struct IWdsTransportConfigurationManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportConfigurationManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportConfigurationManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportConfigurationManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportConfigurationManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportConfigurationManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportConfigurationManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportConfigurationManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServicePolicy )(
            __RPC__in IWdsTransportConfigurationManager * This,
                                __RPC__deref_out_opt IWdsTransportServicePolicy **ppWdsTransportServicePolicy);
                                        HRESULT ( STDMETHODCALLTYPE *get_DiagnosticsPolicy )(
            __RPC__in IWdsTransportConfigurationManager * This,
                                __RPC__deref_out_opt IWdsTransportDiagnosticsPolicy **ppWdsTransportDiagnosticsPolicy);
                                        HRESULT ( STDMETHODCALLTYPE *get_WdsTransportServicesRunning )(
            __RPC__in IWdsTransportConfigurationManager * This,
                       VARIANT_BOOL bRealtimeStatus,
                                __RPC__out VARIANT_BOOL *pbServicesRunning);
                               HRESULT ( STDMETHODCALLTYPE *EnableWdsTransportServices )(
            __RPC__in IWdsTransportConfigurationManager * This);
                               HRESULT ( STDMETHODCALLTYPE *DisableWdsTransportServices )(
            __RPC__in IWdsTransportConfigurationManager * This);
                               HRESULT ( STDMETHODCALLTYPE *StartWdsTransportServices )(
            __RPC__in IWdsTransportConfigurationManager * This);
                               HRESULT ( STDMETHODCALLTYPE *StopWdsTransportServices )(
            __RPC__in IWdsTransportConfigurationManager * This);
                               HRESULT ( STDMETHODCALLTYPE *RestartWdsTransportServices )(
            __RPC__in IWdsTransportConfigurationManager * This);
                               HRESULT ( STDMETHODCALLTYPE *NotifyWdsTransportServices )(
            __RPC__in IWdsTransportConfigurationManager * This,
                       WDSTRANSPORT_SERVICE_NOTIFICATION ServiceNotification);
        END_INTERFACE
    } IWdsTransportConfigurationManagerVtbl;
    interface IWdsTransportConfigurationManager
    {
        CONST_VTBL struct IWdsTransportConfigurationManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ServicePolicy(This,ppWdsTransportServicePolicy) )
    ( (This)->lpVtbl -> get_DiagnosticsPolicy(This,ppWdsTransportDiagnosticsPolicy) )
    ( (This)->lpVtbl -> get_WdsTransportServicesRunning(This,bRealtimeStatus,pbServicesRunning) )
    ( (This)->lpVtbl -> EnableWdsTransportServices(This) )
    ( (This)->lpVtbl -> DisableWdsTransportServices(This) )
    ( (This)->lpVtbl -> StartWdsTransportServices(This) )
    ( (This)->lpVtbl -> StopWdsTransportServices(This) )
    ( (This)->lpVtbl -> RestartWdsTransportServices(This) )
    ( (This)->lpVtbl -> NotifyWdsTransportServices(This,ServiceNotification) )
EXTERN_C const IID IID_IWdsTransportConfigurationManager2;
    typedef struct IWdsTransportConfigurationManager2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportConfigurationManager2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportConfigurationManager2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportConfigurationManager2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportConfigurationManager2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportConfigurationManager2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportConfigurationManager2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportConfigurationManager2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServicePolicy )(
            __RPC__in IWdsTransportConfigurationManager2 * This,
                                __RPC__deref_out_opt IWdsTransportServicePolicy **ppWdsTransportServicePolicy);
                                        HRESULT ( STDMETHODCALLTYPE *get_DiagnosticsPolicy )(
            __RPC__in IWdsTransportConfigurationManager2 * This,
                                __RPC__deref_out_opt IWdsTransportDiagnosticsPolicy **ppWdsTransportDiagnosticsPolicy);
                                        HRESULT ( STDMETHODCALLTYPE *get_WdsTransportServicesRunning )(
            __RPC__in IWdsTransportConfigurationManager2 * This,
                       VARIANT_BOOL bRealtimeStatus,
                                __RPC__out VARIANT_BOOL *pbServicesRunning);
                               HRESULT ( STDMETHODCALLTYPE *EnableWdsTransportServices )(
            __RPC__in IWdsTransportConfigurationManager2 * This);
                               HRESULT ( STDMETHODCALLTYPE *DisableWdsTransportServices )(
            __RPC__in IWdsTransportConfigurationManager2 * This);
                               HRESULT ( STDMETHODCALLTYPE *StartWdsTransportServices )(
            __RPC__in IWdsTransportConfigurationManager2 * This);
                               HRESULT ( STDMETHODCALLTYPE *StopWdsTransportServices )(
            __RPC__in IWdsTransportConfigurationManager2 * This);
                               HRESULT ( STDMETHODCALLTYPE *RestartWdsTransportServices )(
            __RPC__in IWdsTransportConfigurationManager2 * This);
                               HRESULT ( STDMETHODCALLTYPE *NotifyWdsTransportServices )(
            __RPC__in IWdsTransportConfigurationManager2 * This,
                       WDSTRANSPORT_SERVICE_NOTIFICATION ServiceNotification);
                                        HRESULT ( STDMETHODCALLTYPE *get_MulticastSessionPolicy )(
            __RPC__in IWdsTransportConfigurationManager2 * This,
                                __RPC__deref_out_opt IWdsTransportMulticastSessionPolicy **ppWdsTransportMulticastSessionPolicy);
        END_INTERFACE
    } IWdsTransportConfigurationManager2Vtbl;
    interface IWdsTransportConfigurationManager2
    {
        CONST_VTBL struct IWdsTransportConfigurationManager2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ServicePolicy(This,ppWdsTransportServicePolicy) )
    ( (This)->lpVtbl -> get_DiagnosticsPolicy(This,ppWdsTransportDiagnosticsPolicy) )
    ( (This)->lpVtbl -> get_WdsTransportServicesRunning(This,bRealtimeStatus,pbServicesRunning) )
    ( (This)->lpVtbl -> EnableWdsTransportServices(This) )
    ( (This)->lpVtbl -> DisableWdsTransportServices(This) )
    ( (This)->lpVtbl -> StartWdsTransportServices(This) )
    ( (This)->lpVtbl -> StopWdsTransportServices(This) )
    ( (This)->lpVtbl -> RestartWdsTransportServices(This) )
    ( (This)->lpVtbl -> NotifyWdsTransportServices(This,ServiceNotification) )
    ( (This)->lpVtbl -> get_MulticastSessionPolicy(This,ppWdsTransportMulticastSessionPolicy) )
EXTERN_C const IID IID_IWdsTransportNamespaceManager;
    typedef struct IWdsTransportNamespaceManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportNamespaceManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportNamespaceManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportNamespaceManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportNamespaceManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportNamespaceManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportNamespaceManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportNamespaceManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *CreateNamespace )(
            __RPC__in IWdsTransportNamespaceManager * This,
                       WDSTRANSPORT_NAMESPACE_TYPE NamespaceType,
                       __RPC__in BSTR bszNamespaceName,
                       __RPC__in BSTR bszContentProvider,
                       __RPC__in BSTR bszConfiguration,
                                __RPC__deref_out_opt IWdsTransportNamespace **ppWdsTransportNamespace);
                               HRESULT ( STDMETHODCALLTYPE *RetrieveNamespace )(
            __RPC__in IWdsTransportNamespaceManager * This,
                       __RPC__in BSTR bszNamespaceName,
                                __RPC__deref_out_opt IWdsTransportNamespace **ppWdsTransportNamespace);
                               HRESULT ( STDMETHODCALLTYPE *RetrieveNamespaces )(
            __RPC__in IWdsTransportNamespaceManager * This,
                       __RPC__in BSTR bszContentProvider,
                       __RPC__in BSTR bszNamespaceName,
                       VARIANT_BOOL bIncludeTombstones,
                                __RPC__deref_out_opt IWdsTransportCollection **ppWdsTransportNamespaces);
        END_INTERFACE
    } IWdsTransportNamespaceManagerVtbl;
    interface IWdsTransportNamespaceManager
    {
        CONST_VTBL struct IWdsTransportNamespaceManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> CreateNamespace(This,NamespaceType,bszNamespaceName,bszContentProvider,bszConfiguration,ppWdsTransportNamespace) )
    ( (This)->lpVtbl -> RetrieveNamespace(This,bszNamespaceName,ppWdsTransportNamespace) )
    ( (This)->lpVtbl -> RetrieveNamespaces(This,bszContentProvider,bszNamespaceName,bIncludeTombstones,ppWdsTransportNamespaces) )
EXTERN_C const IID IID_IWdsTransportTftpManager;
    typedef struct IWdsTransportTftpManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportTftpManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportTftpManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportTftpManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportTftpManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportTftpManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportTftpManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportTftpManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *RetrieveTftpClients )(
            __RPC__in IWdsTransportTftpManager * This,
                                __RPC__deref_out_opt IWdsTransportCollection **ppWdsTransportTftpClients);
        END_INTERFACE
    } IWdsTransportTftpManagerVtbl;
    interface IWdsTransportTftpManager
    {
        CONST_VTBL struct IWdsTransportTftpManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> RetrieveTftpClients(This,ppWdsTransportTftpClients) )
EXTERN_C const IID IID_IWdsTransportServicePolicy;
    typedef struct IWdsTransportServicePolicyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportServicePolicy * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportServicePolicy * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportServicePolicy * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportServicePolicy * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportServicePolicy * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportServicePolicy * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportServicePolicy * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Dirty )(
            __RPC__in IWdsTransportServicePolicy * This,
                                __RPC__out VARIANT_BOOL *pbDirty);
                               HRESULT ( STDMETHODCALLTYPE *Discard )(
            __RPC__in IWdsTransportServicePolicy * This);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IWdsTransportServicePolicy * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IWdsTransportServicePolicy * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_IpAddressSource )(
            __RPC__in IWdsTransportServicePolicy * This,
                       WDSTRANSPORT_IP_ADDRESS_TYPE AddressType,
                                __RPC__out WDSTRANSPORT_IP_ADDRESS_SOURCE_TYPE *pSourceType);
                                        HRESULT ( STDMETHODCALLTYPE *put_IpAddressSource )(
            __RPC__in IWdsTransportServicePolicy * This,
                       WDSTRANSPORT_IP_ADDRESS_TYPE AddressType,
                       WDSTRANSPORT_IP_ADDRESS_SOURCE_TYPE SourceType);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartIpAddress )(
            __RPC__in IWdsTransportServicePolicy * This,
                       WDSTRANSPORT_IP_ADDRESS_TYPE AddressType,
                                __RPC__deref_out_opt BSTR *pbszStartIpAddress);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartIpAddress )(
            __RPC__in IWdsTransportServicePolicy * This,
                       WDSTRANSPORT_IP_ADDRESS_TYPE AddressType,
                       __RPC__in BSTR bszStartIpAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_EndIpAddress )(
            __RPC__in IWdsTransportServicePolicy * This,
                       WDSTRANSPORT_IP_ADDRESS_TYPE AddressType,
                                __RPC__deref_out_opt BSTR *pbszEndIpAddress);
                                        HRESULT ( STDMETHODCALLTYPE *put_EndIpAddress )(
            __RPC__in IWdsTransportServicePolicy * This,
                       WDSTRANSPORT_IP_ADDRESS_TYPE AddressType,
                       __RPC__in BSTR bszEndIpAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartPort )(
            __RPC__in IWdsTransportServicePolicy * This,
                                __RPC__out ULONG *pulStartPort);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartPort )(
            __RPC__in IWdsTransportServicePolicy * This,
                       ULONG ulStartPort);
                                        HRESULT ( STDMETHODCALLTYPE *get_EndPort )(
            __RPC__in IWdsTransportServicePolicy * This,
                                __RPC__out ULONG *pulEndPort);
                                        HRESULT ( STDMETHODCALLTYPE *put_EndPort )(
            __RPC__in IWdsTransportServicePolicy * This,
                       ULONG ulEndPort);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetworkProfile )(
            __RPC__in IWdsTransportServicePolicy * This,
                                __RPC__out WDSTRANSPORT_NETWORK_PROFILE_TYPE *pProfileType);
                                        HRESULT ( STDMETHODCALLTYPE *put_NetworkProfile )(
            __RPC__in IWdsTransportServicePolicy * This,
                       WDSTRANSPORT_NETWORK_PROFILE_TYPE ProfileType);
        END_INTERFACE
    } IWdsTransportServicePolicyVtbl;
    interface IWdsTransportServicePolicy
    {
        CONST_VTBL struct IWdsTransportServicePolicyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Dirty(This,pbDirty) )
    ( (This)->lpVtbl -> Discard(This) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> get_IpAddressSource(This,AddressType,pSourceType) )
    ( (This)->lpVtbl -> put_IpAddressSource(This,AddressType,SourceType) )
    ( (This)->lpVtbl -> get_StartIpAddress(This,AddressType,pbszStartIpAddress) )
    ( (This)->lpVtbl -> put_StartIpAddress(This,AddressType,bszStartIpAddress) )
    ( (This)->lpVtbl -> get_EndIpAddress(This,AddressType,pbszEndIpAddress) )
    ( (This)->lpVtbl -> put_EndIpAddress(This,AddressType,bszEndIpAddress) )
    ( (This)->lpVtbl -> get_StartPort(This,pulStartPort) )
    ( (This)->lpVtbl -> put_StartPort(This,ulStartPort) )
    ( (This)->lpVtbl -> get_EndPort(This,pulEndPort) )
    ( (This)->lpVtbl -> put_EndPort(This,ulEndPort) )
    ( (This)->lpVtbl -> get_NetworkProfile(This,pProfileType) )
    ( (This)->lpVtbl -> put_NetworkProfile(This,ProfileType) )
EXTERN_C const IID IID_IWdsTransportServicePolicy2;
    typedef struct IWdsTransportServicePolicy2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportServicePolicy2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportServicePolicy2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportServicePolicy2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportServicePolicy2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportServicePolicy2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportServicePolicy2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportServicePolicy2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Dirty )(
            __RPC__in IWdsTransportServicePolicy2 * This,
                                __RPC__out VARIANT_BOOL *pbDirty);
                               HRESULT ( STDMETHODCALLTYPE *Discard )(
            __RPC__in IWdsTransportServicePolicy2 * This);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IWdsTransportServicePolicy2 * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IWdsTransportServicePolicy2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_IpAddressSource )(
            __RPC__in IWdsTransportServicePolicy2 * This,
                       WDSTRANSPORT_IP_ADDRESS_TYPE AddressType,
                                __RPC__out WDSTRANSPORT_IP_ADDRESS_SOURCE_TYPE *pSourceType);
                                        HRESULT ( STDMETHODCALLTYPE *put_IpAddressSource )(
            __RPC__in IWdsTransportServicePolicy2 * This,
                       WDSTRANSPORT_IP_ADDRESS_TYPE AddressType,
                       WDSTRANSPORT_IP_ADDRESS_SOURCE_TYPE SourceType);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartIpAddress )(
            __RPC__in IWdsTransportServicePolicy2 * This,
                       WDSTRANSPORT_IP_ADDRESS_TYPE AddressType,
                                __RPC__deref_out_opt BSTR *pbszStartIpAddress);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartIpAddress )(
            __RPC__in IWdsTransportServicePolicy2 * This,
                       WDSTRANSPORT_IP_ADDRESS_TYPE AddressType,
                       __RPC__in BSTR bszStartIpAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_EndIpAddress )(
            __RPC__in IWdsTransportServicePolicy2 * This,
                       WDSTRANSPORT_IP_ADDRESS_TYPE AddressType,
                                __RPC__deref_out_opt BSTR *pbszEndIpAddress);
                                        HRESULT ( STDMETHODCALLTYPE *put_EndIpAddress )(
            __RPC__in IWdsTransportServicePolicy2 * This,
                       WDSTRANSPORT_IP_ADDRESS_TYPE AddressType,
                       __RPC__in BSTR bszEndIpAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartPort )(
            __RPC__in IWdsTransportServicePolicy2 * This,
                                __RPC__out ULONG *pulStartPort);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartPort )(
            __RPC__in IWdsTransportServicePolicy2 * This,
                       ULONG ulStartPort);
                                        HRESULT ( STDMETHODCALLTYPE *get_EndPort )(
            __RPC__in IWdsTransportServicePolicy2 * This,
                                __RPC__out ULONG *pulEndPort);
                                        HRESULT ( STDMETHODCALLTYPE *put_EndPort )(
            __RPC__in IWdsTransportServicePolicy2 * This,
                       ULONG ulEndPort);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetworkProfile )(
            __RPC__in IWdsTransportServicePolicy2 * This,
                                __RPC__out WDSTRANSPORT_NETWORK_PROFILE_TYPE *pProfileType);
                                        HRESULT ( STDMETHODCALLTYPE *put_NetworkProfile )(
            __RPC__in IWdsTransportServicePolicy2 * This,
                       WDSTRANSPORT_NETWORK_PROFILE_TYPE ProfileType);
                                        HRESULT ( STDMETHODCALLTYPE *get_UdpPortPolicy )(
            __RPC__in IWdsTransportServicePolicy2 * This,
                                __RPC__out WDSTRANSPORT_UDP_PORT_POLICY *pUdpPortPolicy);
                                        HRESULT ( STDMETHODCALLTYPE *put_UdpPortPolicy )(
            __RPC__in IWdsTransportServicePolicy2 * This,
                       WDSTRANSPORT_UDP_PORT_POLICY UdpPortPolicy);
                                        HRESULT ( STDMETHODCALLTYPE *get_TftpMaximumBlockSize )(
            __RPC__in IWdsTransportServicePolicy2 * This,
                                __RPC__out ULONG *pulTftpMaximumBlockSize);
                                        HRESULT ( STDMETHODCALLTYPE *put_TftpMaximumBlockSize )(
            __RPC__in IWdsTransportServicePolicy2 * This,
                       ULONG ulTftpMaximumBlockSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_EnableTftpVariableWindowExtension )(
            __RPC__in IWdsTransportServicePolicy2 * This,
                                __RPC__out VARIANT_BOOL *pbEnableTftpVariableWindowExtension);
                                        HRESULT ( STDMETHODCALLTYPE *put_EnableTftpVariableWindowExtension )(
            __RPC__in IWdsTransportServicePolicy2 * This,
                       VARIANT_BOOL bEnableTftpVariableWindowExtension);
        END_INTERFACE
    } IWdsTransportServicePolicy2Vtbl;
    interface IWdsTransportServicePolicy2
    {
        CONST_VTBL struct IWdsTransportServicePolicy2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Dirty(This,pbDirty) )
    ( (This)->lpVtbl -> Discard(This) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> get_IpAddressSource(This,AddressType,pSourceType) )
    ( (This)->lpVtbl -> put_IpAddressSource(This,AddressType,SourceType) )
    ( (This)->lpVtbl -> get_StartIpAddress(This,AddressType,pbszStartIpAddress) )
    ( (This)->lpVtbl -> put_StartIpAddress(This,AddressType,bszStartIpAddress) )
    ( (This)->lpVtbl -> get_EndIpAddress(This,AddressType,pbszEndIpAddress) )
    ( (This)->lpVtbl -> put_EndIpAddress(This,AddressType,bszEndIpAddress) )
    ( (This)->lpVtbl -> get_StartPort(This,pulStartPort) )
    ( (This)->lpVtbl -> put_StartPort(This,ulStartPort) )
    ( (This)->lpVtbl -> get_EndPort(This,pulEndPort) )
    ( (This)->lpVtbl -> put_EndPort(This,ulEndPort) )
    ( (This)->lpVtbl -> get_NetworkProfile(This,pProfileType) )
    ( (This)->lpVtbl -> put_NetworkProfile(This,ProfileType) )
    ( (This)->lpVtbl -> get_UdpPortPolicy(This,pUdpPortPolicy) )
    ( (This)->lpVtbl -> put_UdpPortPolicy(This,UdpPortPolicy) )
    ( (This)->lpVtbl -> get_TftpMaximumBlockSize(This,pulTftpMaximumBlockSize) )
    ( (This)->lpVtbl -> put_TftpMaximumBlockSize(This,ulTftpMaximumBlockSize) )
    ( (This)->lpVtbl -> get_EnableTftpVariableWindowExtension(This,pbEnableTftpVariableWindowExtension) )
    ( (This)->lpVtbl -> put_EnableTftpVariableWindowExtension(This,bEnableTftpVariableWindowExtension) )
EXTERN_C const IID IID_IWdsTransportDiagnosticsPolicy;
    typedef struct IWdsTransportDiagnosticsPolicyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportDiagnosticsPolicy * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportDiagnosticsPolicy * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportDiagnosticsPolicy * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportDiagnosticsPolicy * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportDiagnosticsPolicy * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportDiagnosticsPolicy * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportDiagnosticsPolicy * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Dirty )(
            __RPC__in IWdsTransportDiagnosticsPolicy * This,
                                __RPC__out VARIANT_BOOL *pbDirty);
                               HRESULT ( STDMETHODCALLTYPE *Discard )(
            __RPC__in IWdsTransportDiagnosticsPolicy * This);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IWdsTransportDiagnosticsPolicy * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IWdsTransportDiagnosticsPolicy * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in IWdsTransportDiagnosticsPolicy * This,
                                __RPC__out VARIANT_BOOL *pbEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in IWdsTransportDiagnosticsPolicy * This,
                       VARIANT_BOOL bEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_Components )(
            __RPC__in IWdsTransportDiagnosticsPolicy * This,
                                __RPC__out ULONG *pulComponents);
                                        HRESULT ( STDMETHODCALLTYPE *put_Components )(
            __RPC__in IWdsTransportDiagnosticsPolicy * This,
                       ULONG ulComponents);
        END_INTERFACE
    } IWdsTransportDiagnosticsPolicyVtbl;
    interface IWdsTransportDiagnosticsPolicy
    {
        CONST_VTBL struct IWdsTransportDiagnosticsPolicyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Dirty(This,pbDirty) )
    ( (This)->lpVtbl -> Discard(This) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> get_Enabled(This,pbEnabled) )
    ( (This)->lpVtbl -> put_Enabled(This,bEnabled) )
    ( (This)->lpVtbl -> get_Components(This,pulComponents) )
    ( (This)->lpVtbl -> put_Components(This,ulComponents) )
EXTERN_C const IID IID_IWdsTransportMulticastSessionPolicy;
    typedef struct IWdsTransportMulticastSessionPolicyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportMulticastSessionPolicy * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportMulticastSessionPolicy * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportMulticastSessionPolicy * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportMulticastSessionPolicy * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportMulticastSessionPolicy * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportMulticastSessionPolicy * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportMulticastSessionPolicy * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Dirty )(
            __RPC__in IWdsTransportMulticastSessionPolicy * This,
                                __RPC__out VARIANT_BOOL *pbDirty);
                               HRESULT ( STDMETHODCALLTYPE *Discard )(
            __RPC__in IWdsTransportMulticastSessionPolicy * This);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IWdsTransportMulticastSessionPolicy * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IWdsTransportMulticastSessionPolicy * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_SlowClientHandling )(
            __RPC__in IWdsTransportMulticastSessionPolicy * This,
                                __RPC__out WDSTRANSPORT_SLOW_CLIENT_HANDLING_TYPE *pSlowClientHandling);
                                        HRESULT ( STDMETHODCALLTYPE *put_SlowClientHandling )(
            __RPC__in IWdsTransportMulticastSessionPolicy * This,
                       WDSTRANSPORT_SLOW_CLIENT_HANDLING_TYPE SlowClientHandling);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoDisconnectThreshold )(
            __RPC__in IWdsTransportMulticastSessionPolicy * This,
                                __RPC__out ULONG *pulThreshold);
                                        HRESULT ( STDMETHODCALLTYPE *put_AutoDisconnectThreshold )(
            __RPC__in IWdsTransportMulticastSessionPolicy * This,
                       ULONG ulThreshold);
                                        HRESULT ( STDMETHODCALLTYPE *get_MultistreamStreamCount )(
            __RPC__in IWdsTransportMulticastSessionPolicy * This,
                                __RPC__out ULONG *pulStreamCount);
                                        HRESULT ( STDMETHODCALLTYPE *put_MultistreamStreamCount )(
            __RPC__in IWdsTransportMulticastSessionPolicy * This,
                       ULONG ulStreamCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_SlowClientFallback )(
            __RPC__in IWdsTransportMulticastSessionPolicy * This,
                                __RPC__out VARIANT_BOOL *pbClientFallback);
                                        HRESULT ( STDMETHODCALLTYPE *put_SlowClientFallback )(
            __RPC__in IWdsTransportMulticastSessionPolicy * This,
                       VARIANT_BOOL bClientFallback);
        END_INTERFACE
    } IWdsTransportMulticastSessionPolicyVtbl;
    interface IWdsTransportMulticastSessionPolicy
    {
        CONST_VTBL struct IWdsTransportMulticastSessionPolicyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Dirty(This,pbDirty) )
    ( (This)->lpVtbl -> Discard(This) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> get_SlowClientHandling(This,pSlowClientHandling) )
    ( (This)->lpVtbl -> put_SlowClientHandling(This,SlowClientHandling) )
    ( (This)->lpVtbl -> get_AutoDisconnectThreshold(This,pulThreshold) )
    ( (This)->lpVtbl -> put_AutoDisconnectThreshold(This,ulThreshold) )
    ( (This)->lpVtbl -> get_MultistreamStreamCount(This,pulStreamCount) )
    ( (This)->lpVtbl -> put_MultistreamStreamCount(This,ulStreamCount) )
    ( (This)->lpVtbl -> get_SlowClientFallback(This,pbClientFallback) )
    ( (This)->lpVtbl -> put_SlowClientFallback(This,bClientFallback) )
EXTERN_C const IID IID_IWdsTransportNamespace;
    typedef struct IWdsTransportNamespaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportNamespace * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportNamespace * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportNamespace * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportNamespace * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportNamespace * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportNamespace * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportNamespace * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IWdsTransportNamespace * This,
                                __RPC__out WDSTRANSPORT_NAMESPACE_TYPE *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IWdsTransportNamespace * This,
                                __RPC__out ULONG *pulId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IWdsTransportNamespace * This,
                                __RPC__deref_out_opt BSTR *pbszName);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IWdsTransportNamespace * This,
                       __RPC__in BSTR bszName);
                                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in IWdsTransportNamespace * This,
                                __RPC__deref_out_opt BSTR *pbszFriendlyName);
                                        HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
            __RPC__in IWdsTransportNamespace * This,
                       __RPC__in BSTR bszFriendlyName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IWdsTransportNamespace * This,
                                __RPC__deref_out_opt BSTR *pbszDescription);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IWdsTransportNamespace * This,
                       __RPC__in BSTR bszDescription);
                                        HRESULT ( STDMETHODCALLTYPE *get_ContentProvider )(
            __RPC__in IWdsTransportNamespace * This,
                                __RPC__deref_out_opt BSTR *pbszContentProvider);
                                        HRESULT ( STDMETHODCALLTYPE *put_ContentProvider )(
            __RPC__in IWdsTransportNamespace * This,
                       __RPC__in BSTR bszContentProvider);
                                        HRESULT ( STDMETHODCALLTYPE *get_Configuration )(
            __RPC__in IWdsTransportNamespace * This,
                                __RPC__deref_out_opt BSTR *pbszConfiguration);
                                        HRESULT ( STDMETHODCALLTYPE *put_Configuration )(
            __RPC__in IWdsTransportNamespace * This,
                       __RPC__in BSTR bszConfiguration);
                                        HRESULT ( STDMETHODCALLTYPE *get_Registered )(
            __RPC__in IWdsTransportNamespace * This,
                                __RPC__out VARIANT_BOOL *pbRegistered);
                                        HRESULT ( STDMETHODCALLTYPE *get_Tombstoned )(
            __RPC__in IWdsTransportNamespace * This,
                                __RPC__out VARIANT_BOOL *pbTombstoned);
                                        HRESULT ( STDMETHODCALLTYPE *get_TombstoneTime )(
            __RPC__in IWdsTransportNamespace * This,
                                __RPC__out DATE *pTombstoneTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransmissionStarted )(
            __RPC__in IWdsTransportNamespace * This,
                                __RPC__out VARIANT_BOOL *pbTransmissionStarted);
                               HRESULT ( STDMETHODCALLTYPE *Register )(
            __RPC__in IWdsTransportNamespace * This);
                               HRESULT ( STDMETHODCALLTYPE *Deregister )(
            __RPC__in IWdsTransportNamespace * This,
                       VARIANT_BOOL bTerminateSessions);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IWdsTransportNamespace * This,
                                __RPC__deref_out_opt IWdsTransportNamespace **ppWdsTransportNamespaceClone);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IWdsTransportNamespace * This);
                               HRESULT ( STDMETHODCALLTYPE *RetrieveContents )(
            __RPC__in IWdsTransportNamespace * This,
                                __RPC__deref_out_opt IWdsTransportCollection **ppWdsTransportContents);
        END_INTERFACE
    } IWdsTransportNamespaceVtbl;
    interface IWdsTransportNamespace
    {
        CONST_VTBL struct IWdsTransportNamespaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Id(This,pulId) )
    ( (This)->lpVtbl -> get_Name(This,pbszName) )
    ( (This)->lpVtbl -> put_Name(This,bszName) )
    ( (This)->lpVtbl -> get_FriendlyName(This,pbszFriendlyName) )
    ( (This)->lpVtbl -> put_FriendlyName(This,bszFriendlyName) )
    ( (This)->lpVtbl -> get_Description(This,pbszDescription) )
    ( (This)->lpVtbl -> put_Description(This,bszDescription) )
    ( (This)->lpVtbl -> get_ContentProvider(This,pbszContentProvider) )
    ( (This)->lpVtbl -> put_ContentProvider(This,bszContentProvider) )
    ( (This)->lpVtbl -> get_Configuration(This,pbszConfiguration) )
    ( (This)->lpVtbl -> put_Configuration(This,bszConfiguration) )
    ( (This)->lpVtbl -> get_Registered(This,pbRegistered) )
    ( (This)->lpVtbl -> get_Tombstoned(This,pbTombstoned) )
    ( (This)->lpVtbl -> get_TombstoneTime(This,pTombstoneTime) )
    ( (This)->lpVtbl -> get_TransmissionStarted(This,pbTransmissionStarted) )
    ( (This)->lpVtbl -> Register(This) )
    ( (This)->lpVtbl -> Deregister(This,bTerminateSessions) )
    ( (This)->lpVtbl -> Clone(This,ppWdsTransportNamespaceClone) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> RetrieveContents(This,ppWdsTransportContents) )
EXTERN_C const IID IID_IWdsTransportNamespaceAutoCast;
    typedef struct IWdsTransportNamespaceAutoCastVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportNamespaceAutoCast * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportNamespaceAutoCast * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportNamespaceAutoCast * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportNamespaceAutoCast * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportNamespaceAutoCast * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportNamespaceAutoCast * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportNamespaceAutoCast * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IWdsTransportNamespaceAutoCast * This,
                                __RPC__out WDSTRANSPORT_NAMESPACE_TYPE *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IWdsTransportNamespaceAutoCast * This,
                                __RPC__out ULONG *pulId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IWdsTransportNamespaceAutoCast * This,
                                __RPC__deref_out_opt BSTR *pbszName);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IWdsTransportNamespaceAutoCast * This,
                       __RPC__in BSTR bszName);
                                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in IWdsTransportNamespaceAutoCast * This,
                                __RPC__deref_out_opt BSTR *pbszFriendlyName);
                                        HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
            __RPC__in IWdsTransportNamespaceAutoCast * This,
                       __RPC__in BSTR bszFriendlyName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IWdsTransportNamespaceAutoCast * This,
                                __RPC__deref_out_opt BSTR *pbszDescription);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IWdsTransportNamespaceAutoCast * This,
                       __RPC__in BSTR bszDescription);
                                        HRESULT ( STDMETHODCALLTYPE *get_ContentProvider )(
            __RPC__in IWdsTransportNamespaceAutoCast * This,
                                __RPC__deref_out_opt BSTR *pbszContentProvider);
                                        HRESULT ( STDMETHODCALLTYPE *put_ContentProvider )(
            __RPC__in IWdsTransportNamespaceAutoCast * This,
                       __RPC__in BSTR bszContentProvider);
                                        HRESULT ( STDMETHODCALLTYPE *get_Configuration )(
            __RPC__in IWdsTransportNamespaceAutoCast * This,
                                __RPC__deref_out_opt BSTR *pbszConfiguration);
                                        HRESULT ( STDMETHODCALLTYPE *put_Configuration )(
            __RPC__in IWdsTransportNamespaceAutoCast * This,
                       __RPC__in BSTR bszConfiguration);
                                        HRESULT ( STDMETHODCALLTYPE *get_Registered )(
            __RPC__in IWdsTransportNamespaceAutoCast * This,
                                __RPC__out VARIANT_BOOL *pbRegistered);
                                        HRESULT ( STDMETHODCALLTYPE *get_Tombstoned )(
            __RPC__in IWdsTransportNamespaceAutoCast * This,
                                __RPC__out VARIANT_BOOL *pbTombstoned);
                                        HRESULT ( STDMETHODCALLTYPE *get_TombstoneTime )(
            __RPC__in IWdsTransportNamespaceAutoCast * This,
                                __RPC__out DATE *pTombstoneTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransmissionStarted )(
            __RPC__in IWdsTransportNamespaceAutoCast * This,
                                __RPC__out VARIANT_BOOL *pbTransmissionStarted);
                               HRESULT ( STDMETHODCALLTYPE *Register )(
            __RPC__in IWdsTransportNamespaceAutoCast * This);
                               HRESULT ( STDMETHODCALLTYPE *Deregister )(
            __RPC__in IWdsTransportNamespaceAutoCast * This,
                       VARIANT_BOOL bTerminateSessions);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IWdsTransportNamespaceAutoCast * This,
                                __RPC__deref_out_opt IWdsTransportNamespace **ppWdsTransportNamespaceClone);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IWdsTransportNamespaceAutoCast * This);
                               HRESULT ( STDMETHODCALLTYPE *RetrieveContents )(
            __RPC__in IWdsTransportNamespaceAutoCast * This,
                                __RPC__deref_out_opt IWdsTransportCollection **ppWdsTransportContents);
        END_INTERFACE
    } IWdsTransportNamespaceAutoCastVtbl;
    interface IWdsTransportNamespaceAutoCast
    {
        CONST_VTBL struct IWdsTransportNamespaceAutoCastVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Id(This,pulId) )
    ( (This)->lpVtbl -> get_Name(This,pbszName) )
    ( (This)->lpVtbl -> put_Name(This,bszName) )
    ( (This)->lpVtbl -> get_FriendlyName(This,pbszFriendlyName) )
    ( (This)->lpVtbl -> put_FriendlyName(This,bszFriendlyName) )
    ( (This)->lpVtbl -> get_Description(This,pbszDescription) )
    ( (This)->lpVtbl -> put_Description(This,bszDescription) )
    ( (This)->lpVtbl -> get_ContentProvider(This,pbszContentProvider) )
    ( (This)->lpVtbl -> put_ContentProvider(This,bszContentProvider) )
    ( (This)->lpVtbl -> get_Configuration(This,pbszConfiguration) )
    ( (This)->lpVtbl -> put_Configuration(This,bszConfiguration) )
    ( (This)->lpVtbl -> get_Registered(This,pbRegistered) )
    ( (This)->lpVtbl -> get_Tombstoned(This,pbTombstoned) )
    ( (This)->lpVtbl -> get_TombstoneTime(This,pTombstoneTime) )
    ( (This)->lpVtbl -> get_TransmissionStarted(This,pbTransmissionStarted) )
    ( (This)->lpVtbl -> Register(This) )
    ( (This)->lpVtbl -> Deregister(This,bTerminateSessions) )
    ( (This)->lpVtbl -> Clone(This,ppWdsTransportNamespaceClone) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> RetrieveContents(This,ppWdsTransportContents) )
EXTERN_C const IID IID_IWdsTransportNamespaceScheduledCast;
    typedef struct IWdsTransportNamespaceScheduledCastVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportNamespaceScheduledCast * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This,
                                __RPC__out WDSTRANSPORT_NAMESPACE_TYPE *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This,
                                __RPC__out ULONG *pulId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This,
                                __RPC__deref_out_opt BSTR *pbszName);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This,
                       __RPC__in BSTR bszName);
                                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This,
                                __RPC__deref_out_opt BSTR *pbszFriendlyName);
                                        HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This,
                       __RPC__in BSTR bszFriendlyName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This,
                                __RPC__deref_out_opt BSTR *pbszDescription);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This,
                       __RPC__in BSTR bszDescription);
                                        HRESULT ( STDMETHODCALLTYPE *get_ContentProvider )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This,
                                __RPC__deref_out_opt BSTR *pbszContentProvider);
                                        HRESULT ( STDMETHODCALLTYPE *put_ContentProvider )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This,
                       __RPC__in BSTR bszContentProvider);
                                        HRESULT ( STDMETHODCALLTYPE *get_Configuration )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This,
                                __RPC__deref_out_opt BSTR *pbszConfiguration);
                                        HRESULT ( STDMETHODCALLTYPE *put_Configuration )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This,
                       __RPC__in BSTR bszConfiguration);
                                        HRESULT ( STDMETHODCALLTYPE *get_Registered )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This,
                                __RPC__out VARIANT_BOOL *pbRegistered);
                                        HRESULT ( STDMETHODCALLTYPE *get_Tombstoned )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This,
                                __RPC__out VARIANT_BOOL *pbTombstoned);
                                        HRESULT ( STDMETHODCALLTYPE *get_TombstoneTime )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This,
                                __RPC__out DATE *pTombstoneTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransmissionStarted )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This,
                                __RPC__out VARIANT_BOOL *pbTransmissionStarted);
                               HRESULT ( STDMETHODCALLTYPE *Register )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This);
                               HRESULT ( STDMETHODCALLTYPE *Deregister )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This,
                       VARIANT_BOOL bTerminateSessions);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This,
                                __RPC__deref_out_opt IWdsTransportNamespace **ppWdsTransportNamespaceClone);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This);
                               HRESULT ( STDMETHODCALLTYPE *RetrieveContents )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This,
                                __RPC__deref_out_opt IWdsTransportCollection **ppWdsTransportContents);
                               HRESULT ( STDMETHODCALLTYPE *StartTransmission )(
            __RPC__in IWdsTransportNamespaceScheduledCast * This);
        END_INTERFACE
    } IWdsTransportNamespaceScheduledCastVtbl;
    interface IWdsTransportNamespaceScheduledCast
    {
        CONST_VTBL struct IWdsTransportNamespaceScheduledCastVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Id(This,pulId) )
    ( (This)->lpVtbl -> get_Name(This,pbszName) )
    ( (This)->lpVtbl -> put_Name(This,bszName) )
    ( (This)->lpVtbl -> get_FriendlyName(This,pbszFriendlyName) )
    ( (This)->lpVtbl -> put_FriendlyName(This,bszFriendlyName) )
    ( (This)->lpVtbl -> get_Description(This,pbszDescription) )
    ( (This)->lpVtbl -> put_Description(This,bszDescription) )
    ( (This)->lpVtbl -> get_ContentProvider(This,pbszContentProvider) )
    ( (This)->lpVtbl -> put_ContentProvider(This,bszContentProvider) )
    ( (This)->lpVtbl -> get_Configuration(This,pbszConfiguration) )
    ( (This)->lpVtbl -> put_Configuration(This,bszConfiguration) )
    ( (This)->lpVtbl -> get_Registered(This,pbRegistered) )
    ( (This)->lpVtbl -> get_Tombstoned(This,pbTombstoned) )
    ( (This)->lpVtbl -> get_TombstoneTime(This,pTombstoneTime) )
    ( (This)->lpVtbl -> get_TransmissionStarted(This,pbTransmissionStarted) )
    ( (This)->lpVtbl -> Register(This) )
    ( (This)->lpVtbl -> Deregister(This,bTerminateSessions) )
    ( (This)->lpVtbl -> Clone(This,ppWdsTransportNamespaceClone) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> RetrieveContents(This,ppWdsTransportContents) )
    ( (This)->lpVtbl -> StartTransmission(This) )
EXTERN_C const IID IID_IWdsTransportNamespaceScheduledCastManualStart;
    typedef struct IWdsTransportNamespaceScheduledCastManualStartVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportNamespaceScheduledCastManualStart * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This,
                                __RPC__out WDSTRANSPORT_NAMESPACE_TYPE *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This,
                                __RPC__out ULONG *pulId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This,
                                __RPC__deref_out_opt BSTR *pbszName);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This,
                       __RPC__in BSTR bszName);
                                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This,
                                __RPC__deref_out_opt BSTR *pbszFriendlyName);
                                        HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This,
                       __RPC__in BSTR bszFriendlyName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This,
                                __RPC__deref_out_opt BSTR *pbszDescription);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This,
                       __RPC__in BSTR bszDescription);
                                        HRESULT ( STDMETHODCALLTYPE *get_ContentProvider )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This,
                                __RPC__deref_out_opt BSTR *pbszContentProvider);
                                        HRESULT ( STDMETHODCALLTYPE *put_ContentProvider )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This,
                       __RPC__in BSTR bszContentProvider);
                                        HRESULT ( STDMETHODCALLTYPE *get_Configuration )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This,
                                __RPC__deref_out_opt BSTR *pbszConfiguration);
                                        HRESULT ( STDMETHODCALLTYPE *put_Configuration )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This,
                       __RPC__in BSTR bszConfiguration);
                                        HRESULT ( STDMETHODCALLTYPE *get_Registered )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This,
                                __RPC__out VARIANT_BOOL *pbRegistered);
                                        HRESULT ( STDMETHODCALLTYPE *get_Tombstoned )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This,
                                __RPC__out VARIANT_BOOL *pbTombstoned);
                                        HRESULT ( STDMETHODCALLTYPE *get_TombstoneTime )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This,
                                __RPC__out DATE *pTombstoneTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransmissionStarted )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This,
                                __RPC__out VARIANT_BOOL *pbTransmissionStarted);
                               HRESULT ( STDMETHODCALLTYPE *Register )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This);
                               HRESULT ( STDMETHODCALLTYPE *Deregister )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This,
                       VARIANT_BOOL bTerminateSessions);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This,
                                __RPC__deref_out_opt IWdsTransportNamespace **ppWdsTransportNamespaceClone);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This);
                               HRESULT ( STDMETHODCALLTYPE *RetrieveContents )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This,
                                __RPC__deref_out_opt IWdsTransportCollection **ppWdsTransportContents);
                               HRESULT ( STDMETHODCALLTYPE *StartTransmission )(
            __RPC__in IWdsTransportNamespaceScheduledCastManualStart * This);
        END_INTERFACE
    } IWdsTransportNamespaceScheduledCastManualStartVtbl;
    interface IWdsTransportNamespaceScheduledCastManualStart
    {
        CONST_VTBL struct IWdsTransportNamespaceScheduledCastManualStartVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Id(This,pulId) )
    ( (This)->lpVtbl -> get_Name(This,pbszName) )
    ( (This)->lpVtbl -> put_Name(This,bszName) )
    ( (This)->lpVtbl -> get_FriendlyName(This,pbszFriendlyName) )
    ( (This)->lpVtbl -> put_FriendlyName(This,bszFriendlyName) )
    ( (This)->lpVtbl -> get_Description(This,pbszDescription) )
    ( (This)->lpVtbl -> put_Description(This,bszDescription) )
    ( (This)->lpVtbl -> get_ContentProvider(This,pbszContentProvider) )
    ( (This)->lpVtbl -> put_ContentProvider(This,bszContentProvider) )
    ( (This)->lpVtbl -> get_Configuration(This,pbszConfiguration) )
    ( (This)->lpVtbl -> put_Configuration(This,bszConfiguration) )
    ( (This)->lpVtbl -> get_Registered(This,pbRegistered) )
    ( (This)->lpVtbl -> get_Tombstoned(This,pbTombstoned) )
    ( (This)->lpVtbl -> get_TombstoneTime(This,pTombstoneTime) )
    ( (This)->lpVtbl -> get_TransmissionStarted(This,pbTransmissionStarted) )
    ( (This)->lpVtbl -> Register(This) )
    ( (This)->lpVtbl -> Deregister(This,bTerminateSessions) )
    ( (This)->lpVtbl -> Clone(This,ppWdsTransportNamespaceClone) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> RetrieveContents(This,ppWdsTransportContents) )
    ( (This)->lpVtbl -> StartTransmission(This) )
EXTERN_C const IID IID_IWdsTransportNamespaceScheduledCastAutoStart;
    typedef struct IWdsTransportNamespaceScheduledCastAutoStartVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportNamespaceScheduledCastAutoStart * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                                __RPC__out WDSTRANSPORT_NAMESPACE_TYPE *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                                __RPC__out ULONG *pulId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                                __RPC__deref_out_opt BSTR *pbszName);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                       __RPC__in BSTR bszName);
                                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                                __RPC__deref_out_opt BSTR *pbszFriendlyName);
                                        HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                       __RPC__in BSTR bszFriendlyName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                                __RPC__deref_out_opt BSTR *pbszDescription);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                       __RPC__in BSTR bszDescription);
                                        HRESULT ( STDMETHODCALLTYPE *get_ContentProvider )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                                __RPC__deref_out_opt BSTR *pbszContentProvider);
                                        HRESULT ( STDMETHODCALLTYPE *put_ContentProvider )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                       __RPC__in BSTR bszContentProvider);
                                        HRESULT ( STDMETHODCALLTYPE *get_Configuration )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                                __RPC__deref_out_opt BSTR *pbszConfiguration);
                                        HRESULT ( STDMETHODCALLTYPE *put_Configuration )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                       __RPC__in BSTR bszConfiguration);
                                        HRESULT ( STDMETHODCALLTYPE *get_Registered )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                                __RPC__out VARIANT_BOOL *pbRegistered);
                                        HRESULT ( STDMETHODCALLTYPE *get_Tombstoned )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                                __RPC__out VARIANT_BOOL *pbTombstoned);
                                        HRESULT ( STDMETHODCALLTYPE *get_TombstoneTime )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                                __RPC__out DATE *pTombstoneTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransmissionStarted )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                                __RPC__out VARIANT_BOOL *pbTransmissionStarted);
                               HRESULT ( STDMETHODCALLTYPE *Register )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This);
                               HRESULT ( STDMETHODCALLTYPE *Deregister )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                       VARIANT_BOOL bTerminateSessions);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                                __RPC__deref_out_opt IWdsTransportNamespace **ppWdsTransportNamespaceClone);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This);
                               HRESULT ( STDMETHODCALLTYPE *RetrieveContents )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                                __RPC__deref_out_opt IWdsTransportCollection **ppWdsTransportContents);
                               HRESULT ( STDMETHODCALLTYPE *StartTransmission )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinimumClients )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                                __RPC__out ULONG *pulMinimumClients);
                                        HRESULT ( STDMETHODCALLTYPE *put_MinimumClients )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                       ULONG ulMinimumClients);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                                __RPC__out DATE *pStartTime);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartTime )(
            __RPC__in IWdsTransportNamespaceScheduledCastAutoStart * This,
                       DATE StartTime);
        END_INTERFACE
    } IWdsTransportNamespaceScheduledCastAutoStartVtbl;
    interface IWdsTransportNamespaceScheduledCastAutoStart
    {
        CONST_VTBL struct IWdsTransportNamespaceScheduledCastAutoStartVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Id(This,pulId) )
    ( (This)->lpVtbl -> get_Name(This,pbszName) )
    ( (This)->lpVtbl -> put_Name(This,bszName) )
    ( (This)->lpVtbl -> get_FriendlyName(This,pbszFriendlyName) )
    ( (This)->lpVtbl -> put_FriendlyName(This,bszFriendlyName) )
    ( (This)->lpVtbl -> get_Description(This,pbszDescription) )
    ( (This)->lpVtbl -> put_Description(This,bszDescription) )
    ( (This)->lpVtbl -> get_ContentProvider(This,pbszContentProvider) )
    ( (This)->lpVtbl -> put_ContentProvider(This,bszContentProvider) )
    ( (This)->lpVtbl -> get_Configuration(This,pbszConfiguration) )
    ( (This)->lpVtbl -> put_Configuration(This,bszConfiguration) )
    ( (This)->lpVtbl -> get_Registered(This,pbRegistered) )
    ( (This)->lpVtbl -> get_Tombstoned(This,pbTombstoned) )
    ( (This)->lpVtbl -> get_TombstoneTime(This,pTombstoneTime) )
    ( (This)->lpVtbl -> get_TransmissionStarted(This,pbTransmissionStarted) )
    ( (This)->lpVtbl -> Register(This) )
    ( (This)->lpVtbl -> Deregister(This,bTerminateSessions) )
    ( (This)->lpVtbl -> Clone(This,ppWdsTransportNamespaceClone) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> RetrieveContents(This,ppWdsTransportContents) )
    ( (This)->lpVtbl -> StartTransmission(This) )
    ( (This)->lpVtbl -> get_MinimumClients(This,pulMinimumClients) )
    ( (This)->lpVtbl -> put_MinimumClients(This,ulMinimumClients) )
    ( (This)->lpVtbl -> get_StartTime(This,pStartTime) )
    ( (This)->lpVtbl -> put_StartTime(This,StartTime) )
EXTERN_C const IID IID_IWdsTransportContent;
    typedef struct IWdsTransportContentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportContent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportContent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportContent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportContent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportContent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportContent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportContent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Namespace )(
            __RPC__in IWdsTransportContent * This,
                                __RPC__deref_out_opt IWdsTransportNamespace **ppWdsTransportNamespace);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IWdsTransportContent * This,
                                __RPC__out ULONG *pulId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IWdsTransportContent * This,
                                __RPC__deref_out_opt BSTR *pbszName);
                               HRESULT ( STDMETHODCALLTYPE *RetrieveSessions )(
            __RPC__in IWdsTransportContent * This,
                                __RPC__deref_out_opt IWdsTransportCollection **ppWdsTransportSessions);
                               HRESULT ( STDMETHODCALLTYPE *Terminate )(
            __RPC__in IWdsTransportContent * This);
        END_INTERFACE
    } IWdsTransportContentVtbl;
    interface IWdsTransportContent
    {
        CONST_VTBL struct IWdsTransportContentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Namespace(This,ppWdsTransportNamespace) )
    ( (This)->lpVtbl -> get_Id(This,pulId) )
    ( (This)->lpVtbl -> get_Name(This,pbszName) )
    ( (This)->lpVtbl -> RetrieveSessions(This,ppWdsTransportSessions) )
    ( (This)->lpVtbl -> Terminate(This) )
EXTERN_C const IID IID_IWdsTransportSession;
    typedef struct IWdsTransportSessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportSession * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportSession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportSession * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportSession * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportSession * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportSession * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportSession * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Content )(
            __RPC__in IWdsTransportSession * This,
                                __RPC__deref_out_opt IWdsTransportContent **ppWdsTransportContent);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IWdsTransportSession * This,
                                __RPC__out ULONG *pulId);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetworkInterfaceName )(
            __RPC__in IWdsTransportSession * This,
                                __RPC__deref_out_opt BSTR *pbszNetworkInterfaceName);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetworkInterfaceAddress )(
            __RPC__in IWdsTransportSession * This,
                                __RPC__deref_out_opt BSTR *pbszNetworkInterfaceAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransferRate )(
            __RPC__in IWdsTransportSession * This,
                                __RPC__out ULONG *pulTransferRate);
                                        HRESULT ( STDMETHODCALLTYPE *get_MasterClientId )(
            __RPC__in IWdsTransportSession * This,
                                __RPC__out ULONG *pulMasterClientId);
                               HRESULT ( STDMETHODCALLTYPE *RetrieveClients )(
            __RPC__in IWdsTransportSession * This,
                                __RPC__deref_out_opt IWdsTransportCollection **ppWdsTransportClients);
                               HRESULT ( STDMETHODCALLTYPE *Terminate )(
            __RPC__in IWdsTransportSession * This);
        END_INTERFACE
    } IWdsTransportSessionVtbl;
    interface IWdsTransportSession
    {
        CONST_VTBL struct IWdsTransportSessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Content(This,ppWdsTransportContent) )
    ( (This)->lpVtbl -> get_Id(This,pulId) )
    ( (This)->lpVtbl -> get_NetworkInterfaceName(This,pbszNetworkInterfaceName) )
    ( (This)->lpVtbl -> get_NetworkInterfaceAddress(This,pbszNetworkInterfaceAddress) )
    ( (This)->lpVtbl -> get_TransferRate(This,pulTransferRate) )
    ( (This)->lpVtbl -> get_MasterClientId(This,pulMasterClientId) )
    ( (This)->lpVtbl -> RetrieveClients(This,ppWdsTransportClients) )
    ( (This)->lpVtbl -> Terminate(This) )
EXTERN_C const IID IID_IWdsTransportClient;
    typedef struct IWdsTransportClientVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportClient * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportClient * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportClient * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportClient * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportClient * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportClient * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportClient * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Session )(
            __RPC__in IWdsTransportClient * This,
                                __RPC__deref_out_opt IWdsTransportSession **ppWdsTransportSession);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IWdsTransportClient * This,
                                __RPC__out ULONG *pulId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IWdsTransportClient * This,
                                __RPC__deref_out_opt BSTR *pbszName);
                                        HRESULT ( STDMETHODCALLTYPE *get_MacAddress )(
            __RPC__in IWdsTransportClient * This,
                                __RPC__deref_out_opt BSTR *pbszMacAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_IpAddress )(
            __RPC__in IWdsTransportClient * This,
                                __RPC__deref_out_opt BSTR *pbszIpAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_PercentCompletion )(
            __RPC__in IWdsTransportClient * This,
                                __RPC__out ULONG *pulPercentCompletion);
                                        HRESULT ( STDMETHODCALLTYPE *get_JoinDuration )(
            __RPC__in IWdsTransportClient * This,
                                __RPC__out ULONG *pulJoinDuration);
                                        HRESULT ( STDMETHODCALLTYPE *get_CpuUtilization )(
            __RPC__in IWdsTransportClient * This,
                                __RPC__out ULONG *pulCpuUtilization);
                                        HRESULT ( STDMETHODCALLTYPE *get_MemoryUtilization )(
            __RPC__in IWdsTransportClient * This,
                                __RPC__out ULONG *pulMemoryUtilization);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetworkUtilization )(
            __RPC__in IWdsTransportClient * This,
                                __RPC__out ULONG *pulNetworkUtilization);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserIdentity )(
            __RPC__in IWdsTransportClient * This,
                                __RPC__deref_out_opt BSTR *pbszUserIdentity);
                               HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            __RPC__in IWdsTransportClient * This,
                       WDSTRANSPORT_DISCONNECT_TYPE DisconnectionType);
        END_INTERFACE
    } IWdsTransportClientVtbl;
    interface IWdsTransportClient
    {
        CONST_VTBL struct IWdsTransportClientVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Session(This,ppWdsTransportSession) )
    ( (This)->lpVtbl -> get_Id(This,pulId) )
    ( (This)->lpVtbl -> get_Name(This,pbszName) )
    ( (This)->lpVtbl -> get_MacAddress(This,pbszMacAddress) )
    ( (This)->lpVtbl -> get_IpAddress(This,pbszIpAddress) )
    ( (This)->lpVtbl -> get_PercentCompletion(This,pulPercentCompletion) )
    ( (This)->lpVtbl -> get_JoinDuration(This,pulJoinDuration) )
    ( (This)->lpVtbl -> get_CpuUtilization(This,pulCpuUtilization) )
    ( (This)->lpVtbl -> get_MemoryUtilization(This,pulMemoryUtilization) )
    ( (This)->lpVtbl -> get_NetworkUtilization(This,pulNetworkUtilization) )
    ( (This)->lpVtbl -> get_UserIdentity(This,pbszUserIdentity) )
    ( (This)->lpVtbl -> Disconnect(This,DisconnectionType) )
EXTERN_C const IID IID_IWdsTransportTftpClient;
    typedef struct IWdsTransportTftpClientVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportTftpClient * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportTftpClient * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportTftpClient * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportTftpClient * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportTftpClient * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportTftpClient * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportTftpClient * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileName )(
            __RPC__in IWdsTransportTftpClient * This,
                                __RPC__deref_out_opt BSTR *pbszFileName);
                                        HRESULT ( STDMETHODCALLTYPE *get_IpAddress )(
            __RPC__in IWdsTransportTftpClient * This,
                                __RPC__deref_out_opt BSTR *pbszIpAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_Timeout )(
            __RPC__in IWdsTransportTftpClient * This,
                                __RPC__out ULONG *pulTimeout);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentFileOffset )(
            __RPC__in IWdsTransportTftpClient * This,
                                __RPC__out ULONG64 *pul64CurrentOffset);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileSize )(
            __RPC__in IWdsTransportTftpClient * This,
                                __RPC__out ULONG64 *pul64FileSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_BlockSize )(
            __RPC__in IWdsTransportTftpClient * This,
                                __RPC__out ULONG *pulBlockSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_WindowSize )(
            __RPC__in IWdsTransportTftpClient * This,
                                __RPC__out ULONG *pulWindowSize);
        END_INTERFACE
    } IWdsTransportTftpClientVtbl;
    interface IWdsTransportTftpClient
    {
        CONST_VTBL struct IWdsTransportTftpClientVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_FileName(This,pbszFileName) )
    ( (This)->lpVtbl -> get_IpAddress(This,pbszIpAddress) )
    ( (This)->lpVtbl -> get_Timeout(This,pulTimeout) )
    ( (This)->lpVtbl -> get_CurrentFileOffset(This,pul64CurrentOffset) )
    ( (This)->lpVtbl -> get_FileSize(This,pul64FileSize) )
    ( (This)->lpVtbl -> get_BlockSize(This,pulBlockSize) )
    ( (This)->lpVtbl -> get_WindowSize(This,pulWindowSize) )
EXTERN_C const IID IID_IWdsTransportContentProvider;
    typedef struct IWdsTransportContentProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWdsTransportContentProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWdsTransportContentProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWdsTransportContentProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWdsTransportContentProvider * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWdsTransportContentProvider * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWdsTransportContentProvider * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWdsTransportContentProvider * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IWdsTransportContentProvider * This,
                                __RPC__deref_out_opt BSTR *pbszName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IWdsTransportContentProvider * This,
                                __RPC__deref_out_opt BSTR *pbszDescription);
                                        HRESULT ( STDMETHODCALLTYPE *get_FilePath )(
            __RPC__in IWdsTransportContentProvider * This,
                                __RPC__deref_out_opt BSTR *pbszFilePath);
                                        HRESULT ( STDMETHODCALLTYPE *get_InitializationRoutine )(
            __RPC__in IWdsTransportContentProvider * This,
                                __RPC__deref_out_opt BSTR *pbszInitializationRoutine);
        END_INTERFACE
    } IWdsTransportContentProviderVtbl;
    interface IWdsTransportContentProvider
    {
        CONST_VTBL struct IWdsTransportContentProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbszName) )
    ( (This)->lpVtbl -> get_Description(This,pbszDescription) )
    ( (This)->lpVtbl -> get_FilePath(This,pbszFilePath) )
    ( (This)->lpVtbl -> get_InitializationRoutine(This,pbszInitializationRoutine) )
EXTERN_C const IID LIBID_WdsTptMgmtLib;
EXTERN_C const CLSID CLSID_WdsTransportCacheable;
class DECLSPEC_UUID("70590B16-F146-46BD-BD9D-4AAA90084BF5")
WdsTransportCacheable;
EXTERN_C const CLSID CLSID_WdsTransportCollection;
class DECLSPEC_UUID("C7F18B09-391E-436E-B10B-C3EF46F2C34F")
WdsTransportCollection;
EXTERN_C const CLSID CLSID_WdsTransportManager;
class DECLSPEC_UUID("F21523F6-837C-4A58-AF99-8A7E27F8FF59")
WdsTransportManager;
EXTERN_C const CLSID CLSID_WdsTransportServer;
class DECLSPEC_UUID("EA19B643-4ADF-4413-942C-14F379118760")
WdsTransportServer;
EXTERN_C const CLSID CLSID_WdsTransportSetupManager;
class DECLSPEC_UUID("C7BEEAAD-9F04-4923-9F0C-FBF52BC7590F")
WdsTransportSetupManager;
EXTERN_C const CLSID CLSID_WdsTransportConfigurationManager;
class DECLSPEC_UUID("8743F674-904C-47CA-8512-35FE98F6B0AC")
WdsTransportConfigurationManager;
EXTERN_C const CLSID CLSID_WdsTransportNamespaceManager;
class DECLSPEC_UUID("F08CDB63-85DE-4A28-A1A9-5CA3E7EFDA73")
WdsTransportNamespaceManager;
EXTERN_C const CLSID CLSID_WdsTransportServicePolicy;
class DECLSPEC_UUID("65ACEADC-2F0B-4F43-9F4D-811865D8CEAD")
WdsTransportServicePolicy;
EXTERN_C const CLSID CLSID_WdsTransportDiagnosticsPolicy;
class DECLSPEC_UUID("EB3333E1-A7AD-46F5-80D6-6B740204E509")
WdsTransportDiagnosticsPolicy;
EXTERN_C const CLSID CLSID_WdsTransportMulticastSessionPolicy;
class DECLSPEC_UUID("3C6BC3F4-6418-472A-B6F1-52D457195437")
WdsTransportMulticastSessionPolicy;
EXTERN_C const CLSID CLSID_WdsTransportNamespace;
class DECLSPEC_UUID("D8385768-0732-4EC1-95EA-16DA581908A1")
WdsTransportNamespace;
EXTERN_C const CLSID CLSID_WdsTransportNamespaceAutoCast;
class DECLSPEC_UUID("B091F5A8-6A99-478D-B23B-09E8FEE04574")
WdsTransportNamespaceAutoCast;
EXTERN_C const CLSID CLSID_WdsTransportNamespaceScheduledCast;
class DECLSPEC_UUID("BADC1897-7025-44EB-9108-FB61C4055792")
WdsTransportNamespaceScheduledCast;
EXTERN_C const CLSID CLSID_WdsTransportNamespaceScheduledCastManualStart;
class DECLSPEC_UUID("D3E1A2AA-CAAC-460E-B98A-47F9F318A1FA")
WdsTransportNamespaceScheduledCastManualStart;
EXTERN_C const CLSID CLSID_WdsTransportNamespaceScheduledCastAutoStart;
class DECLSPEC_UUID("A1107052-122C-4B81-9B7C-386E6855383F")
WdsTransportNamespaceScheduledCastAutoStart;
EXTERN_C const CLSID CLSID_WdsTransportContent;
class DECLSPEC_UUID("0A891FE7-4A3F-4C65-B6F2-1467619679EA")
WdsTransportContent;
EXTERN_C const CLSID CLSID_WdsTransportSession;
class DECLSPEC_UUID("749AC4E0-67BC-4743-BFE5-CACB1F26F57F")
WdsTransportSession;
EXTERN_C const CLSID CLSID_WdsTransportClient;
class DECLSPEC_UUID("66D2C5E9-0FF6-49EC-9733-DAFB1E01DF1C")
WdsTransportClient;
EXTERN_C const CLSID CLSID_WdsTransportTftpClient;
class DECLSPEC_UUID("50343925-7c5c-4c8c-96c4-ad9fa5005fba")
WdsTransportTftpClient;
EXTERN_C const CLSID CLSID_WdsTransportTftpManager;
class DECLSPEC_UUID("c8e9dca2-3241-4e4d-b806-bc74019dfeda")
WdsTransportTftpManager;
EXTERN_C const CLSID CLSID_WdsTransportContentProvider;
class DECLSPEC_UUID("E0BE741F-5A75-4EB9-8A2D-5E189B45F327")
WdsTransportContentProvider;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wdstptmgmt_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wdstptmgmt_0000_0026_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
