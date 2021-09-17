#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWSDDeviceHost IWSDDeviceHost;
typedef interface IWSDDeviceHostNotify IWSDDeviceHostNotify;
typedef interface IWSDServiceMessaging IWSDServiceMessaging;
#include "oaidl.h"
#include "ocidl.h"
#include "wsdxmldom.h"
#include "wsdtypes.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
HRESULT WINAPI
WSDCreateDeviceHost(
    _In_ LPCWSTR pszLocalId,
    IWSDXMLContext* pContext,
    _Outptr_ IWSDDeviceHost** ppDeviceHost);
HRESULT WINAPI
WSDCreateDeviceHostAdvanced(
    _In_ LPCWSTR pszLocalId,
    IWSDXMLContext* pContext,
    _In_reads_opt_(dwHostAddressCount) IWSDAddress** ppHostAddresses,
    DWORD dwHostAddressCount,
    _Outptr_ IWSDDeviceHost** ppDeviceHost);
HRESULT WINAPI
WSDCreateDeviceHost2(
    _In_ LPCWSTR pszLocalId,
    IWSDXMLContext* pContext,
    _In_reads_opt_(dwConfigParamCount) WSD_CONFIG_PARAM* pConfigParams,
    DWORD dwConfigParamCount,
    _Outptr_ IWSDDeviceHost** ppDeviceHost);
extern RPC_IF_HANDLE __MIDL_itf_wsdhost_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdhost_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWSDDeviceHost;
    typedef struct IWSDDeviceHostVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDDeviceHost * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDDeviceHost * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDDeviceHost * This);
        HRESULT ( STDMETHODCALLTYPE *Init )(
            IWSDDeviceHost * This,
            _In_ LPCWSTR pszLocalId,
            _In_opt_ IWSDXMLContext *pContext,
            _In_reads_opt_(dwHostAddressCount) IWSDAddress **ppHostAddresses,
            _In_opt_ DWORD dwHostAddressCount);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            IWSDDeviceHost * This,
                       ULONGLONG ullInstanceId,
                       const WSD_URI_LIST *pScopeList,
            _In_opt_ IWSDDeviceHostNotify *pNotificationSink);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            IWSDDeviceHost * This);
        HRESULT ( STDMETHODCALLTYPE *Terminate )(
            IWSDDeviceHost * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterPortType )(
            IWSDDeviceHost * This,
                       const WSD_PORT_TYPE *pPortType);
        HRESULT ( STDMETHODCALLTYPE *SetMetadata )(
            IWSDDeviceHost * This,
                       const WSD_THIS_MODEL_METADATA *pThisModelMetadata,
                       const WSD_THIS_DEVICE_METADATA *pThisDeviceMetadata,
            _In_opt_ const WSD_HOST_METADATA *pHostMetadata,
            _In_opt_ const WSD_METADATA_SECTION_LIST *pCustomMetadata);
        HRESULT ( STDMETHODCALLTYPE *RegisterService )(
            IWSDDeviceHost * This,
            _In_ LPCWSTR pszServiceId,
                       IUnknown *pService);
        HRESULT ( STDMETHODCALLTYPE *RetireService )(
            IWSDDeviceHost * This,
            _In_ LPCWSTR pszServiceId);
        HRESULT ( STDMETHODCALLTYPE *AddDynamicService )(
            IWSDDeviceHost * This,
            _In_ LPCWSTR pszServiceId,
            _In_opt_ LPCWSTR pszEndpointAddress,
            _In_opt_ const WSD_PORT_TYPE *pPortType,
            _In_opt_ const WSDXML_NAME *pPortName,
            _In_opt_ const WSDXML_ELEMENT *pAny,
            _In_opt_ IUnknown *pService);
        HRESULT ( STDMETHODCALLTYPE *RemoveDynamicService )(
            IWSDDeviceHost * This,
            _In_ LPCWSTR pszServiceId);
        HRESULT ( STDMETHODCALLTYPE *SetServiceDiscoverable )(
            IWSDDeviceHost * This,
            _In_ LPCWSTR pszServiceId,
                       BOOL fDiscoverable);
        HRESULT ( STDMETHODCALLTYPE *SignalEvent )(
            IWSDDeviceHost * This,
            _In_ LPCWSTR pszServiceId,
            _In_opt_ const void *pBody,
                       const WSD_OPERATION *pOperation);
        END_INTERFACE
    } IWSDDeviceHostVtbl;
    interface IWSDDeviceHost
    {
        CONST_VTBL struct IWSDDeviceHostVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Init(This,pszLocalId,pContext,ppHostAddresses,dwHostAddressCount) )
    ( (This)->lpVtbl -> Start(This,ullInstanceId,pScopeList,pNotificationSink) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Terminate(This) )
    ( (This)->lpVtbl -> RegisterPortType(This,pPortType) )
    ( (This)->lpVtbl -> SetMetadata(This,pThisModelMetadata,pThisDeviceMetadata,pHostMetadata,pCustomMetadata) )
    ( (This)->lpVtbl -> RegisterService(This,pszServiceId,pService) )
    ( (This)->lpVtbl -> RetireService(This,pszServiceId) )
    ( (This)->lpVtbl -> AddDynamicService(This,pszServiceId,pszEndpointAddress,pPortType,pPortName,pAny,pService) )
    ( (This)->lpVtbl -> RemoveDynamicService(This,pszServiceId) )
    ( (This)->lpVtbl -> SetServiceDiscoverable(This,pszServiceId,fDiscoverable) )
    ( (This)->lpVtbl -> SignalEvent(This,pszServiceId,pBody,pOperation) )
EXTERN_C const IID IID_IWSDDeviceHostNotify;
    typedef struct IWSDDeviceHostNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWSDDeviceHostNotify * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWSDDeviceHostNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWSDDeviceHostNotify * This);
        HRESULT ( STDMETHODCALLTYPE *GetService )(
            __RPC__in IWSDDeviceHostNotify * This,
            _In_ LPCWSTR pszServiceId,
            _Outptr_ IUnknown **ppService);
        END_INTERFACE
    } IWSDDeviceHostNotifyVtbl;
    interface IWSDDeviceHostNotify
    {
        CONST_VTBL struct IWSDDeviceHostNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetService(This,pszServiceId,ppService) )
EXTERN_C const IID IID_IWSDServiceMessaging;
    typedef struct IWSDServiceMessagingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDServiceMessaging * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDServiceMessaging * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDServiceMessaging * This);
        HRESULT ( STDMETHODCALLTYPE *SendResponse )(
            IWSDServiceMessaging * This,
            _In_opt_ void *pBody,
                       WSD_OPERATION *pOperation,
                       IWSDMessageParameters *pMessageParameters);
        HRESULT ( STDMETHODCALLTYPE *FaultRequest )(
            IWSDServiceMessaging * This,
                       WSD_SOAP_HEADER *pRequestHeader,
                       IWSDMessageParameters *pMessageParameters,
            _In_opt_ WSD_SOAP_FAULT *pFault);
        END_INTERFACE
    } IWSDServiceMessagingVtbl;
    interface IWSDServiceMessaging
    {
        CONST_VTBL struct IWSDServiceMessagingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SendResponse(This,pBody,pOperation,pMessageParameters) )
    ( (This)->lpVtbl -> FaultRequest(This,pRequestHeader,pMessageParameters,pFault) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wsdhost_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdhost_0000_0003_v0_0_s_ifspec;
}
