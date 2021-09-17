#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWCNDevice IWCNDevice;
typedef interface IWCNConnectNotify IWCNConnectNotify;
typedef class WCNDeviceObject WCNDeviceObject;
#include "objidl.h"
#include "WcnTypes.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum tagWCN_PASSWORD_TYPE
    {
        WCN_PASSWORD_TYPE_PUSH_BUTTON = 0,
        WCN_PASSWORD_TYPE_PIN = ( WCN_PASSWORD_TYPE_PUSH_BUTTON + 1 ) ,
        WCN_PASSWORD_TYPE_PIN_REGISTRAR_SPECIFIED = ( WCN_PASSWORD_TYPE_PIN + 1 ) ,
        WCN_PASSWORD_TYPE_OOB_SPECIFIED = ( WCN_PASSWORD_TYPE_PIN_REGISTRAR_SPECIFIED + 1 ) ,
        WCN_PASSWORD_TYPE_WFDS = ( WCN_PASSWORD_TYPE_OOB_SPECIFIED + 1 )
    } WCN_PASSWORD_TYPE;
typedef
enum tagWCN_SESSION_STATUS
    {
        WCN_SESSION_STATUS_SUCCESS = 0,
        WCN_SESSION_STATUS_FAILURE_GENERIC = ( WCN_SESSION_STATUS_SUCCESS + 1 ) ,
        WCN_SESSION_STATUS_FAILURE_TIMEOUT = ( WCN_SESSION_STATUS_FAILURE_GENERIC + 1 )
    } WCN_SESSION_STATUS;
typedef struct tagWCN_VENDOR_EXTENSION_SPEC
    {
    DWORD VendorId;
    DWORD SubType;
    DWORD Index;
    DWORD Flags;
    } WCN_VENDOR_EXTENSION_SPEC;
extern RPC_IF_HANDLE __MIDL_itf_wcndevice_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wcndevice_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWCNDevice;
    typedef struct IWCNDeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWCNDevice * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWCNDevice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWCNDevice * This);
        HRESULT ( STDMETHODCALLTYPE *SetPassword )(
            __RPC__in IWCNDevice * This,
                       WCN_PASSWORD_TYPE Type,
                       DWORD dwPasswordLength,
                                __RPC__in_ecount_full(dwPasswordLength) const BYTE pbPassword[ ]);
        HRESULT ( STDMETHODCALLTYPE *Connect )(
            __RPC__in IWCNDevice * This,
                               __RPC__in_opt IWCNConnectNotify *pNotify);
        HRESULT ( STDMETHODCALLTYPE *GetAttribute )(
            __RPC__in IWCNDevice * This,
                       WCN_ATTRIBUTE_TYPE AttributeType,
                              __RPC__in_range(0,WCN_API_MAX_BUFFER_SIZE) DWORD dwMaxBufferSize,
                                            __RPC__out_ecount_part(dwMaxBufferSize, *pdwBufferUsed) BYTE pbBuffer[ ],
                        __RPC__out DWORD *pdwBufferUsed);
        HRESULT ( STDMETHODCALLTYPE *GetIntegerAttribute )(
            __RPC__in IWCNDevice * This,
                       WCN_ATTRIBUTE_TYPE AttributeType,
                        __RPC__out UINT *puInteger);
        HRESULT ( STDMETHODCALLTYPE *GetStringAttribute )(
            __RPC__in IWCNDevice * This,
                       WCN_ATTRIBUTE_TYPE AttributeType,
                              __RPC__in_range(0,WCN_API_MAX_BUFFER_SIZE) DWORD cchMaxString,
                                         __RPC__out_ecount_full_string(cchMaxString) WCHAR wszString[ ]);
        HRESULT ( STDMETHODCALLTYPE *GetNetworkProfile )(
            __RPC__in IWCNDevice * This,
                              __RPC__in_range(0,WCN_API_MAX_BUFFER_SIZE) DWORD cchMaxStringLength,
                                 __RPC__out_ecount_full(cchMaxStringLength) LPWSTR wszProfile);
        HRESULT ( STDMETHODCALLTYPE *SetNetworkProfile )(
            __RPC__in IWCNDevice * This,
                       __RPC__in LPCWSTR pszProfileXml);
        HRESULT ( STDMETHODCALLTYPE *GetVendorExtension )(
            __RPC__in IWCNDevice * This,
                       __RPC__in const WCN_VENDOR_EXTENSION_SPEC *pVendorExtSpec,
                              __RPC__in_range(0,WCN_API_MAX_BUFFER_SIZE) DWORD dwMaxBufferSize,
                                            __RPC__out_ecount_part(dwMaxBufferSize, *pdwBufferUsed) BYTE pbBuffer[ ],
                        __RPC__out DWORD *pdwBufferUsed);
        HRESULT ( STDMETHODCALLTYPE *SetVendorExtension )(
            __RPC__in IWCNDevice * This,
                       __RPC__in const WCN_VENDOR_EXTENSION_SPEC *pVendorExtSpec,
                              __RPC__in_range(0,WCN_API_MAX_BUFFER_SIZE) DWORD cbBuffer,
                                __RPC__in_ecount_full(cbBuffer) const BYTE pbBuffer[ ]);
        HRESULT ( STDMETHODCALLTYPE *Unadvise )(
            __RPC__in IWCNDevice * This);
        HRESULT ( STDMETHODCALLTYPE *SetNFCPasswordParams )(
            __RPC__in IWCNDevice * This,
                       WCN_PASSWORD_TYPE Type,
                       DWORD dwOOBPasswordID,
                       DWORD dwPasswordLength,
                                        __RPC__in_ecount_full_opt(dwPasswordLength) const BYTE pbPassword[ ],
                       DWORD dwRemotePublicKeyHashLength,
                                        __RPC__in_ecount_full_opt(dwRemotePublicKeyHashLength) const BYTE pbRemotePublicKeyHash[ ],
                       DWORD dwDHKeyBlobLength,
                                        __RPC__in_ecount_full_opt(dwDHKeyBlobLength) const BYTE pbDHKeyBlob[ ]);
        END_INTERFACE
    } IWCNDeviceVtbl;
    interface IWCNDevice
    {
        CONST_VTBL struct IWCNDeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPassword(This,Type,dwPasswordLength,pbPassword) )
    ( (This)->lpVtbl -> Connect(This,pNotify) )
    ( (This)->lpVtbl -> GetAttribute(This,AttributeType,dwMaxBufferSize,pbBuffer,pdwBufferUsed) )
    ( (This)->lpVtbl -> GetIntegerAttribute(This,AttributeType,puInteger) )
    ( (This)->lpVtbl -> GetStringAttribute(This,AttributeType,cchMaxString,wszString) )
    ( (This)->lpVtbl -> GetNetworkProfile(This,cchMaxStringLength,wszProfile) )
    ( (This)->lpVtbl -> SetNetworkProfile(This,pszProfileXml) )
    ( (This)->lpVtbl -> GetVendorExtension(This,pVendorExtSpec,dwMaxBufferSize,pbBuffer,pdwBufferUsed) )
    ( (This)->lpVtbl -> SetVendorExtension(This,pVendorExtSpec,cbBuffer,pbBuffer) )
    ( (This)->lpVtbl -> Unadvise(This) )
    ( (This)->lpVtbl -> SetNFCPasswordParams(This,Type,dwOOBPasswordID,dwPasswordLength,pbPassword,dwRemotePublicKeyHashLength,pbRemotePublicKeyHash,dwDHKeyBlobLength,pbDHKeyBlob) )
EXTERN_C const IID IID_IWCNConnectNotify;
    typedef struct IWCNConnectNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWCNConnectNotify * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWCNConnectNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWCNConnectNotify * This);
        HRESULT ( STDMETHODCALLTYPE *ConnectSucceeded )(
            __RPC__in IWCNConnectNotify * This);
        HRESULT ( STDMETHODCALLTYPE *ConnectFailed )(
            __RPC__in IWCNConnectNotify * This,
                       HRESULT hrFailure);
        END_INTERFACE
    } IWCNConnectNotifyVtbl;
    interface IWCNConnectNotify
    {
        CONST_VTBL struct IWCNConnectNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ConnectSucceeded(This) )
    ( (This)->lpVtbl -> ConnectFailed(This,hrFailure) )
EXTERN_C const IID LIBID_WCNDeviceObjectLibrary;
EXTERN_C const CLSID CLSID_WCNDeviceObject;
class DECLSPEC_UUID("C100BEA7-D33A-4a4b-BF23-BBEF4663D017")
WCNDeviceObject;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wcndevice_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wcndevice_0000_0003_v0_0_s_ifspec;
}
