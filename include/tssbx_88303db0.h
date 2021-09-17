#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWTSSBPlugin IWTSSBPlugin;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_tssbx_0000_0000_ClientIfHandle;
extern RPC_IF_HANDLE __MIDL_itf_tssbx_0000_0000_ServerIfHandle;
typedef
enum __MIDL_IWTSSBPlugin_0001
    {
        WTSSBX_MACHINE_DRAIN_UNSPEC = 0,
        WTSSBX_MACHINE_DRAIN_OFF = 0x1,
        WTSSBX_MACHINE_DRAIN_ON = 0x2
    } WTSSBX_MACHINE_DRAIN;
typedef
enum __MIDL_IWTSSBPlugin_0002
    {
        WTSSBX_MACHINE_SESSION_MODE_UNSPEC = 0,
        WTSSBX_MACHINE_SESSION_MODE_SINGLE = 0x1,
        WTSSBX_MACHINE_SESSION_MODE_MULTIPLE = 0x2
    } WTSSBX_MACHINE_SESSION_MODE;
typedef
enum __MIDL_IWTSSBPlugin_0003
    {
        WTSSBX_ADDRESS_FAMILY_AF_UNSPEC = 0,
        WTSSBX_ADDRESS_FAMILY_AF_INET = 0x1,
        WTSSBX_ADDRESS_FAMILY_AF_INET6 = 0x2,
        WTSSBX_ADDRESS_FAMILY_AF_IPX = 0x3,
        WTSSBX_ADDRESS_FAMILY_AF_NETBIOS = 0x4
    } WTSSBX_ADDRESS_FAMILY;
typedef struct __MIDL_IWTSSBPlugin_0004
    {
    WTSSBX_ADDRESS_FAMILY AddressFamily;
    BYTE Address[ 16 ];
    unsigned short PortNumber;
    DWORD dwScope;
    } WTSSBX_IP_ADDRESS;
typedef
enum __MIDL_IWTSSBPlugin_0005
    {
        WTSSBX_MACHINE_STATE_UNSPEC = 0,
        WTSSBX_MACHINE_STATE_READY = 0x1,
        WTSSBX_MACHINE_STATE_SYNCHRONIZING = 0x2
    } WTSSBX_MACHINE_STATE;
typedef struct __MIDL_IWTSSBPlugin_0006
    {
    WCHAR wczMachineFQDN[ 257 ];
    WCHAR wczMachineNetBiosName[ 17 ];
    DWORD dwNumOfIPAddr;
    WTSSBX_IP_ADDRESS IPaddr[ 12 ];
    } WTSSBX_MACHINE_CONNECT_INFO;
typedef struct __MIDL_IWTSSBPlugin_0007
    {
    WTSSBX_MACHINE_CONNECT_INFO ClientConnectInfo;
    WCHAR wczFarmName[ 257 ];
    WTSSBX_IP_ADDRESS InternalIPAddress;
    DWORD dwMaxSessionsLimit;
    DWORD ServerWeight;
    WTSSBX_MACHINE_SESSION_MODE SingleSessionMode;
    WTSSBX_MACHINE_DRAIN InDrain;
    WTSSBX_MACHINE_STATE MachineState;
    } WTSSBX_MACHINE_INFO;
typedef
enum __MIDL_IWTSSBPlugin_0008
    {
        WTSSBX_SESSION_STATE_UNSPEC = 0,
        WTSSBX_SESSION_STATE_ACTIVE = 0x1,
        WTSSBX_SESSION_STATE_DISCONNECTED = 0x2
    } WTSSBX_SESSION_STATE;
typedef struct __MIDL_IWTSSBPlugin_0009
    {
    WCHAR wszUserName[ 105 ];
    WCHAR wszDomainName[ 257 ];
    WCHAR ApplicationType[ 257 ];
    DWORD dwSessionId;
    FILETIME CreateTime;
    FILETIME DisconnectTime;
    WTSSBX_SESSION_STATE SessionState;
    } WTSSBX_SESSION_INFO;
typedef
enum __MIDL_IWTSSBPlugin_0010
    {
        WTSSBX_NOTIFICATION_REMOVED = 0x1,
        WTSSBX_NOTIFICATION_CHANGED = 0x2,
        WTSSBX_NOTIFICATION_ADDED = 0x4,
        WTSSBX_NOTIFICATION_RESYNC = 0x8
    } WTSSBX_NOTIFICATION_TYPE;
EXTERN_C const IID IID_IWTSSBPlugin;
    typedef struct IWTSSBPluginVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWTSSBPlugin * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWTSSBPlugin * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWTSSBPlugin * This);
                           HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IWTSSBPlugin * This,
                        __RPC__out DWORD *PluginCapabilities);
                           HRESULT ( STDMETHODCALLTYPE *WTSSBX_MachineChangeNotification )(
            __RPC__in IWTSSBPlugin * This,
                       WTSSBX_NOTIFICATION_TYPE NotificationType,
                       long MachineId,
                       __RPC__in WTSSBX_MACHINE_INFO *pMachineInfo);
                           HRESULT ( STDMETHODCALLTYPE *WTSSBX_SessionChangeNotification )(
            __RPC__in IWTSSBPlugin * This,
                       WTSSBX_NOTIFICATION_TYPE NotificationType,
                       long MachineId,
                       DWORD NumOfSessions,
                                __RPC__in_ecount_full(NumOfSessions) WTSSBX_SESSION_INFO SessionInfo[ ]);
                           HRESULT ( STDMETHODCALLTYPE *WTSSBX_GetMostSuitableServer )(
            __RPC__in IWTSSBPlugin * This,
                               __RPC__in_string WCHAR *UserName,
                               __RPC__in_string WCHAR *DomainName,
                               __RPC__in_string WCHAR *ApplicationType,
                               __RPC__in_string WCHAR *FarmName,
                            __RPC__inout long *pMachineId);
                           HRESULT ( STDMETHODCALLTYPE *Terminated )(
            __RPC__in IWTSSBPlugin * This);
                           HRESULT ( STDMETHODCALLTYPE *WTSSBX_GetUserExternalSession )(
            __RPC__in IWTSSBPlugin * This,
                               __RPC__in_string WCHAR *UserName,
                               __RPC__in_string WCHAR *DomainName,
                               __RPC__in_string WCHAR *ApplicationType,
                       __RPC__in WTSSBX_IP_ADDRESS *RedirectorInternalIP,
                        __RPC__out DWORD *pSessionId,
                        __RPC__out WTSSBX_MACHINE_CONNECT_INFO *pMachineConnectInfo);
        END_INTERFACE
    } IWTSSBPluginVtbl;
    interface IWTSSBPlugin
    {
        CONST_VTBL struct IWTSSBPluginVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,PluginCapabilities) )
    ( (This)->lpVtbl -> WTSSBX_MachineChangeNotification(This,NotificationType,MachineId,pMachineInfo) )
    ( (This)->lpVtbl -> WTSSBX_SessionChangeNotification(This,NotificationType,MachineId,NumOfSessions,SessionInfo) )
    ( (This)->lpVtbl -> WTSSBX_GetMostSuitableServer(This,UserName,DomainName,ApplicationType,FarmName,pMachineId) )
    ( (This)->lpVtbl -> Terminated(This) )
    ( (This)->lpVtbl -> WTSSBX_GetUserExternalSession(This,UserName,DomainName,ApplicationType,RedirectorInternalIP,pSessionId,pMachineConnectInfo) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_tssbx_0000_0001_ClientIfHandle;
extern RPC_IF_HANDLE __MIDL_itf_tssbx_0000_0001_ServerIfHandle;
}
