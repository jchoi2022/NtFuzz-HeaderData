#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IEnumEnhancedStorageACT IEnumEnhancedStorageACT;
typedef interface IEnhancedStorageACT IEnhancedStorageACT;
typedef interface IEnhancedStorageACT2 IEnhancedStorageACT2;
typedef interface IEnhancedStorageACT3 IEnhancedStorageACT3;
typedef interface IEnhancedStorageSilo IEnhancedStorageSilo;
typedef interface IEnhancedStorageSiloAction IEnhancedStorageSiloAction;
typedef class EnumEnhancedStorageACT EnumEnhancedStorageACT;
typedef class EnhancedStorageACT EnhancedStorageACT;
typedef class EnhancedStorageSilo EnhancedStorageSilo;
typedef class EnhancedStorageSiloAction EnhancedStorageSiloAction;
#include "unknwn.h"
#include "objidl.h"
#include "ocidl.h"
#include "propidl.h"
#include "portabledeviceapi.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _ACT_AUTHORIZATION_STATE
    {
    ULONG ulState;
    } ACT_AUTHORIZATION_STATE;
typedef struct _SILO_INFO
    {
    ULONG ulSTID;
    UCHAR SpecificationMajor;
    UCHAR SpecificationMinor;
    UCHAR ImplementationMajor;
    UCHAR ImplementationMinor;
    UCHAR type;
    UCHAR capabilities;
    } SILO_INFO;
typedef
enum _ACT_AUTHORIZATION_STATE_VALUE
    {
        ACT_UNAUTHORIZED = 0,
        ACT_AUTHORIZED = 0x1
    } ACT_AUTHORIZATION_STATE_VALUE;
typedef enum _ACT_AUTHORIZATION_STATE_VALUE *PACT_AUTHORIZATION_STATE_VALUE;
extern RPC_IF_HANDLE __MIDL_itf_EhStorAPI_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_EhStorAPI_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnumEnhancedStorageACT;
    typedef struct IEnumEnhancedStorageACTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumEnhancedStorageACT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumEnhancedStorageACT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumEnhancedStorageACT * This);
        HRESULT ( STDMETHODCALLTYPE *GetACTs )(
            IEnumEnhancedStorageACT * This,
                                          IEnhancedStorageACT ***pppIEnhancedStorageACTs,
                        ULONG *pcEnhancedStorageACTs);
        HRESULT ( STDMETHODCALLTYPE *GetMatchingACT )(
            IEnumEnhancedStorageACT * This,
                       LPCWSTR szVolume,
                        IEnhancedStorageACT **ppIEnhancedStorageACT);
        END_INTERFACE
    } IEnumEnhancedStorageACTVtbl;
    interface IEnumEnhancedStorageACT
    {
        CONST_VTBL struct IEnumEnhancedStorageACTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetACTs(This,pppIEnhancedStorageACTs,pcEnhancedStorageACTs) )
    ( (This)->lpVtbl -> GetMatchingACT(This,szVolume,ppIEnhancedStorageACT) )
extern RPC_IF_HANDLE __MIDL_itf_EhStorAPI_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_EhStorAPI_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnhancedStorageACT;
    typedef struct IEnhancedStorageACTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnhancedStorageACT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnhancedStorageACT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnhancedStorageACT * This);
        HRESULT ( STDMETHODCALLTYPE *Authorize )(
            IEnhancedStorageACT * This,
                       DWORD hwndParent,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *Unauthorize )(
            IEnhancedStorageACT * This);
        HRESULT ( STDMETHODCALLTYPE *GetAuthorizationState )(
            IEnhancedStorageACT * This,
                        ACT_AUTHORIZATION_STATE *pState);
        HRESULT ( STDMETHODCALLTYPE *GetMatchingVolume )(
            IEnhancedStorageACT * This,
                        LPWSTR *ppwszVolume);
        HRESULT ( STDMETHODCALLTYPE *GetUniqueIdentity )(
            IEnhancedStorageACT * This,
                        LPWSTR *ppwszIdentity);
        HRESULT ( STDMETHODCALLTYPE *GetSilos )(
            IEnhancedStorageACT * This,
                                                   IEnhancedStorageSilo ***pppIEnhancedStorageSilos,
                        ULONG *pcEnhancedStorageSilos);
        END_INTERFACE
    } IEnhancedStorageACTVtbl;
    interface IEnhancedStorageACT
    {
        CONST_VTBL struct IEnhancedStorageACTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Authorize(This,hwndParent,dwFlags) )
    ( (This)->lpVtbl -> Unauthorize(This) )
    ( (This)->lpVtbl -> GetAuthorizationState(This,pState) )
    ( (This)->lpVtbl -> GetMatchingVolume(This,ppwszVolume) )
    ( (This)->lpVtbl -> GetUniqueIdentity(This,ppwszIdentity) )
    ( (This)->lpVtbl -> GetSilos(This,pppIEnhancedStorageSilos,pcEnhancedStorageSilos) )
EXTERN_C const IID IID_IEnhancedStorageACT2;
    typedef struct IEnhancedStorageACT2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnhancedStorageACT2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnhancedStorageACT2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnhancedStorageACT2 * This);
        HRESULT ( STDMETHODCALLTYPE *Authorize )(
            IEnhancedStorageACT2 * This,
                       DWORD hwndParent,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *Unauthorize )(
            IEnhancedStorageACT2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetAuthorizationState )(
            IEnhancedStorageACT2 * This,
                        ACT_AUTHORIZATION_STATE *pState);
        HRESULT ( STDMETHODCALLTYPE *GetMatchingVolume )(
            IEnhancedStorageACT2 * This,
                        LPWSTR *ppwszVolume);
        HRESULT ( STDMETHODCALLTYPE *GetUniqueIdentity )(
            IEnhancedStorageACT2 * This,
                        LPWSTR *ppwszIdentity);
        HRESULT ( STDMETHODCALLTYPE *GetSilos )(
            IEnhancedStorageACT2 * This,
                                                   IEnhancedStorageSilo ***pppIEnhancedStorageSilos,
                        ULONG *pcEnhancedStorageSilos);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceName )(
            IEnhancedStorageACT2 * This,
                        LPWSTR *ppwszDeviceName);
        HRESULT ( STDMETHODCALLTYPE *IsDeviceRemovable )(
            IEnhancedStorageACT2 * This,
                        BOOL *pIsDeviceRemovable);
        END_INTERFACE
    } IEnhancedStorageACT2Vtbl;
    interface IEnhancedStorageACT2
    {
        CONST_VTBL struct IEnhancedStorageACT2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Authorize(This,hwndParent,dwFlags) )
    ( (This)->lpVtbl -> Unauthorize(This) )
    ( (This)->lpVtbl -> GetAuthorizationState(This,pState) )
    ( (This)->lpVtbl -> GetMatchingVolume(This,ppwszVolume) )
    ( (This)->lpVtbl -> GetUniqueIdentity(This,ppwszIdentity) )
    ( (This)->lpVtbl -> GetSilos(This,pppIEnhancedStorageSilos,pcEnhancedStorageSilos) )
    ( (This)->lpVtbl -> GetDeviceName(This,ppwszDeviceName) )
    ( (This)->lpVtbl -> IsDeviceRemovable(This,pIsDeviceRemovable) )
extern RPC_IF_HANDLE __MIDL_itf_EhStorAPI_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_EhStorAPI_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnhancedStorageACT3;
    typedef struct IEnhancedStorageACT3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnhancedStorageACT3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnhancedStorageACT3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnhancedStorageACT3 * This);
        HRESULT ( STDMETHODCALLTYPE *Authorize )(
            IEnhancedStorageACT3 * This,
                       DWORD hwndParent,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *Unauthorize )(
            IEnhancedStorageACT3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetAuthorizationState )(
            IEnhancedStorageACT3 * This,
                        ACT_AUTHORIZATION_STATE *pState);
        HRESULT ( STDMETHODCALLTYPE *GetMatchingVolume )(
            IEnhancedStorageACT3 * This,
                        LPWSTR *ppwszVolume);
        HRESULT ( STDMETHODCALLTYPE *GetUniqueIdentity )(
            IEnhancedStorageACT3 * This,
                        LPWSTR *ppwszIdentity);
        HRESULT ( STDMETHODCALLTYPE *GetSilos )(
            IEnhancedStorageACT3 * This,
                                                   IEnhancedStorageSilo ***pppIEnhancedStorageSilos,
                        ULONG *pcEnhancedStorageSilos);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceName )(
            IEnhancedStorageACT3 * This,
                        LPWSTR *ppwszDeviceName);
        HRESULT ( STDMETHODCALLTYPE *IsDeviceRemovable )(
            IEnhancedStorageACT3 * This,
                        BOOL *pIsDeviceRemovable);
        HRESULT ( STDMETHODCALLTYPE *UnauthorizeEx )(
            IEnhancedStorageACT3 * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *IsQueueFrozen )(
            IEnhancedStorageACT3 * This,
                        BOOL *pIsQueueFrozen);
        HRESULT ( STDMETHODCALLTYPE *GetShellExtSupport )(
            IEnhancedStorageACT3 * This,
                        BOOL *pShellExtSupport);
        END_INTERFACE
    } IEnhancedStorageACT3Vtbl;
    interface IEnhancedStorageACT3
    {
        CONST_VTBL struct IEnhancedStorageACT3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Authorize(This,hwndParent,dwFlags) )
    ( (This)->lpVtbl -> Unauthorize(This) )
    ( (This)->lpVtbl -> GetAuthorizationState(This,pState) )
    ( (This)->lpVtbl -> GetMatchingVolume(This,ppwszVolume) )
    ( (This)->lpVtbl -> GetUniqueIdentity(This,ppwszIdentity) )
    ( (This)->lpVtbl -> GetSilos(This,pppIEnhancedStorageSilos,pcEnhancedStorageSilos) )
    ( (This)->lpVtbl -> GetDeviceName(This,ppwszDeviceName) )
    ( (This)->lpVtbl -> IsDeviceRemovable(This,pIsDeviceRemovable) )
    ( (This)->lpVtbl -> UnauthorizeEx(This,dwFlags) )
    ( (This)->lpVtbl -> IsQueueFrozen(This,pIsQueueFrozen) )
    ( (This)->lpVtbl -> GetShellExtSupport(This,pShellExtSupport) )
EXTERN_C const IID IID_IEnhancedStorageSilo;
    typedef struct IEnhancedStorageSiloVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnhancedStorageSilo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnhancedStorageSilo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnhancedStorageSilo * This);
        HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            IEnhancedStorageSilo * This,
                        SILO_INFO *pSiloInfo);
        HRESULT ( STDMETHODCALLTYPE *GetActions )(
            IEnhancedStorageSilo * This,
                                          IEnhancedStorageSiloAction ***pppIEnhancedStorageSiloActions,
                        ULONG *pcEnhancedStorageSiloActions);
        HRESULT ( STDMETHODCALLTYPE *SendCommand )(
            IEnhancedStorageSilo * This,
                       UCHAR Command,
                                BYTE *pbCommandBuffer,
                       ULONG cbCommandBuffer,
                                 BYTE *pbResponseBuffer,
                            ULONG *pcbResponseBuffer);
        HRESULT ( STDMETHODCALLTYPE *GetPortableDevice )(
            IEnhancedStorageSilo * This,
                        IPortableDevice **ppIPortableDevice);
        HRESULT ( STDMETHODCALLTYPE *GetDevicePath )(
            IEnhancedStorageSilo * This,
                        LPWSTR *ppwszSiloDevicePath);
        END_INTERFACE
    } IEnhancedStorageSiloVtbl;
    interface IEnhancedStorageSilo
    {
        CONST_VTBL struct IEnhancedStorageSiloVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetInfo(This,pSiloInfo) )
    ( (This)->lpVtbl -> GetActions(This,pppIEnhancedStorageSiloActions,pcEnhancedStorageSiloActions) )
    ( (This)->lpVtbl -> SendCommand(This,Command,pbCommandBuffer,cbCommandBuffer,pbResponseBuffer,pcbResponseBuffer) )
    ( (This)->lpVtbl -> GetPortableDevice(This,ppIPortableDevice) )
    ( (This)->lpVtbl -> GetDevicePath(This,ppwszSiloDevicePath) )
EXTERN_C const IID IID_IEnhancedStorageSiloAction;
    typedef struct IEnhancedStorageSiloActionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnhancedStorageSiloAction * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnhancedStorageSiloAction * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnhancedStorageSiloAction * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            IEnhancedStorageSiloAction * This,
                        LPWSTR *ppwszActionName);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            IEnhancedStorageSiloAction * This,
                        LPWSTR *ppwszActionDescription);
        HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IEnhancedStorageSiloAction * This);
        END_INTERFACE
    } IEnhancedStorageSiloActionVtbl;
    interface IEnhancedStorageSiloAction
    {
        CONST_VTBL struct IEnhancedStorageSiloActionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,ppwszActionName) )
    ( (This)->lpVtbl -> GetDescription(This,ppwszActionDescription) )
    ( (This)->lpVtbl -> Invoke(This) )
EXTERN_C const IID LIBID_EnhancedStorageAPILib;
EXTERN_C const CLSID CLSID_EnumEnhancedStorageACT;
class DECLSPEC_UUID("fe841493-835c-4fa3-b6cc-b4b2d4719848")
EnumEnhancedStorageACT;
EXTERN_C const CLSID CLSID_EnhancedStorageACT;
class DECLSPEC_UUID("af076a15-2ece-4ad4-bb21-29f040e176d8")
EnhancedStorageACT;
EXTERN_C const CLSID CLSID_EnhancedStorageSilo;
class DECLSPEC_UUID("cb25220c-76c7-4fee-842b-f3383cd022bc")
EnhancedStorageSilo;
EXTERN_C const CLSID CLSID_EnhancedStorageSiloAction;
class DECLSPEC_UUID("886D29DD-B506-466B-9FBF-B44FF383FB3F")
EnhancedStorageSiloAction;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_EhStorAPI_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_EhStorAPI_0000_0007_v0_0_s_ifspec;
}
