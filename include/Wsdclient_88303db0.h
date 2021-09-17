#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWSDEndpointProxy IWSDEndpointProxy;
typedef interface IWSDMetadataExchange IWSDMetadataExchange;
typedef interface IWSDServiceProxy IWSDServiceProxy;
typedef interface IWSDServiceProxyEventing IWSDServiceProxyEventing;
typedef interface IWSDDeviceProxy IWSDDeviceProxy;
typedef interface IWSDAsyncResult IWSDAsyncResult;
typedef interface IWSDAsyncCallback IWSDAsyncCallback;
typedef interface IWSDEventingStatus IWSDEventingStatus;
#include "oaidl.h"
#include "ocidl.h"
#include "wsdxmldom.h"
#include "wsdtypes.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
HRESULT WINAPI
WSDCreateDeviceProxy(
    _In_ LPCWSTR pszDeviceId,
    _In_ LPCWSTR pszLocalId,
    IWSDXMLContext* pContext,
    _Outptr_ IWSDDeviceProxy** ppDeviceProxy);
HRESULT WINAPI
WSDCreateDeviceProxyAdvanced(
    _In_ LPCWSTR pszDeviceId,
    IWSDAddress* pDeviceAddress,
    _In_ LPCWSTR pszLocalId,
    IWSDXMLContext* pContext,
    _Outptr_ IWSDDeviceProxy** ppDeviceProxy);
HRESULT WINAPI
WSDCreateDeviceProxy2(
    _In_ LPCWSTR pszDeviceId,
    _In_ LPCWSTR pszLocalId,
    IWSDXMLContext* pContext,
    _In_reads_opt_(dwConfigParamCount) WSD_CONFIG_PARAM* pConfigParams,
    DWORD dwConfigParamCount,
    _Outptr_ IWSDDeviceProxy** ppDeviceProxy);
extern RPC_IF_HANDLE __MIDL_itf_wsdclient_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdclient_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWSDEndpointProxy;
    typedef struct IWSDEndpointProxyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDEndpointProxy * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDEndpointProxy * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDEndpointProxy * This);
        HRESULT ( STDMETHODCALLTYPE *SendOneWayRequest )(
            IWSDEndpointProxy * This,
                       const void *pBody,
                       const WSD_OPERATION *pOperation);
        HRESULT ( STDMETHODCALLTYPE *SendTwoWayRequest )(
            IWSDEndpointProxy * This,
                       const void *pBody,
                       const WSD_OPERATION *pOperation,
            _In_opt_ const WSD_SYNCHRONOUS_RESPONSE_CONTEXT *pResponseContext);
        HRESULT ( STDMETHODCALLTYPE *SendTwoWayRequestAsync )(
            IWSDEndpointProxy * This,
                       const void *pBody,
                       const WSD_OPERATION *pOperation,
                       IUnknown *pAsyncState,
                       IWSDAsyncCallback *pCallback,
            _Outptr_ IWSDAsyncResult **pResult);
        HRESULT ( STDMETHODCALLTYPE *AbortAsyncOperation )(
            IWSDEndpointProxy * This,
                       IWSDAsyncResult *pAsyncResult);
        HRESULT ( STDMETHODCALLTYPE *ProcessFault )(
            IWSDEndpointProxy * This,
                       const WSD_SOAP_FAULT *pFault);
        HRESULT ( STDMETHODCALLTYPE *GetErrorInfo )(
            IWSDEndpointProxy * This,
            _Outptr_ LPCWSTR *ppszErrorInfo);
        HRESULT ( STDMETHODCALLTYPE *GetFaultInfo )(
            IWSDEndpointProxy * This,
            _Outptr_ WSD_SOAP_FAULT **ppFault);
        END_INTERFACE
    } IWSDEndpointProxyVtbl;
    interface IWSDEndpointProxy
    {
        CONST_VTBL struct IWSDEndpointProxyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SendOneWayRequest(This,pBody,pOperation) )
    ( (This)->lpVtbl -> SendTwoWayRequest(This,pBody,pOperation,pResponseContext) )
    ( (This)->lpVtbl -> SendTwoWayRequestAsync(This,pBody,pOperation,pAsyncState,pCallback,pResult) )
    ( (This)->lpVtbl -> AbortAsyncOperation(This,pAsyncResult) )
    ( (This)->lpVtbl -> ProcessFault(This,pFault) )
    ( (This)->lpVtbl -> GetErrorInfo(This,ppszErrorInfo) )
    ( (This)->lpVtbl -> GetFaultInfo(This,ppFault) )
EXTERN_C const IID IID_IWSDMetadataExchange;
    typedef struct IWSDMetadataExchangeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDMetadataExchange * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDMetadataExchange * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDMetadataExchange * This);
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )(
            IWSDMetadataExchange * This,
            _Outptr_ WSD_METADATA_SECTION_LIST **MetadataOut);
        END_INTERFACE
    } IWSDMetadataExchangeVtbl;
    interface IWSDMetadataExchange
    {
        CONST_VTBL struct IWSDMetadataExchangeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMetadata(This,MetadataOut) )
EXTERN_C const IID IID_IWSDServiceProxy;
    typedef struct IWSDServiceProxyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDServiceProxy * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDServiceProxy * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDServiceProxy * This);
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )(
            IWSDServiceProxy * This,
            _Outptr_ WSD_METADATA_SECTION_LIST **MetadataOut);
        HRESULT ( STDMETHODCALLTYPE *BeginGetMetadata )(
            IWSDServiceProxy * This,
            _Outptr_ IWSDAsyncResult **ppResult);
        HRESULT ( STDMETHODCALLTYPE *EndGetMetadata )(
            IWSDServiceProxy * This,
                       IWSDAsyncResult *pResult,
            _Outptr_ WSD_METADATA_SECTION_LIST **ppMetadata);
        HRESULT ( STDMETHODCALLTYPE *GetServiceMetadata )(
            IWSDServiceProxy * This,
            _Outptr_ WSD_SERVICE_METADATA **ppServiceMetadata);
        HRESULT ( STDMETHODCALLTYPE *SubscribeToOperation )(
            IWSDServiceProxy * This,
                       const WSD_OPERATION *pOperation,
                       IUnknown *pUnknown,
                       const WSDXML_ELEMENT *pAny,
            _Outptr_opt_ WSDXML_ELEMENT **ppAny);
        HRESULT ( STDMETHODCALLTYPE *UnsubscribeToOperation )(
            IWSDServiceProxy * This,
                       const WSD_OPERATION *pOperation);
        HRESULT ( STDMETHODCALLTYPE *SetEventingStatusCallback )(
            IWSDServiceProxy * This,
            _In_opt_ IWSDEventingStatus *pStatus);
        HRESULT ( STDMETHODCALLTYPE *GetEndpointProxy )(
            IWSDServiceProxy * This,
            _Outptr_ IWSDEndpointProxy **ppProxy);
        END_INTERFACE
    } IWSDServiceProxyVtbl;
    interface IWSDServiceProxy
    {
        CONST_VTBL struct IWSDServiceProxyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMetadata(This,MetadataOut) )
    ( (This)->lpVtbl -> BeginGetMetadata(This,ppResult) )
    ( (This)->lpVtbl -> EndGetMetadata(This,pResult,ppMetadata) )
    ( (This)->lpVtbl -> GetServiceMetadata(This,ppServiceMetadata) )
    ( (This)->lpVtbl -> SubscribeToOperation(This,pOperation,pUnknown,pAny,ppAny) )
    ( (This)->lpVtbl -> UnsubscribeToOperation(This,pOperation) )
    ( (This)->lpVtbl -> SetEventingStatusCallback(This,pStatus) )
    ( (This)->lpVtbl -> GetEndpointProxy(This,ppProxy) )
extern RPC_IF_HANDLE __MIDL_itf_wsdclient_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdclient_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IWSDServiceProxyEventing;
    typedef struct IWSDServiceProxyEventingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDServiceProxyEventing * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDServiceProxyEventing * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDServiceProxyEventing * This);
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )(
            IWSDServiceProxyEventing * This,
            _Outptr_ WSD_METADATA_SECTION_LIST **MetadataOut);
        HRESULT ( STDMETHODCALLTYPE *BeginGetMetadata )(
            IWSDServiceProxyEventing * This,
            _Outptr_ IWSDAsyncResult **ppResult);
        HRESULT ( STDMETHODCALLTYPE *EndGetMetadata )(
            IWSDServiceProxyEventing * This,
                       IWSDAsyncResult *pResult,
            _Outptr_ WSD_METADATA_SECTION_LIST **ppMetadata);
        HRESULT ( STDMETHODCALLTYPE *GetServiceMetadata )(
            IWSDServiceProxyEventing * This,
            _Outptr_ WSD_SERVICE_METADATA **ppServiceMetadata);
        HRESULT ( STDMETHODCALLTYPE *SubscribeToOperation )(
            IWSDServiceProxyEventing * This,
                       const WSD_OPERATION *pOperation,
                       IUnknown *pUnknown,
                       const WSDXML_ELEMENT *pAny,
            _Outptr_opt_ WSDXML_ELEMENT **ppAny);
        HRESULT ( STDMETHODCALLTYPE *UnsubscribeToOperation )(
            IWSDServiceProxyEventing * This,
                       const WSD_OPERATION *pOperation);
        HRESULT ( STDMETHODCALLTYPE *SetEventingStatusCallback )(
            IWSDServiceProxyEventing * This,
            _In_opt_ IWSDEventingStatus *pStatus);
        HRESULT ( STDMETHODCALLTYPE *GetEndpointProxy )(
            IWSDServiceProxyEventing * This,
            _Outptr_ IWSDEndpointProxy **ppProxy);
        HRESULT ( STDMETHODCALLTYPE *SubscribeToMultipleOperations )(
            IWSDServiceProxyEventing * This,
            _In_reads_(dwOperationCount) const WSD_OPERATION *pOperations,
                       DWORD dwOperationCount,
            _In_opt_ IUnknown *pUnknown,
            _In_opt_ const WSD_EVENTING_EXPIRES *pExpires,
            _In_opt_ const WSDXML_ELEMENT *pAny,
            _Outptr_opt_ WSD_EVENTING_EXPIRES **ppExpires,
            _Outptr_opt_ WSDXML_ELEMENT **ppAny);
        HRESULT ( STDMETHODCALLTYPE *BeginSubscribeToMultipleOperations )(
            IWSDServiceProxyEventing * This,
            _In_reads_(dwOperationCount) const WSD_OPERATION *pOperations,
                       DWORD dwOperationCount,
            _In_opt_ IUnknown *pUnknown,
            _In_opt_ const WSD_EVENTING_EXPIRES *pExpires,
            _In_opt_ const WSDXML_ELEMENT *pAny,
            _In_opt_ IUnknown *pAsyncState,
            _In_opt_ IWSDAsyncCallback *pAsyncCallback,
            _Outptr_ IWSDAsyncResult **ppResult);
        HRESULT ( STDMETHODCALLTYPE *EndSubscribeToMultipleOperations )(
            IWSDServiceProxyEventing * This,
            _In_reads_(dwOperationCount) const WSD_OPERATION *pOperations,
                       DWORD dwOperationCount,
            _In_ IWSDAsyncResult *pResult,
            _Outptr_opt_ WSD_EVENTING_EXPIRES **ppExpires,
            _Outptr_opt_ WSDXML_ELEMENT **ppAny);
        HRESULT ( STDMETHODCALLTYPE *UnsubscribeToMultipleOperations )(
            IWSDServiceProxyEventing * This,
            _In_reads_(dwOperationCount) const WSD_OPERATION *pOperations,
                       DWORD dwOperationCount,
                       const WSDXML_ELEMENT *pAny);
        HRESULT ( STDMETHODCALLTYPE *BeginUnsubscribeToMultipleOperations )(
            IWSDServiceProxyEventing * This,
            _In_reads_(dwOperationCount) const WSD_OPERATION *pOperations,
                       DWORD dwOperationCount,
            _In_opt_ const WSDXML_ELEMENT *pAny,
            _In_opt_ IUnknown *pAsyncState,
            _In_opt_ IWSDAsyncCallback *pAsyncCallback,
            _Outptr_ IWSDAsyncResult **ppResult);
        HRESULT ( STDMETHODCALLTYPE *EndUnsubscribeToMultipleOperations )(
            IWSDServiceProxyEventing * This,
            _In_reads_(dwOperationCount) const WSD_OPERATION *pOperations,
                       DWORD dwOperationCount,
            _In_ IWSDAsyncResult *pResult);
        HRESULT ( STDMETHODCALLTYPE *RenewMultipleOperations )(
            IWSDServiceProxyEventing * This,
            _In_reads_(dwOperationCount) const WSD_OPERATION *pOperations,
                       DWORD dwOperationCount,
            _In_opt_ const WSD_EVENTING_EXPIRES *pExpires,
            _In_opt_ const WSDXML_ELEMENT *pAny,
            _Outptr_opt_ WSD_EVENTING_EXPIRES **ppExpires,
            _Outptr_opt_ WSDXML_ELEMENT **ppAny);
        HRESULT ( STDMETHODCALLTYPE *BeginRenewMultipleOperations )(
            IWSDServiceProxyEventing * This,
            _In_reads_(dwOperationCount) const WSD_OPERATION *pOperations,
                       DWORD dwOperationCount,
            _In_opt_ const WSD_EVENTING_EXPIRES *pExpires,
            _In_opt_ const WSDXML_ELEMENT *pAny,
            _In_opt_ IUnknown *pAsyncState,
            _In_opt_ IWSDAsyncCallback *pAsyncCallback,
            _Outptr_ IWSDAsyncResult **ppResult);
        HRESULT ( STDMETHODCALLTYPE *EndRenewMultipleOperations )(
            IWSDServiceProxyEventing * This,
            _In_reads_(dwOperationCount) const WSD_OPERATION *pOperations,
                       DWORD dwOperationCount,
            _In_ IWSDAsyncResult *pResult,
            _Outptr_opt_ WSD_EVENTING_EXPIRES **ppExpires,
            _Outptr_opt_ WSDXML_ELEMENT **ppAny);
        HRESULT ( STDMETHODCALLTYPE *GetStatusForMultipleOperations )(
            IWSDServiceProxyEventing * This,
            _In_reads_(dwOperationCount) const WSD_OPERATION *pOperations,
                       DWORD dwOperationCount,
            _In_opt_ const WSDXML_ELEMENT *pAny,
            _Outptr_opt_ WSD_EVENTING_EXPIRES **ppExpires,
            _Outptr_opt_ WSDXML_ELEMENT **ppAny);
        HRESULT ( STDMETHODCALLTYPE *BeginGetStatusForMultipleOperations )(
            IWSDServiceProxyEventing * This,
            _In_reads_(dwOperationCount) const WSD_OPERATION *pOperations,
                       DWORD dwOperationCount,
            _In_opt_ const WSDXML_ELEMENT *pAny,
            _In_opt_ IUnknown *pAsyncState,
            _In_opt_ IWSDAsyncCallback *pAsyncCallback,
            _Outptr_ IWSDAsyncResult **ppResult);
        HRESULT ( STDMETHODCALLTYPE *EndGetStatusForMultipleOperations )(
            IWSDServiceProxyEventing * This,
            _In_reads_(dwOperationCount) const WSD_OPERATION *pOperations,
                       DWORD dwOperationCount,
            _In_ IWSDAsyncResult *pResult,
            _Outptr_opt_ WSD_EVENTING_EXPIRES **ppExpires,
            _Outptr_opt_ WSDXML_ELEMENT **ppAny);
        END_INTERFACE
    } IWSDServiceProxyEventingVtbl;
    interface IWSDServiceProxyEventing
    {
        CONST_VTBL struct IWSDServiceProxyEventingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMetadata(This,MetadataOut) )
    ( (This)->lpVtbl -> BeginGetMetadata(This,ppResult) )
    ( (This)->lpVtbl -> EndGetMetadata(This,pResult,ppMetadata) )
    ( (This)->lpVtbl -> GetServiceMetadata(This,ppServiceMetadata) )
    ( (This)->lpVtbl -> SubscribeToOperation(This,pOperation,pUnknown,pAny,ppAny) )
    ( (This)->lpVtbl -> UnsubscribeToOperation(This,pOperation) )
    ( (This)->lpVtbl -> SetEventingStatusCallback(This,pStatus) )
    ( (This)->lpVtbl -> GetEndpointProxy(This,ppProxy) )
    ( (This)->lpVtbl -> SubscribeToMultipleOperations(This,pOperations,dwOperationCount,pUnknown,pExpires,pAny,ppExpires,ppAny) )
    ( (This)->lpVtbl -> BeginSubscribeToMultipleOperations(This,pOperations,dwOperationCount,pUnknown,pExpires,pAny,pAsyncState,pAsyncCallback,ppResult) )
    ( (This)->lpVtbl -> EndSubscribeToMultipleOperations(This,pOperations,dwOperationCount,pResult,ppExpires,ppAny) )
    ( (This)->lpVtbl -> UnsubscribeToMultipleOperations(This,pOperations,dwOperationCount,pAny) )
    ( (This)->lpVtbl -> BeginUnsubscribeToMultipleOperations(This,pOperations,dwOperationCount,pAny,pAsyncState,pAsyncCallback,ppResult) )
    ( (This)->lpVtbl -> EndUnsubscribeToMultipleOperations(This,pOperations,dwOperationCount,pResult) )
    ( (This)->lpVtbl -> RenewMultipleOperations(This,pOperations,dwOperationCount,pExpires,pAny,ppExpires,ppAny) )
    ( (This)->lpVtbl -> BeginRenewMultipleOperations(This,pOperations,dwOperationCount,pExpires,pAny,pAsyncState,pAsyncCallback,ppResult) )
    ( (This)->lpVtbl -> EndRenewMultipleOperations(This,pOperations,dwOperationCount,pResult,ppExpires,ppAny) )
    ( (This)->lpVtbl -> GetStatusForMultipleOperations(This,pOperations,dwOperationCount,pAny,ppExpires,ppAny) )
    ( (This)->lpVtbl -> BeginGetStatusForMultipleOperations(This,pOperations,dwOperationCount,pAny,pAsyncState,pAsyncCallback,ppResult) )
    ( (This)->lpVtbl -> EndGetStatusForMultipleOperations(This,pOperations,dwOperationCount,pResult,ppExpires,ppAny) )
extern RPC_IF_HANDLE __MIDL_itf_wsdclient_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdclient_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IWSDDeviceProxy;
    typedef struct IWSDDeviceProxyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDDeviceProxy * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDDeviceProxy * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDDeviceProxy * This);
        HRESULT ( STDMETHODCALLTYPE *Init )(
            IWSDDeviceProxy * This,
            _In_ LPCWSTR pszDeviceId,
                       IWSDAddress *pDeviceAddress,
            _In_ LPCWSTR pszLocalId,
            _In_opt_ IWSDXMLContext *pContext,
            _In_opt_ IWSDDeviceProxy *pSponsor);
        HRESULT ( STDMETHODCALLTYPE *BeginGetMetadata )(
            IWSDDeviceProxy * This,
            _Outptr_ IWSDAsyncResult **ppResult);
        HRESULT ( STDMETHODCALLTYPE *EndGetMetadata )(
            IWSDDeviceProxy * This,
                       IWSDAsyncResult *pResult);
        HRESULT ( STDMETHODCALLTYPE *GetHostMetadata )(
            IWSDDeviceProxy * This,
            _Outptr_ WSD_HOST_METADATA **ppHostMetadata);
        HRESULT ( STDMETHODCALLTYPE *GetThisModelMetadata )(
            IWSDDeviceProxy * This,
            _Outptr_ WSD_THIS_MODEL_METADATA **ppManufacturerMetadata);
        HRESULT ( STDMETHODCALLTYPE *GetThisDeviceMetadata )(
            IWSDDeviceProxy * This,
            _Outptr_ WSD_THIS_DEVICE_METADATA **ppThisDeviceMetadata);
        HRESULT ( STDMETHODCALLTYPE *GetAllMetadata )(
            IWSDDeviceProxy * This,
            _Outptr_ WSD_METADATA_SECTION_LIST **ppMetadata);
        HRESULT ( STDMETHODCALLTYPE *GetServiceProxyById )(
            IWSDDeviceProxy * This,
            _In_ LPCWSTR pszServiceId,
            _Outptr_ IWSDServiceProxy **ppServiceProxy);
        HRESULT ( STDMETHODCALLTYPE *GetServiceProxyByType )(
            IWSDDeviceProxy * This,
                       const WSDXML_NAME *pType,
            _Outptr_ IWSDServiceProxy **ppServiceProxy);
        HRESULT ( STDMETHODCALLTYPE *GetEndpointProxy )(
            IWSDDeviceProxy * This,
            _Outptr_ IWSDEndpointProxy **ppProxy);
        END_INTERFACE
    } IWSDDeviceProxyVtbl;
    interface IWSDDeviceProxy
    {
        CONST_VTBL struct IWSDDeviceProxyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Init(This,pszDeviceId,pDeviceAddress,pszLocalId,pContext,pSponsor) )
    ( (This)->lpVtbl -> BeginGetMetadata(This,ppResult) )
    ( (This)->lpVtbl -> EndGetMetadata(This,pResult) )
    ( (This)->lpVtbl -> GetHostMetadata(This,ppHostMetadata) )
    ( (This)->lpVtbl -> GetThisModelMetadata(This,ppManufacturerMetadata) )
    ( (This)->lpVtbl -> GetThisDeviceMetadata(This,ppThisDeviceMetadata) )
    ( (This)->lpVtbl -> GetAllMetadata(This,ppMetadata) )
    ( (This)->lpVtbl -> GetServiceProxyById(This,pszServiceId,ppServiceProxy) )
    ( (This)->lpVtbl -> GetServiceProxyByType(This,pType,ppServiceProxy) )
    ( (This)->lpVtbl -> GetEndpointProxy(This,ppProxy) )
EXTERN_C const IID IID_IWSDAsyncResult;
    typedef struct IWSDAsyncResultVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDAsyncResult * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDAsyncResult * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDAsyncResult * This);
        HRESULT ( STDMETHODCALLTYPE *SetCallback )(
            IWSDAsyncResult * This,
                       IWSDAsyncCallback *pCallback,
                       IUnknown *pAsyncState);
        HRESULT ( STDMETHODCALLTYPE *SetWaitHandle )(
            IWSDAsyncResult * This,
                       HANDLE hWaitHandle);
        HRESULT ( STDMETHODCALLTYPE *HasCompleted )(
            IWSDAsyncResult * This);
        HRESULT ( STDMETHODCALLTYPE *GetAsyncState )(
            IWSDAsyncResult * This,
            _Outptr_ IUnknown **ppAsyncState);
        HRESULT ( STDMETHODCALLTYPE *Abort )(
            IWSDAsyncResult * This);
        HRESULT ( STDMETHODCALLTYPE *GetEvent )(
            IWSDAsyncResult * This,
            _Out_ WSD_EVENT *pEvent);
        HRESULT ( STDMETHODCALLTYPE *GetEndpointProxy )(
            IWSDAsyncResult * This,
            _Outptr_ IWSDEndpointProxy **ppEndpoint);
        END_INTERFACE
    } IWSDAsyncResultVtbl;
    interface IWSDAsyncResult
    {
        CONST_VTBL struct IWSDAsyncResultVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetCallback(This,pCallback,pAsyncState) )
    ( (This)->lpVtbl -> SetWaitHandle(This,hWaitHandle) )
    ( (This)->lpVtbl -> HasCompleted(This) )
    ( (This)->lpVtbl -> GetAsyncState(This,ppAsyncState) )
    ( (This)->lpVtbl -> Abort(This) )
    ( (This)->lpVtbl -> GetEvent(This,pEvent) )
    ( (This)->lpVtbl -> GetEndpointProxy(This,ppEndpoint) )
EXTERN_C const IID IID_IWSDAsyncCallback;
    typedef struct IWSDAsyncCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDAsyncCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDAsyncCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDAsyncCallback * This);
        HRESULT ( STDMETHODCALLTYPE *AsyncOperationComplete )(
            IWSDAsyncCallback * This,
                       IWSDAsyncResult *pAsyncResult,
                       IUnknown *pAsyncState);
        END_INTERFACE
    } IWSDAsyncCallbackVtbl;
    interface IWSDAsyncCallback
    {
        CONST_VTBL struct IWSDAsyncCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AsyncOperationComplete(This,pAsyncResult,pAsyncState) )
EXTERN_C const IID IID_IWSDEventingStatus;
    typedef struct IWSDEventingStatusVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDEventingStatus * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDEventingStatus * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDEventingStatus * This);
        void ( STDMETHODCALLTYPE *SubscriptionRenewed )(
            IWSDEventingStatus * This,
            _In_ LPCWSTR pszSubscriptionAction);
        void ( STDMETHODCALLTYPE *SubscriptionRenewalFailed )(
            IWSDEventingStatus * This,
            _In_ LPCWSTR pszSubscriptionAction,
                       HRESULT hr);
        void ( STDMETHODCALLTYPE *SubscriptionEnded )(
            IWSDEventingStatus * This,
            _In_ LPCWSTR pszSubscriptionAction);
        END_INTERFACE
    } IWSDEventingStatusVtbl;
    interface IWSDEventingStatus
    {
        CONST_VTBL struct IWSDEventingStatusVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SubscriptionRenewed(This,pszSubscriptionAction) )
    ( (This)->lpVtbl -> SubscriptionRenewalFailed(This,pszSubscriptionAction,hr) )
    ( (This)->lpVtbl -> SubscriptionEnded(This,pszSubscriptionAction) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wsdclient_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdclient_0000_0008_v0_0_s_ifspec;
}
