#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface INetCfgPnpReconfigCallback INetCfgPnpReconfigCallback;
typedef interface INetCfgComponentControl INetCfgComponentControl;
typedef interface INetCfgComponentSetup INetCfgComponentSetup;
typedef interface INetCfgComponentPropertyUi INetCfgComponentPropertyUi;
typedef interface INetCfgComponentNotifyBinding INetCfgComponentNotifyBinding;
typedef interface INetCfgComponentNotifyGlobal INetCfgComponentNotifyGlobal;
typedef interface INetCfgComponentUpperEdge INetCfgComponentUpperEdge;
typedef interface INetLanConnectionUiInfo INetLanConnectionUiInfo;
typedef interface INetRasConnectionIpUiInfo INetRasConnectionIpUiInfo;
typedef interface INetCfgComponentSysPrep INetCfgComponentSysPrep;
#include "unknwn.h"
#include "netcfgx.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_netcfgn_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netcfgn_0000_0000_v0_0_s_ifspec;
typedef
enum tagNCPNP_RECONFIG_LAYER
    {
        NCRL_NDIS = 1,
        NCRL_TDI = 2
    } NCPNP_RECONFIG_LAYER;
EXTERN_C const IID IID_INetCfgPnpReconfigCallback;
    typedef struct INetCfgPnpReconfigCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetCfgPnpReconfigCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetCfgPnpReconfigCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetCfgPnpReconfigCallback * This);
        HRESULT ( STDMETHODCALLTYPE *SendPnpReconfig )(
            INetCfgPnpReconfigCallback * This,
            _In_ NCPNP_RECONFIG_LAYER Layer,
            _In_ LPCWSTR pszwUpper,
            _In_ LPCWSTR pszwLower,
            _In_reads_bytes_(dwSizeOfData) PVOID pvData,
            _In_ DWORD dwSizeOfData);
        END_INTERFACE
    } INetCfgPnpReconfigCallbackVtbl;
    interface INetCfgPnpReconfigCallback
    {
        CONST_VTBL struct INetCfgPnpReconfigCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SendPnpReconfig(This,Layer,pszwUpper,pszwLower,pvData,dwSizeOfData) )
EXTERN_C const IID IID_INetCfgComponentControl;
    typedef struct INetCfgComponentControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetCfgComponentControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetCfgComponentControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetCfgComponentControl * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            INetCfgComponentControl * This,
            _In_ INetCfgComponent *pIComp,
            _In_ INetCfg *pINetCfg,
            _In_ BOOL fInstalling);
        HRESULT ( STDMETHODCALLTYPE *ApplyRegistryChanges )(
            INetCfgComponentControl * This);
        HRESULT ( STDMETHODCALLTYPE *ApplyPnpChanges )(
            INetCfgComponentControl * This,
            _In_ INetCfgPnpReconfigCallback *pICallback);
        HRESULT ( STDMETHODCALLTYPE *CancelChanges )(
            INetCfgComponentControl * This);
        END_INTERFACE
    } INetCfgComponentControlVtbl;
    interface INetCfgComponentControl
    {
        CONST_VTBL struct INetCfgComponentControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pIComp,pINetCfg,fInstalling) )
    ( (This)->lpVtbl -> ApplyRegistryChanges(This) )
    ( (This)->lpVtbl -> ApplyPnpChanges(This,pICallback) )
    ( (This)->lpVtbl -> CancelChanges(This) )
typedef
enum tagNETWORK_INSTALL_TIME
    {
        NSF_PRIMARYINSTALL = 0x1,
        NSF_POSTSYSINSTALL = 0x2
    } NETWORK_INSTALL_TIME;
typedef
enum tagNETWORK_UPGRADE_TYPE
    {
        NSF_WIN16_UPGRADE = 0x10,
        NSF_WIN95_UPGRADE = 0x20,
        NSF_WINNT_WKS_UPGRADE = 0x40,
        NSF_WINNT_SVR_UPGRADE = 0x80,
        NSF_WINNT_SBS_UPGRADE = 0x100,
        NSF_COMPONENT_UPDATE = 0x200
    } NETWORK_UPGRADE_TYPE;
EXTERN_C const IID IID_INetCfgComponentSetup;
    typedef struct INetCfgComponentSetupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetCfgComponentSetup * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetCfgComponentSetup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetCfgComponentSetup * This);
        HRESULT ( STDMETHODCALLTYPE *Install )(
            INetCfgComponentSetup * This,
            _In_ DWORD dwSetupFlags);
        HRESULT ( STDMETHODCALLTYPE *Upgrade )(
            INetCfgComponentSetup * This,
            _In_ DWORD dwSetupFlags,
            _In_ DWORD dwUpgradeFomBuildNo);
        HRESULT ( STDMETHODCALLTYPE *ReadAnswerFile )(
            INetCfgComponentSetup * This,
            _In_ LPCWSTR pszwAnswerFile,
            _In_ LPCWSTR pszwAnswerSections);
        HRESULT ( STDMETHODCALLTYPE *Removing )(
            INetCfgComponentSetup * This);
        END_INTERFACE
    } INetCfgComponentSetupVtbl;
    interface INetCfgComponentSetup
    {
        CONST_VTBL struct INetCfgComponentSetupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Install(This,dwSetupFlags) )
    ( (This)->lpVtbl -> Upgrade(This,dwSetupFlags,dwUpgradeFomBuildNo) )
    ( (This)->lpVtbl -> ReadAnswerFile(This,pszwAnswerFile,pszwAnswerSections) )
    ( (This)->lpVtbl -> Removing(This) )
typedef
enum tagDEFAULT_PAGES
    {
        DPP_ADVANCED = 1
    } DEFAULT_PAGES;
EXTERN_C const IID IID_INetCfgComponentPropertyUi;
    typedef struct INetCfgComponentPropertyUiVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetCfgComponentPropertyUi * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetCfgComponentPropertyUi * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetCfgComponentPropertyUi * This);
        HRESULT ( STDMETHODCALLTYPE *QueryPropertyUi )(
            INetCfgComponentPropertyUi * This,
            _In_ IUnknown *pUnkReserved);
        HRESULT ( STDMETHODCALLTYPE *SetContext )(
            INetCfgComponentPropertyUi * This,
            _In_ IUnknown *pUnkReserved);
        HRESULT ( STDMETHODCALLTYPE *MergePropPages )(
            INetCfgComponentPropertyUi * This,
            _Inout_ DWORD *pdwDefPages,
            _Out_ BYTE **pahpspPrivate,
            _Out_ UINT *pcPages,
            _In_ HWND hwndParent,
            _In_opt_ LPCWSTR *pszStartPage);
        HRESULT ( STDMETHODCALLTYPE *ValidateProperties )(
            INetCfgComponentPropertyUi * This,
            _In_ HWND hwndSheet);
        HRESULT ( STDMETHODCALLTYPE *ApplyProperties )(
            INetCfgComponentPropertyUi * This);
        HRESULT ( STDMETHODCALLTYPE *CancelProperties )(
            INetCfgComponentPropertyUi * This);
        END_INTERFACE
    } INetCfgComponentPropertyUiVtbl;
    interface INetCfgComponentPropertyUi
    {
        CONST_VTBL struct INetCfgComponentPropertyUiVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryPropertyUi(This,pUnkReserved) )
    ( (This)->lpVtbl -> SetContext(This,pUnkReserved) )
    ( (This)->lpVtbl -> MergePropPages(This,pdwDefPages,pahpspPrivate,pcPages,hwndParent,pszStartPage) )
    ( (This)->lpVtbl -> ValidateProperties(This,hwndSheet) )
    ( (This)->lpVtbl -> ApplyProperties(This) )
    ( (This)->lpVtbl -> CancelProperties(This) )
typedef
enum tagBIND_FLAGS1
    {
        NCN_ADD = 0x1,
        NCN_REMOVE = 0x2,
        NCN_UPDATE = 0x4,
        NCN_ENABLE = 0x10,
        NCN_DISABLE = 0x20,
        NCN_BINDING_PATH = 0x100,
        NCN_PROPERTYCHANGE = 0x200,
        NCN_NET = 0x10000,
        NCN_NETTRANS = 0x20000,
        NCN_NETCLIENT = 0x40000,
        NCN_NETSERVICE = 0x80000
    } BIND_FLAGS1;
EXTERN_C const IID IID_INetCfgComponentNotifyBinding;
    typedef struct INetCfgComponentNotifyBindingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetCfgComponentNotifyBinding * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetCfgComponentNotifyBinding * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetCfgComponentNotifyBinding * This);
        HRESULT ( STDMETHODCALLTYPE *QueryBindingPath )(
            INetCfgComponentNotifyBinding * This,
            _In_ DWORD dwChangeFlag,
            _In_ INetCfgBindingPath *pIPath);
        HRESULT ( STDMETHODCALLTYPE *NotifyBindingPath )(
            INetCfgComponentNotifyBinding * This,
            _In_ DWORD dwChangeFlag,
            _In_ INetCfgBindingPath *pIPath);
        END_INTERFACE
    } INetCfgComponentNotifyBindingVtbl;
    interface INetCfgComponentNotifyBinding
    {
        CONST_VTBL struct INetCfgComponentNotifyBindingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryBindingPath(This,dwChangeFlag,pIPath) )
    ( (This)->lpVtbl -> NotifyBindingPath(This,dwChangeFlag,pIPath) )
EXTERN_C const IID IID_INetCfgComponentNotifyGlobal;
    typedef struct INetCfgComponentNotifyGlobalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetCfgComponentNotifyGlobal * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetCfgComponentNotifyGlobal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetCfgComponentNotifyGlobal * This);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedNotifications )(
            INetCfgComponentNotifyGlobal * This,
            _Out_ DWORD *dwNotifications);
        HRESULT ( STDMETHODCALLTYPE *SysQueryBindingPath )(
            INetCfgComponentNotifyGlobal * This,
            _In_ DWORD dwChangeFlag,
            _In_ INetCfgBindingPath *pIPath);
        HRESULT ( STDMETHODCALLTYPE *SysNotifyBindingPath )(
            INetCfgComponentNotifyGlobal * This,
            _In_ DWORD dwChangeFlag,
            _In_ INetCfgBindingPath *pIPath);
        HRESULT ( STDMETHODCALLTYPE *SysNotifyComponent )(
            INetCfgComponentNotifyGlobal * This,
            _In_ DWORD dwChangeFlag,
            _In_ INetCfgComponent *pIComp);
        END_INTERFACE
    } INetCfgComponentNotifyGlobalVtbl;
    interface INetCfgComponentNotifyGlobal
    {
        CONST_VTBL struct INetCfgComponentNotifyGlobalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSupportedNotifications(This,dwNotifications) )
    ( (This)->lpVtbl -> SysQueryBindingPath(This,dwChangeFlag,pIPath) )
    ( (This)->lpVtbl -> SysNotifyBindingPath(This,dwChangeFlag,pIPath) )
    ( (This)->lpVtbl -> SysNotifyComponent(This,dwChangeFlag,pIComp) )
EXTERN_C const IID IID_INetCfgComponentUpperEdge;
    typedef struct INetCfgComponentUpperEdgeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetCfgComponentUpperEdge * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetCfgComponentUpperEdge * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetCfgComponentUpperEdge * This);
        HRESULT ( STDMETHODCALLTYPE *GetInterfaceIdsForAdapter )(
            INetCfgComponentUpperEdge * This,
            _In_ INetCfgComponent *pAdapter,
            _Out_ DWORD *pdwNumInterfaces,
            _Outptr_opt_result_buffer_all_(*pdwNumInterfaces) GUID **ppguidInterfaceIds);
        HRESULT ( STDMETHODCALLTYPE *AddInterfacesToAdapter )(
            INetCfgComponentUpperEdge * This,
            _In_reads_(dwNumInterfaces) INetCfgComponent *pAdapter,
            _In_ DWORD dwNumInterfaces);
        HRESULT ( STDMETHODCALLTYPE *RemoveInterfacesFromAdapter )(
            INetCfgComponentUpperEdge * This,
            _In_ INetCfgComponent *pAdapter,
            _In_ DWORD dwNumInterfaces,
            _In_reads_(dwNumInterfaces) const GUID *pguidInterfaceIds);
        END_INTERFACE
    } INetCfgComponentUpperEdgeVtbl;
    interface INetCfgComponentUpperEdge
    {
        CONST_VTBL struct INetCfgComponentUpperEdgeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetInterfaceIdsForAdapter(This,pAdapter,pdwNumInterfaces,ppguidInterfaceIds) )
    ( (This)->lpVtbl -> AddInterfacesToAdapter(This,pAdapter,dwNumInterfaces) )
    ( (This)->lpVtbl -> RemoveInterfacesFromAdapter(This,pAdapter,dwNumInterfaces,pguidInterfaceIds) )
EXTERN_C const IID IID_INetLanConnectionUiInfo;
    typedef struct INetLanConnectionUiInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetLanConnectionUiInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetLanConnectionUiInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetLanConnectionUiInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceGuid )(
            __RPC__in INetLanConnectionUiInfo * This,
                        __RPC__out GUID *pguid);
        END_INTERFACE
    } INetLanConnectionUiInfoVtbl;
    interface INetLanConnectionUiInfo
    {
        CONST_VTBL struct INetLanConnectionUiInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDeviceGuid(This,pguid) )
typedef
enum tagRASCON_IPUI_FLAGS
    {
        RCUIF_VPN = 0x1,
        RCUIF_DEMAND_DIAL = 0x2,
        RCUIF_NOT_ADMIN = 0x4,
        RCUIF_USE_IPv4_STATICADDRESS = 0x8,
        RCUIF_USE_IPv4_NAME_SERVERS = 0x10,
        RCUIF_USE_IPv4_REMOTE_GATEWAY = 0x20,
        RCUIF_USE_IPv4_EXPLICIT_METRIC = 0x40,
        RCUIF_USE_HEADER_COMPRESSION = 0x80,
        RCUIF_USE_DISABLE_REGISTER_DNS = 0x100,
        RCUIF_USE_PRIVATE_DNS_SUFFIX = 0x200,
        RCUIF_ENABLE_NBT = 0x400,
        RCUIF_USE_IPv6_STATICADDRESS = 0x800,
        RCUIF_USE_IPv6_NAME_SERVERS = 0x1000,
        RCUIF_USE_IPv6_REMOTE_GATEWAY = 0x2000,
        RCUIF_USE_IPv6_EXPLICIT_METRIC = 0x4000,
        RCUIF_DISABLE_CLASS_BASED_ROUTE = 0x8000
    } RASCON_UIINFO_FLAGS;
typedef struct tagRASCON_IPUI
    {
    GUID guidConnection;
    BOOL fIPv6Cfg;
    DWORD dwFlags;
    WCHAR pszwIpAddr[ 16 ];
    WCHAR pszwDnsAddr[ 16 ];
    WCHAR pszwDns2Addr[ 16 ];
    WCHAR pszwWinsAddr[ 16 ];
    WCHAR pszwWins2Addr[ 16 ];
    WCHAR pszwDnsSuffix[ 256 ];
    WCHAR pszwIpv6Addr[ 65 ];
    DWORD dwIpv6PrefixLength;
    WCHAR pszwIpv6DnsAddr[ 65 ];
    WCHAR pszwIpv6Dns2Addr[ 65 ];
    DWORD dwIPv4InfMetric;
    DWORD dwIPv6InfMetric;
    } RASCON_IPUI;
EXTERN_C const IID IID_INetRasConnectionIpUiInfo;
    typedef struct INetRasConnectionIpUiInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetRasConnectionIpUiInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetRasConnectionIpUiInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetRasConnectionIpUiInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetUiInfo )(
            __RPC__in INetRasConnectionIpUiInfo * This,
                        __RPC__out RASCON_IPUI *pInfo);
        END_INTERFACE
    } INetRasConnectionIpUiInfoVtbl;
    interface INetRasConnectionIpUiInfo
    {
        CONST_VTBL struct INetRasConnectionIpUiInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUiInfo(This,pInfo) )
EXTERN_C const IID IID_INetCfgComponentSysPrep;
    typedef struct INetCfgComponentSysPrepVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetCfgComponentSysPrep * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetCfgComponentSysPrep * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetCfgComponentSysPrep * This);
        HRESULT ( STDMETHODCALLTYPE *SaveAdapterParameters )(
            INetCfgComponentSysPrep * This,
            _In_ INetCfgSysPrep *pncsp,
            _In_ LPCWSTR pszwAnswerSections,
            _In_ GUID *pAdapterInstanceGuid);
        HRESULT ( STDMETHODCALLTYPE *RestoreAdapterParameters )(
            INetCfgComponentSysPrep * This,
            _In_ LPCWSTR pszwAnswerFile,
            _In_ LPCWSTR pszwAnswerSection,
            _In_ GUID *pAdapterInstanceGuid);
        END_INTERFACE
    } INetCfgComponentSysPrepVtbl;
    interface INetCfgComponentSysPrep
    {
        CONST_VTBL struct INetCfgComponentSysPrepVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SaveAdapterParameters(This,pncsp,pszwAnswerSections,pAdapterInstanceGuid) )
    ( (This)->lpVtbl -> RestoreAdapterParameters(This,pszwAnswerFile,pszwAnswerSection,pAdapterInstanceGuid) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_netcfgn_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netcfgn_0000_0010_v0_0_s_ifspec;
}
