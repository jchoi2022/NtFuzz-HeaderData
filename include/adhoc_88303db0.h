#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDot11AdHocManager IDot11AdHocManager;
typedef interface IDot11AdHocManagerNotificationSink IDot11AdHocManagerNotificationSink;
typedef interface IEnumDot11AdHocNetworks IEnumDot11AdHocNetworks;
typedef interface IDot11AdHocNetwork IDot11AdHocNetwork;
typedef interface IDot11AdHocNetworkNotificationSink IDot11AdHocNetworkNotificationSink;
typedef interface IDot11AdHocInterface IDot11AdHocInterface;
typedef interface IEnumDot11AdHocInterfaces IEnumDot11AdHocInterfaces;
typedef interface IEnumDot11AdHocSecuritySettings IEnumDot11AdHocSecuritySettings;
typedef interface IDot11AdHocSecuritySettings IDot11AdHocSecuritySettings;
typedef interface IDot11AdHocInterfaceNotificationSink IDot11AdHocInterfaceNotificationSink;
typedef class Dot11AdHocManager Dot11AdHocManager;
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_C const CLSID CLSID_AdHocManager;
typedef
enum tagDOT11_ADHOC_CIPHER_ALGORITHM
    {
        DOT11_ADHOC_CIPHER_ALGO_INVALID = -1,
        DOT11_ADHOC_CIPHER_ALGO_NONE = 0,
        DOT11_ADHOC_CIPHER_ALGO_CCMP = 0x4,
        DOT11_ADHOC_CIPHER_ALGO_WEP = 0x101
    } DOT11_ADHOC_CIPHER_ALGORITHM;
typedef
enum tagDOT11_ADHOC_AUTH_ALGORITHM
    {
        DOT11_ADHOC_AUTH_ALGO_INVALID = -1,
        DOT11_ADHOC_AUTH_ALGO_80211_OPEN = 1,
        DOT11_ADHOC_AUTH_ALGO_RSNA_PSK = 7
    } DOT11_ADHOC_AUTH_ALGORITHM;
typedef
enum tagDOT11_ADHOC_NETWORK_CONNECTION_STATUS
    {
        DOT11_ADHOC_NETWORK_CONNECTION_STATUS_INVALID = 0,
        DOT11_ADHOC_NETWORK_CONNECTION_STATUS_DISCONNECTED = 11,
        DOT11_ADHOC_NETWORK_CONNECTION_STATUS_CONNECTING = 12,
        DOT11_ADHOC_NETWORK_CONNECTION_STATUS_CONNECTED = 13,
        DOT11_ADHOC_NETWORK_CONNECTION_STATUS_FORMED = 14
    } DOT11_ADHOC_NETWORK_CONNECTION_STATUS;
typedef
enum tagDOT11_ADHOC_CONNECT_FAIL_REASON
    {
        DOT11_ADHOC_CONNECT_FAIL_DOMAIN_MISMATCH = 0,
        DOT11_ADHOC_CONNECT_FAIL_PASSPHRASE_MISMATCH = 1,
        DOT11_ADHOC_CONNECT_FAIL_OTHER = 2
    } DOT11_ADHOC_CONNECT_FAIL_REASON;
extern RPC_IF_HANDLE __MIDL_itf_adhoc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_adhoc_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDot11AdHocManager;
    typedef struct IDot11AdHocManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDot11AdHocManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDot11AdHocManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDot11AdHocManager * This);
        HRESULT ( STDMETHODCALLTYPE *CreateNetwork )(
            IDot11AdHocManager * This,
                               LPCWSTR Name,
                               LPCWSTR Password,
                       LONG GeographicalId,
                       IDot11AdHocInterface *pInterface,
                       IDot11AdHocSecuritySettings *pSecurity,
                       GUID *pContextGuid,
                        IDot11AdHocNetwork **pIAdHoc);
        HRESULT ( STDMETHODCALLTYPE *CommitCreatedNetwork )(
            IDot11AdHocManager * This,
                       IDot11AdHocNetwork *pIAdHoc,
                       BOOLEAN fSaveProfile,
                       BOOLEAN fMakeSavedProfileUserSpecific);
        HRESULT ( STDMETHODCALLTYPE *GetIEnumDot11AdHocNetworks )(
            IDot11AdHocManager * This,
                       GUID *pContextGuid,
                        IEnumDot11AdHocNetworks **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetIEnumDot11AdHocInterfaces )(
            IDot11AdHocManager * This,
                        IEnumDot11AdHocInterfaces **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetNetwork )(
            IDot11AdHocManager * This,
                       GUID *NetworkSignature,
                        IDot11AdHocNetwork **pNetwork);
        END_INTERFACE
    } IDot11AdHocManagerVtbl;
    interface IDot11AdHocManager
    {
        CONST_VTBL struct IDot11AdHocManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateNetwork(This,Name,Password,GeographicalId,pInterface,pSecurity,pContextGuid,pIAdHoc) )
    ( (This)->lpVtbl -> CommitCreatedNetwork(This,pIAdHoc,fSaveProfile,fMakeSavedProfileUserSpecific) )
    ( (This)->lpVtbl -> GetIEnumDot11AdHocNetworks(This,pContextGuid,ppEnum) )
    ( (This)->lpVtbl -> GetIEnumDot11AdHocInterfaces(This,ppEnum) )
    ( (This)->lpVtbl -> GetNetwork(This,NetworkSignature,pNetwork) )
EXTERN_C const IID IID_IDot11AdHocManagerNotificationSink;
    typedef struct IDot11AdHocManagerNotificationSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDot11AdHocManagerNotificationSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDot11AdHocManagerNotificationSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDot11AdHocManagerNotificationSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnNetworkAdd )(
            IDot11AdHocManagerNotificationSink * This,
                       IDot11AdHocNetwork *pIAdHocNetwork);
        HRESULT ( STDMETHODCALLTYPE *OnNetworkRemove )(
            IDot11AdHocManagerNotificationSink * This,
                       GUID *Signature);
        HRESULT ( STDMETHODCALLTYPE *OnInterfaceAdd )(
            IDot11AdHocManagerNotificationSink * This,
                       IDot11AdHocInterface *pIAdHocInterface);
        HRESULT ( STDMETHODCALLTYPE *OnInterfaceRemove )(
            IDot11AdHocManagerNotificationSink * This,
                       GUID *Signature);
        END_INTERFACE
    } IDot11AdHocManagerNotificationSinkVtbl;
    interface IDot11AdHocManagerNotificationSink
    {
        CONST_VTBL struct IDot11AdHocManagerNotificationSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnNetworkAdd(This,pIAdHocNetwork) )
    ( (This)->lpVtbl -> OnNetworkRemove(This,Signature) )
    ( (This)->lpVtbl -> OnInterfaceAdd(This,pIAdHocInterface) )
    ( (This)->lpVtbl -> OnInterfaceRemove(This,Signature) )
EXTERN_C const IID IID_IEnumDot11AdHocNetworks;
    typedef struct IEnumDot11AdHocNetworksVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumDot11AdHocNetworks * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumDot11AdHocNetworks * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumDot11AdHocNetworks * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumDot11AdHocNetworks * This,
                       ULONG cElt,
                                            IDot11AdHocNetwork **rgElt,
                        ULONG *pcEltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumDot11AdHocNetworks * This,
                       ULONG cElt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumDot11AdHocNetworks * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumDot11AdHocNetworks * This,
                        IEnumDot11AdHocNetworks **ppEnum);
        END_INTERFACE
    } IEnumDot11AdHocNetworksVtbl;
    interface IEnumDot11AdHocNetworks
    {
        CONST_VTBL struct IEnumDot11AdHocNetworksVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cElt,rgElt,pcEltFetched) )
    ( (This)->lpVtbl -> Skip(This,cElt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IDot11AdHocNetwork;
    typedef struct IDot11AdHocNetworkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDot11AdHocNetwork * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDot11AdHocNetwork * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDot11AdHocNetwork * This);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            IDot11AdHocNetwork * This,
                            DOT11_ADHOC_NETWORK_CONNECTION_STATUS *eStatus);
        HRESULT ( STDMETHODCALLTYPE *GetSSID )(
            IDot11AdHocNetwork * This,
                                LPWSTR *ppszwSSID);
        HRESULT ( STDMETHODCALLTYPE *HasProfile )(
            IDot11AdHocNetwork * This,
                            BOOLEAN *pf11d);
        HRESULT ( STDMETHODCALLTYPE *GetProfileName )(
            IDot11AdHocNetwork * This,
                                LPWSTR *ppszwProfileName);
        HRESULT ( STDMETHODCALLTYPE *DeleteProfile )(
            IDot11AdHocNetwork * This);
        HRESULT ( STDMETHODCALLTYPE *GetSignalQuality )(
            IDot11AdHocNetwork * This,
                        ULONG *puStrengthValue,
                        ULONG *puStrengthMax);
        HRESULT ( STDMETHODCALLTYPE *GetSecuritySetting )(
            IDot11AdHocNetwork * This,
                        IDot11AdHocSecuritySettings **pAdHocSecuritySetting);
        HRESULT ( STDMETHODCALLTYPE *GetContextGuid )(
            IDot11AdHocNetwork * This,
                            GUID *pContextGuid);
        HRESULT ( STDMETHODCALLTYPE *GetSignature )(
            IDot11AdHocNetwork * This,
                            GUID *pSignature);
        HRESULT ( STDMETHODCALLTYPE *GetInterface )(
            IDot11AdHocNetwork * This,
                        IDot11AdHocInterface **pAdHocInterface);
        HRESULT ( STDMETHODCALLTYPE *Connect )(
            IDot11AdHocNetwork * This,
                               LPCWSTR Passphrase,
                       LONG GeographicalId,
                       BOOLEAN fSaveProfile,
                       BOOLEAN fMakeSavedProfileUserSpecific);
        HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            IDot11AdHocNetwork * This);
        END_INTERFACE
    } IDot11AdHocNetworkVtbl;
    interface IDot11AdHocNetwork
    {
        CONST_VTBL struct IDot11AdHocNetworkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStatus(This,eStatus) )
    ( (This)->lpVtbl -> GetSSID(This,ppszwSSID) )
    ( (This)->lpVtbl -> HasProfile(This,pf11d) )
    ( (This)->lpVtbl -> GetProfileName(This,ppszwProfileName) )
    ( (This)->lpVtbl -> DeleteProfile(This) )
    ( (This)->lpVtbl -> GetSignalQuality(This,puStrengthValue,puStrengthMax) )
    ( (This)->lpVtbl -> GetSecuritySetting(This,pAdHocSecuritySetting) )
    ( (This)->lpVtbl -> GetContextGuid(This,pContextGuid) )
    ( (This)->lpVtbl -> GetSignature(This,pSignature) )
    ( (This)->lpVtbl -> GetInterface(This,pAdHocInterface) )
    ( (This)->lpVtbl -> Connect(This,Passphrase,GeographicalId,fSaveProfile,fMakeSavedProfileUserSpecific) )
    ( (This)->lpVtbl -> Disconnect(This) )
EXTERN_C const IID IID_IDot11AdHocNetworkNotificationSink;
    typedef struct IDot11AdHocNetworkNotificationSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDot11AdHocNetworkNotificationSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDot11AdHocNetworkNotificationSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDot11AdHocNetworkNotificationSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnStatusChange )(
            IDot11AdHocNetworkNotificationSink * This,
            DOT11_ADHOC_NETWORK_CONNECTION_STATUS eStatus);
        HRESULT ( STDMETHODCALLTYPE *OnConnectFail )(
            IDot11AdHocNetworkNotificationSink * This,
            DOT11_ADHOC_CONNECT_FAIL_REASON eFailReason);
        END_INTERFACE
    } IDot11AdHocNetworkNotificationSinkVtbl;
    interface IDot11AdHocNetworkNotificationSink
    {
        CONST_VTBL struct IDot11AdHocNetworkNotificationSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnStatusChange(This,eStatus) )
    ( (This)->lpVtbl -> OnConnectFail(This,eFailReason) )
EXTERN_C const IID IID_IDot11AdHocInterface;
    typedef struct IDot11AdHocInterfaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDot11AdHocInterface * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDot11AdHocInterface * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDot11AdHocInterface * This);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceSignature )(
            IDot11AdHocInterface * This,
                            GUID *pSignature);
        HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )(
            IDot11AdHocInterface * This,
                                LPWSTR *ppszName);
        HRESULT ( STDMETHODCALLTYPE *IsDot11d )(
            IDot11AdHocInterface * This,
                            BOOLEAN *pf11d);
        HRESULT ( STDMETHODCALLTYPE *IsAdHocCapable )(
            IDot11AdHocInterface * This,
                            BOOLEAN *pfAdHocCapable);
        HRESULT ( STDMETHODCALLTYPE *IsRadioOn )(
            IDot11AdHocInterface * This,
                            BOOLEAN *pfIsRadioOn);
        HRESULT ( STDMETHODCALLTYPE *GetActiveNetwork )(
            IDot11AdHocInterface * This,
                        IDot11AdHocNetwork **ppNetwork);
        HRESULT ( STDMETHODCALLTYPE *GetIEnumSecuritySettings )(
            IDot11AdHocInterface * This,
                        IEnumDot11AdHocSecuritySettings **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetIEnumDot11AdHocNetworks )(
            IDot11AdHocInterface * This,
                       GUID *pFilterGuid,
                        IEnumDot11AdHocNetworks **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            IDot11AdHocInterface * This,
                            DOT11_ADHOC_NETWORK_CONNECTION_STATUS *pState);
        END_INTERFACE
    } IDot11AdHocInterfaceVtbl;
    interface IDot11AdHocInterface
    {
        CONST_VTBL struct IDot11AdHocInterfaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDeviceSignature(This,pSignature) )
    ( (This)->lpVtbl -> GetFriendlyName(This,ppszName) )
    ( (This)->lpVtbl -> IsDot11d(This,pf11d) )
    ( (This)->lpVtbl -> IsAdHocCapable(This,pfAdHocCapable) )
    ( (This)->lpVtbl -> IsRadioOn(This,pfIsRadioOn) )
    ( (This)->lpVtbl -> GetActiveNetwork(This,ppNetwork) )
    ( (This)->lpVtbl -> GetIEnumSecuritySettings(This,ppEnum) )
    ( (This)->lpVtbl -> GetIEnumDot11AdHocNetworks(This,pFilterGuid,ppEnum) )
    ( (This)->lpVtbl -> GetStatus(This,pState) )
EXTERN_C const IID IID_IEnumDot11AdHocInterfaces;
    typedef struct IEnumDot11AdHocInterfacesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumDot11AdHocInterfaces * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumDot11AdHocInterfaces * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumDot11AdHocInterfaces * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumDot11AdHocInterfaces * This,
                       ULONG cElt,
                                            IDot11AdHocInterface **rgElt,
                        ULONG *pcEltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumDot11AdHocInterfaces * This,
                       ULONG cElt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumDot11AdHocInterfaces * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumDot11AdHocInterfaces * This,
                        IEnumDot11AdHocInterfaces **ppEnum);
        END_INTERFACE
    } IEnumDot11AdHocInterfacesVtbl;
    interface IEnumDot11AdHocInterfaces
    {
        CONST_VTBL struct IEnumDot11AdHocInterfacesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cElt,rgElt,pcEltFetched) )
    ( (This)->lpVtbl -> Skip(This,cElt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IEnumDot11AdHocSecuritySettings;
    typedef struct IEnumDot11AdHocSecuritySettingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumDot11AdHocSecuritySettings * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumDot11AdHocSecuritySettings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumDot11AdHocSecuritySettings * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumDot11AdHocSecuritySettings * This,
                       ULONG cElt,
                                            IDot11AdHocSecuritySettings **rgElt,
                        ULONG *pcEltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumDot11AdHocSecuritySettings * This,
                       ULONG cElt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumDot11AdHocSecuritySettings * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumDot11AdHocSecuritySettings * This,
                        IEnumDot11AdHocSecuritySettings **ppEnum);
        END_INTERFACE
    } IEnumDot11AdHocSecuritySettingsVtbl;
    interface IEnumDot11AdHocSecuritySettings
    {
        CONST_VTBL struct IEnumDot11AdHocSecuritySettingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cElt,rgElt,pcEltFetched) )
    ( (This)->lpVtbl -> Skip(This,cElt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IDot11AdHocSecuritySettings;
    typedef struct IDot11AdHocSecuritySettingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDot11AdHocSecuritySettings * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDot11AdHocSecuritySettings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDot11AdHocSecuritySettings * This);
        HRESULT ( STDMETHODCALLTYPE *GetDot11AuthAlgorithm )(
            IDot11AdHocSecuritySettings * This,
                            DOT11_ADHOC_AUTH_ALGORITHM *pAuth);
        HRESULT ( STDMETHODCALLTYPE *GetDot11CipherAlgorithm )(
            IDot11AdHocSecuritySettings * This,
                            DOT11_ADHOC_CIPHER_ALGORITHM *pCipher);
        END_INTERFACE
    } IDot11AdHocSecuritySettingsVtbl;
    interface IDot11AdHocSecuritySettings
    {
        CONST_VTBL struct IDot11AdHocSecuritySettingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDot11AuthAlgorithm(This,pAuth) )
    ( (This)->lpVtbl -> GetDot11CipherAlgorithm(This,pCipher) )
EXTERN_C const IID IID_IDot11AdHocInterfaceNotificationSink;
    typedef struct IDot11AdHocInterfaceNotificationSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDot11AdHocInterfaceNotificationSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDot11AdHocInterfaceNotificationSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDot11AdHocInterfaceNotificationSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnConnectionStatusChange )(
            IDot11AdHocInterfaceNotificationSink * This,
            DOT11_ADHOC_NETWORK_CONNECTION_STATUS eStatus);
        END_INTERFACE
    } IDot11AdHocInterfaceNotificationSinkVtbl;
    interface IDot11AdHocInterfaceNotificationSink
    {
        CONST_VTBL struct IDot11AdHocInterfaceNotificationSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnConnectionStatusChange(This,eStatus) )
EXTERN_C const IID LIBID_ADHOCLib;
EXTERN_C const CLSID CLSID_Dot11AdHocManager;
class DECLSPEC_UUID("DD06A84F-83BD-4d01-8AB9-2389FEA0869E")
Dot11AdHocManager;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_adhoc_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_adhoc_0000_0011_v0_0_s_ifspec;
}
