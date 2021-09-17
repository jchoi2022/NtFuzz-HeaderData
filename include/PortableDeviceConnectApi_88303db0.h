#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IEnumPortableDeviceConnectors IEnumPortableDeviceConnectors;
typedef interface IPortableDeviceConnector IPortableDeviceConnector;
typedef interface IConnectionRequestCallback IConnectionRequestCallback;
typedef class EnumBthMtpConnectors EnumBthMtpConnectors;
#include "wtypes.h"
#include "propsys.h"
#include "PortableDeviceConnectImports.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_DEVPROPKEY(DEVPKEY_MTPBTH_IsConnected, 0xea1237fa, 0x589d, 0x4472, 0x84, 0xe4, 0x0a, 0xbe, 0x36, 0xfd, 0x62, 0xef, 2);
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceConnectApi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceConnectApi_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnumPortableDeviceConnectors;
    typedef struct IEnumPortableDeviceConnectorsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumPortableDeviceConnectors * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumPortableDeviceConnectors * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumPortableDeviceConnectors * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumPortableDeviceConnectors * This,
                       UINT32 cRequested,
                                            __RPC__out_ecount_part(cRequested, *pcFetched) IPortableDeviceConnector **pConnectors,
                                    __RPC__inout_opt UINT32 *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumPortableDeviceConnectors * This,
                       UINT32 cConnectors);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumPortableDeviceConnectors * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumPortableDeviceConnectors * This,
                        __RPC__deref_out_opt IEnumPortableDeviceConnectors **ppEnum);
        END_INTERFACE
    } IEnumPortableDeviceConnectorsVtbl;
    interface IEnumPortableDeviceConnectors
    {
        CONST_VTBL struct IEnumPortableDeviceConnectorsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cRequested,pConnectors,pcFetched) )
    ( (This)->lpVtbl -> Skip(This,cConnectors) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IPortableDeviceConnector;
    typedef struct IPortableDeviceConnectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDeviceConnector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDeviceConnector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDeviceConnector * This);
        HRESULT ( STDMETHODCALLTYPE *Connect )(
            __RPC__in IPortableDeviceConnector * This,
                       __RPC__in_opt IConnectionRequestCallback *pCallback);
        HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            __RPC__in IPortableDeviceConnector * This,
                       __RPC__in_opt IConnectionRequestCallback *pCallback);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IPortableDeviceConnector * This,
                       __RPC__in_opt IConnectionRequestCallback *pCallback);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IPortableDeviceConnector * This,
                       __RPC__in const DEVPROPKEY *pPropertyKey,
                        __RPC__out DEVPROPTYPE *pPropertyType,
                                          __RPC__deref_out_ecount_full_opt(*pcbData) BYTE **ppData,
                        __RPC__out UINT32 *pcbData);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IPortableDeviceConnector * This,
                       __RPC__in const DEVPROPKEY *pPropertyKey,
                       DEVPROPTYPE PropertyType,
                                __RPC__in_ecount_full(cbData) const BYTE *pData,
                       UINT32 cbData);
        HRESULT ( STDMETHODCALLTYPE *GetPnPID )(
            __RPC__in IPortableDeviceConnector * This,
                        __RPC__deref_out_opt LPWSTR *ppwszPnPID);
        END_INTERFACE
    } IPortableDeviceConnectorVtbl;
    interface IPortableDeviceConnector
    {
        CONST_VTBL struct IPortableDeviceConnectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Connect(This,pCallback) )
    ( (This)->lpVtbl -> Disconnect(This,pCallback) )
    ( (This)->lpVtbl -> Cancel(This,pCallback) )
    ( (This)->lpVtbl -> GetProperty(This,pPropertyKey,pPropertyType,ppData,pcbData) )
    ( (This)->lpVtbl -> SetProperty(This,pPropertyKey,PropertyType,pData,cbData) )
    ( (This)->lpVtbl -> GetPnPID(This,ppwszPnPID) )
EXTERN_C const IID IID_IConnectionRequestCallback;
    typedef struct IConnectionRequestCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IConnectionRequestCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IConnectionRequestCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IConnectionRequestCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnComplete )(
            __RPC__in IConnectionRequestCallback * This,
                       HRESULT hrStatus);
        END_INTERFACE
    } IConnectionRequestCallbackVtbl;
    interface IConnectionRequestCallback
    {
        CONST_VTBL struct IConnectionRequestCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnComplete(This,hrStatus) )
EXTERN_C const IID LIBID_PortableDeviceConnectApiLib;
EXTERN_C const CLSID CLSID_EnumBthMtpConnectors;
class DECLSPEC_UUID("a1570149-e645-4f43-8b0d-409b061db2fc")
EnumBthMtpConnectors;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceConnectApi_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceConnectApi_0000_0004_v0_0_s_ifspec;
}
