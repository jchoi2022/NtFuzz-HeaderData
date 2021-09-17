#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface INetFwRemoteAdminSettings INetFwRemoteAdminSettings;
typedef interface INetFwIcmpSettings INetFwIcmpSettings;
typedef interface INetFwOpenPort INetFwOpenPort;
typedef interface INetFwOpenPorts INetFwOpenPorts;
typedef interface INetFwService INetFwService;
typedef interface INetFwServices INetFwServices;
typedef interface INetFwAuthorizedApplication INetFwAuthorizedApplication;
typedef interface INetFwAuthorizedApplications INetFwAuthorizedApplications;
typedef interface INetFwRule INetFwRule;
typedef interface INetFwRule2 INetFwRule2;
typedef interface INetFwRule3 INetFwRule3;
typedef interface INetFwRules INetFwRules;
typedef interface INetFwServiceRestriction INetFwServiceRestriction;
typedef interface INetFwProfile INetFwProfile;
typedef interface INetFwPolicy INetFwPolicy;
typedef interface INetFwPolicy2 INetFwPolicy2;
typedef interface INetFwMgr INetFwMgr;
typedef interface INetFwProduct INetFwProduct;
typedef interface INetFwProducts INetFwProducts;
typedef class NetFwRule NetFwRule;
typedef class NetFwOpenPort NetFwOpenPort;
typedef class NetFwAuthorizedApplication NetFwAuthorizedApplication;
typedef class NetFwPolicy2 NetFwPolicy2;
typedef class NetFwProduct NetFwProduct;
typedef class NetFwProducts NetFwProducts;
typedef class NetFwMgr NetFwMgr;
#include "icftypes.h"
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
HRESULT
NetworkIsolationSetupAppContainerBinaries (
    _In_ PSID applicationContainerSid,
    _In_ LPCWSTR packageFullName,
    _In_ LPCWSTR packageFolder,
    _In_ LPCWSTR displayName,
    _In_ BOOL bBinariesFullyComputed,
    _In_reads_(binariesCount) LPCWSTR *binaries,
    _In_ DWORD binariesCount
    );
typedef enum NETISO_FLAG
{
    NETISO_FLAG_FORCE_COMPUTE_BINARIES = 0x1,
    NETISO_FLAG_MAX = 0x2
} NETISO_FLAG;
typedef enum _INET_FIREWALL_AC_CREATION_TYPE
{
    INET_FIREWALL_AC_NONE = 0x00,
    INET_FIREWALL_AC_PACKAGE_ID_ONLY = 0x01,
    INET_FIREWALL_AC_BINARY = 0x02,
    INET_FIREWALL_AC_MAX = 0x04
} INET_FIREWALL_AC_CREATION_TYPE;
typedef enum _INET_FIREWALL_AC_CHANGE_TYPE
{
    INET_FIREWALL_AC_CHANGE_INVALID = 0,
    INET_FIREWALL_AC_CHANGE_CREATE = 1,
    INET_FIREWALL_AC_CHANGE_DELETE = 2,
    INET_FIREWALL_AC_CHANGE_MAX = 3
} INET_FIREWALL_AC_CHANGE_TYPE;
typedef struct _INET_FIREWALL_AC_CAPABILITIES
{
    DWORD count;
    SID_AND_ATTRIBUTES * capabilities;
} INET_FIREWALL_AC_CAPABILITIES, *PINET_FIREWALL_AC_CAPABILITIES;
typedef struct _INET_FIREWALL_AC_BINARIES
{
    DWORD count;
    LPWSTR *binaries;
} INET_FIREWALL_AC_BINARIES, *PINET_FIREWALL_AC_BINARIES;
typedef struct _INET_FIREWALL_AC_CHANGE
{
    INET_FIREWALL_AC_CHANGE_TYPE changeType;
    INET_FIREWALL_AC_CREATION_TYPE createType;
    SID *appContainerSid;
    SID* userSid;
    LPWSTR displayName;
    union
    {
        INET_FIREWALL_AC_CAPABILITIES capabilities;
        INET_FIREWALL_AC_BINARIES binaries;
    };
} INET_FIREWALL_AC_CHANGE, *PINET_FIREWALL_AC_CHANGE;
typedef struct _INET_FIREWALL_APP_CONTAINER
{
    SID *appContainerSid;
    SID *userSid;
    LPWSTR appContainerName;
    LPWSTR displayName;
    LPWSTR description;
    INET_FIREWALL_AC_CAPABILITIES capabilities;
    INET_FIREWALL_AC_BINARIES binaries;
    LPWSTR workingDirectory;
    LPWSTR packageFullName;
} INET_FIREWALL_APP_CONTAINER, *PINET_FIREWALL_APP_CONTAINER;
typedef void (CALLBACK *PAC_CHANGES_CALLBACK_FN) (
    _In_opt_ void *context,
    _In_ const INET_FIREWALL_AC_CHANGE *pChange
    );
DWORD
NetworkIsolationRegisterForAppContainerChanges(
    _In_ DWORD flags,
    _In_ PAC_CHANGES_CALLBACK_FN callback,
    _In_opt_ PVOID context,
    _Out_ HANDLE *registrationObject
    );
DWORD
NetworkIsolationUnregisterForAppContainerChanges(
    _In_ HANDLE registrationObject
    );
HRESULT
NetworkIsolationEnumerateAppContainerRules(
    _Outptr_ IEnumVARIANT ** newEnum
    );
DWORD
NetworkIsolationFreeAppContainers(
    _In_ PINET_FIREWALL_APP_CONTAINER pPublicAppCs
    );
DWORD
NetworkIsolationEnumAppContainers(
    _In_ DWORD Flags,
    _Out_ DWORD *pdwNumPublicAppCs,
    _Outptr_result_buffer_(*pdwNumPublicAppCs) PINET_FIREWALL_APP_CONTAINER *ppPublicAppCs
    );
DWORD
NetworkIsolationGetAppContainerConfig(
    _Out_ DWORD *pdwNumPublicAppCs,
    _Outptr_result_buffer_(*pdwNumPublicAppCs) PSID_AND_ATTRIBUTES *appContainerSids
    );
DWORD
NetworkIsolationSetAppContainerConfig(
    _In_ DWORD dwNumPublicAppCs,
    _In_reads_(dwNumPublicAppCs) PSID_AND_ATTRIBUTES appContainerSids
    );
typedef enum _NETISO_ERROR_TYPE
{
    NETISO_ERROR_TYPE_NONE = 0x00,
    NETISO_ERROR_TYPE_PRIVATE_NETWORK = 0x01,
    NETISO_ERROR_TYPE_INTERNET_CLIENT = 0x02,
    NETISO_ERROR_TYPE_INTERNET_CLIENT_SERVER = 0x03,
    NETISO_ERROR_TYPE_MAX = 0x04
} NETISO_ERROR_TYPE;
DWORD
NetworkIsolationDiagnoseConnectFailureAndGetInfo(
    _In_ LPCWSTR wszServerName,
    _Out_ NETISO_ERROR_TYPE *netIsoError
    );
typedef void (CALLBACK *PNETISO_EDP_ID_CALLBACK_FN) (
    _Inout_opt_ void *context,
    _In_opt_z_ const LPCWSTR wszEnterpriseId,
    _In_ DWORD dwErr
    );
DWORD
NetworkIsolationGetEnterpriseIdAsync(
    _In_z_ LPCWSTR wszServerName,
    _In_ DWORD dwFlags,
    _In_opt_ void * context,
    _In_ PNETISO_EDP_ID_CALLBACK_FN callback,
    _Out_ HANDLE *hOperation
    );
DWORD
NetworkIsolationGetEnterpriseIdClose(
    _In_ HANDLE hOperation,
    _In_ BOOL bWaitForOperation
    );
extern RPC_IF_HANDLE __MIDL_itf_netfw_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netfw_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_INetFwRemoteAdminSettings;
    typedef struct INetFwRemoteAdminSettingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetFwRemoteAdminSettings * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetFwRemoteAdminSettings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetFwRemoteAdminSettings * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INetFwRemoteAdminSettings * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INetFwRemoteAdminSettings * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INetFwRemoteAdminSettings * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetFwRemoteAdminSettings * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_IpVersion )(
            __RPC__in INetFwRemoteAdminSettings * This,
                                __RPC__out NET_FW_IP_VERSION *ipVersion);
                            HRESULT ( STDMETHODCALLTYPE *put_IpVersion )(
            __RPC__in INetFwRemoteAdminSettings * This,
                       NET_FW_IP_VERSION ipVersion);
                            HRESULT ( STDMETHODCALLTYPE *get_Scope )(
            __RPC__in INetFwRemoteAdminSettings * This,
                                __RPC__out NET_FW_SCOPE *scope);
                            HRESULT ( STDMETHODCALLTYPE *put_Scope )(
            __RPC__in INetFwRemoteAdminSettings * This,
                       NET_FW_SCOPE scope);
                            HRESULT ( STDMETHODCALLTYPE *get_RemoteAddresses )(
            __RPC__in INetFwRemoteAdminSettings * This,
                                __RPC__deref_out_opt BSTR *remoteAddrs);
                            HRESULT ( STDMETHODCALLTYPE *put_RemoteAddresses )(
            __RPC__in INetFwRemoteAdminSettings * This,
                       __RPC__in BSTR remoteAddrs);
                            HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in INetFwRemoteAdminSettings * This,
                                __RPC__out VARIANT_BOOL *enabled);
                            HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in INetFwRemoteAdminSettings * This,
                       VARIANT_BOOL enabled);
        END_INTERFACE
    } INetFwRemoteAdminSettingsVtbl;
    interface INetFwRemoteAdminSettings
    {
        CONST_VTBL struct INetFwRemoteAdminSettingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_IpVersion(This,ipVersion) )
    ( (This)->lpVtbl -> put_IpVersion(This,ipVersion) )
    ( (This)->lpVtbl -> get_Scope(This,scope) )
    ( (This)->lpVtbl -> put_Scope(This,scope) )
    ( (This)->lpVtbl -> get_RemoteAddresses(This,remoteAddrs) )
    ( (This)->lpVtbl -> put_RemoteAddresses(This,remoteAddrs) )
    ( (This)->lpVtbl -> get_Enabled(This,enabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
EXTERN_C const IID IID_INetFwIcmpSettings;
    typedef struct INetFwIcmpSettingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetFwIcmpSettings * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetFwIcmpSettings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetFwIcmpSettings * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INetFwIcmpSettings * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INetFwIcmpSettings * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INetFwIcmpSettings * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetFwIcmpSettings * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_AllowOutboundDestinationUnreachable )(
            __RPC__in INetFwIcmpSettings * This,
                                __RPC__out VARIANT_BOOL *allow);
                            HRESULT ( STDMETHODCALLTYPE *put_AllowOutboundDestinationUnreachable )(
            __RPC__in INetFwIcmpSettings * This,
                       VARIANT_BOOL allow);
                            HRESULT ( STDMETHODCALLTYPE *get_AllowRedirect )(
            __RPC__in INetFwIcmpSettings * This,
                                __RPC__out VARIANT_BOOL *allow);
                            HRESULT ( STDMETHODCALLTYPE *put_AllowRedirect )(
            __RPC__in INetFwIcmpSettings * This,
                       VARIANT_BOOL allow);
                            HRESULT ( STDMETHODCALLTYPE *get_AllowInboundEchoRequest )(
            __RPC__in INetFwIcmpSettings * This,
                                __RPC__out VARIANT_BOOL *allow);
                            HRESULT ( STDMETHODCALLTYPE *put_AllowInboundEchoRequest )(
            __RPC__in INetFwIcmpSettings * This,
                       VARIANT_BOOL allow);
                            HRESULT ( STDMETHODCALLTYPE *get_AllowOutboundTimeExceeded )(
            __RPC__in INetFwIcmpSettings * This,
                                __RPC__out VARIANT_BOOL *allow);
                            HRESULT ( STDMETHODCALLTYPE *put_AllowOutboundTimeExceeded )(
            __RPC__in INetFwIcmpSettings * This,
                       VARIANT_BOOL allow);
                            HRESULT ( STDMETHODCALLTYPE *get_AllowOutboundParameterProblem )(
            __RPC__in INetFwIcmpSettings * This,
                                __RPC__out VARIANT_BOOL *allow);
                            HRESULT ( STDMETHODCALLTYPE *put_AllowOutboundParameterProblem )(
            __RPC__in INetFwIcmpSettings * This,
                       VARIANT_BOOL allow);
                            HRESULT ( STDMETHODCALLTYPE *get_AllowOutboundSourceQuench )(
            __RPC__in INetFwIcmpSettings * This,
                                __RPC__out VARIANT_BOOL *allow);
                            HRESULT ( STDMETHODCALLTYPE *put_AllowOutboundSourceQuench )(
            __RPC__in INetFwIcmpSettings * This,
                       VARIANT_BOOL allow);
                            HRESULT ( STDMETHODCALLTYPE *get_AllowInboundRouterRequest )(
            __RPC__in INetFwIcmpSettings * This,
                                __RPC__out VARIANT_BOOL *allow);
                            HRESULT ( STDMETHODCALLTYPE *put_AllowInboundRouterRequest )(
            __RPC__in INetFwIcmpSettings * This,
                       VARIANT_BOOL allow);
                            HRESULT ( STDMETHODCALLTYPE *get_AllowInboundTimestampRequest )(
            __RPC__in INetFwIcmpSettings * This,
                                __RPC__out VARIANT_BOOL *allow);
                            HRESULT ( STDMETHODCALLTYPE *put_AllowInboundTimestampRequest )(
            __RPC__in INetFwIcmpSettings * This,
                       VARIANT_BOOL allow);
                            HRESULT ( STDMETHODCALLTYPE *get_AllowInboundMaskRequest )(
            __RPC__in INetFwIcmpSettings * This,
                                __RPC__out VARIANT_BOOL *allow);
                            HRESULT ( STDMETHODCALLTYPE *put_AllowInboundMaskRequest )(
            __RPC__in INetFwIcmpSettings * This,
                       VARIANT_BOOL allow);
                            HRESULT ( STDMETHODCALLTYPE *get_AllowOutboundPacketTooBig )(
            __RPC__in INetFwIcmpSettings * This,
                                __RPC__out VARIANT_BOOL *allow);
                            HRESULT ( STDMETHODCALLTYPE *put_AllowOutboundPacketTooBig )(
            __RPC__in INetFwIcmpSettings * This,
                       VARIANT_BOOL allow);
        END_INTERFACE
    } INetFwIcmpSettingsVtbl;
    interface INetFwIcmpSettings
    {
        CONST_VTBL struct INetFwIcmpSettingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_AllowOutboundDestinationUnreachable(This,allow) )
    ( (This)->lpVtbl -> put_AllowOutboundDestinationUnreachable(This,allow) )
    ( (This)->lpVtbl -> get_AllowRedirect(This,allow) )
    ( (This)->lpVtbl -> put_AllowRedirect(This,allow) )
    ( (This)->lpVtbl -> get_AllowInboundEchoRequest(This,allow) )
    ( (This)->lpVtbl -> put_AllowInboundEchoRequest(This,allow) )
    ( (This)->lpVtbl -> get_AllowOutboundTimeExceeded(This,allow) )
    ( (This)->lpVtbl -> put_AllowOutboundTimeExceeded(This,allow) )
    ( (This)->lpVtbl -> get_AllowOutboundParameterProblem(This,allow) )
    ( (This)->lpVtbl -> put_AllowOutboundParameterProblem(This,allow) )
    ( (This)->lpVtbl -> get_AllowOutboundSourceQuench(This,allow) )
    ( (This)->lpVtbl -> put_AllowOutboundSourceQuench(This,allow) )
    ( (This)->lpVtbl -> get_AllowInboundRouterRequest(This,allow) )
    ( (This)->lpVtbl -> put_AllowInboundRouterRequest(This,allow) )
    ( (This)->lpVtbl -> get_AllowInboundTimestampRequest(This,allow) )
    ( (This)->lpVtbl -> put_AllowInboundTimestampRequest(This,allow) )
    ( (This)->lpVtbl -> get_AllowInboundMaskRequest(This,allow) )
    ( (This)->lpVtbl -> put_AllowInboundMaskRequest(This,allow) )
    ( (This)->lpVtbl -> get_AllowOutboundPacketTooBig(This,allow) )
    ( (This)->lpVtbl -> put_AllowOutboundPacketTooBig(This,allow) )
EXTERN_C const IID IID_INetFwOpenPort;
    typedef struct INetFwOpenPortVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetFwOpenPort * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetFwOpenPort * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetFwOpenPort * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INetFwOpenPort * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INetFwOpenPort * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INetFwOpenPort * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetFwOpenPort * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in INetFwOpenPort * This,
                                __RPC__deref_out_opt BSTR *name);
                            HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in INetFwOpenPort * This,
                       __RPC__in BSTR name);
                            HRESULT ( STDMETHODCALLTYPE *get_IpVersion )(
            __RPC__in INetFwOpenPort * This,
                                __RPC__out NET_FW_IP_VERSION *ipVersion);
                            HRESULT ( STDMETHODCALLTYPE *put_IpVersion )(
            __RPC__in INetFwOpenPort * This,
                       NET_FW_IP_VERSION ipVersion);
                            HRESULT ( STDMETHODCALLTYPE *get_Protocol )(
            __RPC__in INetFwOpenPort * This,
                                __RPC__out NET_FW_IP_PROTOCOL *ipProtocol);
                            HRESULT ( STDMETHODCALLTYPE *put_Protocol )(
            __RPC__in INetFwOpenPort * This,
                       NET_FW_IP_PROTOCOL ipProtocol);
                            HRESULT ( STDMETHODCALLTYPE *get_Port )(
            __RPC__in INetFwOpenPort * This,
                                __RPC__out LONG *portNumber);
                            HRESULT ( STDMETHODCALLTYPE *put_Port )(
            __RPC__in INetFwOpenPort * This,
                       LONG portNumber);
                            HRESULT ( STDMETHODCALLTYPE *get_Scope )(
            __RPC__in INetFwOpenPort * This,
                                __RPC__out NET_FW_SCOPE *scope);
                            HRESULT ( STDMETHODCALLTYPE *put_Scope )(
            __RPC__in INetFwOpenPort * This,
                       NET_FW_SCOPE scope);
                            HRESULT ( STDMETHODCALLTYPE *get_RemoteAddresses )(
            __RPC__in INetFwOpenPort * This,
                                __RPC__deref_out_opt BSTR *remoteAddrs);
                            HRESULT ( STDMETHODCALLTYPE *put_RemoteAddresses )(
            __RPC__in INetFwOpenPort * This,
                       __RPC__in BSTR remoteAddrs);
                            HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in INetFwOpenPort * This,
                                __RPC__out VARIANT_BOOL *enabled);
                            HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in INetFwOpenPort * This,
                       VARIANT_BOOL enabled);
                            HRESULT ( STDMETHODCALLTYPE *get_BuiltIn )(
            __RPC__in INetFwOpenPort * This,
                                __RPC__out VARIANT_BOOL *builtIn);
        END_INTERFACE
    } INetFwOpenPortVtbl;
    interface INetFwOpenPort
    {
        CONST_VTBL struct INetFwOpenPortVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_IpVersion(This,ipVersion) )
    ( (This)->lpVtbl -> put_IpVersion(This,ipVersion) )
    ( (This)->lpVtbl -> get_Protocol(This,ipProtocol) )
    ( (This)->lpVtbl -> put_Protocol(This,ipProtocol) )
    ( (This)->lpVtbl -> get_Port(This,portNumber) )
    ( (This)->lpVtbl -> put_Port(This,portNumber) )
    ( (This)->lpVtbl -> get_Scope(This,scope) )
    ( (This)->lpVtbl -> put_Scope(This,scope) )
    ( (This)->lpVtbl -> get_RemoteAddresses(This,remoteAddrs) )
    ( (This)->lpVtbl -> put_RemoteAddresses(This,remoteAddrs) )
    ( (This)->lpVtbl -> get_Enabled(This,enabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> get_BuiltIn(This,builtIn) )
EXTERN_C const IID IID_INetFwOpenPorts;
    typedef struct INetFwOpenPortsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetFwOpenPorts * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetFwOpenPorts * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetFwOpenPorts * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INetFwOpenPorts * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INetFwOpenPorts * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INetFwOpenPorts * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetFwOpenPorts * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in INetFwOpenPorts * This,
                                __RPC__out long *count);
                   HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in INetFwOpenPorts * This,
                       __RPC__in_opt INetFwOpenPort *port);
                   HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in INetFwOpenPorts * This,
                       LONG portNumber,
                       NET_FW_IP_PROTOCOL ipProtocol);
                   HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in INetFwOpenPorts * This,
                       LONG portNumber,
                       NET_FW_IP_PROTOCOL ipProtocol,
                                __RPC__deref_out_opt INetFwOpenPort **openPort);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in INetFwOpenPorts * This,
                                __RPC__deref_out_opt IUnknown **newEnum);
        END_INTERFACE
    } INetFwOpenPortsVtbl;
    interface INetFwOpenPorts
    {
        CONST_VTBL struct INetFwOpenPortsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,count) )
    ( (This)->lpVtbl -> Add(This,port) )
    ( (This)->lpVtbl -> Remove(This,portNumber,ipProtocol) )
    ( (This)->lpVtbl -> Item(This,portNumber,ipProtocol,openPort) )
    ( (This)->lpVtbl -> get__NewEnum(This,newEnum) )
EXTERN_C const IID IID_INetFwService;
    typedef struct INetFwServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetFwService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetFwService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetFwService * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INetFwService * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INetFwService * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INetFwService * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetFwService * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in INetFwService * This,
                                __RPC__deref_out_opt BSTR *name);
                            HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in INetFwService * This,
                                __RPC__out NET_FW_SERVICE_TYPE *type);
                            HRESULT ( STDMETHODCALLTYPE *get_Customized )(
            __RPC__in INetFwService * This,
                                __RPC__out VARIANT_BOOL *customized);
                            HRESULT ( STDMETHODCALLTYPE *get_IpVersion )(
            __RPC__in INetFwService * This,
                                __RPC__out NET_FW_IP_VERSION *ipVersion);
                            HRESULT ( STDMETHODCALLTYPE *put_IpVersion )(
            __RPC__in INetFwService * This,
                       NET_FW_IP_VERSION ipVersion);
                            HRESULT ( STDMETHODCALLTYPE *get_Scope )(
            __RPC__in INetFwService * This,
                                __RPC__out NET_FW_SCOPE *scope);
                            HRESULT ( STDMETHODCALLTYPE *put_Scope )(
            __RPC__in INetFwService * This,
                       NET_FW_SCOPE scope);
                            HRESULT ( STDMETHODCALLTYPE *get_RemoteAddresses )(
            __RPC__in INetFwService * This,
                                __RPC__deref_out_opt BSTR *remoteAddrs);
                            HRESULT ( STDMETHODCALLTYPE *put_RemoteAddresses )(
            __RPC__in INetFwService * This,
                       __RPC__in BSTR remoteAddrs);
                            HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in INetFwService * This,
                                __RPC__out VARIANT_BOOL *enabled);
                            HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in INetFwService * This,
                       VARIANT_BOOL enabled);
                            HRESULT ( STDMETHODCALLTYPE *get_GloballyOpenPorts )(
            __RPC__in INetFwService * This,
                                __RPC__deref_out_opt INetFwOpenPorts **openPorts);
        END_INTERFACE
    } INetFwServiceVtbl;
    interface INetFwService
    {
        CONST_VTBL struct INetFwServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> get_Type(This,type) )
    ( (This)->lpVtbl -> get_Customized(This,customized) )
    ( (This)->lpVtbl -> get_IpVersion(This,ipVersion) )
    ( (This)->lpVtbl -> put_IpVersion(This,ipVersion) )
    ( (This)->lpVtbl -> get_Scope(This,scope) )
    ( (This)->lpVtbl -> put_Scope(This,scope) )
    ( (This)->lpVtbl -> get_RemoteAddresses(This,remoteAddrs) )
    ( (This)->lpVtbl -> put_RemoteAddresses(This,remoteAddrs) )
    ( (This)->lpVtbl -> get_Enabled(This,enabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> get_GloballyOpenPorts(This,openPorts) )
EXTERN_C const IID IID_INetFwServices;
    typedef struct INetFwServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetFwServices * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetFwServices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetFwServices * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INetFwServices * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INetFwServices * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INetFwServices * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetFwServices * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in INetFwServices * This,
                                __RPC__out long *count);
                   HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in INetFwServices * This,
                       NET_FW_SERVICE_TYPE svcType,
                                __RPC__deref_out_opt INetFwService **service);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in INetFwServices * This,
                                __RPC__deref_out_opt IUnknown **newEnum);
        END_INTERFACE
    } INetFwServicesVtbl;
    interface INetFwServices
    {
        CONST_VTBL struct INetFwServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,count) )
    ( (This)->lpVtbl -> Item(This,svcType,service) )
    ( (This)->lpVtbl -> get__NewEnum(This,newEnum) )
EXTERN_C const IID IID_INetFwAuthorizedApplication;
    typedef struct INetFwAuthorizedApplicationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetFwAuthorizedApplication * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetFwAuthorizedApplication * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetFwAuthorizedApplication * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INetFwAuthorizedApplication * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INetFwAuthorizedApplication * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INetFwAuthorizedApplication * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetFwAuthorizedApplication * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in INetFwAuthorizedApplication * This,
                                __RPC__deref_out_opt BSTR *name);
                            HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in INetFwAuthorizedApplication * This,
                       __RPC__in BSTR name);
                            HRESULT ( STDMETHODCALLTYPE *get_ProcessImageFileName )(
            __RPC__in INetFwAuthorizedApplication * This,
                                __RPC__deref_out_opt BSTR *imageFileName);
                            HRESULT ( STDMETHODCALLTYPE *put_ProcessImageFileName )(
            __RPC__in INetFwAuthorizedApplication * This,
                       __RPC__in BSTR imageFileName);
                            HRESULT ( STDMETHODCALLTYPE *get_IpVersion )(
            __RPC__in INetFwAuthorizedApplication * This,
                                __RPC__out NET_FW_IP_VERSION *ipVersion);
                            HRESULT ( STDMETHODCALLTYPE *put_IpVersion )(
            __RPC__in INetFwAuthorizedApplication * This,
                       NET_FW_IP_VERSION ipVersion);
                            HRESULT ( STDMETHODCALLTYPE *get_Scope )(
            __RPC__in INetFwAuthorizedApplication * This,
                                __RPC__out NET_FW_SCOPE *scope);
                            HRESULT ( STDMETHODCALLTYPE *put_Scope )(
            __RPC__in INetFwAuthorizedApplication * This,
                       NET_FW_SCOPE scope);
                            HRESULT ( STDMETHODCALLTYPE *get_RemoteAddresses )(
            __RPC__in INetFwAuthorizedApplication * This,
                                __RPC__deref_out_opt BSTR *remoteAddrs);
                            HRESULT ( STDMETHODCALLTYPE *put_RemoteAddresses )(
            __RPC__in INetFwAuthorizedApplication * This,
                       __RPC__in BSTR remoteAddrs);
                            HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in INetFwAuthorizedApplication * This,
                                __RPC__out VARIANT_BOOL *enabled);
                            HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in INetFwAuthorizedApplication * This,
                       VARIANT_BOOL enabled);
        END_INTERFACE
    } INetFwAuthorizedApplicationVtbl;
    interface INetFwAuthorizedApplication
    {
        CONST_VTBL struct INetFwAuthorizedApplicationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_ProcessImageFileName(This,imageFileName) )
    ( (This)->lpVtbl -> put_ProcessImageFileName(This,imageFileName) )
    ( (This)->lpVtbl -> get_IpVersion(This,ipVersion) )
    ( (This)->lpVtbl -> put_IpVersion(This,ipVersion) )
    ( (This)->lpVtbl -> get_Scope(This,scope) )
    ( (This)->lpVtbl -> put_Scope(This,scope) )
    ( (This)->lpVtbl -> get_RemoteAddresses(This,remoteAddrs) )
    ( (This)->lpVtbl -> put_RemoteAddresses(This,remoteAddrs) )
    ( (This)->lpVtbl -> get_Enabled(This,enabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
EXTERN_C const IID IID_INetFwAuthorizedApplications;
    typedef struct INetFwAuthorizedApplicationsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetFwAuthorizedApplications * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetFwAuthorizedApplications * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetFwAuthorizedApplications * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INetFwAuthorizedApplications * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INetFwAuthorizedApplications * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INetFwAuthorizedApplications * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetFwAuthorizedApplications * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in INetFwAuthorizedApplications * This,
                                __RPC__out long *count);
                   HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in INetFwAuthorizedApplications * This,
                       __RPC__in_opt INetFwAuthorizedApplication *app);
                   HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in INetFwAuthorizedApplications * This,
                       __RPC__in BSTR imageFileName);
                   HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in INetFwAuthorizedApplications * This,
                       __RPC__in BSTR imageFileName,
                                __RPC__deref_out_opt INetFwAuthorizedApplication **app);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in INetFwAuthorizedApplications * This,
                                __RPC__deref_out_opt IUnknown **newEnum);
        END_INTERFACE
    } INetFwAuthorizedApplicationsVtbl;
    interface INetFwAuthorizedApplications
    {
        CONST_VTBL struct INetFwAuthorizedApplicationsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,count) )
    ( (This)->lpVtbl -> Add(This,app) )
    ( (This)->lpVtbl -> Remove(This,imageFileName) )
    ( (This)->lpVtbl -> Item(This,imageFileName,app) )
    ( (This)->lpVtbl -> get__NewEnum(This,newEnum) )
EXTERN_C const IID IID_INetFwRule;
    typedef struct INetFwRuleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetFwRule * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetFwRule * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetFwRule * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            INetFwRule * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            INetFwRule * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            INetFwRule * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetFwRule * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            INetFwRule * This,
                                BSTR *name);
                            HRESULT ( STDMETHODCALLTYPE *put_Name )(
            INetFwRule * This,
                       BSTR name);
                            HRESULT ( STDMETHODCALLTYPE *get_Description )(
            INetFwRule * This,
                                BSTR *desc);
                            HRESULT ( STDMETHODCALLTYPE *put_Description )(
            INetFwRule * This,
                       BSTR desc);
                            HRESULT ( STDMETHODCALLTYPE *get_ApplicationName )(
            INetFwRule * This,
                                BSTR *imageFileName);
                            HRESULT ( STDMETHODCALLTYPE *put_ApplicationName )(
            INetFwRule * This,
                       BSTR imageFileName);
                            HRESULT ( STDMETHODCALLTYPE *get_ServiceName )(
            INetFwRule * This,
                                BSTR *serviceName);
                            HRESULT ( STDMETHODCALLTYPE *put_ServiceName )(
            INetFwRule * This,
                       BSTR serviceName);
                            HRESULT ( STDMETHODCALLTYPE *get_Protocol )(
            INetFwRule * This,
                                LONG *protocol);
                            HRESULT ( STDMETHODCALLTYPE *put_Protocol )(
            INetFwRule * This,
                       LONG protocol);
                            HRESULT ( STDMETHODCALLTYPE *get_LocalPorts )(
            INetFwRule * This,
                                BSTR *portNumbers);
                            HRESULT ( STDMETHODCALLTYPE *put_LocalPorts )(
            INetFwRule * This,
                       BSTR portNumbers);
                            HRESULT ( STDMETHODCALLTYPE *get_RemotePorts )(
            INetFwRule * This,
                                BSTR *portNumbers);
                            HRESULT ( STDMETHODCALLTYPE *put_RemotePorts )(
            INetFwRule * This,
                       BSTR portNumbers);
                            HRESULT ( STDMETHODCALLTYPE *get_LocalAddresses )(
            INetFwRule * This,
                                BSTR *localAddrs);
                            HRESULT ( STDMETHODCALLTYPE *put_LocalAddresses )(
            INetFwRule * This,
                       BSTR localAddrs);
                            HRESULT ( STDMETHODCALLTYPE *get_RemoteAddresses )(
            INetFwRule * This,
                                BSTR *remoteAddrs);
                            HRESULT ( STDMETHODCALLTYPE *put_RemoteAddresses )(
            INetFwRule * This,
                       BSTR remoteAddrs);
                            HRESULT ( STDMETHODCALLTYPE *get_IcmpTypesAndCodes )(
            INetFwRule * This,
                                BSTR *icmpTypesAndCodes);
                            HRESULT ( STDMETHODCALLTYPE *put_IcmpTypesAndCodes )(
            INetFwRule * This,
                       BSTR icmpTypesAndCodes);
                            HRESULT ( STDMETHODCALLTYPE *get_Direction )(
            INetFwRule * This,
                                NET_FW_RULE_DIRECTION *dir);
                            HRESULT ( STDMETHODCALLTYPE *put_Direction )(
            INetFwRule * This,
                       NET_FW_RULE_DIRECTION dir);
                            HRESULT ( STDMETHODCALLTYPE *get_Interfaces )(
            INetFwRule * This,
                                VARIANT *interfaces);
                            HRESULT ( STDMETHODCALLTYPE *put_Interfaces )(
            INetFwRule * This,
                       VARIANT interfaces);
                            HRESULT ( STDMETHODCALLTYPE *get_InterfaceTypes )(
            INetFwRule * This,
                                BSTR *interfaceTypes);
                            HRESULT ( STDMETHODCALLTYPE *put_InterfaceTypes )(
            INetFwRule * This,
                       BSTR interfaceTypes);
                            HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            INetFwRule * This,
                                VARIANT_BOOL *enabled);
                            HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            INetFwRule * This,
                       VARIANT_BOOL enabled);
                            HRESULT ( STDMETHODCALLTYPE *get_Grouping )(
            INetFwRule * This,
                                BSTR *context);
                            HRESULT ( STDMETHODCALLTYPE *put_Grouping )(
            INetFwRule * This,
                       BSTR context);
                            HRESULT ( STDMETHODCALLTYPE *get_Profiles )(
            INetFwRule * This,
                                long *profileTypesBitmask);
                            HRESULT ( STDMETHODCALLTYPE *put_Profiles )(
            INetFwRule * This,
                       long profileTypesBitmask);
                            HRESULT ( STDMETHODCALLTYPE *get_EdgeTraversal )(
            INetFwRule * This,
                                VARIANT_BOOL *enabled);
                            HRESULT ( STDMETHODCALLTYPE *put_EdgeTraversal )(
            INetFwRule * This,
                       VARIANT_BOOL enabled);
                            HRESULT ( STDMETHODCALLTYPE *get_Action )(
            INetFwRule * This,
                                NET_FW_ACTION *action);
                            HRESULT ( STDMETHODCALLTYPE *put_Action )(
            INetFwRule * This,
                       NET_FW_ACTION action);
        END_INTERFACE
    } INetFwRuleVtbl;
    interface INetFwRule
    {
        CONST_VTBL struct INetFwRuleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_Description(This,desc) )
    ( (This)->lpVtbl -> put_Description(This,desc) )
    ( (This)->lpVtbl -> get_ApplicationName(This,imageFileName) )
    ( (This)->lpVtbl -> put_ApplicationName(This,imageFileName) )
    ( (This)->lpVtbl -> get_ServiceName(This,serviceName) )
    ( (This)->lpVtbl -> put_ServiceName(This,serviceName) )
    ( (This)->lpVtbl -> get_Protocol(This,protocol) )
    ( (This)->lpVtbl -> put_Protocol(This,protocol) )
    ( (This)->lpVtbl -> get_LocalPorts(This,portNumbers) )
    ( (This)->lpVtbl -> put_LocalPorts(This,portNumbers) )
    ( (This)->lpVtbl -> get_RemotePorts(This,portNumbers) )
    ( (This)->lpVtbl -> put_RemotePorts(This,portNumbers) )
    ( (This)->lpVtbl -> get_LocalAddresses(This,localAddrs) )
    ( (This)->lpVtbl -> put_LocalAddresses(This,localAddrs) )
    ( (This)->lpVtbl -> get_RemoteAddresses(This,remoteAddrs) )
    ( (This)->lpVtbl -> put_RemoteAddresses(This,remoteAddrs) )
    ( (This)->lpVtbl -> get_IcmpTypesAndCodes(This,icmpTypesAndCodes) )
    ( (This)->lpVtbl -> put_IcmpTypesAndCodes(This,icmpTypesAndCodes) )
    ( (This)->lpVtbl -> get_Direction(This,dir) )
    ( (This)->lpVtbl -> put_Direction(This,dir) )
    ( (This)->lpVtbl -> get_Interfaces(This,interfaces) )
    ( (This)->lpVtbl -> put_Interfaces(This,interfaces) )
    ( (This)->lpVtbl -> get_InterfaceTypes(This,interfaceTypes) )
    ( (This)->lpVtbl -> put_InterfaceTypes(This,interfaceTypes) )
    ( (This)->lpVtbl -> get_Enabled(This,enabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> get_Grouping(This,context) )
    ( (This)->lpVtbl -> put_Grouping(This,context) )
    ( (This)->lpVtbl -> get_Profiles(This,profileTypesBitmask) )
    ( (This)->lpVtbl -> put_Profiles(This,profileTypesBitmask) )
    ( (This)->lpVtbl -> get_EdgeTraversal(This,enabled) )
    ( (This)->lpVtbl -> put_EdgeTraversal(This,enabled) )
    ( (This)->lpVtbl -> get_Action(This,action) )
    ( (This)->lpVtbl -> put_Action(This,action) )
EXTERN_C const IID IID_INetFwRule2;
    typedef struct INetFwRule2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetFwRule2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetFwRule2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetFwRule2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            INetFwRule2 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            INetFwRule2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            INetFwRule2 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetFwRule2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            INetFwRule2 * This,
                                BSTR *name);
                            HRESULT ( STDMETHODCALLTYPE *put_Name )(
            INetFwRule2 * This,
                       BSTR name);
                            HRESULT ( STDMETHODCALLTYPE *get_Description )(
            INetFwRule2 * This,
                                BSTR *desc);
                            HRESULT ( STDMETHODCALLTYPE *put_Description )(
            INetFwRule2 * This,
                       BSTR desc);
                            HRESULT ( STDMETHODCALLTYPE *get_ApplicationName )(
            INetFwRule2 * This,
                                BSTR *imageFileName);
                            HRESULT ( STDMETHODCALLTYPE *put_ApplicationName )(
            INetFwRule2 * This,
                       BSTR imageFileName);
                            HRESULT ( STDMETHODCALLTYPE *get_ServiceName )(
            INetFwRule2 * This,
                                BSTR *serviceName);
                            HRESULT ( STDMETHODCALLTYPE *put_ServiceName )(
            INetFwRule2 * This,
                       BSTR serviceName);
                            HRESULT ( STDMETHODCALLTYPE *get_Protocol )(
            INetFwRule2 * This,
                                LONG *protocol);
                            HRESULT ( STDMETHODCALLTYPE *put_Protocol )(
            INetFwRule2 * This,
                       LONG protocol);
                            HRESULT ( STDMETHODCALLTYPE *get_LocalPorts )(
            INetFwRule2 * This,
                                BSTR *portNumbers);
                            HRESULT ( STDMETHODCALLTYPE *put_LocalPorts )(
            INetFwRule2 * This,
                       BSTR portNumbers);
                            HRESULT ( STDMETHODCALLTYPE *get_RemotePorts )(
            INetFwRule2 * This,
                                BSTR *portNumbers);
                            HRESULT ( STDMETHODCALLTYPE *put_RemotePorts )(
            INetFwRule2 * This,
                       BSTR portNumbers);
                            HRESULT ( STDMETHODCALLTYPE *get_LocalAddresses )(
            INetFwRule2 * This,
                                BSTR *localAddrs);
                            HRESULT ( STDMETHODCALLTYPE *put_LocalAddresses )(
            INetFwRule2 * This,
                       BSTR localAddrs);
                            HRESULT ( STDMETHODCALLTYPE *get_RemoteAddresses )(
            INetFwRule2 * This,
                                BSTR *remoteAddrs);
                            HRESULT ( STDMETHODCALLTYPE *put_RemoteAddresses )(
            INetFwRule2 * This,
                       BSTR remoteAddrs);
                            HRESULT ( STDMETHODCALLTYPE *get_IcmpTypesAndCodes )(
            INetFwRule2 * This,
                                BSTR *icmpTypesAndCodes);
                            HRESULT ( STDMETHODCALLTYPE *put_IcmpTypesAndCodes )(
            INetFwRule2 * This,
                       BSTR icmpTypesAndCodes);
                            HRESULT ( STDMETHODCALLTYPE *get_Direction )(
            INetFwRule2 * This,
                                NET_FW_RULE_DIRECTION *dir);
                            HRESULT ( STDMETHODCALLTYPE *put_Direction )(
            INetFwRule2 * This,
                       NET_FW_RULE_DIRECTION dir);
                            HRESULT ( STDMETHODCALLTYPE *get_Interfaces )(
            INetFwRule2 * This,
                                VARIANT *interfaces);
                            HRESULT ( STDMETHODCALLTYPE *put_Interfaces )(
            INetFwRule2 * This,
                       VARIANT interfaces);
                            HRESULT ( STDMETHODCALLTYPE *get_InterfaceTypes )(
            INetFwRule2 * This,
                                BSTR *interfaceTypes);
                            HRESULT ( STDMETHODCALLTYPE *put_InterfaceTypes )(
            INetFwRule2 * This,
                       BSTR interfaceTypes);
                            HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            INetFwRule2 * This,
                                VARIANT_BOOL *enabled);
                            HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            INetFwRule2 * This,
                       VARIANT_BOOL enabled);
                            HRESULT ( STDMETHODCALLTYPE *get_Grouping )(
            INetFwRule2 * This,
                                BSTR *context);
                            HRESULT ( STDMETHODCALLTYPE *put_Grouping )(
            INetFwRule2 * This,
                       BSTR context);
                            HRESULT ( STDMETHODCALLTYPE *get_Profiles )(
            INetFwRule2 * This,
                                long *profileTypesBitmask);
                            HRESULT ( STDMETHODCALLTYPE *put_Profiles )(
            INetFwRule2 * This,
                       long profileTypesBitmask);
                            HRESULT ( STDMETHODCALLTYPE *get_EdgeTraversal )(
            INetFwRule2 * This,
                                VARIANT_BOOL *enabled);
                            HRESULT ( STDMETHODCALLTYPE *put_EdgeTraversal )(
            INetFwRule2 * This,
                       VARIANT_BOOL enabled);
                            HRESULT ( STDMETHODCALLTYPE *get_Action )(
            INetFwRule2 * This,
                                NET_FW_ACTION *action);
                            HRESULT ( STDMETHODCALLTYPE *put_Action )(
            INetFwRule2 * This,
                       NET_FW_ACTION action);
                            HRESULT ( STDMETHODCALLTYPE *get_EdgeTraversalOptions )(
            INetFwRule2 * This,
                                long *lOptions);
                            HRESULT ( STDMETHODCALLTYPE *put_EdgeTraversalOptions )(
            INetFwRule2 * This,
                       long lOptions);
        END_INTERFACE
    } INetFwRule2Vtbl;
    interface INetFwRule2
    {
        CONST_VTBL struct INetFwRule2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_Description(This,desc) )
    ( (This)->lpVtbl -> put_Description(This,desc) )
    ( (This)->lpVtbl -> get_ApplicationName(This,imageFileName) )
    ( (This)->lpVtbl -> put_ApplicationName(This,imageFileName) )
    ( (This)->lpVtbl -> get_ServiceName(This,serviceName) )
    ( (This)->lpVtbl -> put_ServiceName(This,serviceName) )
    ( (This)->lpVtbl -> get_Protocol(This,protocol) )
    ( (This)->lpVtbl -> put_Protocol(This,protocol) )
    ( (This)->lpVtbl -> get_LocalPorts(This,portNumbers) )
    ( (This)->lpVtbl -> put_LocalPorts(This,portNumbers) )
    ( (This)->lpVtbl -> get_RemotePorts(This,portNumbers) )
    ( (This)->lpVtbl -> put_RemotePorts(This,portNumbers) )
    ( (This)->lpVtbl -> get_LocalAddresses(This,localAddrs) )
    ( (This)->lpVtbl -> put_LocalAddresses(This,localAddrs) )
    ( (This)->lpVtbl -> get_RemoteAddresses(This,remoteAddrs) )
    ( (This)->lpVtbl -> put_RemoteAddresses(This,remoteAddrs) )
    ( (This)->lpVtbl -> get_IcmpTypesAndCodes(This,icmpTypesAndCodes) )
    ( (This)->lpVtbl -> put_IcmpTypesAndCodes(This,icmpTypesAndCodes) )
    ( (This)->lpVtbl -> get_Direction(This,dir) )
    ( (This)->lpVtbl -> put_Direction(This,dir) )
    ( (This)->lpVtbl -> get_Interfaces(This,interfaces) )
    ( (This)->lpVtbl -> put_Interfaces(This,interfaces) )
    ( (This)->lpVtbl -> get_InterfaceTypes(This,interfaceTypes) )
    ( (This)->lpVtbl -> put_InterfaceTypes(This,interfaceTypes) )
    ( (This)->lpVtbl -> get_Enabled(This,enabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> get_Grouping(This,context) )
    ( (This)->lpVtbl -> put_Grouping(This,context) )
    ( (This)->lpVtbl -> get_Profiles(This,profileTypesBitmask) )
    ( (This)->lpVtbl -> put_Profiles(This,profileTypesBitmask) )
    ( (This)->lpVtbl -> get_EdgeTraversal(This,enabled) )
    ( (This)->lpVtbl -> put_EdgeTraversal(This,enabled) )
    ( (This)->lpVtbl -> get_Action(This,action) )
    ( (This)->lpVtbl -> put_Action(This,action) )
    ( (This)->lpVtbl -> get_EdgeTraversalOptions(This,lOptions) )
    ( (This)->lpVtbl -> put_EdgeTraversalOptions(This,lOptions) )
EXTERN_C const IID IID_INetFwRule3;
    typedef struct INetFwRule3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetFwRule3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetFwRule3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetFwRule3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            INetFwRule3 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            INetFwRule3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            INetFwRule3 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetFwRule3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            INetFwRule3 * This,
                                BSTR *name);
                            HRESULT ( STDMETHODCALLTYPE *put_Name )(
            INetFwRule3 * This,
                       BSTR name);
                            HRESULT ( STDMETHODCALLTYPE *get_Description )(
            INetFwRule3 * This,
                                BSTR *desc);
                            HRESULT ( STDMETHODCALLTYPE *put_Description )(
            INetFwRule3 * This,
                       BSTR desc);
                            HRESULT ( STDMETHODCALLTYPE *get_ApplicationName )(
            INetFwRule3 * This,
                                BSTR *imageFileName);
                            HRESULT ( STDMETHODCALLTYPE *put_ApplicationName )(
            INetFwRule3 * This,
                       BSTR imageFileName);
                            HRESULT ( STDMETHODCALLTYPE *get_ServiceName )(
            INetFwRule3 * This,
                                BSTR *serviceName);
                            HRESULT ( STDMETHODCALLTYPE *put_ServiceName )(
            INetFwRule3 * This,
                       BSTR serviceName);
                            HRESULT ( STDMETHODCALLTYPE *get_Protocol )(
            INetFwRule3 * This,
                                LONG *protocol);
                            HRESULT ( STDMETHODCALLTYPE *put_Protocol )(
            INetFwRule3 * This,
                       LONG protocol);
                            HRESULT ( STDMETHODCALLTYPE *get_LocalPorts )(
            INetFwRule3 * This,
                                BSTR *portNumbers);
                            HRESULT ( STDMETHODCALLTYPE *put_LocalPorts )(
            INetFwRule3 * This,
                       BSTR portNumbers);
                            HRESULT ( STDMETHODCALLTYPE *get_RemotePorts )(
            INetFwRule3 * This,
                                BSTR *portNumbers);
                            HRESULT ( STDMETHODCALLTYPE *put_RemotePorts )(
            INetFwRule3 * This,
                       BSTR portNumbers);
                            HRESULT ( STDMETHODCALLTYPE *get_LocalAddresses )(
            INetFwRule3 * This,
                                BSTR *localAddrs);
                            HRESULT ( STDMETHODCALLTYPE *put_LocalAddresses )(
            INetFwRule3 * This,
                       BSTR localAddrs);
                            HRESULT ( STDMETHODCALLTYPE *get_RemoteAddresses )(
            INetFwRule3 * This,
                                BSTR *remoteAddrs);
                            HRESULT ( STDMETHODCALLTYPE *put_RemoteAddresses )(
            INetFwRule3 * This,
                       BSTR remoteAddrs);
                            HRESULT ( STDMETHODCALLTYPE *get_IcmpTypesAndCodes )(
            INetFwRule3 * This,
                                BSTR *icmpTypesAndCodes);
                            HRESULT ( STDMETHODCALLTYPE *put_IcmpTypesAndCodes )(
            INetFwRule3 * This,
                       BSTR icmpTypesAndCodes);
                            HRESULT ( STDMETHODCALLTYPE *get_Direction )(
            INetFwRule3 * This,
                                NET_FW_RULE_DIRECTION *dir);
                            HRESULT ( STDMETHODCALLTYPE *put_Direction )(
            INetFwRule3 * This,
                       NET_FW_RULE_DIRECTION dir);
                            HRESULT ( STDMETHODCALLTYPE *get_Interfaces )(
            INetFwRule3 * This,
                                VARIANT *interfaces);
                            HRESULT ( STDMETHODCALLTYPE *put_Interfaces )(
            INetFwRule3 * This,
                       VARIANT interfaces);
                            HRESULT ( STDMETHODCALLTYPE *get_InterfaceTypes )(
            INetFwRule3 * This,
                                BSTR *interfaceTypes);
                            HRESULT ( STDMETHODCALLTYPE *put_InterfaceTypes )(
            INetFwRule3 * This,
                       BSTR interfaceTypes);
                            HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            INetFwRule3 * This,
                                VARIANT_BOOL *enabled);
                            HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            INetFwRule3 * This,
                       VARIANT_BOOL enabled);
                            HRESULT ( STDMETHODCALLTYPE *get_Grouping )(
            INetFwRule3 * This,
                                BSTR *context);
                            HRESULT ( STDMETHODCALLTYPE *put_Grouping )(
            INetFwRule3 * This,
                       BSTR context);
                            HRESULT ( STDMETHODCALLTYPE *get_Profiles )(
            INetFwRule3 * This,
                                long *profileTypesBitmask);
                            HRESULT ( STDMETHODCALLTYPE *put_Profiles )(
            INetFwRule3 * This,
                       long profileTypesBitmask);
                            HRESULT ( STDMETHODCALLTYPE *get_EdgeTraversal )(
            INetFwRule3 * This,
                                VARIANT_BOOL *enabled);
                            HRESULT ( STDMETHODCALLTYPE *put_EdgeTraversal )(
            INetFwRule3 * This,
                       VARIANT_BOOL enabled);
                            HRESULT ( STDMETHODCALLTYPE *get_Action )(
            INetFwRule3 * This,
                                NET_FW_ACTION *action);
                            HRESULT ( STDMETHODCALLTYPE *put_Action )(
            INetFwRule3 * This,
                       NET_FW_ACTION action);
                            HRESULT ( STDMETHODCALLTYPE *get_EdgeTraversalOptions )(
            INetFwRule3 * This,
                                long *lOptions);
                            HRESULT ( STDMETHODCALLTYPE *put_EdgeTraversalOptions )(
            INetFwRule3 * This,
                       long lOptions);
                            HRESULT ( STDMETHODCALLTYPE *get_LocalAppPackageId )(
            INetFwRule3 * This,
                                BSTR *wszPackageId);
                            HRESULT ( STDMETHODCALLTYPE *put_LocalAppPackageId )(
            INetFwRule3 * This,
                       BSTR wszPackageId);
                            HRESULT ( STDMETHODCALLTYPE *get_LocalUserOwner )(
            INetFwRule3 * This,
                                BSTR *wszUserOwner);
                            HRESULT ( STDMETHODCALLTYPE *put_LocalUserOwner )(
            INetFwRule3 * This,
                       BSTR wszUserOwner);
                            HRESULT ( STDMETHODCALLTYPE *get_LocalUserAuthorizedList )(
            INetFwRule3 * This,
                                BSTR *wszUserAuthList);
                            HRESULT ( STDMETHODCALLTYPE *put_LocalUserAuthorizedList )(
            INetFwRule3 * This,
                       BSTR wszUserAuthList);
                            HRESULT ( STDMETHODCALLTYPE *get_RemoteUserAuthorizedList )(
            INetFwRule3 * This,
                                BSTR *wszUserAuthList);
                            HRESULT ( STDMETHODCALLTYPE *put_RemoteUserAuthorizedList )(
            INetFwRule3 * This,
                       BSTR wszUserAuthList);
                            HRESULT ( STDMETHODCALLTYPE *get_RemoteMachineAuthorizedList )(
            INetFwRule3 * This,
                                BSTR *wszUserAuthList);
                            HRESULT ( STDMETHODCALLTYPE *put_RemoteMachineAuthorizedList )(
            INetFwRule3 * This,
                       BSTR wszUserAuthList);
                            HRESULT ( STDMETHODCALLTYPE *get_SecureFlags )(
            INetFwRule3 * This,
                                long *lOptions);
                            HRESULT ( STDMETHODCALLTYPE *put_SecureFlags )(
            INetFwRule3 * This,
                       long lOptions);
        END_INTERFACE
    } INetFwRule3Vtbl;
    interface INetFwRule3
    {
        CONST_VTBL struct INetFwRule3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_Description(This,desc) )
    ( (This)->lpVtbl -> put_Description(This,desc) )
    ( (This)->lpVtbl -> get_ApplicationName(This,imageFileName) )
    ( (This)->lpVtbl -> put_ApplicationName(This,imageFileName) )
    ( (This)->lpVtbl -> get_ServiceName(This,serviceName) )
    ( (This)->lpVtbl -> put_ServiceName(This,serviceName) )
    ( (This)->lpVtbl -> get_Protocol(This,protocol) )
    ( (This)->lpVtbl -> put_Protocol(This,protocol) )
    ( (This)->lpVtbl -> get_LocalPorts(This,portNumbers) )
    ( (This)->lpVtbl -> put_LocalPorts(This,portNumbers) )
    ( (This)->lpVtbl -> get_RemotePorts(This,portNumbers) )
    ( (This)->lpVtbl -> put_RemotePorts(This,portNumbers) )
    ( (This)->lpVtbl -> get_LocalAddresses(This,localAddrs) )
    ( (This)->lpVtbl -> put_LocalAddresses(This,localAddrs) )
    ( (This)->lpVtbl -> get_RemoteAddresses(This,remoteAddrs) )
    ( (This)->lpVtbl -> put_RemoteAddresses(This,remoteAddrs) )
    ( (This)->lpVtbl -> get_IcmpTypesAndCodes(This,icmpTypesAndCodes) )
    ( (This)->lpVtbl -> put_IcmpTypesAndCodes(This,icmpTypesAndCodes) )
    ( (This)->lpVtbl -> get_Direction(This,dir) )
    ( (This)->lpVtbl -> put_Direction(This,dir) )
    ( (This)->lpVtbl -> get_Interfaces(This,interfaces) )
    ( (This)->lpVtbl -> put_Interfaces(This,interfaces) )
    ( (This)->lpVtbl -> get_InterfaceTypes(This,interfaceTypes) )
    ( (This)->lpVtbl -> put_InterfaceTypes(This,interfaceTypes) )
    ( (This)->lpVtbl -> get_Enabled(This,enabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> get_Grouping(This,context) )
    ( (This)->lpVtbl -> put_Grouping(This,context) )
    ( (This)->lpVtbl -> get_Profiles(This,profileTypesBitmask) )
    ( (This)->lpVtbl -> put_Profiles(This,profileTypesBitmask) )
    ( (This)->lpVtbl -> get_EdgeTraversal(This,enabled) )
    ( (This)->lpVtbl -> put_EdgeTraversal(This,enabled) )
    ( (This)->lpVtbl -> get_Action(This,action) )
    ( (This)->lpVtbl -> put_Action(This,action) )
    ( (This)->lpVtbl -> get_EdgeTraversalOptions(This,lOptions) )
    ( (This)->lpVtbl -> put_EdgeTraversalOptions(This,lOptions) )
    ( (This)->lpVtbl -> get_LocalAppPackageId(This,wszPackageId) )
    ( (This)->lpVtbl -> put_LocalAppPackageId(This,wszPackageId) )
    ( (This)->lpVtbl -> get_LocalUserOwner(This,wszUserOwner) )
    ( (This)->lpVtbl -> put_LocalUserOwner(This,wszUserOwner) )
    ( (This)->lpVtbl -> get_LocalUserAuthorizedList(This,wszUserAuthList) )
    ( (This)->lpVtbl -> put_LocalUserAuthorizedList(This,wszUserAuthList) )
    ( (This)->lpVtbl -> get_RemoteUserAuthorizedList(This,wszUserAuthList) )
    ( (This)->lpVtbl -> put_RemoteUserAuthorizedList(This,wszUserAuthList) )
    ( (This)->lpVtbl -> get_RemoteMachineAuthorizedList(This,wszUserAuthList) )
    ( (This)->lpVtbl -> put_RemoteMachineAuthorizedList(This,wszUserAuthList) )
    ( (This)->lpVtbl -> get_SecureFlags(This,lOptions) )
    ( (This)->lpVtbl -> put_SecureFlags(This,lOptions) )
EXTERN_C const IID IID_INetFwRules;
    typedef struct INetFwRulesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetFwRules * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetFwRules * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetFwRules * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            INetFwRules * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            INetFwRules * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            INetFwRules * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetFwRules * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            INetFwRules * This,
                                long *count);
                   HRESULT ( STDMETHODCALLTYPE *Add )(
            INetFwRules * This,
                       INetFwRule *rule);
                   HRESULT ( STDMETHODCALLTYPE *Remove )(
            INetFwRules * This,
                       BSTR name);
                   HRESULT ( STDMETHODCALLTYPE *Item )(
            INetFwRules * This,
                       BSTR name,
                                INetFwRule **rule);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            INetFwRules * This,
                                IUnknown **newEnum);
        END_INTERFACE
    } INetFwRulesVtbl;
    interface INetFwRules
    {
        CONST_VTBL struct INetFwRulesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,count) )
    ( (This)->lpVtbl -> Add(This,rule) )
    ( (This)->lpVtbl -> Remove(This,name) )
    ( (This)->lpVtbl -> Item(This,name,rule) )
    ( (This)->lpVtbl -> get__NewEnum(This,newEnum) )
EXTERN_C const IID IID_INetFwServiceRestriction;
    typedef struct INetFwServiceRestrictionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetFwServiceRestriction * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetFwServiceRestriction * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetFwServiceRestriction * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            INetFwServiceRestriction * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            INetFwServiceRestriction * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            INetFwServiceRestriction * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetFwServiceRestriction * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *RestrictService )(
            INetFwServiceRestriction * This,
                       BSTR serviceName,
                       BSTR appName,
                       VARIANT_BOOL restrictService,
                       VARIANT_BOOL serviceSidRestricted);
                   HRESULT ( STDMETHODCALLTYPE *ServiceRestricted )(
            INetFwServiceRestriction * This,
                       BSTR serviceName,
                       BSTR appName,
                                VARIANT_BOOL *serviceRestricted);
                            HRESULT ( STDMETHODCALLTYPE *get_Rules )(
            INetFwServiceRestriction * This,
                                INetFwRules **rules);
        END_INTERFACE
    } INetFwServiceRestrictionVtbl;
    interface INetFwServiceRestriction
    {
        CONST_VTBL struct INetFwServiceRestrictionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> RestrictService(This,serviceName,appName,restrictService,serviceSidRestricted) )
    ( (This)->lpVtbl -> ServiceRestricted(This,serviceName,appName,serviceRestricted) )
    ( (This)->lpVtbl -> get_Rules(This,rules) )
EXTERN_C const IID IID_INetFwProfile;
    typedef struct INetFwProfileVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetFwProfile * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetFwProfile * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetFwProfile * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INetFwProfile * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INetFwProfile * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INetFwProfile * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetFwProfile * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in INetFwProfile * This,
                                __RPC__out NET_FW_PROFILE_TYPE *type);
                            HRESULT ( STDMETHODCALLTYPE *get_FirewallEnabled )(
            __RPC__in INetFwProfile * This,
                                __RPC__out VARIANT_BOOL *enabled);
                            HRESULT ( STDMETHODCALLTYPE *put_FirewallEnabled )(
            __RPC__in INetFwProfile * This,
                       VARIANT_BOOL enabled);
                            HRESULT ( STDMETHODCALLTYPE *get_ExceptionsNotAllowed )(
            __RPC__in INetFwProfile * This,
                                __RPC__out VARIANT_BOOL *notAllowed);
                            HRESULT ( STDMETHODCALLTYPE *put_ExceptionsNotAllowed )(
            __RPC__in INetFwProfile * This,
                       VARIANT_BOOL notAllowed);
                            HRESULT ( STDMETHODCALLTYPE *get_NotificationsDisabled )(
            __RPC__in INetFwProfile * This,
                                __RPC__out VARIANT_BOOL *disabled);
                            HRESULT ( STDMETHODCALLTYPE *put_NotificationsDisabled )(
            __RPC__in INetFwProfile * This,
                       VARIANT_BOOL disabled);
                            HRESULT ( STDMETHODCALLTYPE *get_UnicastResponsesToMulticastBroadcastDisabled )(
            __RPC__in INetFwProfile * This,
                                __RPC__out VARIANT_BOOL *disabled);
                            HRESULT ( STDMETHODCALLTYPE *put_UnicastResponsesToMulticastBroadcastDisabled )(
            __RPC__in INetFwProfile * This,
                       VARIANT_BOOL disabled);
                            HRESULT ( STDMETHODCALLTYPE *get_RemoteAdminSettings )(
            __RPC__in INetFwProfile * This,
                                __RPC__deref_out_opt INetFwRemoteAdminSettings **remoteAdminSettings);
                            HRESULT ( STDMETHODCALLTYPE *get_IcmpSettings )(
            __RPC__in INetFwProfile * This,
                                __RPC__deref_out_opt INetFwIcmpSettings **icmpSettings);
                            HRESULT ( STDMETHODCALLTYPE *get_GloballyOpenPorts )(
            __RPC__in INetFwProfile * This,
                                __RPC__deref_out_opt INetFwOpenPorts **openPorts);
                            HRESULT ( STDMETHODCALLTYPE *get_Services )(
            __RPC__in INetFwProfile * This,
                                __RPC__deref_out_opt INetFwServices **services);
                            HRESULT ( STDMETHODCALLTYPE *get_AuthorizedApplications )(
            __RPC__in INetFwProfile * This,
                                __RPC__deref_out_opt INetFwAuthorizedApplications **apps);
        END_INTERFACE
    } INetFwProfileVtbl;
    interface INetFwProfile
    {
        CONST_VTBL struct INetFwProfileVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,type) )
    ( (This)->lpVtbl -> get_FirewallEnabled(This,enabled) )
    ( (This)->lpVtbl -> put_FirewallEnabled(This,enabled) )
    ( (This)->lpVtbl -> get_ExceptionsNotAllowed(This,notAllowed) )
    ( (This)->lpVtbl -> put_ExceptionsNotAllowed(This,notAllowed) )
    ( (This)->lpVtbl -> get_NotificationsDisabled(This,disabled) )
    ( (This)->lpVtbl -> put_NotificationsDisabled(This,disabled) )
    ( (This)->lpVtbl -> get_UnicastResponsesToMulticastBroadcastDisabled(This,disabled) )
    ( (This)->lpVtbl -> put_UnicastResponsesToMulticastBroadcastDisabled(This,disabled) )
    ( (This)->lpVtbl -> get_RemoteAdminSettings(This,remoteAdminSettings) )
    ( (This)->lpVtbl -> get_IcmpSettings(This,icmpSettings) )
    ( (This)->lpVtbl -> get_GloballyOpenPorts(This,openPorts) )
    ( (This)->lpVtbl -> get_Services(This,services) )
    ( (This)->lpVtbl -> get_AuthorizedApplications(This,apps) )
EXTERN_C const IID IID_INetFwPolicy;
    typedef struct INetFwPolicyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetFwPolicy * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetFwPolicy * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetFwPolicy * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INetFwPolicy * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INetFwPolicy * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INetFwPolicy * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetFwPolicy * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_CurrentProfile )(
            __RPC__in INetFwPolicy * This,
                                __RPC__deref_out_opt INetFwProfile **profile);
                   HRESULT ( STDMETHODCALLTYPE *GetProfileByType )(
            __RPC__in INetFwPolicy * This,
                       NET_FW_PROFILE_TYPE profileType,
                                __RPC__deref_out_opt INetFwProfile **profile);
        END_INTERFACE
    } INetFwPolicyVtbl;
    interface INetFwPolicy
    {
        CONST_VTBL struct INetFwPolicyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CurrentProfile(This,profile) )
    ( (This)->lpVtbl -> GetProfileByType(This,profileType,profile) )
EXTERN_C const IID IID_INetFwPolicy2;
    typedef struct INetFwPolicy2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetFwPolicy2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetFwPolicy2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetFwPolicy2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            INetFwPolicy2 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            INetFwPolicy2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            INetFwPolicy2 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetFwPolicy2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_CurrentProfileTypes )(
            INetFwPolicy2 * This,
                                long *profileTypesBitmask);
                            HRESULT ( STDMETHODCALLTYPE *get_FirewallEnabled )(
            INetFwPolicy2 * This,
                       NET_FW_PROFILE_TYPE2 profileType,
                                VARIANT_BOOL *enabled);
                            HRESULT ( STDMETHODCALLTYPE *put_FirewallEnabled )(
            INetFwPolicy2 * This,
                       NET_FW_PROFILE_TYPE2 profileType,
                       VARIANT_BOOL enabled);
                            HRESULT ( STDMETHODCALLTYPE *get_ExcludedInterfaces )(
            INetFwPolicy2 * This,
                       NET_FW_PROFILE_TYPE2 profileType,
                                VARIANT *interfaces);
                            HRESULT ( STDMETHODCALLTYPE *put_ExcludedInterfaces )(
            INetFwPolicy2 * This,
                       NET_FW_PROFILE_TYPE2 profileType,
                       VARIANT interfaces);
                            HRESULT ( STDMETHODCALLTYPE *get_BlockAllInboundTraffic )(
            INetFwPolicy2 * This,
                       NET_FW_PROFILE_TYPE2 profileType,
                                VARIANT_BOOL *Block);
                            HRESULT ( STDMETHODCALLTYPE *put_BlockAllInboundTraffic )(
            INetFwPolicy2 * This,
                       NET_FW_PROFILE_TYPE2 profileType,
                       VARIANT_BOOL Block);
                            HRESULT ( STDMETHODCALLTYPE *get_NotificationsDisabled )(
            INetFwPolicy2 * This,
                       NET_FW_PROFILE_TYPE2 profileType,
                                VARIANT_BOOL *disabled);
                            HRESULT ( STDMETHODCALLTYPE *put_NotificationsDisabled )(
            INetFwPolicy2 * This,
                       NET_FW_PROFILE_TYPE2 profileType,
                       VARIANT_BOOL disabled);
                            HRESULT ( STDMETHODCALLTYPE *get_UnicastResponsesToMulticastBroadcastDisabled )(
            INetFwPolicy2 * This,
                       NET_FW_PROFILE_TYPE2 profileType,
                                VARIANT_BOOL *disabled);
                            HRESULT ( STDMETHODCALLTYPE *put_UnicastResponsesToMulticastBroadcastDisabled )(
            INetFwPolicy2 * This,
                       NET_FW_PROFILE_TYPE2 profileType,
                       VARIANT_BOOL disabled);
                            HRESULT ( STDMETHODCALLTYPE *get_Rules )(
            INetFwPolicy2 * This,
                                INetFwRules **rules);
                            HRESULT ( STDMETHODCALLTYPE *get_ServiceRestriction )(
            INetFwPolicy2 * This,
                                INetFwServiceRestriction **ServiceRestriction);
                   HRESULT ( STDMETHODCALLTYPE *EnableRuleGroup )(
            INetFwPolicy2 * This,
                       long profileTypesBitmask,
                       BSTR group,
                       VARIANT_BOOL enable);
                   HRESULT ( STDMETHODCALLTYPE *IsRuleGroupEnabled )(
            INetFwPolicy2 * This,
                       long profileTypesBitmask,
                       BSTR group,
                                VARIANT_BOOL *enabled);
                   HRESULT ( STDMETHODCALLTYPE *RestoreLocalFirewallDefaults )(
            INetFwPolicy2 * This);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultInboundAction )(
            INetFwPolicy2 * This,
                       NET_FW_PROFILE_TYPE2 profileType,
                                NET_FW_ACTION *action);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultInboundAction )(
            INetFwPolicy2 * This,
                       NET_FW_PROFILE_TYPE2 profileType,
                       NET_FW_ACTION action);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultOutboundAction )(
            INetFwPolicy2 * This,
                       NET_FW_PROFILE_TYPE2 profileType,
                                NET_FW_ACTION *action);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultOutboundAction )(
            INetFwPolicy2 * This,
                       NET_FW_PROFILE_TYPE2 profileType,
                       NET_FW_ACTION action);
                            HRESULT ( STDMETHODCALLTYPE *get_IsRuleGroupCurrentlyEnabled )(
            INetFwPolicy2 * This,
                       BSTR group,
                                VARIANT_BOOL *enabled);
                            HRESULT ( STDMETHODCALLTYPE *get_LocalPolicyModifyState )(
            INetFwPolicy2 * This,
                                NET_FW_MODIFY_STATE *modifyState);
        END_INTERFACE
    } INetFwPolicy2Vtbl;
    interface INetFwPolicy2
    {
        CONST_VTBL struct INetFwPolicy2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CurrentProfileTypes(This,profileTypesBitmask) )
    ( (This)->lpVtbl -> get_FirewallEnabled(This,profileType,enabled) )
    ( (This)->lpVtbl -> put_FirewallEnabled(This,profileType,enabled) )
    ( (This)->lpVtbl -> get_ExcludedInterfaces(This,profileType,interfaces) )
    ( (This)->lpVtbl -> put_ExcludedInterfaces(This,profileType,interfaces) )
    ( (This)->lpVtbl -> get_BlockAllInboundTraffic(This,profileType,Block) )
    ( (This)->lpVtbl -> put_BlockAllInboundTraffic(This,profileType,Block) )
    ( (This)->lpVtbl -> get_NotificationsDisabled(This,profileType,disabled) )
    ( (This)->lpVtbl -> put_NotificationsDisabled(This,profileType,disabled) )
    ( (This)->lpVtbl -> get_UnicastResponsesToMulticastBroadcastDisabled(This,profileType,disabled) )
    ( (This)->lpVtbl -> put_UnicastResponsesToMulticastBroadcastDisabled(This,profileType,disabled) )
    ( (This)->lpVtbl -> get_Rules(This,rules) )
    ( (This)->lpVtbl -> get_ServiceRestriction(This,ServiceRestriction) )
    ( (This)->lpVtbl -> EnableRuleGroup(This,profileTypesBitmask,group,enable) )
    ( (This)->lpVtbl -> IsRuleGroupEnabled(This,profileTypesBitmask,group,enabled) )
    ( (This)->lpVtbl -> RestoreLocalFirewallDefaults(This) )
    ( (This)->lpVtbl -> get_DefaultInboundAction(This,profileType,action) )
    ( (This)->lpVtbl -> put_DefaultInboundAction(This,profileType,action) )
    ( (This)->lpVtbl -> get_DefaultOutboundAction(This,profileType,action) )
    ( (This)->lpVtbl -> put_DefaultOutboundAction(This,profileType,action) )
    ( (This)->lpVtbl -> get_IsRuleGroupCurrentlyEnabled(This,group,enabled) )
    ( (This)->lpVtbl -> get_LocalPolicyModifyState(This,modifyState) )
EXTERN_C const IID IID_INetFwMgr;
    typedef struct INetFwMgrVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetFwMgr * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetFwMgr * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetFwMgr * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INetFwMgr * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INetFwMgr * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INetFwMgr * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetFwMgr * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_LocalPolicy )(
            __RPC__in INetFwMgr * This,
                                __RPC__deref_out_opt INetFwPolicy **localPolicy);
                            HRESULT ( STDMETHODCALLTYPE *get_CurrentProfileType )(
            __RPC__in INetFwMgr * This,
                                __RPC__out NET_FW_PROFILE_TYPE *profileType);
                   HRESULT ( STDMETHODCALLTYPE *RestoreDefaults )(
            __RPC__in INetFwMgr * This);
                   HRESULT ( STDMETHODCALLTYPE *IsPortAllowed )(
            __RPC__in INetFwMgr * This,
                       __RPC__in BSTR imageFileName,
                       NET_FW_IP_VERSION ipVersion,
                       LONG portNumber,
                       __RPC__in BSTR localAddress,
                       NET_FW_IP_PROTOCOL ipProtocol,
                        __RPC__out VARIANT *allowed,
                        __RPC__out VARIANT *restricted);
                   HRESULT ( STDMETHODCALLTYPE *IsIcmpTypeAllowed )(
            __RPC__in INetFwMgr * This,
                       NET_FW_IP_VERSION ipVersion,
                       __RPC__in BSTR localAddress,
                       BYTE type,
                        __RPC__out VARIANT *allowed,
                        __RPC__out VARIANT *restricted);
        END_INTERFACE
    } INetFwMgrVtbl;
    interface INetFwMgr
    {
        CONST_VTBL struct INetFwMgrVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_LocalPolicy(This,localPolicy) )
    ( (This)->lpVtbl -> get_CurrentProfileType(This,profileType) )
    ( (This)->lpVtbl -> RestoreDefaults(This) )
    ( (This)->lpVtbl -> IsPortAllowed(This,imageFileName,ipVersion,portNumber,localAddress,ipProtocol,allowed,restricted) )
    ( (This)->lpVtbl -> IsIcmpTypeAllowed(This,ipVersion,localAddress,type,allowed,restricted) )
EXTERN_C const IID IID_INetFwProduct;
    typedef struct INetFwProductVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetFwProduct * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetFwProduct * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetFwProduct * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            INetFwProduct * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            INetFwProduct * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            INetFwProduct * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetFwProduct * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_RuleCategories )(
            INetFwProduct * This,
                                VARIANT *ruleCategories);
                            HRESULT ( STDMETHODCALLTYPE *put_RuleCategories )(
            INetFwProduct * This,
                       VARIANT ruleCategories);
                            HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            INetFwProduct * This,
                                BSTR *displayName);
                            HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
            INetFwProduct * This,
                       BSTR displayName);
                            HRESULT ( STDMETHODCALLTYPE *get_PathToSignedProductExe )(
            INetFwProduct * This,
                                BSTR *path);
        END_INTERFACE
    } INetFwProductVtbl;
    interface INetFwProduct
    {
        CONST_VTBL struct INetFwProductVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_RuleCategories(This,ruleCategories) )
    ( (This)->lpVtbl -> put_RuleCategories(This,ruleCategories) )
    ( (This)->lpVtbl -> get_DisplayName(This,displayName) )
    ( (This)->lpVtbl -> put_DisplayName(This,displayName) )
    ( (This)->lpVtbl -> get_PathToSignedProductExe(This,path) )
EXTERN_C const IID IID_INetFwProducts;
    typedef struct INetFwProductsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetFwProducts * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetFwProducts * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetFwProducts * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            INetFwProducts * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            INetFwProducts * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            INetFwProducts * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetFwProducts * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            INetFwProducts * This,
                                long *count);
                   HRESULT ( STDMETHODCALLTYPE *Register )(
            INetFwProducts * This,
                       INetFwProduct *product,
                                IUnknown **registration);
                   HRESULT ( STDMETHODCALLTYPE *Item )(
            INetFwProducts * This,
                       long index,
                                INetFwProduct **product);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            INetFwProducts * This,
                                IUnknown **newEnum);
        END_INTERFACE
    } INetFwProductsVtbl;
    interface INetFwProducts
    {
        CONST_VTBL struct INetFwProductsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,count) )
    ( (This)->lpVtbl -> Register(This,product,registration) )
    ( (This)->lpVtbl -> Item(This,index,product) )
    ( (This)->lpVtbl -> get__NewEnum(This,newEnum) )
EXTERN_C const IID LIBID_NetFwPublicTypeLib;
EXTERN_C const CLSID CLSID_NetFwRule;
class DECLSPEC_UUID("2C5BC43E-3369-4C33-AB0C-BE9469677AF4")
NetFwRule;
EXTERN_C const CLSID CLSID_NetFwOpenPort;
class DECLSPEC_UUID("0CA545C6-37AD-4A6C-BF92-9F7610067EF5")
NetFwOpenPort;
EXTERN_C const CLSID CLSID_NetFwAuthorizedApplication;
class DECLSPEC_UUID("EC9846B3-2762-4A6B-A214-6ACB603462D2")
NetFwAuthorizedApplication;
EXTERN_C const CLSID CLSID_NetFwPolicy2;
class DECLSPEC_UUID("E2B3C97F-6AE1-41AC-817A-F6F92166D7DD")
NetFwPolicy2;
EXTERN_C const CLSID CLSID_NetFwProduct;
class DECLSPEC_UUID("9D745ED8-C514-4D1D-BF42-751FED2D5AC7")
NetFwProduct;
EXTERN_C const CLSID CLSID_NetFwProducts;
class DECLSPEC_UUID("CC19079B-8272-4D73-BB70-CDB533527B61")
NetFwProducts;
EXTERN_C const CLSID CLSID_NetFwMgr;
class DECLSPEC_UUID("304CE942-6E39-40D8-943A-B913C40C9CD4")
NetFwMgr;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_netfw_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netfw_0000_0020_v0_0_s_ifspec;
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
