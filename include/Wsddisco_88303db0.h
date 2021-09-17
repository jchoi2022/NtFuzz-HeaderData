#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWSDiscoveryProvider IWSDiscoveryProvider;
typedef interface IWSDiscoveryProviderNotify IWSDiscoveryProviderNotify;
typedef interface IWSDiscoveredService IWSDiscoveredService;
typedef interface IWSDiscoveryPublisher IWSDiscoveryPublisher;
typedef interface IWSDiscoveryPublisherNotify IWSDiscoveryPublisherNotify;
typedef interface IWSDScopeMatchingRule IWSDScopeMatchingRule;
#include "objidl.h"
#include "wsdxmldom.h"
#include "wsdtypes.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
HRESULT WINAPI
WSDCreateDiscoveryProvider(
    IWSDXMLContext* pContext,
    _Outptr_ IWSDiscoveryProvider** ppProvider);
HRESULT WINAPI
WSDCreateDiscoveryProvider2(
    IWSDXMLContext* pContext,
    _In_reads_opt_(dwConfigParamCount) WSD_CONFIG_PARAM* pConfigParams,
    DWORD dwConfigParamCount,
    _Outptr_ IWSDiscoveryProvider** ppProvider);
extern RPC_IF_HANDLE __MIDL_itf_wsddisco_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsddisco_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWSDiscoveryProvider;
    typedef struct IWSDiscoveryProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDiscoveryProvider * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDiscoveryProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDiscoveryProvider * This);
        HRESULT ( STDMETHODCALLTYPE *SetAddressFamily )(
            IWSDiscoveryProvider * This,
                       DWORD dwAddressFamily);
        HRESULT ( STDMETHODCALLTYPE *Attach )(
            IWSDiscoveryProvider * This,
                       IWSDiscoveryProviderNotify *pSink);
        HRESULT ( STDMETHODCALLTYPE *Detach )(
            IWSDiscoveryProvider * This);
        HRESULT ( STDMETHODCALLTYPE *SearchById )(
            IWSDiscoveryProvider * This,
            _In_ LPCWSTR pszId,
            _In_opt_ LPCWSTR pszTag);
        HRESULT ( STDMETHODCALLTYPE *SearchByAddress )(
            IWSDiscoveryProvider * This,
            _In_ LPCWSTR pszAddress,
            _In_opt_ LPCWSTR pszTag);
        HRESULT ( STDMETHODCALLTYPE *SearchByType )(
            IWSDiscoveryProvider * This,
            _In_opt_ const WSD_NAME_LIST *pTypesList,
            _In_opt_ const WSD_URI_LIST *pScopesList,
            _In_opt_ LPCWSTR pszMatchBy,
            _In_opt_ LPCWSTR pszTag);
        HRESULT ( STDMETHODCALLTYPE *GetXMLContext )(
            IWSDiscoveryProvider * This,
            _Outptr_ IWSDXMLContext **ppContext);
        END_INTERFACE
    } IWSDiscoveryProviderVtbl;
    interface IWSDiscoveryProvider
    {
        CONST_VTBL struct IWSDiscoveryProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAddressFamily(This,dwAddressFamily) )
    ( (This)->lpVtbl -> Attach(This,pSink) )
    ( (This)->lpVtbl -> Detach(This) )
    ( (This)->lpVtbl -> SearchById(This,pszId,pszTag) )
    ( (This)->lpVtbl -> SearchByAddress(This,pszAddress,pszTag) )
    ( (This)->lpVtbl -> SearchByType(This,pTypesList,pScopesList,pszMatchBy,pszTag) )
    ( (This)->lpVtbl -> GetXMLContext(This,ppContext) )
EXTERN_C const IID IID_IWSDiscoveryProviderNotify;
    typedef struct IWSDiscoveryProviderNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDiscoveryProviderNotify * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDiscoveryProviderNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDiscoveryProviderNotify * This);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            IWSDiscoveryProviderNotify * This,
                       IWSDiscoveredService *pService);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            IWSDiscoveryProviderNotify * This,
                       IWSDiscoveredService *pService);
        HRESULT ( STDMETHODCALLTYPE *SearchFailed )(
            IWSDiscoveryProviderNotify * This,
                       HRESULT hr,
            _In_opt_ LPCWSTR pszTag);
        HRESULT ( STDMETHODCALLTYPE *SearchComplete )(
            IWSDiscoveryProviderNotify * This,
            _In_opt_ LPCWSTR pszTag);
        END_INTERFACE
    } IWSDiscoveryProviderNotifyVtbl;
    interface IWSDiscoveryProviderNotify
    {
        CONST_VTBL struct IWSDiscoveryProviderNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Add(This,pService) )
    ( (This)->lpVtbl -> Remove(This,pService) )
    ( (This)->lpVtbl -> SearchFailed(This,hr,pszTag) )
    ( (This)->lpVtbl -> SearchComplete(This,pszTag) )
EXTERN_C const IID IID_IWSDiscoveredService;
    typedef struct IWSDiscoveredServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDiscoveredService * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDiscoveredService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDiscoveredService * This);
        HRESULT ( STDMETHODCALLTYPE *GetEndpointReference )(
            IWSDiscoveredService * This,
            _Outptr_ WSD_ENDPOINT_REFERENCE **ppEndpointReference);
        HRESULT ( STDMETHODCALLTYPE *GetTypes )(
            IWSDiscoveredService * This,
            _Outptr_ WSD_NAME_LIST **ppTypesList);
        HRESULT ( STDMETHODCALLTYPE *GetScopes )(
            IWSDiscoveredService * This,
            _Outptr_ WSD_URI_LIST **ppScopesList);
        HRESULT ( STDMETHODCALLTYPE *GetXAddrs )(
            IWSDiscoveredService * This,
            _Outptr_ WSD_URI_LIST **ppXAddrsList);
        HRESULT ( STDMETHODCALLTYPE *GetMetadataVersion )(
            IWSDiscoveredService * This,
            _Out_ ULONGLONG *pullMetadataVersion);
        HRESULT ( STDMETHODCALLTYPE *GetExtendedDiscoXML )(
            IWSDiscoveredService * This,
            _Outptr_ WSDXML_ELEMENT **ppHeaderAny,
            _Outptr_ WSDXML_ELEMENT **ppBodyAny);
        HRESULT ( STDMETHODCALLTYPE *GetProbeResolveTag )(
            IWSDiscoveredService * This,
            _Outptr_ LPCWSTR *ppszTag);
        HRESULT ( STDMETHODCALLTYPE *GetRemoteTransportAddress )(
            IWSDiscoveredService * This,
            _Outptr_ LPCWSTR *ppszRemoteTransportAddress);
        HRESULT ( STDMETHODCALLTYPE *GetLocalTransportAddress )(
            IWSDiscoveredService * This,
            _Outptr_ LPCWSTR *ppszLocalTransportAddress);
        HRESULT ( STDMETHODCALLTYPE *GetLocalInterfaceGUID )(
            IWSDiscoveredService * This,
            _Out_ GUID *pGuid);
        HRESULT ( STDMETHODCALLTYPE *GetInstanceId )(
            IWSDiscoveredService * This,
            _Out_ ULONGLONG *pullInstanceId);
        END_INTERFACE
    } IWSDiscoveredServiceVtbl;
    interface IWSDiscoveredService
    {
        CONST_VTBL struct IWSDiscoveredServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEndpointReference(This,ppEndpointReference) )
    ( (This)->lpVtbl -> GetTypes(This,ppTypesList) )
    ( (This)->lpVtbl -> GetScopes(This,ppScopesList) )
    ( (This)->lpVtbl -> GetXAddrs(This,ppXAddrsList) )
    ( (This)->lpVtbl -> GetMetadataVersion(This,pullMetadataVersion) )
    ( (This)->lpVtbl -> GetExtendedDiscoXML(This,ppHeaderAny,ppBodyAny) )
    ( (This)->lpVtbl -> GetProbeResolveTag(This,ppszTag) )
    ( (This)->lpVtbl -> GetRemoteTransportAddress(This,ppszRemoteTransportAddress) )
    ( (This)->lpVtbl -> GetLocalTransportAddress(This,ppszLocalTransportAddress) )
    ( (This)->lpVtbl -> GetLocalInterfaceGUID(This,pGuid) )
    ( (This)->lpVtbl -> GetInstanceId(This,pullInstanceId) )
HRESULT WINAPI
WSDCreateDiscoveryPublisher(
    IWSDXMLContext* pContext,
    _Outptr_ IWSDiscoveryPublisher** ppPublisher);
HRESULT WINAPI
WSDCreateDiscoveryPublisher2(
    IWSDXMLContext* pContext,
    _In_reads_opt_(dwConfigParamCount) WSD_CONFIG_PARAM* pConfigParams,
    DWORD dwConfigParamCount,
    _Outptr_ IWSDiscoveryPublisher** ppPublisher);
extern RPC_IF_HANDLE __MIDL_itf_wsddisco_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsddisco_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IWSDiscoveryPublisher;
    typedef struct IWSDiscoveryPublisherVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDiscoveryPublisher * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDiscoveryPublisher * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDiscoveryPublisher * This);
        HRESULT ( STDMETHODCALLTYPE *SetAddressFamily )(
            IWSDiscoveryPublisher * This,
                       DWORD dwAddressFamily);
        HRESULT ( STDMETHODCALLTYPE *RegisterNotificationSink )(
            IWSDiscoveryPublisher * This,
                       IWSDiscoveryPublisherNotify *pSink);
        HRESULT ( STDMETHODCALLTYPE *UnRegisterNotificationSink )(
            IWSDiscoveryPublisher * This,
                       IWSDiscoveryPublisherNotify *pSink);
        HRESULT ( STDMETHODCALLTYPE *Publish )(
            IWSDiscoveryPublisher * This,
            _In_ LPCWSTR pszId,
                       ULONGLONG ullMetadataVersion,
                       ULONGLONG ullInstanceId,
                       ULONGLONG ullMessageNumber,
            _In_opt_ LPCWSTR pszSessionId,
            _In_opt_ const WSD_NAME_LIST *pTypesList,
            _In_opt_ const WSD_URI_LIST *pScopesList,
            _In_opt_ const WSD_URI_LIST *pXAddrsList);
        HRESULT ( STDMETHODCALLTYPE *UnPublish )(
            IWSDiscoveryPublisher * This,
            _In_ LPCWSTR pszId,
                       ULONGLONG ullInstanceId,
                       ULONGLONG ullMessageNumber,
            _In_opt_ LPCWSTR pszSessionId,
            _In_opt_ const WSDXML_ELEMENT *pAny);
        HRESULT ( STDMETHODCALLTYPE *MatchProbe )(
            IWSDiscoveryPublisher * This,
                       const WSD_SOAP_MESSAGE *pProbeMessage,
                       IWSDMessageParameters *pMessageParameters,
            _In_ LPCWSTR pszId,
                       ULONGLONG ullMetadataVersion,
                       ULONGLONG ullInstanceId,
                       ULONGLONG ullMessageNumber,
            _In_opt_ LPCWSTR pszSessionId,
            _In_opt_ const WSD_NAME_LIST *pTypesList,
            _In_opt_ const WSD_URI_LIST *pScopesList,
            _In_opt_ const WSD_URI_LIST *pXAddrsList);
        HRESULT ( STDMETHODCALLTYPE *MatchResolve )(
            IWSDiscoveryPublisher * This,
                       const WSD_SOAP_MESSAGE *pResolveMessage,
                       IWSDMessageParameters *pMessageParameters,
            _In_ LPCWSTR pszId,
                       ULONGLONG ullMetadataVersion,
                       ULONGLONG ullInstanceId,
                       ULONGLONG ullMessageNumber,
            _In_opt_ LPCWSTR pszSessionId,
            _In_opt_ const WSD_NAME_LIST *pTypesList,
            _In_opt_ const WSD_URI_LIST *pScopesList,
            _In_opt_ const WSD_URI_LIST *pXAddrsList);
        HRESULT ( STDMETHODCALLTYPE *PublishEx )(
            IWSDiscoveryPublisher * This,
            _In_ LPCWSTR pszId,
                       ULONGLONG ullMetadataVersion,
                       ULONGLONG ullInstanceId,
                       ULONGLONG ullMessageNumber,
            _In_opt_ LPCWSTR pszSessionId,
            _In_opt_ const WSD_NAME_LIST *pTypesList,
            _In_opt_ const WSD_URI_LIST *pScopesList,
            _In_opt_ const WSD_URI_LIST *pXAddrsList,
            _In_opt_ const WSDXML_ELEMENT *pHeaderAny,
            _In_opt_ const WSDXML_ELEMENT *pReferenceParameterAny,
            _In_opt_ const WSDXML_ELEMENT *pPolicyAny,
            _In_opt_ const WSDXML_ELEMENT *pEndpointReferenceAny,
            _In_opt_ const WSDXML_ELEMENT *pAny);
        HRESULT ( STDMETHODCALLTYPE *MatchProbeEx )(
            IWSDiscoveryPublisher * This,
                       const WSD_SOAP_MESSAGE *pProbeMessage,
                       IWSDMessageParameters *pMessageParameters,
            _In_ LPCWSTR pszId,
                       ULONGLONG ullMetadataVersion,
                       ULONGLONG ullInstanceId,
                       ULONGLONG ullMessageNumber,
            _In_opt_ LPCWSTR pszSessionId,
            _In_opt_ const WSD_NAME_LIST *pTypesList,
            _In_opt_ const WSD_URI_LIST *pScopesList,
            _In_opt_ const WSD_URI_LIST *pXAddrsList,
            _In_opt_ const WSDXML_ELEMENT *pHeaderAny,
            _In_opt_ const WSDXML_ELEMENT *pReferenceParameterAny,
            _In_opt_ const WSDXML_ELEMENT *pPolicyAny,
            _In_opt_ const WSDXML_ELEMENT *pEndpointReferenceAny,
            _In_opt_ const WSDXML_ELEMENT *pAny);
        HRESULT ( STDMETHODCALLTYPE *MatchResolveEx )(
            IWSDiscoveryPublisher * This,
                       const WSD_SOAP_MESSAGE *pResolveMessage,
                       IWSDMessageParameters *pMessageParameters,
            _In_ LPCWSTR pszId,
                       ULONGLONG ullMetadataVersion,
                       ULONGLONG ullInstanceId,
                       ULONGLONG ullMessageNumber,
            _In_opt_ LPCWSTR pszSessionId,
            _In_opt_ const WSD_NAME_LIST *pTypesList,
            _In_opt_ const WSD_URI_LIST *pScopesList,
            _In_opt_ const WSD_URI_LIST *pXAddrsList,
            _In_opt_ const WSDXML_ELEMENT *pHeaderAny,
            _In_opt_ const WSDXML_ELEMENT *pReferenceParameterAny,
            _In_opt_ const WSDXML_ELEMENT *pPolicyAny,
            _In_opt_ const WSDXML_ELEMENT *pEndpointReferenceAny,
            _In_opt_ const WSDXML_ELEMENT *pAny);
        HRESULT ( STDMETHODCALLTYPE *RegisterScopeMatchingRule )(
            IWSDiscoveryPublisher * This,
                       IWSDScopeMatchingRule *pScopeMatchingRule);
        HRESULT ( STDMETHODCALLTYPE *UnRegisterScopeMatchingRule )(
            IWSDiscoveryPublisher * This,
                       IWSDScopeMatchingRule *pScopeMatchingRule);
        HRESULT ( STDMETHODCALLTYPE *GetXMLContext )(
            IWSDiscoveryPublisher * This,
            _Outptr_ IWSDXMLContext **ppContext);
        END_INTERFACE
    } IWSDiscoveryPublisherVtbl;
    interface IWSDiscoveryPublisher
    {
        CONST_VTBL struct IWSDiscoveryPublisherVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAddressFamily(This,dwAddressFamily) )
    ( (This)->lpVtbl -> RegisterNotificationSink(This,pSink) )
    ( (This)->lpVtbl -> UnRegisterNotificationSink(This,pSink) )
    ( (This)->lpVtbl -> Publish(This,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList) )
    ( (This)->lpVtbl -> UnPublish(This,pszId,ullInstanceId,ullMessageNumber,pszSessionId,pAny) )
    ( (This)->lpVtbl -> MatchProbe(This,pProbeMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList) )
    ( (This)->lpVtbl -> MatchResolve(This,pResolveMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList) )
    ( (This)->lpVtbl -> PublishEx(This,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList,pHeaderAny,pReferenceParameterAny,pPolicyAny,pEndpointReferenceAny,pAny) )
    ( (This)->lpVtbl -> MatchProbeEx(This,pProbeMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList,pHeaderAny,pReferenceParameterAny,pPolicyAny,pEndpointReferenceAny,pAny) )
    ( (This)->lpVtbl -> MatchResolveEx(This,pResolveMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList,pHeaderAny,pReferenceParameterAny,pPolicyAny,pEndpointReferenceAny,pAny) )
    ( (This)->lpVtbl -> RegisterScopeMatchingRule(This,pScopeMatchingRule) )
    ( (This)->lpVtbl -> UnRegisterScopeMatchingRule(This,pScopeMatchingRule) )
    ( (This)->lpVtbl -> GetXMLContext(This,ppContext) )
EXTERN_C const IID IID_IWSDiscoveryPublisherNotify;
    typedef struct IWSDiscoveryPublisherNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDiscoveryPublisherNotify * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDiscoveryPublisherNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDiscoveryPublisherNotify * This);
        HRESULT ( STDMETHODCALLTYPE *ProbeHandler )(
            IWSDiscoveryPublisherNotify * This,
                       const WSD_SOAP_MESSAGE *pSoap,
                       IWSDMessageParameters *pMessageParameters);
        HRESULT ( STDMETHODCALLTYPE *ResolveHandler )(
            IWSDiscoveryPublisherNotify * This,
                       const WSD_SOAP_MESSAGE *pSoap,
                       IWSDMessageParameters *pMessageParameters);
        END_INTERFACE
    } IWSDiscoveryPublisherNotifyVtbl;
    interface IWSDiscoveryPublisherNotify
    {
        CONST_VTBL struct IWSDiscoveryPublisherNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ProbeHandler(This,pSoap,pMessageParameters) )
    ( (This)->lpVtbl -> ResolveHandler(This,pSoap,pMessageParameters) )
EXTERN_C const IID IID_IWSDScopeMatchingRule;
    typedef struct IWSDScopeMatchingRuleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDScopeMatchingRule * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDScopeMatchingRule * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDScopeMatchingRule * This);
        HRESULT ( STDMETHODCALLTYPE *GetScopeRule )(
            IWSDScopeMatchingRule * This,
            _Outptr_ LPCWSTR *ppszScopeMatchingRule);
        HRESULT ( STDMETHODCALLTYPE *MatchScopes )(
            IWSDScopeMatchingRule * This,
            _In_ LPCWSTR pszScope1,
            _In_ LPCWSTR pszScope2,
            _Out_ BOOL *pfMatch);
        END_INTERFACE
    } IWSDScopeMatchingRuleVtbl;
    interface IWSDScopeMatchingRule
    {
        CONST_VTBL struct IWSDScopeMatchingRuleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetScopeRule(This,ppszScopeMatchingRule) )
    ( (This)->lpVtbl -> MatchScopes(This,pszScope1,pszScope2,pfMatch) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wsddisco_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsddisco_0000_0006_v0_0_s_ifspec;
}
