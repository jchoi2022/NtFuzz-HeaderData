#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IFaxJobStatus IFaxJobStatus;
typedef interface IFaxServer IFaxServer;
typedef interface IFaxDeviceProviders IFaxDeviceProviders;
typedef interface IFaxDevices IFaxDevices;
typedef interface IFaxInboundRouting IFaxInboundRouting;
typedef interface IFaxFolders IFaxFolders;
typedef interface IFaxLoggingOptions IFaxLoggingOptions;
typedef interface IFaxActivity IFaxActivity;
typedef interface IFaxOutboundRouting IFaxOutboundRouting;
typedef interface IFaxReceiptOptions IFaxReceiptOptions;
typedef interface IFaxSecurity IFaxSecurity;
typedef interface IFaxDocument IFaxDocument;
typedef interface IFaxSender IFaxSender;
typedef interface IFaxRecipient IFaxRecipient;
typedef interface IFaxRecipients IFaxRecipients;
typedef interface IFaxIncomingArchive IFaxIncomingArchive;
typedef interface IFaxIncomingQueue IFaxIncomingQueue;
typedef interface IFaxOutgoingArchive IFaxOutgoingArchive;
typedef interface IFaxOutgoingQueue IFaxOutgoingQueue;
typedef interface IFaxIncomingMessageIterator IFaxIncomingMessageIterator;
typedef interface IFaxIncomingMessage IFaxIncomingMessage;
typedef interface IFaxOutgoingJobs IFaxOutgoingJobs;
typedef interface IFaxOutgoingJob IFaxOutgoingJob;
typedef interface IFaxOutgoingMessageIterator IFaxOutgoingMessageIterator;
typedef interface IFaxOutgoingMessage IFaxOutgoingMessage;
typedef interface IFaxIncomingJobs IFaxIncomingJobs;
typedef interface IFaxIncomingJob IFaxIncomingJob;
typedef interface IFaxDeviceProvider IFaxDeviceProvider;
typedef interface IFaxDevice IFaxDevice;
typedef interface IFaxActivityLogging IFaxActivityLogging;
typedef interface IFaxEventLogging IFaxEventLogging;
typedef interface IFaxOutboundRoutingGroups IFaxOutboundRoutingGroups;
typedef interface IFaxOutboundRoutingGroup IFaxOutboundRoutingGroup;
typedef interface IFaxDeviceIds IFaxDeviceIds;
typedef interface IFaxOutboundRoutingRules IFaxOutboundRoutingRules;
typedef interface IFaxOutboundRoutingRule IFaxOutboundRoutingRule;
typedef interface IFaxInboundRoutingExtensions IFaxInboundRoutingExtensions;
typedef interface IFaxInboundRoutingExtension IFaxInboundRoutingExtension;
typedef interface IFaxInboundRoutingMethods IFaxInboundRoutingMethods;
typedef interface IFaxInboundRoutingMethod IFaxInboundRoutingMethod;
typedef interface IFaxDocument2 IFaxDocument2;
typedef interface IFaxConfiguration IFaxConfiguration;
typedef interface IFaxServer2 IFaxServer2;
typedef interface IFaxAccountSet IFaxAccountSet;
typedef interface IFaxAccounts IFaxAccounts;
typedef interface IFaxAccount IFaxAccount;
typedef interface IFaxOutgoingJob2 IFaxOutgoingJob2;
typedef interface IFaxAccountFolders IFaxAccountFolders;
typedef interface IFaxAccountIncomingQueue IFaxAccountIncomingQueue;
typedef interface IFaxAccountOutgoingQueue IFaxAccountOutgoingQueue;
typedef interface IFaxOutgoingMessage2 IFaxOutgoingMessage2;
typedef interface IFaxAccountIncomingArchive IFaxAccountIncomingArchive;
typedef interface IFaxAccountOutgoingArchive IFaxAccountOutgoingArchive;
typedef interface IFaxSecurity2 IFaxSecurity2;
typedef interface IFaxIncomingMessage2 IFaxIncomingMessage2;
typedef interface IFaxServerNotify IFaxServerNotify;
typedef interface _IFaxServerNotify2 _IFaxServerNotify2;
typedef interface IFaxServerNotify2 IFaxServerNotify2;
typedef interface _IFaxAccountNotify _IFaxAccountNotify;
typedef interface IFaxAccountNotify IFaxAccountNotify;
typedef class FaxServer FaxServer;
typedef class FaxDeviceProviders FaxDeviceProviders;
typedef class FaxDevices FaxDevices;
typedef class FaxInboundRouting FaxInboundRouting;
typedef class FaxFolders FaxFolders;
typedef class FaxLoggingOptions FaxLoggingOptions;
typedef class FaxActivity FaxActivity;
typedef class FaxOutboundRouting FaxOutboundRouting;
typedef class FaxReceiptOptions FaxReceiptOptions;
typedef class FaxSecurity FaxSecurity;
typedef class FaxDocument FaxDocument;
typedef class FaxSender FaxSender;
typedef class FaxRecipients FaxRecipients;
typedef class FaxIncomingArchive FaxIncomingArchive;
typedef class FaxIncomingQueue FaxIncomingQueue;
typedef class FaxOutgoingArchive FaxOutgoingArchive;
typedef class FaxOutgoingQueue FaxOutgoingQueue;
typedef class FaxIncomingMessageIterator FaxIncomingMessageIterator;
typedef class FaxIncomingMessage FaxIncomingMessage;
typedef class FaxOutgoingJobs FaxOutgoingJobs;
typedef class FaxOutgoingJob FaxOutgoingJob;
typedef class FaxOutgoingMessageIterator FaxOutgoingMessageIterator;
typedef class FaxOutgoingMessage FaxOutgoingMessage;
typedef class FaxIncomingJobs FaxIncomingJobs;
typedef class FaxIncomingJob FaxIncomingJob;
typedef class FaxDeviceProvider FaxDeviceProvider;
typedef class FaxDevice FaxDevice;
typedef class FaxActivityLogging FaxActivityLogging;
typedef class FaxEventLogging FaxEventLogging;
typedef class FaxOutboundRoutingGroups FaxOutboundRoutingGroups;
typedef class FaxOutboundRoutingGroup FaxOutboundRoutingGroup;
typedef class FaxDeviceIds FaxDeviceIds;
typedef class FaxOutboundRoutingRules FaxOutboundRoutingRules;
typedef class FaxOutboundRoutingRule FaxOutboundRoutingRule;
typedef class FaxInboundRoutingExtensions FaxInboundRoutingExtensions;
typedef class FaxInboundRoutingExtension FaxInboundRoutingExtension;
typedef class FaxInboundRoutingMethods FaxInboundRoutingMethods;
typedef class FaxInboundRoutingMethod FaxInboundRoutingMethod;
typedef class FaxJobStatus FaxJobStatus;
typedef class FaxRecipient FaxRecipient;
typedef class FaxConfiguration FaxConfiguration;
typedef class FaxAccountSet FaxAccountSet;
typedef class FaxAccounts FaxAccounts;
typedef class FaxAccount FaxAccount;
typedef class FaxAccountFolders FaxAccountFolders;
typedef class FaxAccountIncomingQueue FaxAccountIncomingQueue;
typedef class FaxAccountOutgoingQueue FaxAccountOutgoingQueue;
typedef class FaxAccountIncomingArchive FaxAccountIncomingArchive;
typedef class FaxAccountOutgoingArchive FaxAccountOutgoingArchive;
typedef class FaxSecurity2 FaxSecurity2;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_faxcomex_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_faxcomex_0000_0000_v0_0_s_ifspec;
typedef
enum FAX_JOB_STATUS_ENUM
    {
        fjsPENDING = 0x1,
        fjsINPROGRESS = 0x2,
        fjsFAILED = 0x8,
        fjsPAUSED = 0x10,
        fjsNOLINE = 0x20,
        fjsRETRYING = 0x40,
        fjsRETRIES_EXCEEDED = 0x80,
        fjsCOMPLETED = 0x100,
        fjsCANCELED = 0x200,
        fjsCANCELING = 0x400,
        fjsROUTING = 0x800
    } FAX_JOB_STATUS_ENUM;
typedef
enum FAX_JOB_EXTENDED_STATUS_ENUM
    {
        fjesNONE = 0,
        fjesDISCONNECTED = ( fjesNONE + 1 ) ,
        fjesINITIALIZING = ( fjesDISCONNECTED + 1 ) ,
        fjesDIALING = ( fjesINITIALIZING + 1 ) ,
        fjesTRANSMITTING = ( fjesDIALING + 1 ) ,
        fjesANSWERED = ( fjesTRANSMITTING + 1 ) ,
        fjesRECEIVING = ( fjesANSWERED + 1 ) ,
        fjesLINE_UNAVAILABLE = ( fjesRECEIVING + 1 ) ,
        fjesBUSY = ( fjesLINE_UNAVAILABLE + 1 ) ,
        fjesNO_ANSWER = ( fjesBUSY + 1 ) ,
        fjesBAD_ADDRESS = ( fjesNO_ANSWER + 1 ) ,
        fjesNO_DIAL_TONE = ( fjesBAD_ADDRESS + 1 ) ,
        fjesFATAL_ERROR = ( fjesNO_DIAL_TONE + 1 ) ,
        fjesCALL_DELAYED = ( fjesFATAL_ERROR + 1 ) ,
        fjesCALL_BLACKLISTED = ( fjesCALL_DELAYED + 1 ) ,
        fjesNOT_FAX_CALL = ( fjesCALL_BLACKLISTED + 1 ) ,
        fjesPARTIALLY_RECEIVED = ( fjesNOT_FAX_CALL + 1 ) ,
        fjesHANDLED = ( fjesPARTIALLY_RECEIVED + 1 ) ,
        fjesCALL_COMPLETED = ( fjesHANDLED + 1 ) ,
        fjesCALL_ABORTED = ( fjesCALL_COMPLETED + 1 ) ,
        fjesPROPRIETARY = 0x1000000
    } FAX_JOB_EXTENDED_STATUS_ENUM;
typedef
enum FAX_JOB_OPERATIONS_ENUM
    {
        fjoVIEW = 0x1,
        fjoPAUSE = 0x2,
        fjoRESUME = 0x4,
        fjoRESTART = 0x8,
        fjoDELETE = 0x10,
        fjoRECIPIENT_INFO = 0x20,
        fjoSENDER_INFO = 0x40
    } FAX_JOB_OPERATIONS_ENUM;
typedef
enum FAX_JOB_TYPE_ENUM
    {
        fjtSEND = 0,
        fjtRECEIVE = ( fjtSEND + 1 ) ,
        fjtROUTING = ( fjtRECEIVE + 1 )
    } FAX_JOB_TYPE_ENUM;
EXTERN_C const IID IID_IFaxJobStatus;
    typedef struct IFaxJobStatusVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxJobStatus * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxJobStatus * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxJobStatus * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxJobStatus * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxJobStatus * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxJobStatus * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxJobStatus * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IFaxJobStatus * This,
                                __RPC__out FAX_JOB_STATUS_ENUM *pStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_Pages )(
            __RPC__in IFaxJobStatus * This,
                                __RPC__out long *plPages);
                                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in IFaxJobStatus * This,
                                __RPC__out long *plSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPage )(
            __RPC__in IFaxJobStatus * This,
                                __RPC__out long *plCurrentPage);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
            __RPC__in IFaxJobStatus * This,
                                __RPC__out long *plDeviceId);
                                        HRESULT ( STDMETHODCALLTYPE *get_CSID )(
            __RPC__in IFaxJobStatus * This,
                                __RPC__deref_out_opt BSTR *pbstrCSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_TSID )(
            __RPC__in IFaxJobStatus * This,
                                __RPC__deref_out_opt BSTR *pbstrTSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExtendedStatusCode )(
            __RPC__in IFaxJobStatus * This,
                                __RPC__out FAX_JOB_EXTENDED_STATUS_ENUM *pExtendedStatusCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExtendedStatus )(
            __RPC__in IFaxJobStatus * This,
                                __RPC__deref_out_opt BSTR *pbstrExtendedStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_AvailableOperations )(
            __RPC__in IFaxJobStatus * This,
                                __RPC__out FAX_JOB_OPERATIONS_ENUM *pAvailableOperations);
                                        HRESULT ( STDMETHODCALLTYPE *get_Retries )(
            __RPC__in IFaxJobStatus * This,
                                __RPC__out long *plRetries);
                                        HRESULT ( STDMETHODCALLTYPE *get_JobType )(
            __RPC__in IFaxJobStatus * This,
                                __RPC__out FAX_JOB_TYPE_ENUM *pJobType);
                                        HRESULT ( STDMETHODCALLTYPE *get_ScheduledTime )(
            __RPC__in IFaxJobStatus * This,
                                __RPC__out DATE *pdateScheduledTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransmissionStart )(
            __RPC__in IFaxJobStatus * This,
                                __RPC__out DATE *pdateTransmissionStart);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransmissionEnd )(
            __RPC__in IFaxJobStatus * This,
                                __RPC__out DATE *pdateTransmissionEnd);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallerId )(
            __RPC__in IFaxJobStatus * This,
                                __RPC__deref_out_opt BSTR *pbstrCallerId);
                                        HRESULT ( STDMETHODCALLTYPE *get_RoutingInformation )(
            __RPC__in IFaxJobStatus * This,
                                __RPC__deref_out_opt BSTR *pbstrRoutingInformation);
        END_INTERFACE
    } IFaxJobStatusVtbl;
    interface IFaxJobStatus
    {
        CONST_VTBL struct IFaxJobStatusVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Status(This,pStatus) )
    ( (This)->lpVtbl -> get_Pages(This,plPages) )
    ( (This)->lpVtbl -> get_Size(This,plSize) )
    ( (This)->lpVtbl -> get_CurrentPage(This,plCurrentPage) )
    ( (This)->lpVtbl -> get_DeviceId(This,plDeviceId) )
    ( (This)->lpVtbl -> get_CSID(This,pbstrCSID) )
    ( (This)->lpVtbl -> get_TSID(This,pbstrTSID) )
    ( (This)->lpVtbl -> get_ExtendedStatusCode(This,pExtendedStatusCode) )
    ( (This)->lpVtbl -> get_ExtendedStatus(This,pbstrExtendedStatus) )
    ( (This)->lpVtbl -> get_AvailableOperations(This,pAvailableOperations) )
    ( (This)->lpVtbl -> get_Retries(This,plRetries) )
    ( (This)->lpVtbl -> get_JobType(This,pJobType) )
    ( (This)->lpVtbl -> get_ScheduledTime(This,pdateScheduledTime) )
    ( (This)->lpVtbl -> get_TransmissionStart(This,pdateTransmissionStart) )
    ( (This)->lpVtbl -> get_TransmissionEnd(This,pdateTransmissionEnd) )
    ( (This)->lpVtbl -> get_CallerId(This,pbstrCallerId) )
    ( (This)->lpVtbl -> get_RoutingInformation(This,pbstrRoutingInformation) )
typedef
enum FAX_SERVER_EVENTS_TYPE_ENUM
    {
        fsetNONE = 0,
        fsetIN_QUEUE = 0x1,
        fsetOUT_QUEUE = 0x2,
        fsetCONFIG = 0x4,
        fsetACTIVITY = 0x8,
        fsetQUEUE_STATE = 0x10,
        fsetIN_ARCHIVE = 0x20,
        fsetOUT_ARCHIVE = 0x40,
        fsetFXSSVC_ENDED = 0x80,
        fsetDEVICE_STATUS = 0x100,
        fsetINCOMING_CALL = 0x200
    } FAX_SERVER_EVENTS_TYPE_ENUM;
typedef
enum FAX_SERVER_APIVERSION_ENUM
    {
        fsAPI_VERSION_0 = 0,
        fsAPI_VERSION_1 = 0x10000,
        fsAPI_VERSION_2 = 0x20000,
        fsAPI_VERSION_3 = 0x30000
    } FAX_SERVER_APIVERSION_ENUM;
EXTERN_C const IID IID_IFaxServer;
    typedef struct IFaxServerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxServer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxServer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxServer * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxServer * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxServer * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxServer * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxServer * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Connect )(
            __RPC__in IFaxServer * This,
                       __RPC__in BSTR bstrServerName);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServerName )(
            __RPC__in IFaxServer * This,
                                __RPC__deref_out_opt BSTR *pbstrServerName);
                               HRESULT ( STDMETHODCALLTYPE *GetDeviceProviders )(
            __RPC__in IFaxServer * This,
                                __RPC__deref_out_opt IFaxDeviceProviders **ppFaxDeviceProviders);
                               HRESULT ( STDMETHODCALLTYPE *GetDevices )(
            __RPC__in IFaxServer * This,
                                __RPC__deref_out_opt IFaxDevices **ppFaxDevices);
                                        HRESULT ( STDMETHODCALLTYPE *get_InboundRouting )(
            __RPC__in IFaxServer * This,
                                __RPC__deref_out_opt IFaxInboundRouting **ppFaxInboundRouting);
                                        HRESULT ( STDMETHODCALLTYPE *get_Folders )(
            __RPC__in IFaxServer * This,
                                __RPC__deref_out_opt IFaxFolders **pFaxFolders);
                                        HRESULT ( STDMETHODCALLTYPE *get_LoggingOptions )(
            __RPC__in IFaxServer * This,
                                __RPC__deref_out_opt IFaxLoggingOptions **ppFaxLoggingOptions);
                                        HRESULT ( STDMETHODCALLTYPE *get_MajorVersion )(
            __RPC__in IFaxServer * This,
                                __RPC__out long *plMajorVersion);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinorVersion )(
            __RPC__in IFaxServer * This,
                                __RPC__out long *plMinorVersion);
                                        HRESULT ( STDMETHODCALLTYPE *get_MajorBuild )(
            __RPC__in IFaxServer * This,
                                __RPC__out long *plMajorBuild);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinorBuild )(
            __RPC__in IFaxServer * This,
                                __RPC__out long *plMinorBuild);
                                        HRESULT ( STDMETHODCALLTYPE *get_Debug )(
            __RPC__in IFaxServer * This,
                                __RPC__out VARIANT_BOOL *pbDebug);
                                        HRESULT ( STDMETHODCALLTYPE *get_Activity )(
            __RPC__in IFaxServer * This,
                                __RPC__deref_out_opt IFaxActivity **ppFaxActivity);
                                        HRESULT ( STDMETHODCALLTYPE *get_OutboundRouting )(
            __RPC__in IFaxServer * This,
                                __RPC__deref_out_opt IFaxOutboundRouting **ppFaxOutboundRouting);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReceiptOptions )(
            __RPC__in IFaxServer * This,
                                __RPC__deref_out_opt IFaxReceiptOptions **ppFaxReceiptOptions);
                                        HRESULT ( STDMETHODCALLTYPE *get_Security )(
            __RPC__in IFaxServer * This,
                                __RPC__deref_out_opt IFaxSecurity **ppFaxSecurity);
                               HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            __RPC__in IFaxServer * This);
                               HRESULT ( STDMETHODCALLTYPE *GetExtensionProperty )(
            __RPC__in IFaxServer * This,
                       __RPC__in BSTR bstrGUID,
                                __RPC__out VARIANT *pvProperty);
                               HRESULT ( STDMETHODCALLTYPE *SetExtensionProperty )(
            __RPC__in IFaxServer * This,
                       __RPC__in BSTR bstrGUID,
                       VARIANT vProperty);
                               HRESULT ( STDMETHODCALLTYPE *ListenToServerEvents )(
            __RPC__in IFaxServer * This,
                       FAX_SERVER_EVENTS_TYPE_ENUM EventTypes);
                               HRESULT ( STDMETHODCALLTYPE *RegisterDeviceProvider )(
            __RPC__in IFaxServer * This,
                       __RPC__in BSTR bstrGUID,
                       __RPC__in BSTR bstrFriendlyName,
                       __RPC__in BSTR bstrImageName,
                       __RPC__in BSTR TspName,
                       long lFSPIVersion);
                               HRESULT ( STDMETHODCALLTYPE *UnregisterDeviceProvider )(
            __RPC__in IFaxServer * This,
                       __RPC__in BSTR bstrUniqueName);
                               HRESULT ( STDMETHODCALLTYPE *RegisterInboundRoutingExtension )(
            __RPC__in IFaxServer * This,
                       __RPC__in BSTR bstrExtensionName,
                       __RPC__in BSTR bstrFriendlyName,
                       __RPC__in BSTR bstrImageName,
                       VARIANT vMethods);
                               HRESULT ( STDMETHODCALLTYPE *UnregisterInboundRoutingExtension )(
            __RPC__in IFaxServer * This,
                       __RPC__in BSTR bstrExtensionUniqueName);
                                        HRESULT ( STDMETHODCALLTYPE *get_RegisteredEvents )(
            __RPC__in IFaxServer * This,
                                __RPC__out FAX_SERVER_EVENTS_TYPE_ENUM *pEventTypes);
                                        HRESULT ( STDMETHODCALLTYPE *get_APIVersion )(
            __RPC__in IFaxServer * This,
                                __RPC__out FAX_SERVER_APIVERSION_ENUM *pAPIVersion);
        END_INTERFACE
    } IFaxServerVtbl;
    interface IFaxServer
    {
        CONST_VTBL struct IFaxServerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Connect(This,bstrServerName) )
    ( (This)->lpVtbl -> get_ServerName(This,pbstrServerName) )
    ( (This)->lpVtbl -> GetDeviceProviders(This,ppFaxDeviceProviders) )
    ( (This)->lpVtbl -> GetDevices(This,ppFaxDevices) )
    ( (This)->lpVtbl -> get_InboundRouting(This,ppFaxInboundRouting) )
    ( (This)->lpVtbl -> get_Folders(This,pFaxFolders) )
    ( (This)->lpVtbl -> get_LoggingOptions(This,ppFaxLoggingOptions) )
    ( (This)->lpVtbl -> get_MajorVersion(This,plMajorVersion) )
    ( (This)->lpVtbl -> get_MinorVersion(This,plMinorVersion) )
    ( (This)->lpVtbl -> get_MajorBuild(This,plMajorBuild) )
    ( (This)->lpVtbl -> get_MinorBuild(This,plMinorBuild) )
    ( (This)->lpVtbl -> get_Debug(This,pbDebug) )
    ( (This)->lpVtbl -> get_Activity(This,ppFaxActivity) )
    ( (This)->lpVtbl -> get_OutboundRouting(This,ppFaxOutboundRouting) )
    ( (This)->lpVtbl -> get_ReceiptOptions(This,ppFaxReceiptOptions) )
    ( (This)->lpVtbl -> get_Security(This,ppFaxSecurity) )
    ( (This)->lpVtbl -> Disconnect(This) )
    ( (This)->lpVtbl -> GetExtensionProperty(This,bstrGUID,pvProperty) )
    ( (This)->lpVtbl -> SetExtensionProperty(This,bstrGUID,vProperty) )
    ( (This)->lpVtbl -> ListenToServerEvents(This,EventTypes) )
    ( (This)->lpVtbl -> RegisterDeviceProvider(This,bstrGUID,bstrFriendlyName,bstrImageName,TspName,lFSPIVersion) )
    ( (This)->lpVtbl -> UnregisterDeviceProvider(This,bstrUniqueName) )
    ( (This)->lpVtbl -> RegisterInboundRoutingExtension(This,bstrExtensionName,bstrFriendlyName,bstrImageName,vMethods) )
    ( (This)->lpVtbl -> UnregisterInboundRoutingExtension(This,bstrExtensionUniqueName) )
    ( (This)->lpVtbl -> get_RegisteredEvents(This,pEventTypes) )
    ( (This)->lpVtbl -> get_APIVersion(This,pAPIVersion) )
EXTERN_C const IID IID_IFaxDeviceProviders;
    typedef struct IFaxDeviceProvidersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxDeviceProviders * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxDeviceProviders * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxDeviceProviders * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxDeviceProviders * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxDeviceProviders * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxDeviceProviders * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxDeviceProviders * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IFaxDeviceProviders * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IFaxDeviceProviders * This,
                       VARIANT vIndex,
                                __RPC__deref_out_opt IFaxDeviceProvider **pFaxDeviceProvider);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IFaxDeviceProviders * This,
                                __RPC__out long *plCount);
        END_INTERFACE
    } IFaxDeviceProvidersVtbl;
    interface IFaxDeviceProviders
    {
        CONST_VTBL struct IFaxDeviceProvidersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
    ( (This)->lpVtbl -> get_Item(This,vIndex,pFaxDeviceProvider) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
EXTERN_C const IID IID_IFaxDevices;
    typedef struct IFaxDevicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxDevices * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxDevices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxDevices * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxDevices * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxDevices * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxDevices * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxDevices * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IFaxDevices * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IFaxDevices * This,
                       VARIANT vIndex,
                                __RPC__deref_out_opt IFaxDevice **pFaxDevice);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IFaxDevices * This,
                                __RPC__out long *plCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_ItemById )(
            __RPC__in IFaxDevices * This,
                       long lId,
                                __RPC__deref_out_opt IFaxDevice **ppFaxDevice);
        END_INTERFACE
    } IFaxDevicesVtbl;
    interface IFaxDevices
    {
        CONST_VTBL struct IFaxDevicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
    ( (This)->lpVtbl -> get_Item(This,vIndex,pFaxDevice) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get_ItemById(This,lId,ppFaxDevice) )
EXTERN_C const IID IID_IFaxInboundRouting;
    typedef struct IFaxInboundRoutingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxInboundRouting * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxInboundRouting * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxInboundRouting * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxInboundRouting * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxInboundRouting * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxInboundRouting * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxInboundRouting * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *GetExtensions )(
            __RPC__in IFaxInboundRouting * This,
                                __RPC__deref_out_opt IFaxInboundRoutingExtensions **pFaxInboundRoutingExtensions);
                               HRESULT ( STDMETHODCALLTYPE *GetMethods )(
            __RPC__in IFaxInboundRouting * This,
                                __RPC__deref_out_opt IFaxInboundRoutingMethods **pFaxInboundRoutingMethods);
        END_INTERFACE
    } IFaxInboundRoutingVtbl;
    interface IFaxInboundRouting
    {
        CONST_VTBL struct IFaxInboundRoutingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetExtensions(This,pFaxInboundRoutingExtensions) )
    ( (This)->lpVtbl -> GetMethods(This,pFaxInboundRoutingMethods) )
EXTERN_C const IID IID_IFaxFolders;
    typedef struct IFaxFoldersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxFolders * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxFolders * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxFolders * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxFolders * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxFolders * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxFolders * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxFolders * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_OutgoingQueue )(
            __RPC__in IFaxFolders * This,
                                __RPC__deref_out_opt IFaxOutgoingQueue **pFaxOutgoingQueue);
                                        HRESULT ( STDMETHODCALLTYPE *get_IncomingQueue )(
            __RPC__in IFaxFolders * This,
                                __RPC__deref_out_opt IFaxIncomingQueue **pFaxIncomingQueue);
                                        HRESULT ( STDMETHODCALLTYPE *get_IncomingArchive )(
            __RPC__in IFaxFolders * This,
                                __RPC__deref_out_opt IFaxIncomingArchive **pFaxIncomingArchive);
                                        HRESULT ( STDMETHODCALLTYPE *get_OutgoingArchive )(
            __RPC__in IFaxFolders * This,
                                __RPC__deref_out_opt IFaxOutgoingArchive **pFaxOutgoingArchive);
        END_INTERFACE
    } IFaxFoldersVtbl;
    interface IFaxFolders
    {
        CONST_VTBL struct IFaxFoldersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_OutgoingQueue(This,pFaxOutgoingQueue) )
    ( (This)->lpVtbl -> get_IncomingQueue(This,pFaxIncomingQueue) )
    ( (This)->lpVtbl -> get_IncomingArchive(This,pFaxIncomingArchive) )
    ( (This)->lpVtbl -> get_OutgoingArchive(This,pFaxOutgoingArchive) )
EXTERN_C const IID IID_IFaxLoggingOptions;
    typedef struct IFaxLoggingOptionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxLoggingOptions * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxLoggingOptions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxLoggingOptions * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxLoggingOptions * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxLoggingOptions * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxLoggingOptions * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxLoggingOptions * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventLogging )(
            __RPC__in IFaxLoggingOptions * This,
                                __RPC__deref_out_opt IFaxEventLogging **pFaxEventLogging);
                                        HRESULT ( STDMETHODCALLTYPE *get_ActivityLogging )(
            __RPC__in IFaxLoggingOptions * This,
                                __RPC__deref_out_opt IFaxActivityLogging **pFaxActivityLogging);
        END_INTERFACE
    } IFaxLoggingOptionsVtbl;
    interface IFaxLoggingOptions
    {
        CONST_VTBL struct IFaxLoggingOptionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_EventLogging(This,pFaxEventLogging) )
    ( (This)->lpVtbl -> get_ActivityLogging(This,pFaxActivityLogging) )
EXTERN_C const IID IID_IFaxActivity;
    typedef struct IFaxActivityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxActivity * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxActivity * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxActivity * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxActivity * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxActivity * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxActivity * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxActivity * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_IncomingMessages )(
            __RPC__in IFaxActivity * This,
                                __RPC__out long *plIncomingMessages);
                                        HRESULT ( STDMETHODCALLTYPE *get_RoutingMessages )(
            __RPC__in IFaxActivity * This,
                                __RPC__out long *plRoutingMessages);
                                        HRESULT ( STDMETHODCALLTYPE *get_OutgoingMessages )(
            __RPC__in IFaxActivity * This,
                                __RPC__out long *plOutgoingMessages);
                                        HRESULT ( STDMETHODCALLTYPE *get_QueuedMessages )(
            __RPC__in IFaxActivity * This,
                                __RPC__out long *plQueuedMessages);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IFaxActivity * This);
        END_INTERFACE
    } IFaxActivityVtbl;
    interface IFaxActivity
    {
        CONST_VTBL struct IFaxActivityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_IncomingMessages(This,plIncomingMessages) )
    ( (This)->lpVtbl -> get_RoutingMessages(This,plRoutingMessages) )
    ( (This)->lpVtbl -> get_OutgoingMessages(This,plOutgoingMessages) )
    ( (This)->lpVtbl -> get_QueuedMessages(This,plQueuedMessages) )
    ( (This)->lpVtbl -> Refresh(This) )
EXTERN_C const IID IID_IFaxOutboundRouting;
    typedef struct IFaxOutboundRoutingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxOutboundRouting * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxOutboundRouting * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxOutboundRouting * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxOutboundRouting * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxOutboundRouting * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxOutboundRouting * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxOutboundRouting * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *GetGroups )(
            __RPC__in IFaxOutboundRouting * This,
                                __RPC__deref_out_opt IFaxOutboundRoutingGroups **pFaxOutboundRoutingGroups);
                               HRESULT ( STDMETHODCALLTYPE *GetRules )(
            __RPC__in IFaxOutboundRouting * This,
                                __RPC__deref_out_opt IFaxOutboundRoutingRules **pFaxOutboundRoutingRules);
        END_INTERFACE
    } IFaxOutboundRoutingVtbl;
    interface IFaxOutboundRouting
    {
        CONST_VTBL struct IFaxOutboundRoutingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetGroups(This,pFaxOutboundRoutingGroups) )
    ( (This)->lpVtbl -> GetRules(This,pFaxOutboundRoutingRules) )
typedef
enum FAX_SMTP_AUTHENTICATION_TYPE_ENUM
    {
        fsatANONYMOUS = 0,
        fsatBASIC = ( fsatANONYMOUS + 1 ) ,
        fsatNTLM = ( fsatBASIC + 1 )
    } FAX_SMTP_AUTHENTICATION_TYPE_ENUM;
typedef
enum FAX_RECEIPT_TYPE_ENUM
    {
        frtNONE = 0,
        frtMAIL = 0x1,
        frtMSGBOX = 0x4
    } FAX_RECEIPT_TYPE_ENUM;
EXTERN_C const IID IID_IFaxReceiptOptions;
    typedef struct IFaxReceiptOptionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxReceiptOptions * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxReceiptOptions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxReceiptOptions * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxReceiptOptions * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxReceiptOptions * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxReceiptOptions * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxReceiptOptions * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_AuthenticationType )(
            __RPC__in IFaxReceiptOptions * This,
                                __RPC__out FAX_SMTP_AUTHENTICATION_TYPE_ENUM *pType);
                                        HRESULT ( STDMETHODCALLTYPE *put_AuthenticationType )(
            __RPC__in IFaxReceiptOptions * This,
                       FAX_SMTP_AUTHENTICATION_TYPE_ENUM Type);
                                        HRESULT ( STDMETHODCALLTYPE *get_SMTPServer )(
            __RPC__in IFaxReceiptOptions * This,
                                __RPC__deref_out_opt BSTR *pbstrSMTPServer);
                                        HRESULT ( STDMETHODCALLTYPE *put_SMTPServer )(
            __RPC__in IFaxReceiptOptions * This,
                       __RPC__in BSTR bstrSMTPServer);
                                        HRESULT ( STDMETHODCALLTYPE *get_SMTPPort )(
            __RPC__in IFaxReceiptOptions * This,
                                __RPC__out long *plSMTPPort);
                                        HRESULT ( STDMETHODCALLTYPE *put_SMTPPort )(
            __RPC__in IFaxReceiptOptions * This,
                       long lSMTPPort);
                                        HRESULT ( STDMETHODCALLTYPE *get_SMTPSender )(
            __RPC__in IFaxReceiptOptions * This,
                                __RPC__deref_out_opt BSTR *pbstrSMTPSender);
                                        HRESULT ( STDMETHODCALLTYPE *put_SMTPSender )(
            __RPC__in IFaxReceiptOptions * This,
                       __RPC__in BSTR bstrSMTPSender);
                                        HRESULT ( STDMETHODCALLTYPE *get_SMTPUser )(
            __RPC__in IFaxReceiptOptions * This,
                                __RPC__deref_out_opt BSTR *pbstrSMTPUser);
                                        HRESULT ( STDMETHODCALLTYPE *put_SMTPUser )(
            __RPC__in IFaxReceiptOptions * This,
                       __RPC__in BSTR bstrSMTPUser);
                                        HRESULT ( STDMETHODCALLTYPE *get_AllowedReceipts )(
            __RPC__in IFaxReceiptOptions * This,
                                __RPC__out FAX_RECEIPT_TYPE_ENUM *pAllowedReceipts);
                                        HRESULT ( STDMETHODCALLTYPE *put_AllowedReceipts )(
            __RPC__in IFaxReceiptOptions * This,
                       FAX_RECEIPT_TYPE_ENUM AllowedReceipts);
                                        HRESULT ( STDMETHODCALLTYPE *get_SMTPPassword )(
            __RPC__in IFaxReceiptOptions * This,
                                __RPC__deref_out_opt BSTR *pbstrSMTPPassword);
                                        HRESULT ( STDMETHODCALLTYPE *put_SMTPPassword )(
            __RPC__in IFaxReceiptOptions * This,
                       __RPC__in BSTR bstrSMTPPassword);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IFaxReceiptOptions * This);
                               HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IFaxReceiptOptions * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_UseForInboundRouting )(
            __RPC__in IFaxReceiptOptions * This,
                                __RPC__out VARIANT_BOOL *pbUseForInboundRouting);
                                        HRESULT ( STDMETHODCALLTYPE *put_UseForInboundRouting )(
            __RPC__in IFaxReceiptOptions * This,
                       VARIANT_BOOL bUseForInboundRouting);
        END_INTERFACE
    } IFaxReceiptOptionsVtbl;
    interface IFaxReceiptOptions
    {
        CONST_VTBL struct IFaxReceiptOptionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_AuthenticationType(This,pType) )
    ( (This)->lpVtbl -> put_AuthenticationType(This,Type) )
    ( (This)->lpVtbl -> get_SMTPServer(This,pbstrSMTPServer) )
    ( (This)->lpVtbl -> put_SMTPServer(This,bstrSMTPServer) )
    ( (This)->lpVtbl -> get_SMTPPort(This,plSMTPPort) )
    ( (This)->lpVtbl -> put_SMTPPort(This,lSMTPPort) )
    ( (This)->lpVtbl -> get_SMTPSender(This,pbstrSMTPSender) )
    ( (This)->lpVtbl -> put_SMTPSender(This,bstrSMTPSender) )
    ( (This)->lpVtbl -> get_SMTPUser(This,pbstrSMTPUser) )
    ( (This)->lpVtbl -> put_SMTPUser(This,bstrSMTPUser) )
    ( (This)->lpVtbl -> get_AllowedReceipts(This,pAllowedReceipts) )
    ( (This)->lpVtbl -> put_AllowedReceipts(This,AllowedReceipts) )
    ( (This)->lpVtbl -> get_SMTPPassword(This,pbstrSMTPPassword) )
    ( (This)->lpVtbl -> put_SMTPPassword(This,bstrSMTPPassword) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Save(This) )
    ( (This)->lpVtbl -> get_UseForInboundRouting(This,pbUseForInboundRouting) )
    ( (This)->lpVtbl -> put_UseForInboundRouting(This,bUseForInboundRouting) )
typedef
enum FAX_ACCESS_RIGHTS_ENUM
    {
        farSUBMIT_LOW = 0x1,
        farSUBMIT_NORMAL = 0x2,
        farSUBMIT_HIGH = 0x4,
        farQUERY_JOBS = 0x8,
        farMANAGE_JOBS = 0x10,
        farQUERY_CONFIG = 0x20,
        farMANAGE_CONFIG = 0x40,
        farQUERY_IN_ARCHIVE = 0x80,
        farMANAGE_IN_ARCHIVE = 0x100,
        farQUERY_OUT_ARCHIVE = 0x200,
        farMANAGE_OUT_ARCHIVE = 0x400
    } FAX_ACCESS_RIGHTS_ENUM;
EXTERN_C const IID IID_IFaxSecurity;
    typedef struct IFaxSecurityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxSecurity * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxSecurity * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxSecurity * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxSecurity * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxSecurity * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxSecurity * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxSecurity * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Descriptor )(
            __RPC__in IFaxSecurity * This,
                                __RPC__out VARIANT *pvDescriptor);
                                        HRESULT ( STDMETHODCALLTYPE *put_Descriptor )(
            __RPC__in IFaxSecurity * This,
                       VARIANT vDescriptor);
                                        HRESULT ( STDMETHODCALLTYPE *get_GrantedRights )(
            __RPC__in IFaxSecurity * This,
                                __RPC__out FAX_ACCESS_RIGHTS_ENUM *pGrantedRights);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IFaxSecurity * This);
                               HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IFaxSecurity * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_InformationType )(
            __RPC__in IFaxSecurity * This,
                                __RPC__out long *plInformationType);
                                        HRESULT ( STDMETHODCALLTYPE *put_InformationType )(
            __RPC__in IFaxSecurity * This,
                       long lInformationType);
        END_INTERFACE
    } IFaxSecurityVtbl;
    interface IFaxSecurity
    {
        CONST_VTBL struct IFaxSecurityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Descriptor(This,pvDescriptor) )
    ( (This)->lpVtbl -> put_Descriptor(This,vDescriptor) )
    ( (This)->lpVtbl -> get_GrantedRights(This,pGrantedRights) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Save(This) )
    ( (This)->lpVtbl -> get_InformationType(This,plInformationType) )
    ( (This)->lpVtbl -> put_InformationType(This,lInformationType) )
typedef
enum FAX_PRIORITY_TYPE_ENUM
    {
        fptLOW = 0,
        fptNORMAL = ( fptLOW + 1 ) ,
        fptHIGH = ( fptNORMAL + 1 )
    } FAX_PRIORITY_TYPE_ENUM;
typedef
enum FAX_COVERPAGE_TYPE_ENUM
    {
        fcptNONE = 0,
        fcptLOCAL = ( fcptNONE + 1 ) ,
        fcptSERVER = ( fcptLOCAL + 1 )
    } FAX_COVERPAGE_TYPE_ENUM;
typedef
enum FAX_SCHEDULE_TYPE_ENUM
    {
        fstNOW = 0,
        fstSPECIFIC_TIME = ( fstNOW + 1 ) ,
        fstDISCOUNT_PERIOD = ( fstSPECIFIC_TIME + 1 )
    } FAX_SCHEDULE_TYPE_ENUM;
EXTERN_C const IID IID_IFaxDocument;
    typedef struct IFaxDocumentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxDocument * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxDocument * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxDocument * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxDocument * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxDocument * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxDocument * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxDocument * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Body )(
            __RPC__in IFaxDocument * This,
                                __RPC__deref_out_opt BSTR *pbstrBody);
                                        HRESULT ( STDMETHODCALLTYPE *put_Body )(
            __RPC__in IFaxDocument * This,
                       __RPC__in BSTR bstrBody);
                                        HRESULT ( STDMETHODCALLTYPE *get_Sender )(
            __RPC__in IFaxDocument * This,
                                __RPC__deref_out_opt IFaxSender **ppFaxSender);
                                        HRESULT ( STDMETHODCALLTYPE *get_Recipients )(
            __RPC__in IFaxDocument * This,
                                __RPC__deref_out_opt IFaxRecipients **ppFaxRecipients);
                                        HRESULT ( STDMETHODCALLTYPE *get_CoverPage )(
            __RPC__in IFaxDocument * This,
                                __RPC__deref_out_opt BSTR *pbstrCoverPage);
                                        HRESULT ( STDMETHODCALLTYPE *put_CoverPage )(
            __RPC__in IFaxDocument * This,
                       __RPC__in BSTR bstrCoverPage);
                                        HRESULT ( STDMETHODCALLTYPE *get_Subject )(
            __RPC__in IFaxDocument * This,
                                __RPC__deref_out_opt BSTR *pbstrSubject);
                                        HRESULT ( STDMETHODCALLTYPE *put_Subject )(
            __RPC__in IFaxDocument * This,
                       __RPC__in BSTR bstrSubject);
                                        HRESULT ( STDMETHODCALLTYPE *get_Note )(
            __RPC__in IFaxDocument * This,
                                __RPC__deref_out_opt BSTR *pbstrNote);
                                        HRESULT ( STDMETHODCALLTYPE *put_Note )(
            __RPC__in IFaxDocument * This,
                       __RPC__in BSTR bstrNote);
                                        HRESULT ( STDMETHODCALLTYPE *get_ScheduleTime )(
            __RPC__in IFaxDocument * This,
                                __RPC__out DATE *pdateScheduleTime);
                                        HRESULT ( STDMETHODCALLTYPE *put_ScheduleTime )(
            __RPC__in IFaxDocument * This,
                       DATE dateScheduleTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReceiptAddress )(
            __RPC__in IFaxDocument * This,
                                __RPC__deref_out_opt BSTR *pbstrReceiptAddress);
                                        HRESULT ( STDMETHODCALLTYPE *put_ReceiptAddress )(
            __RPC__in IFaxDocument * This,
                       __RPC__in BSTR bstrReceiptAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_DocumentName )(
            __RPC__in IFaxDocument * This,
                                __RPC__deref_out_opt BSTR *pbstrDocumentName);
                                        HRESULT ( STDMETHODCALLTYPE *put_DocumentName )(
            __RPC__in IFaxDocument * This,
                       __RPC__in BSTR bstrDocumentName);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallHandle )(
            __RPC__in IFaxDocument * This,
                                __RPC__out long *plCallHandle);
                                        HRESULT ( STDMETHODCALLTYPE *put_CallHandle )(
            __RPC__in IFaxDocument * This,
                       long lCallHandle);
                                        HRESULT ( STDMETHODCALLTYPE *get_CoverPageType )(
            __RPC__in IFaxDocument * This,
                                __RPC__out FAX_COVERPAGE_TYPE_ENUM *pCoverPageType);
                                        HRESULT ( STDMETHODCALLTYPE *put_CoverPageType )(
            __RPC__in IFaxDocument * This,
                       FAX_COVERPAGE_TYPE_ENUM CoverPageType);
                                        HRESULT ( STDMETHODCALLTYPE *get_ScheduleType )(
            __RPC__in IFaxDocument * This,
                                __RPC__out FAX_SCHEDULE_TYPE_ENUM *pScheduleType);
                                        HRESULT ( STDMETHODCALLTYPE *put_ScheduleType )(
            __RPC__in IFaxDocument * This,
                       FAX_SCHEDULE_TYPE_ENUM ScheduleType);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReceiptType )(
            __RPC__in IFaxDocument * This,
                                __RPC__out FAX_RECEIPT_TYPE_ENUM *pReceiptType);
                                        HRESULT ( STDMETHODCALLTYPE *put_ReceiptType )(
            __RPC__in IFaxDocument * This,
                       FAX_RECEIPT_TYPE_ENUM ReceiptType);
                                        HRESULT ( STDMETHODCALLTYPE *get_GroupBroadcastReceipts )(
            __RPC__in IFaxDocument * This,
                                __RPC__out VARIANT_BOOL *pbUseGrouping);
                                        HRESULT ( STDMETHODCALLTYPE *put_GroupBroadcastReceipts )(
            __RPC__in IFaxDocument * This,
                       VARIANT_BOOL bUseGrouping);
                                        HRESULT ( STDMETHODCALLTYPE *get_Priority )(
            __RPC__in IFaxDocument * This,
                                __RPC__out FAX_PRIORITY_TYPE_ENUM *pPriority);
                                        HRESULT ( STDMETHODCALLTYPE *put_Priority )(
            __RPC__in IFaxDocument * This,
                       FAX_PRIORITY_TYPE_ENUM Priority);
                                        HRESULT ( STDMETHODCALLTYPE *get_TapiConnection )(
            __RPC__in IFaxDocument * This,
                                __RPC__deref_out_opt IDispatch **ppTapiConnection);
                                           HRESULT ( STDMETHODCALLTYPE *putref_TapiConnection )(
            __RPC__in IFaxDocument * This,
                       __RPC__in_opt IDispatch *pTapiConnection);
                               HRESULT ( STDMETHODCALLTYPE *Submit )(
            __RPC__in IFaxDocument * This,
                       __RPC__in BSTR bstrFaxServerName,
                                __RPC__out VARIANT *pvFaxOutgoingJobIDs);
                               HRESULT ( STDMETHODCALLTYPE *ConnectedSubmit )(
            __RPC__in IFaxDocument * This,
                       __RPC__in_opt IFaxServer *pFaxServer,
                                __RPC__out VARIANT *pvFaxOutgoingJobIDs);
                                        HRESULT ( STDMETHODCALLTYPE *get_AttachFaxToReceipt )(
            __RPC__in IFaxDocument * This,
                                __RPC__out VARIANT_BOOL *pbAttachFax);
                                        HRESULT ( STDMETHODCALLTYPE *put_AttachFaxToReceipt )(
            __RPC__in IFaxDocument * This,
                       VARIANT_BOOL bAttachFax);
        END_INTERFACE
    } IFaxDocumentVtbl;
    interface IFaxDocument
    {
        CONST_VTBL struct IFaxDocumentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Body(This,pbstrBody) )
    ( (This)->lpVtbl -> put_Body(This,bstrBody) )
    ( (This)->lpVtbl -> get_Sender(This,ppFaxSender) )
    ( (This)->lpVtbl -> get_Recipients(This,ppFaxRecipients) )
    ( (This)->lpVtbl -> get_CoverPage(This,pbstrCoverPage) )
    ( (This)->lpVtbl -> put_CoverPage(This,bstrCoverPage) )
    ( (This)->lpVtbl -> get_Subject(This,pbstrSubject) )
    ( (This)->lpVtbl -> put_Subject(This,bstrSubject) )
    ( (This)->lpVtbl -> get_Note(This,pbstrNote) )
    ( (This)->lpVtbl -> put_Note(This,bstrNote) )
    ( (This)->lpVtbl -> get_ScheduleTime(This,pdateScheduleTime) )
    ( (This)->lpVtbl -> put_ScheduleTime(This,dateScheduleTime) )
    ( (This)->lpVtbl -> get_ReceiptAddress(This,pbstrReceiptAddress) )
    ( (This)->lpVtbl -> put_ReceiptAddress(This,bstrReceiptAddress) )
    ( (This)->lpVtbl -> get_DocumentName(This,pbstrDocumentName) )
    ( (This)->lpVtbl -> put_DocumentName(This,bstrDocumentName) )
    ( (This)->lpVtbl -> get_CallHandle(This,plCallHandle) )
    ( (This)->lpVtbl -> put_CallHandle(This,lCallHandle) )
    ( (This)->lpVtbl -> get_CoverPageType(This,pCoverPageType) )
    ( (This)->lpVtbl -> put_CoverPageType(This,CoverPageType) )
    ( (This)->lpVtbl -> get_ScheduleType(This,pScheduleType) )
    ( (This)->lpVtbl -> put_ScheduleType(This,ScheduleType) )
    ( (This)->lpVtbl -> get_ReceiptType(This,pReceiptType) )
    ( (This)->lpVtbl -> put_ReceiptType(This,ReceiptType) )
    ( (This)->lpVtbl -> get_GroupBroadcastReceipts(This,pbUseGrouping) )
    ( (This)->lpVtbl -> put_GroupBroadcastReceipts(This,bUseGrouping) )
    ( (This)->lpVtbl -> get_Priority(This,pPriority) )
    ( (This)->lpVtbl -> put_Priority(This,Priority) )
    ( (This)->lpVtbl -> get_TapiConnection(This,ppTapiConnection) )
    ( (This)->lpVtbl -> putref_TapiConnection(This,pTapiConnection) )
    ( (This)->lpVtbl -> Submit(This,bstrFaxServerName,pvFaxOutgoingJobIDs) )
    ( (This)->lpVtbl -> ConnectedSubmit(This,pFaxServer,pvFaxOutgoingJobIDs) )
    ( (This)->lpVtbl -> get_AttachFaxToReceipt(This,pbAttachFax) )
    ( (This)->lpVtbl -> put_AttachFaxToReceipt(This,bAttachFax) )
EXTERN_C const IID IID_IFaxSender;
    typedef struct IFaxSenderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxSender * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxSender * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxSender * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxSender * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxSender * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxSender * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxSender * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_BillingCode )(
            __RPC__in IFaxSender * This,
                                __RPC__deref_out_opt BSTR *pbstrBillingCode);
                                        HRESULT ( STDMETHODCALLTYPE *put_BillingCode )(
            __RPC__in IFaxSender * This,
                       __RPC__in BSTR bstrBillingCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_City )(
            __RPC__in IFaxSender * This,
                                __RPC__deref_out_opt BSTR *pbstrCity);
                                        HRESULT ( STDMETHODCALLTYPE *put_City )(
            __RPC__in IFaxSender * This,
                       __RPC__in BSTR bstrCity);
                                        HRESULT ( STDMETHODCALLTYPE *get_Company )(
            __RPC__in IFaxSender * This,
                                __RPC__deref_out_opt BSTR *pbstrCompany);
                                        HRESULT ( STDMETHODCALLTYPE *put_Company )(
            __RPC__in IFaxSender * This,
                       __RPC__in BSTR bstrCompany);
                                        HRESULT ( STDMETHODCALLTYPE *get_Country )(
            __RPC__in IFaxSender * This,
                                __RPC__deref_out_opt BSTR *pbstrCountry);
                                        HRESULT ( STDMETHODCALLTYPE *put_Country )(
            __RPC__in IFaxSender * This,
                       __RPC__in BSTR bstrCountry);
                                        HRESULT ( STDMETHODCALLTYPE *get_Department )(
            __RPC__in IFaxSender * This,
                                __RPC__deref_out_opt BSTR *pbstrDepartment);
                                        HRESULT ( STDMETHODCALLTYPE *put_Department )(
            __RPC__in IFaxSender * This,
                       __RPC__in BSTR bstrDepartment);
                                        HRESULT ( STDMETHODCALLTYPE *get_Email )(
            __RPC__in IFaxSender * This,
                                __RPC__deref_out_opt BSTR *pbstrEmail);
                                        HRESULT ( STDMETHODCALLTYPE *put_Email )(
            __RPC__in IFaxSender * This,
                       __RPC__in BSTR bstrEmail);
                                        HRESULT ( STDMETHODCALLTYPE *get_FaxNumber )(
            __RPC__in IFaxSender * This,
                                __RPC__deref_out_opt BSTR *pbstrFaxNumber);
                                        HRESULT ( STDMETHODCALLTYPE *put_FaxNumber )(
            __RPC__in IFaxSender * This,
                       __RPC__in BSTR bstrFaxNumber);
                                        HRESULT ( STDMETHODCALLTYPE *get_HomePhone )(
            __RPC__in IFaxSender * This,
                                __RPC__deref_out_opt BSTR *pbstrHomePhone);
                                        HRESULT ( STDMETHODCALLTYPE *put_HomePhone )(
            __RPC__in IFaxSender * This,
                       __RPC__in BSTR bstrHomePhone);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFaxSender * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IFaxSender * This,
                       __RPC__in BSTR bstrName);
                                        HRESULT ( STDMETHODCALLTYPE *get_TSID )(
            __RPC__in IFaxSender * This,
                                __RPC__deref_out_opt BSTR *pbstrTSID);
                                        HRESULT ( STDMETHODCALLTYPE *put_TSID )(
            __RPC__in IFaxSender * This,
                       __RPC__in BSTR bstrTSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_OfficePhone )(
            __RPC__in IFaxSender * This,
                                __RPC__deref_out_opt BSTR *pbstrOfficePhone);
                                        HRESULT ( STDMETHODCALLTYPE *put_OfficePhone )(
            __RPC__in IFaxSender * This,
                       __RPC__in BSTR bstrOfficePhone);
                                        HRESULT ( STDMETHODCALLTYPE *get_OfficeLocation )(
            __RPC__in IFaxSender * This,
                                __RPC__deref_out_opt BSTR *pbstrOfficeLocation);
                                        HRESULT ( STDMETHODCALLTYPE *put_OfficeLocation )(
            __RPC__in IFaxSender * This,
                       __RPC__in BSTR bstrOfficeLocation);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IFaxSender * This,
                                __RPC__deref_out_opt BSTR *pbstrState);
                                        HRESULT ( STDMETHODCALLTYPE *put_State )(
            __RPC__in IFaxSender * This,
                       __RPC__in BSTR bstrState);
                                        HRESULT ( STDMETHODCALLTYPE *get_StreetAddress )(
            __RPC__in IFaxSender * This,
                                __RPC__deref_out_opt BSTR *pbstrStreetAddress);
                                        HRESULT ( STDMETHODCALLTYPE *put_StreetAddress )(
            __RPC__in IFaxSender * This,
                       __RPC__in BSTR bstrStreetAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in IFaxSender * This,
                                __RPC__deref_out_opt BSTR *pbstrTitle);
                                        HRESULT ( STDMETHODCALLTYPE *put_Title )(
            __RPC__in IFaxSender * This,
                       __RPC__in BSTR bstrTitle);
                                        HRESULT ( STDMETHODCALLTYPE *get_ZipCode )(
            __RPC__in IFaxSender * This,
                                __RPC__deref_out_opt BSTR *pbstrZipCode);
                                        HRESULT ( STDMETHODCALLTYPE *put_ZipCode )(
            __RPC__in IFaxSender * This,
                       __RPC__in BSTR bstrZipCode);
                               HRESULT ( STDMETHODCALLTYPE *LoadDefaultSender )(
            __RPC__in IFaxSender * This);
                               HRESULT ( STDMETHODCALLTYPE *SaveDefaultSender )(
            __RPC__in IFaxSender * This);
        END_INTERFACE
    } IFaxSenderVtbl;
    interface IFaxSender
    {
        CONST_VTBL struct IFaxSenderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_BillingCode(This,pbstrBillingCode) )
    ( (This)->lpVtbl -> put_BillingCode(This,bstrBillingCode) )
    ( (This)->lpVtbl -> get_City(This,pbstrCity) )
    ( (This)->lpVtbl -> put_City(This,bstrCity) )
    ( (This)->lpVtbl -> get_Company(This,pbstrCompany) )
    ( (This)->lpVtbl -> put_Company(This,bstrCompany) )
    ( (This)->lpVtbl -> get_Country(This,pbstrCountry) )
    ( (This)->lpVtbl -> put_Country(This,bstrCountry) )
    ( (This)->lpVtbl -> get_Department(This,pbstrDepartment) )
    ( (This)->lpVtbl -> put_Department(This,bstrDepartment) )
    ( (This)->lpVtbl -> get_Email(This,pbstrEmail) )
    ( (This)->lpVtbl -> put_Email(This,bstrEmail) )
    ( (This)->lpVtbl -> get_FaxNumber(This,pbstrFaxNumber) )
    ( (This)->lpVtbl -> put_FaxNumber(This,bstrFaxNumber) )
    ( (This)->lpVtbl -> get_HomePhone(This,pbstrHomePhone) )
    ( (This)->lpVtbl -> put_HomePhone(This,bstrHomePhone) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_TSID(This,pbstrTSID) )
    ( (This)->lpVtbl -> put_TSID(This,bstrTSID) )
    ( (This)->lpVtbl -> get_OfficePhone(This,pbstrOfficePhone) )
    ( (This)->lpVtbl -> put_OfficePhone(This,bstrOfficePhone) )
    ( (This)->lpVtbl -> get_OfficeLocation(This,pbstrOfficeLocation) )
    ( (This)->lpVtbl -> put_OfficeLocation(This,bstrOfficeLocation) )
    ( (This)->lpVtbl -> get_State(This,pbstrState) )
    ( (This)->lpVtbl -> put_State(This,bstrState) )
    ( (This)->lpVtbl -> get_StreetAddress(This,pbstrStreetAddress) )
    ( (This)->lpVtbl -> put_StreetAddress(This,bstrStreetAddress) )
    ( (This)->lpVtbl -> get_Title(This,pbstrTitle) )
    ( (This)->lpVtbl -> put_Title(This,bstrTitle) )
    ( (This)->lpVtbl -> get_ZipCode(This,pbstrZipCode) )
    ( (This)->lpVtbl -> put_ZipCode(This,bstrZipCode) )
    ( (This)->lpVtbl -> LoadDefaultSender(This) )
    ( (This)->lpVtbl -> SaveDefaultSender(This) )
EXTERN_C const IID IID_IFaxRecipient;
    typedef struct IFaxRecipientVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxRecipient * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxRecipient * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxRecipient * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxRecipient * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxRecipient * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxRecipient * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxRecipient * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_FaxNumber )(
            __RPC__in IFaxRecipient * This,
                                __RPC__deref_out_opt BSTR *pbstrFaxNumber);
                                        HRESULT ( STDMETHODCALLTYPE *put_FaxNumber )(
            __RPC__in IFaxRecipient * This,
                       __RPC__in BSTR bstrFaxNumber);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFaxRecipient * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IFaxRecipient * This,
                       __RPC__in BSTR bstrName);
        END_INTERFACE
    } IFaxRecipientVtbl;
    interface IFaxRecipient
    {
        CONST_VTBL struct IFaxRecipientVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_FaxNumber(This,pbstrFaxNumber) )
    ( (This)->lpVtbl -> put_FaxNumber(This,bstrFaxNumber) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
EXTERN_C const IID IID_IFaxRecipients;
    typedef struct IFaxRecipientsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxRecipients * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxRecipients * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxRecipients * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxRecipients * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxRecipients * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxRecipients * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxRecipients * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IFaxRecipients * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IFaxRecipients * This,
                       long lIndex,
                                __RPC__deref_out_opt IFaxRecipient **ppFaxRecipient);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IFaxRecipients * This,
                                __RPC__out long *plCount);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IFaxRecipients * This,
                       __RPC__in BSTR bstrFaxNumber,
                                     __RPC__in BSTR bstrRecipientName,
                                __RPC__deref_out_opt IFaxRecipient **ppFaxRecipient);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IFaxRecipients * This,
                       long lIndex);
        END_INTERFACE
    } IFaxRecipientsVtbl;
    interface IFaxRecipients
    {
        CONST_VTBL struct IFaxRecipientsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
    ( (This)->lpVtbl -> get_Item(This,lIndex,ppFaxRecipient) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> Add(This,bstrFaxNumber,bstrRecipientName,ppFaxRecipient) )
    ( (This)->lpVtbl -> Remove(This,lIndex) )
EXTERN_C const IID IID_IFaxIncomingArchive;
    typedef struct IFaxIncomingArchiveVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxIncomingArchive * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxIncomingArchive * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxIncomingArchive * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxIncomingArchive * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxIncomingArchive * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxIncomingArchive * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxIncomingArchive * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_UseArchive )(
            __RPC__in IFaxIncomingArchive * This,
                                __RPC__out VARIANT_BOOL *pbUseArchive);
                                        HRESULT ( STDMETHODCALLTYPE *put_UseArchive )(
            __RPC__in IFaxIncomingArchive * This,
                       VARIANT_BOOL bUseArchive);
                                        HRESULT ( STDMETHODCALLTYPE *get_ArchiveFolder )(
            __RPC__in IFaxIncomingArchive * This,
                                __RPC__deref_out_opt BSTR *pbstrArchiveFolder);
                                        HRESULT ( STDMETHODCALLTYPE *put_ArchiveFolder )(
            __RPC__in IFaxIncomingArchive * This,
                       __RPC__in BSTR bstrArchiveFolder);
                                        HRESULT ( STDMETHODCALLTYPE *get_SizeQuotaWarning )(
            __RPC__in IFaxIncomingArchive * This,
                                __RPC__out VARIANT_BOOL *pbSizeQuotaWarning);
                                        HRESULT ( STDMETHODCALLTYPE *put_SizeQuotaWarning )(
            __RPC__in IFaxIncomingArchive * This,
                       VARIANT_BOOL bSizeQuotaWarning);
                                        HRESULT ( STDMETHODCALLTYPE *get_HighQuotaWaterMark )(
            __RPC__in IFaxIncomingArchive * This,
                                __RPC__out long *plHighQuotaWaterMark);
                                        HRESULT ( STDMETHODCALLTYPE *put_HighQuotaWaterMark )(
            __RPC__in IFaxIncomingArchive * This,
                       long lHighQuotaWaterMark);
                                        HRESULT ( STDMETHODCALLTYPE *get_LowQuotaWaterMark )(
            __RPC__in IFaxIncomingArchive * This,
                                __RPC__out long *plLowQuotaWaterMark);
                                        HRESULT ( STDMETHODCALLTYPE *put_LowQuotaWaterMark )(
            __RPC__in IFaxIncomingArchive * This,
                       long lLowQuotaWaterMark);
                                        HRESULT ( STDMETHODCALLTYPE *get_AgeLimit )(
            __RPC__in IFaxIncomingArchive * This,
                                __RPC__out long *plAgeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_AgeLimit )(
            __RPC__in IFaxIncomingArchive * This,
                       long lAgeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_SizeLow )(
            __RPC__in IFaxIncomingArchive * This,
                                __RPC__out long *plSizeLow);
                                        HRESULT ( STDMETHODCALLTYPE *get_SizeHigh )(
            __RPC__in IFaxIncomingArchive * This,
                                __RPC__out long *plSizeHigh);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IFaxIncomingArchive * This);
                               HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IFaxIncomingArchive * This);
                               HRESULT ( STDMETHODCALLTYPE *GetMessages )(
            __RPC__in IFaxIncomingArchive * This,
                                     long lPrefetchSize,
                                __RPC__deref_out_opt IFaxIncomingMessageIterator **pFaxIncomingMessageIterator);
                               HRESULT ( STDMETHODCALLTYPE *GetMessage )(
            __RPC__in IFaxIncomingArchive * This,
                       __RPC__in BSTR bstrMessageId,
                                __RPC__deref_out_opt IFaxIncomingMessage **pFaxIncomingMessage);
        END_INTERFACE
    } IFaxIncomingArchiveVtbl;
    interface IFaxIncomingArchive
    {
        CONST_VTBL struct IFaxIncomingArchiveVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_UseArchive(This,pbUseArchive) )
    ( (This)->lpVtbl -> put_UseArchive(This,bUseArchive) )
    ( (This)->lpVtbl -> get_ArchiveFolder(This,pbstrArchiveFolder) )
    ( (This)->lpVtbl -> put_ArchiveFolder(This,bstrArchiveFolder) )
    ( (This)->lpVtbl -> get_SizeQuotaWarning(This,pbSizeQuotaWarning) )
    ( (This)->lpVtbl -> put_SizeQuotaWarning(This,bSizeQuotaWarning) )
    ( (This)->lpVtbl -> get_HighQuotaWaterMark(This,plHighQuotaWaterMark) )
    ( (This)->lpVtbl -> put_HighQuotaWaterMark(This,lHighQuotaWaterMark) )
    ( (This)->lpVtbl -> get_LowQuotaWaterMark(This,plLowQuotaWaterMark) )
    ( (This)->lpVtbl -> put_LowQuotaWaterMark(This,lLowQuotaWaterMark) )
    ( (This)->lpVtbl -> get_AgeLimit(This,plAgeLimit) )
    ( (This)->lpVtbl -> put_AgeLimit(This,lAgeLimit) )
    ( (This)->lpVtbl -> get_SizeLow(This,plSizeLow) )
    ( (This)->lpVtbl -> get_SizeHigh(This,plSizeHigh) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Save(This) )
    ( (This)->lpVtbl -> GetMessages(This,lPrefetchSize,pFaxIncomingMessageIterator) )
    ( (This)->lpVtbl -> GetMessage(This,bstrMessageId,pFaxIncomingMessage) )
EXTERN_C const IID IID_IFaxIncomingQueue;
    typedef struct IFaxIncomingQueueVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxIncomingQueue * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxIncomingQueue * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxIncomingQueue * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxIncomingQueue * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxIncomingQueue * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxIncomingQueue * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxIncomingQueue * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Blocked )(
            __RPC__in IFaxIncomingQueue * This,
                                __RPC__out VARIANT_BOOL *pbBlocked);
                                        HRESULT ( STDMETHODCALLTYPE *put_Blocked )(
            __RPC__in IFaxIncomingQueue * This,
                       VARIANT_BOOL bBlocked);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IFaxIncomingQueue * This);
                               HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IFaxIncomingQueue * This);
                               HRESULT ( STDMETHODCALLTYPE *GetJobs )(
            __RPC__in IFaxIncomingQueue * This,
                                __RPC__deref_out_opt IFaxIncomingJobs **pFaxIncomingJobs);
                               HRESULT ( STDMETHODCALLTYPE *GetJob )(
            __RPC__in IFaxIncomingQueue * This,
                       __RPC__in BSTR bstrJobId,
                                __RPC__deref_out_opt IFaxIncomingJob **pFaxIncomingJob);
        END_INTERFACE
    } IFaxIncomingQueueVtbl;
    interface IFaxIncomingQueue
    {
        CONST_VTBL struct IFaxIncomingQueueVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Blocked(This,pbBlocked) )
    ( (This)->lpVtbl -> put_Blocked(This,bBlocked) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Save(This) )
    ( (This)->lpVtbl -> GetJobs(This,pFaxIncomingJobs) )
    ( (This)->lpVtbl -> GetJob(This,bstrJobId,pFaxIncomingJob) )
EXTERN_C const IID IID_IFaxOutgoingArchive;
    typedef struct IFaxOutgoingArchiveVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxOutgoingArchive * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxOutgoingArchive * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxOutgoingArchive * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxOutgoingArchive * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxOutgoingArchive * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxOutgoingArchive * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxOutgoingArchive * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_UseArchive )(
            __RPC__in IFaxOutgoingArchive * This,
                                __RPC__out VARIANT_BOOL *pbUseArchive);
                                        HRESULT ( STDMETHODCALLTYPE *put_UseArchive )(
            __RPC__in IFaxOutgoingArchive * This,
                       VARIANT_BOOL bUseArchive);
                                        HRESULT ( STDMETHODCALLTYPE *get_ArchiveFolder )(
            __RPC__in IFaxOutgoingArchive * This,
                                __RPC__deref_out_opt BSTR *pbstrArchiveFolder);
                                        HRESULT ( STDMETHODCALLTYPE *put_ArchiveFolder )(
            __RPC__in IFaxOutgoingArchive * This,
                       __RPC__in BSTR bstrArchiveFolder);
                                        HRESULT ( STDMETHODCALLTYPE *get_SizeQuotaWarning )(
            __RPC__in IFaxOutgoingArchive * This,
                                __RPC__out VARIANT_BOOL *pbSizeQuotaWarning);
                                        HRESULT ( STDMETHODCALLTYPE *put_SizeQuotaWarning )(
            __RPC__in IFaxOutgoingArchive * This,
                       VARIANT_BOOL bSizeQuotaWarning);
                                        HRESULT ( STDMETHODCALLTYPE *get_HighQuotaWaterMark )(
            __RPC__in IFaxOutgoingArchive * This,
                                __RPC__out long *plHighQuotaWaterMark);
                                        HRESULT ( STDMETHODCALLTYPE *put_HighQuotaWaterMark )(
            __RPC__in IFaxOutgoingArchive * This,
                       long lHighQuotaWaterMark);
                                        HRESULT ( STDMETHODCALLTYPE *get_LowQuotaWaterMark )(
            __RPC__in IFaxOutgoingArchive * This,
                                __RPC__out long *plLowQuotaWaterMark);
                                        HRESULT ( STDMETHODCALLTYPE *put_LowQuotaWaterMark )(
            __RPC__in IFaxOutgoingArchive * This,
                       long lLowQuotaWaterMark);
                                        HRESULT ( STDMETHODCALLTYPE *get_AgeLimit )(
            __RPC__in IFaxOutgoingArchive * This,
                                __RPC__out long *plAgeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_AgeLimit )(
            __RPC__in IFaxOutgoingArchive * This,
                       long lAgeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_SizeLow )(
            __RPC__in IFaxOutgoingArchive * This,
                                __RPC__out long *plSizeLow);
                                        HRESULT ( STDMETHODCALLTYPE *get_SizeHigh )(
            __RPC__in IFaxOutgoingArchive * This,
                                __RPC__out long *plSizeHigh);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IFaxOutgoingArchive * This);
                               HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IFaxOutgoingArchive * This);
                               HRESULT ( STDMETHODCALLTYPE *GetMessages )(
            __RPC__in IFaxOutgoingArchive * This,
                                     long lPrefetchSize,
                                __RPC__deref_out_opt IFaxOutgoingMessageIterator **pFaxOutgoingMessageIterator);
                               HRESULT ( STDMETHODCALLTYPE *GetMessage )(
            __RPC__in IFaxOutgoingArchive * This,
                       __RPC__in BSTR bstrMessageId,
                                __RPC__deref_out_opt IFaxOutgoingMessage **pFaxOutgoingMessage);
        END_INTERFACE
    } IFaxOutgoingArchiveVtbl;
    interface IFaxOutgoingArchive
    {
        CONST_VTBL struct IFaxOutgoingArchiveVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_UseArchive(This,pbUseArchive) )
    ( (This)->lpVtbl -> put_UseArchive(This,bUseArchive) )
    ( (This)->lpVtbl -> get_ArchiveFolder(This,pbstrArchiveFolder) )
    ( (This)->lpVtbl -> put_ArchiveFolder(This,bstrArchiveFolder) )
    ( (This)->lpVtbl -> get_SizeQuotaWarning(This,pbSizeQuotaWarning) )
    ( (This)->lpVtbl -> put_SizeQuotaWarning(This,bSizeQuotaWarning) )
    ( (This)->lpVtbl -> get_HighQuotaWaterMark(This,plHighQuotaWaterMark) )
    ( (This)->lpVtbl -> put_HighQuotaWaterMark(This,lHighQuotaWaterMark) )
    ( (This)->lpVtbl -> get_LowQuotaWaterMark(This,plLowQuotaWaterMark) )
    ( (This)->lpVtbl -> put_LowQuotaWaterMark(This,lLowQuotaWaterMark) )
    ( (This)->lpVtbl -> get_AgeLimit(This,plAgeLimit) )
    ( (This)->lpVtbl -> put_AgeLimit(This,lAgeLimit) )
    ( (This)->lpVtbl -> get_SizeLow(This,plSizeLow) )
    ( (This)->lpVtbl -> get_SizeHigh(This,plSizeHigh) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Save(This) )
    ( (This)->lpVtbl -> GetMessages(This,lPrefetchSize,pFaxOutgoingMessageIterator) )
    ( (This)->lpVtbl -> GetMessage(This,bstrMessageId,pFaxOutgoingMessage) )
EXTERN_C const IID IID_IFaxOutgoingQueue;
    typedef struct IFaxOutgoingQueueVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxOutgoingQueue * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxOutgoingQueue * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxOutgoingQueue * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxOutgoingQueue * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxOutgoingQueue * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxOutgoingQueue * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxOutgoingQueue * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Blocked )(
            __RPC__in IFaxOutgoingQueue * This,
                                __RPC__out VARIANT_BOOL *pbBlocked);
                                        HRESULT ( STDMETHODCALLTYPE *put_Blocked )(
            __RPC__in IFaxOutgoingQueue * This,
                       VARIANT_BOOL bBlocked);
                                        HRESULT ( STDMETHODCALLTYPE *get_Paused )(
            __RPC__in IFaxOutgoingQueue * This,
                                __RPC__out VARIANT_BOOL *pbPaused);
                                        HRESULT ( STDMETHODCALLTYPE *put_Paused )(
            __RPC__in IFaxOutgoingQueue * This,
                       VARIANT_BOOL bPaused);
                                        HRESULT ( STDMETHODCALLTYPE *get_AllowPersonalCoverPages )(
            __RPC__in IFaxOutgoingQueue * This,
                                __RPC__out VARIANT_BOOL *pbAllowPersonalCoverPages);
                                        HRESULT ( STDMETHODCALLTYPE *put_AllowPersonalCoverPages )(
            __RPC__in IFaxOutgoingQueue * This,
                       VARIANT_BOOL bAllowPersonalCoverPages);
                                        HRESULT ( STDMETHODCALLTYPE *get_UseDeviceTSID )(
            __RPC__in IFaxOutgoingQueue * This,
                                __RPC__out VARIANT_BOOL *pbUseDeviceTSID);
                                        HRESULT ( STDMETHODCALLTYPE *put_UseDeviceTSID )(
            __RPC__in IFaxOutgoingQueue * This,
                       VARIANT_BOOL bUseDeviceTSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_Retries )(
            __RPC__in IFaxOutgoingQueue * This,
                                __RPC__out long *plRetries);
                                        HRESULT ( STDMETHODCALLTYPE *put_Retries )(
            __RPC__in IFaxOutgoingQueue * This,
                       long lRetries);
                                        HRESULT ( STDMETHODCALLTYPE *get_RetryDelay )(
            __RPC__in IFaxOutgoingQueue * This,
                                __RPC__out long *plRetryDelay);
                                        HRESULT ( STDMETHODCALLTYPE *put_RetryDelay )(
            __RPC__in IFaxOutgoingQueue * This,
                       long lRetryDelay);
                                        HRESULT ( STDMETHODCALLTYPE *get_DiscountRateStart )(
            __RPC__in IFaxOutgoingQueue * This,
                                __RPC__out DATE *pdateDiscountRateStart);
                                        HRESULT ( STDMETHODCALLTYPE *put_DiscountRateStart )(
            __RPC__in IFaxOutgoingQueue * This,
                       DATE dateDiscountRateStart);
                                        HRESULT ( STDMETHODCALLTYPE *get_DiscountRateEnd )(
            __RPC__in IFaxOutgoingQueue * This,
                                __RPC__out DATE *pdateDiscountRateEnd);
                                        HRESULT ( STDMETHODCALLTYPE *put_DiscountRateEnd )(
            __RPC__in IFaxOutgoingQueue * This,
                       DATE dateDiscountRateEnd);
                                        HRESULT ( STDMETHODCALLTYPE *get_AgeLimit )(
            __RPC__in IFaxOutgoingQueue * This,
                                __RPC__out long *plAgeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_AgeLimit )(
            __RPC__in IFaxOutgoingQueue * This,
                       long lAgeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_Branding )(
            __RPC__in IFaxOutgoingQueue * This,
                                __RPC__out VARIANT_BOOL *pbBranding);
                                        HRESULT ( STDMETHODCALLTYPE *put_Branding )(
            __RPC__in IFaxOutgoingQueue * This,
                       VARIANT_BOOL bBranding);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IFaxOutgoingQueue * This);
                               HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IFaxOutgoingQueue * This);
                               HRESULT ( STDMETHODCALLTYPE *GetJobs )(
            __RPC__in IFaxOutgoingQueue * This,
                                __RPC__deref_out_opt IFaxOutgoingJobs **pFaxOutgoingJobs);
                               HRESULT ( STDMETHODCALLTYPE *GetJob )(
            __RPC__in IFaxOutgoingQueue * This,
                       __RPC__in BSTR bstrJobId,
                                __RPC__deref_out_opt IFaxOutgoingJob **pFaxOutgoingJob);
        END_INTERFACE
    } IFaxOutgoingQueueVtbl;
    interface IFaxOutgoingQueue
    {
        CONST_VTBL struct IFaxOutgoingQueueVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Blocked(This,pbBlocked) )
    ( (This)->lpVtbl -> put_Blocked(This,bBlocked) )
    ( (This)->lpVtbl -> get_Paused(This,pbPaused) )
    ( (This)->lpVtbl -> put_Paused(This,bPaused) )
    ( (This)->lpVtbl -> get_AllowPersonalCoverPages(This,pbAllowPersonalCoverPages) )
    ( (This)->lpVtbl -> put_AllowPersonalCoverPages(This,bAllowPersonalCoverPages) )
    ( (This)->lpVtbl -> get_UseDeviceTSID(This,pbUseDeviceTSID) )
    ( (This)->lpVtbl -> put_UseDeviceTSID(This,bUseDeviceTSID) )
    ( (This)->lpVtbl -> get_Retries(This,plRetries) )
    ( (This)->lpVtbl -> put_Retries(This,lRetries) )
    ( (This)->lpVtbl -> get_RetryDelay(This,plRetryDelay) )
    ( (This)->lpVtbl -> put_RetryDelay(This,lRetryDelay) )
    ( (This)->lpVtbl -> get_DiscountRateStart(This,pdateDiscountRateStart) )
    ( (This)->lpVtbl -> put_DiscountRateStart(This,dateDiscountRateStart) )
    ( (This)->lpVtbl -> get_DiscountRateEnd(This,pdateDiscountRateEnd) )
    ( (This)->lpVtbl -> put_DiscountRateEnd(This,dateDiscountRateEnd) )
    ( (This)->lpVtbl -> get_AgeLimit(This,plAgeLimit) )
    ( (This)->lpVtbl -> put_AgeLimit(This,lAgeLimit) )
    ( (This)->lpVtbl -> get_Branding(This,pbBranding) )
    ( (This)->lpVtbl -> put_Branding(This,bBranding) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Save(This) )
    ( (This)->lpVtbl -> GetJobs(This,pFaxOutgoingJobs) )
    ( (This)->lpVtbl -> GetJob(This,bstrJobId,pFaxOutgoingJob) )
EXTERN_C const IID IID_IFaxIncomingMessageIterator;
    typedef struct IFaxIncomingMessageIteratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxIncomingMessageIterator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxIncomingMessageIterator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxIncomingMessageIterator * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxIncomingMessageIterator * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxIncomingMessageIterator * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxIncomingMessageIterator * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxIncomingMessageIterator * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Message )(
            __RPC__in IFaxIncomingMessageIterator * This,
                                __RPC__deref_out_opt IFaxIncomingMessage **pFaxIncomingMessage);
                                        HRESULT ( STDMETHODCALLTYPE *get_PrefetchSize )(
            __RPC__in IFaxIncomingMessageIterator * This,
                                __RPC__out long *plPrefetchSize);
                                        HRESULT ( STDMETHODCALLTYPE *put_PrefetchSize )(
            __RPC__in IFaxIncomingMessageIterator * This,
                       long lPrefetchSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_AtEOF )(
            __RPC__in IFaxIncomingMessageIterator * This,
                                __RPC__out VARIANT_BOOL *pbEOF);
                               HRESULT ( STDMETHODCALLTYPE *MoveFirst )(
            __RPC__in IFaxIncomingMessageIterator * This);
                               HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IFaxIncomingMessageIterator * This);
        END_INTERFACE
    } IFaxIncomingMessageIteratorVtbl;
    interface IFaxIncomingMessageIterator
    {
        CONST_VTBL struct IFaxIncomingMessageIteratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Message(This,pFaxIncomingMessage) )
    ( (This)->lpVtbl -> get_PrefetchSize(This,plPrefetchSize) )
    ( (This)->lpVtbl -> put_PrefetchSize(This,lPrefetchSize) )
    ( (This)->lpVtbl -> get_AtEOF(This,pbEOF) )
    ( (This)->lpVtbl -> MoveFirst(This) )
    ( (This)->lpVtbl -> MoveNext(This) )
EXTERN_C const IID IID_IFaxIncomingMessage;
    typedef struct IFaxIncomingMessageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxIncomingMessage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxIncomingMessage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxIncomingMessage * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxIncomingMessage * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxIncomingMessage * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxIncomingMessage * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxIncomingMessage * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFaxIncomingMessage * This,
                                __RPC__deref_out_opt BSTR *pbstrId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Pages )(
            __RPC__in IFaxIncomingMessage * This,
                                __RPC__out long *plPages);
                                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in IFaxIncomingMessage * This,
                                __RPC__out long *plSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceName )(
            __RPC__in IFaxIncomingMessage * This,
                                __RPC__deref_out_opt BSTR *pbstrDeviceName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Retries )(
            __RPC__in IFaxIncomingMessage * This,
                                __RPC__out long *plRetries);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransmissionStart )(
            __RPC__in IFaxIncomingMessage * This,
                                __RPC__out DATE *pdateTransmissionStart);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransmissionEnd )(
            __RPC__in IFaxIncomingMessage * This,
                                __RPC__out DATE *pdateTransmissionEnd);
                                        HRESULT ( STDMETHODCALLTYPE *get_CSID )(
            __RPC__in IFaxIncomingMessage * This,
                                __RPC__deref_out_opt BSTR *pbstrCSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_TSID )(
            __RPC__in IFaxIncomingMessage * This,
                                __RPC__deref_out_opt BSTR *pbstrTSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallerId )(
            __RPC__in IFaxIncomingMessage * This,
                                __RPC__deref_out_opt BSTR *pbstrCallerId);
                                        HRESULT ( STDMETHODCALLTYPE *get_RoutingInformation )(
            __RPC__in IFaxIncomingMessage * This,
                                __RPC__deref_out_opt BSTR *pbstrRoutingInformation);
                               HRESULT ( STDMETHODCALLTYPE *CopyTiff )(
            __RPC__in IFaxIncomingMessage * This,
                       __RPC__in BSTR bstrTiffPath);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFaxIncomingMessage * This);
        END_INTERFACE
    } IFaxIncomingMessageVtbl;
    interface IFaxIncomingMessage
    {
        CONST_VTBL struct IFaxIncomingMessageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,pbstrId) )
    ( (This)->lpVtbl -> get_Pages(This,plPages) )
    ( (This)->lpVtbl -> get_Size(This,plSize) )
    ( (This)->lpVtbl -> get_DeviceName(This,pbstrDeviceName) )
    ( (This)->lpVtbl -> get_Retries(This,plRetries) )
    ( (This)->lpVtbl -> get_TransmissionStart(This,pdateTransmissionStart) )
    ( (This)->lpVtbl -> get_TransmissionEnd(This,pdateTransmissionEnd) )
    ( (This)->lpVtbl -> get_CSID(This,pbstrCSID) )
    ( (This)->lpVtbl -> get_TSID(This,pbstrTSID) )
    ( (This)->lpVtbl -> get_CallerId(This,pbstrCallerId) )
    ( (This)->lpVtbl -> get_RoutingInformation(This,pbstrRoutingInformation) )
    ( (This)->lpVtbl -> CopyTiff(This,bstrTiffPath) )
    ( (This)->lpVtbl -> Delete(This) )
EXTERN_C const IID IID_IFaxOutgoingJobs;
    typedef struct IFaxOutgoingJobsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxOutgoingJobs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxOutgoingJobs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxOutgoingJobs * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxOutgoingJobs * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxOutgoingJobs * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxOutgoingJobs * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxOutgoingJobs * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IFaxOutgoingJobs * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IFaxOutgoingJobs * This,
                       VARIANT vIndex,
                                __RPC__deref_out_opt IFaxOutgoingJob **pFaxOutgoingJob);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IFaxOutgoingJobs * This,
                                __RPC__out long *plCount);
        END_INTERFACE
    } IFaxOutgoingJobsVtbl;
    interface IFaxOutgoingJobs
    {
        CONST_VTBL struct IFaxOutgoingJobsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
    ( (This)->lpVtbl -> get_Item(This,vIndex,pFaxOutgoingJob) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
EXTERN_C const IID IID_IFaxOutgoingJob;
    typedef struct IFaxOutgoingJobVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxOutgoingJob * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxOutgoingJob * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxOutgoingJob * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxOutgoingJob * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxOutgoingJob * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxOutgoingJob * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxOutgoingJob * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Subject )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__deref_out_opt BSTR *pbstrSubject);
                                        HRESULT ( STDMETHODCALLTYPE *get_DocumentName )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__deref_out_opt BSTR *pbstrDocumentName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Pages )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__out long *plPages);
                                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__out long *plSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubmissionId )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__deref_out_opt BSTR *pbstrSubmissionId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__deref_out_opt BSTR *pbstrId);
                                        HRESULT ( STDMETHODCALLTYPE *get_OriginalScheduledTime )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__out DATE *pdateOriginalScheduledTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubmissionTime )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__out DATE *pdateSubmissionTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReceiptType )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__out FAX_RECEIPT_TYPE_ENUM *pReceiptType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Priority )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__out FAX_PRIORITY_TYPE_ENUM *pPriority);
                                        HRESULT ( STDMETHODCALLTYPE *get_Sender )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__deref_out_opt IFaxSender **ppFaxSender);
                                        HRESULT ( STDMETHODCALLTYPE *get_Recipient )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__deref_out_opt IFaxRecipient **ppFaxRecipient);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPage )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__out long *plCurrentPage);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__out long *plDeviceId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__out FAX_JOB_STATUS_ENUM *pStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExtendedStatusCode )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__out FAX_JOB_EXTENDED_STATUS_ENUM *pExtendedStatusCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExtendedStatus )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__deref_out_opt BSTR *pbstrExtendedStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_AvailableOperations )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__out FAX_JOB_OPERATIONS_ENUM *pAvailableOperations);
                                        HRESULT ( STDMETHODCALLTYPE *get_Retries )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__out long *plRetries);
                                        HRESULT ( STDMETHODCALLTYPE *get_ScheduledTime )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__out DATE *pdateScheduledTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransmissionStart )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__out DATE *pdateTransmissionStart);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransmissionEnd )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__out DATE *pdateTransmissionEnd);
                                        HRESULT ( STDMETHODCALLTYPE *get_CSID )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__deref_out_opt BSTR *pbstrCSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_TSID )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__deref_out_opt BSTR *pbstrTSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_GroupBroadcastReceipts )(
            __RPC__in IFaxOutgoingJob * This,
                                __RPC__out VARIANT_BOOL *pbGroupBroadcastReceipts);
                               HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IFaxOutgoingJob * This);
                               HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IFaxOutgoingJob * This);
                               HRESULT ( STDMETHODCALLTYPE *Restart )(
            __RPC__in IFaxOutgoingJob * This);
                               HRESULT ( STDMETHODCALLTYPE *CopyTiff )(
            __RPC__in IFaxOutgoingJob * This,
                       __RPC__in BSTR bstrTiffPath);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IFaxOutgoingJob * This);
                               HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IFaxOutgoingJob * This);
        END_INTERFACE
    } IFaxOutgoingJobVtbl;
    interface IFaxOutgoingJob
    {
        CONST_VTBL struct IFaxOutgoingJobVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Subject(This,pbstrSubject) )
    ( (This)->lpVtbl -> get_DocumentName(This,pbstrDocumentName) )
    ( (This)->lpVtbl -> get_Pages(This,plPages) )
    ( (This)->lpVtbl -> get_Size(This,plSize) )
    ( (This)->lpVtbl -> get_SubmissionId(This,pbstrSubmissionId) )
    ( (This)->lpVtbl -> get_Id(This,pbstrId) )
    ( (This)->lpVtbl -> get_OriginalScheduledTime(This,pdateOriginalScheduledTime) )
    ( (This)->lpVtbl -> get_SubmissionTime(This,pdateSubmissionTime) )
    ( (This)->lpVtbl -> get_ReceiptType(This,pReceiptType) )
    ( (This)->lpVtbl -> get_Priority(This,pPriority) )
    ( (This)->lpVtbl -> get_Sender(This,ppFaxSender) )
    ( (This)->lpVtbl -> get_Recipient(This,ppFaxRecipient) )
    ( (This)->lpVtbl -> get_CurrentPage(This,plCurrentPage) )
    ( (This)->lpVtbl -> get_DeviceId(This,plDeviceId) )
    ( (This)->lpVtbl -> get_Status(This,pStatus) )
    ( (This)->lpVtbl -> get_ExtendedStatusCode(This,pExtendedStatusCode) )
    ( (This)->lpVtbl -> get_ExtendedStatus(This,pbstrExtendedStatus) )
    ( (This)->lpVtbl -> get_AvailableOperations(This,pAvailableOperations) )
    ( (This)->lpVtbl -> get_Retries(This,plRetries) )
    ( (This)->lpVtbl -> get_ScheduledTime(This,pdateScheduledTime) )
    ( (This)->lpVtbl -> get_TransmissionStart(This,pdateTransmissionStart) )
    ( (This)->lpVtbl -> get_TransmissionEnd(This,pdateTransmissionEnd) )
    ( (This)->lpVtbl -> get_CSID(This,pbstrCSID) )
    ( (This)->lpVtbl -> get_TSID(This,pbstrTSID) )
    ( (This)->lpVtbl -> get_GroupBroadcastReceipts(This,pbGroupBroadcastReceipts) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> Restart(This) )
    ( (This)->lpVtbl -> CopyTiff(This,bstrTiffPath) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Cancel(This) )
EXTERN_C const IID IID_IFaxOutgoingMessageIterator;
    typedef struct IFaxOutgoingMessageIteratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxOutgoingMessageIterator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxOutgoingMessageIterator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxOutgoingMessageIterator * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxOutgoingMessageIterator * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxOutgoingMessageIterator * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxOutgoingMessageIterator * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxOutgoingMessageIterator * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Message )(
            __RPC__in IFaxOutgoingMessageIterator * This,
                                __RPC__deref_out_opt IFaxOutgoingMessage **pFaxOutgoingMessage);
                                        HRESULT ( STDMETHODCALLTYPE *get_AtEOF )(
            __RPC__in IFaxOutgoingMessageIterator * This,
                                __RPC__out VARIANT_BOOL *pbEOF);
                                        HRESULT ( STDMETHODCALLTYPE *get_PrefetchSize )(
            __RPC__in IFaxOutgoingMessageIterator * This,
                                __RPC__out long *plPrefetchSize);
                                        HRESULT ( STDMETHODCALLTYPE *put_PrefetchSize )(
            __RPC__in IFaxOutgoingMessageIterator * This,
                       long lPrefetchSize);
                               HRESULT ( STDMETHODCALLTYPE *MoveFirst )(
            __RPC__in IFaxOutgoingMessageIterator * This);
                               HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IFaxOutgoingMessageIterator * This);
        END_INTERFACE
    } IFaxOutgoingMessageIteratorVtbl;
    interface IFaxOutgoingMessageIterator
    {
        CONST_VTBL struct IFaxOutgoingMessageIteratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Message(This,pFaxOutgoingMessage) )
    ( (This)->lpVtbl -> get_AtEOF(This,pbEOF) )
    ( (This)->lpVtbl -> get_PrefetchSize(This,plPrefetchSize) )
    ( (This)->lpVtbl -> put_PrefetchSize(This,lPrefetchSize) )
    ( (This)->lpVtbl -> MoveFirst(This) )
    ( (This)->lpVtbl -> MoveNext(This) )
EXTERN_C const IID IID_IFaxOutgoingMessage;
    typedef struct IFaxOutgoingMessageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxOutgoingMessage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxOutgoingMessage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxOutgoingMessage * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxOutgoingMessage * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxOutgoingMessage * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxOutgoingMessage * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxOutgoingMessage * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubmissionId )(
            __RPC__in IFaxOutgoingMessage * This,
                                __RPC__deref_out_opt BSTR *pbstrSubmissionId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFaxOutgoingMessage * This,
                                __RPC__deref_out_opt BSTR *pbstrId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Subject )(
            __RPC__in IFaxOutgoingMessage * This,
                                __RPC__deref_out_opt BSTR *pbstrSubject);
                                        HRESULT ( STDMETHODCALLTYPE *get_DocumentName )(
            __RPC__in IFaxOutgoingMessage * This,
                                __RPC__deref_out_opt BSTR *pbstrDocumentName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Retries )(
            __RPC__in IFaxOutgoingMessage * This,
                                __RPC__out long *plRetries);
                                        HRESULT ( STDMETHODCALLTYPE *get_Pages )(
            __RPC__in IFaxOutgoingMessage * This,
                                __RPC__out long *plPages);
                                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in IFaxOutgoingMessage * This,
                                __RPC__out long *plSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_OriginalScheduledTime )(
            __RPC__in IFaxOutgoingMessage * This,
                                __RPC__out DATE *pdateOriginalScheduledTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubmissionTime )(
            __RPC__in IFaxOutgoingMessage * This,
                                __RPC__out DATE *pdateSubmissionTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_Priority )(
            __RPC__in IFaxOutgoingMessage * This,
                                __RPC__out FAX_PRIORITY_TYPE_ENUM *pPriority);
                                        HRESULT ( STDMETHODCALLTYPE *get_Sender )(
            __RPC__in IFaxOutgoingMessage * This,
                                __RPC__deref_out_opt IFaxSender **ppFaxSender);
                                        HRESULT ( STDMETHODCALLTYPE *get_Recipient )(
            __RPC__in IFaxOutgoingMessage * This,
                                __RPC__deref_out_opt IFaxRecipient **ppFaxRecipient);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceName )(
            __RPC__in IFaxOutgoingMessage * This,
                                __RPC__deref_out_opt BSTR *pbstrDeviceName);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransmissionStart )(
            __RPC__in IFaxOutgoingMessage * This,
                                __RPC__out DATE *pdateTransmissionStart);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransmissionEnd )(
            __RPC__in IFaxOutgoingMessage * This,
                                __RPC__out DATE *pdateTransmissionEnd);
                                        HRESULT ( STDMETHODCALLTYPE *get_CSID )(
            __RPC__in IFaxOutgoingMessage * This,
                                __RPC__deref_out_opt BSTR *pbstrCSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_TSID )(
            __RPC__in IFaxOutgoingMessage * This,
                                __RPC__deref_out_opt BSTR *pbstrTSID);
                               HRESULT ( STDMETHODCALLTYPE *CopyTiff )(
            __RPC__in IFaxOutgoingMessage * This,
                       __RPC__in BSTR bstrTiffPath);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFaxOutgoingMessage * This);
        END_INTERFACE
    } IFaxOutgoingMessageVtbl;
    interface IFaxOutgoingMessage
    {
        CONST_VTBL struct IFaxOutgoingMessageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_SubmissionId(This,pbstrSubmissionId) )
    ( (This)->lpVtbl -> get_Id(This,pbstrId) )
    ( (This)->lpVtbl -> get_Subject(This,pbstrSubject) )
    ( (This)->lpVtbl -> get_DocumentName(This,pbstrDocumentName) )
    ( (This)->lpVtbl -> get_Retries(This,plRetries) )
    ( (This)->lpVtbl -> get_Pages(This,plPages) )
    ( (This)->lpVtbl -> get_Size(This,plSize) )
    ( (This)->lpVtbl -> get_OriginalScheduledTime(This,pdateOriginalScheduledTime) )
    ( (This)->lpVtbl -> get_SubmissionTime(This,pdateSubmissionTime) )
    ( (This)->lpVtbl -> get_Priority(This,pPriority) )
    ( (This)->lpVtbl -> get_Sender(This,ppFaxSender) )
    ( (This)->lpVtbl -> get_Recipient(This,ppFaxRecipient) )
    ( (This)->lpVtbl -> get_DeviceName(This,pbstrDeviceName) )
    ( (This)->lpVtbl -> get_TransmissionStart(This,pdateTransmissionStart) )
    ( (This)->lpVtbl -> get_TransmissionEnd(This,pdateTransmissionEnd) )
    ( (This)->lpVtbl -> get_CSID(This,pbstrCSID) )
    ( (This)->lpVtbl -> get_TSID(This,pbstrTSID) )
    ( (This)->lpVtbl -> CopyTiff(This,bstrTiffPath) )
    ( (This)->lpVtbl -> Delete(This) )
EXTERN_C const IID IID_IFaxIncomingJobs;
    typedef struct IFaxIncomingJobsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxIncomingJobs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxIncomingJobs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxIncomingJobs * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxIncomingJobs * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxIncomingJobs * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxIncomingJobs * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxIncomingJobs * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IFaxIncomingJobs * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IFaxIncomingJobs * This,
                       VARIANT vIndex,
                                __RPC__deref_out_opt IFaxIncomingJob **pFaxIncomingJob);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IFaxIncomingJobs * This,
                                __RPC__out long *plCount);
        END_INTERFACE
    } IFaxIncomingJobsVtbl;
    interface IFaxIncomingJobs
    {
        CONST_VTBL struct IFaxIncomingJobsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
    ( (This)->lpVtbl -> get_Item(This,vIndex,pFaxIncomingJob) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
EXTERN_C const IID IID_IFaxIncomingJob;
    typedef struct IFaxIncomingJobVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxIncomingJob * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxIncomingJob * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxIncomingJob * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxIncomingJob * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxIncomingJob * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxIncomingJob * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxIncomingJob * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in IFaxIncomingJob * This,
                                __RPC__out long *plSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFaxIncomingJob * This,
                                __RPC__deref_out_opt BSTR *pbstrId);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPage )(
            __RPC__in IFaxIncomingJob * This,
                                __RPC__out long *plCurrentPage);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
            __RPC__in IFaxIncomingJob * This,
                                __RPC__out long *plDeviceId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IFaxIncomingJob * This,
                                __RPC__out FAX_JOB_STATUS_ENUM *pStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExtendedStatusCode )(
            __RPC__in IFaxIncomingJob * This,
                                __RPC__out FAX_JOB_EXTENDED_STATUS_ENUM *pExtendedStatusCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExtendedStatus )(
            __RPC__in IFaxIncomingJob * This,
                                __RPC__deref_out_opt BSTR *pbstrExtendedStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_AvailableOperations )(
            __RPC__in IFaxIncomingJob * This,
                                __RPC__out FAX_JOB_OPERATIONS_ENUM *pAvailableOperations);
                                        HRESULT ( STDMETHODCALLTYPE *get_Retries )(
            __RPC__in IFaxIncomingJob * This,
                                __RPC__out long *plRetries);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransmissionStart )(
            __RPC__in IFaxIncomingJob * This,
                                __RPC__out DATE *pdateTransmissionStart);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransmissionEnd )(
            __RPC__in IFaxIncomingJob * This,
                                __RPC__out DATE *pdateTransmissionEnd);
                                        HRESULT ( STDMETHODCALLTYPE *get_CSID )(
            __RPC__in IFaxIncomingJob * This,
                                __RPC__deref_out_opt BSTR *pbstrCSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_TSID )(
            __RPC__in IFaxIncomingJob * This,
                                __RPC__deref_out_opt BSTR *pbstrTSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallerId )(
            __RPC__in IFaxIncomingJob * This,
                                __RPC__deref_out_opt BSTR *pbstrCallerId);
                                        HRESULT ( STDMETHODCALLTYPE *get_RoutingInformation )(
            __RPC__in IFaxIncomingJob * This,
                                __RPC__deref_out_opt BSTR *pbstrRoutingInformation);
                                        HRESULT ( STDMETHODCALLTYPE *get_JobType )(
            __RPC__in IFaxIncomingJob * This,
                                __RPC__out FAX_JOB_TYPE_ENUM *pJobType);
                               HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IFaxIncomingJob * This);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IFaxIncomingJob * This);
                               HRESULT ( STDMETHODCALLTYPE *CopyTiff )(
            __RPC__in IFaxIncomingJob * This,
                       __RPC__in BSTR bstrTiffPath);
        END_INTERFACE
    } IFaxIncomingJobVtbl;
    interface IFaxIncomingJob
    {
        CONST_VTBL struct IFaxIncomingJobVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Size(This,plSize) )
    ( (This)->lpVtbl -> get_Id(This,pbstrId) )
    ( (This)->lpVtbl -> get_CurrentPage(This,plCurrentPage) )
    ( (This)->lpVtbl -> get_DeviceId(This,plDeviceId) )
    ( (This)->lpVtbl -> get_Status(This,pStatus) )
    ( (This)->lpVtbl -> get_ExtendedStatusCode(This,pExtendedStatusCode) )
    ( (This)->lpVtbl -> get_ExtendedStatus(This,pbstrExtendedStatus) )
    ( (This)->lpVtbl -> get_AvailableOperations(This,pAvailableOperations) )
    ( (This)->lpVtbl -> get_Retries(This,plRetries) )
    ( (This)->lpVtbl -> get_TransmissionStart(This,pdateTransmissionStart) )
    ( (This)->lpVtbl -> get_TransmissionEnd(This,pdateTransmissionEnd) )
    ( (This)->lpVtbl -> get_CSID(This,pbstrCSID) )
    ( (This)->lpVtbl -> get_TSID(This,pbstrTSID) )
    ( (This)->lpVtbl -> get_CallerId(This,pbstrCallerId) )
    ( (This)->lpVtbl -> get_RoutingInformation(This,pbstrRoutingInformation) )
    ( (This)->lpVtbl -> get_JobType(This,pJobType) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> CopyTiff(This,bstrTiffPath) )
typedef
enum FAX_PROVIDER_STATUS_ENUM
    {
        fpsSUCCESS = 0,
        fpsSERVER_ERROR = ( fpsSUCCESS + 1 ) ,
        fpsBAD_GUID = ( fpsSERVER_ERROR + 1 ) ,
        fpsBAD_VERSION = ( fpsBAD_GUID + 1 ) ,
        fpsCANT_LOAD = ( fpsBAD_VERSION + 1 ) ,
        fpsCANT_LINK = ( fpsCANT_LOAD + 1 ) ,
        fpsCANT_INIT = ( fpsCANT_LINK + 1 )
    } FAX_PROVIDER_STATUS_ENUM;
EXTERN_C const IID IID_IFaxDeviceProvider;
    typedef struct IFaxDeviceProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxDeviceProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxDeviceProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxDeviceProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxDeviceProvider * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxDeviceProvider * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxDeviceProvider * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxDeviceProvider * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in IFaxDeviceProvider * This,
                                __RPC__deref_out_opt BSTR *pbstrFriendlyName);
                                        HRESULT ( STDMETHODCALLTYPE *get_ImageName )(
            __RPC__in IFaxDeviceProvider * This,
                                __RPC__deref_out_opt BSTR *pbstrImageName);
                                        HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
            __RPC__in IFaxDeviceProvider * This,
                                __RPC__deref_out_opt BSTR *pbstrUniqueName);
                                        HRESULT ( STDMETHODCALLTYPE *get_TapiProviderName )(
            __RPC__in IFaxDeviceProvider * This,
                                __RPC__deref_out_opt BSTR *pbstrTapiProviderName);
                                        HRESULT ( STDMETHODCALLTYPE *get_MajorVersion )(
            __RPC__in IFaxDeviceProvider * This,
                                __RPC__out long *plMajorVersion);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinorVersion )(
            __RPC__in IFaxDeviceProvider * This,
                                __RPC__out long *plMinorVersion);
                                        HRESULT ( STDMETHODCALLTYPE *get_MajorBuild )(
            __RPC__in IFaxDeviceProvider * This,
                                __RPC__out long *plMajorBuild);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinorBuild )(
            __RPC__in IFaxDeviceProvider * This,
                                __RPC__out long *plMinorBuild);
                                        HRESULT ( STDMETHODCALLTYPE *get_Debug )(
            __RPC__in IFaxDeviceProvider * This,
                                __RPC__out VARIANT_BOOL *pbDebug);
                                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IFaxDeviceProvider * This,
                                __RPC__out FAX_PROVIDER_STATUS_ENUM *pStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_InitErrorCode )(
            __RPC__in IFaxDeviceProvider * This,
                                __RPC__out long *plInitErrorCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceIds )(
            __RPC__in IFaxDeviceProvider * This,
                                __RPC__out VARIANT *pvDeviceIds);
        END_INTERFACE
    } IFaxDeviceProviderVtbl;
    interface IFaxDeviceProvider
    {
        CONST_VTBL struct IFaxDeviceProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_FriendlyName(This,pbstrFriendlyName) )
    ( (This)->lpVtbl -> get_ImageName(This,pbstrImageName) )
    ( (This)->lpVtbl -> get_UniqueName(This,pbstrUniqueName) )
    ( (This)->lpVtbl -> get_TapiProviderName(This,pbstrTapiProviderName) )
    ( (This)->lpVtbl -> get_MajorVersion(This,plMajorVersion) )
    ( (This)->lpVtbl -> get_MinorVersion(This,plMinorVersion) )
    ( (This)->lpVtbl -> get_MajorBuild(This,plMajorBuild) )
    ( (This)->lpVtbl -> get_MinorBuild(This,plMinorBuild) )
    ( (This)->lpVtbl -> get_Debug(This,pbDebug) )
    ( (This)->lpVtbl -> get_Status(This,pStatus) )
    ( (This)->lpVtbl -> get_InitErrorCode(This,plInitErrorCode) )
    ( (This)->lpVtbl -> get_DeviceIds(This,pvDeviceIds) )
typedef
enum FAX_DEVICE_RECEIVE_MODE_ENUM
    {
        fdrmNO_ANSWER = 0,
        fdrmAUTO_ANSWER = ( fdrmNO_ANSWER + 1 ) ,
        fdrmMANUAL_ANSWER = ( fdrmAUTO_ANSWER + 1 )
    } FAX_DEVICE_RECEIVE_MODE_ENUM;
EXTERN_C const IID IID_IFaxDevice;
    typedef struct IFaxDeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxDevice * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxDevice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxDevice * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxDevice * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxDevice * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxDevice * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxDevice * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFaxDevice * This,
                                __RPC__out long *plId);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceName )(
            __RPC__in IFaxDevice * This,
                                __RPC__deref_out_opt BSTR *pbstrDeviceName);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProviderUniqueName )(
            __RPC__in IFaxDevice * This,
                                __RPC__deref_out_opt BSTR *pbstrProviderUniqueName);
                                        HRESULT ( STDMETHODCALLTYPE *get_PoweredOff )(
            __RPC__in IFaxDevice * This,
                                __RPC__out VARIANT_BOOL *pbPoweredOff);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReceivingNow )(
            __RPC__in IFaxDevice * This,
                                __RPC__out VARIANT_BOOL *pbReceivingNow);
                                        HRESULT ( STDMETHODCALLTYPE *get_SendingNow )(
            __RPC__in IFaxDevice * This,
                                __RPC__out VARIANT_BOOL *pbSendingNow);
                                        HRESULT ( STDMETHODCALLTYPE *get_UsedRoutingMethods )(
            __RPC__in IFaxDevice * This,
                                __RPC__out VARIANT *pvUsedRoutingMethods);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFaxDevice * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFaxDevice * This,
                       __RPC__in BSTR bstrDescription);
                                        HRESULT ( STDMETHODCALLTYPE *get_SendEnabled )(
            __RPC__in IFaxDevice * This,
                                __RPC__out VARIANT_BOOL *pbSendEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_SendEnabled )(
            __RPC__in IFaxDevice * This,
                       VARIANT_BOOL bSendEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReceiveMode )(
            __RPC__in IFaxDevice * This,
                                __RPC__out FAX_DEVICE_RECEIVE_MODE_ENUM *pReceiveMode);
                                        HRESULT ( STDMETHODCALLTYPE *put_ReceiveMode )(
            __RPC__in IFaxDevice * This,
                       FAX_DEVICE_RECEIVE_MODE_ENUM ReceiveMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_RingsBeforeAnswer )(
            __RPC__in IFaxDevice * This,
                                __RPC__out long *plRingsBeforeAnswer);
                                        HRESULT ( STDMETHODCALLTYPE *put_RingsBeforeAnswer )(
            __RPC__in IFaxDevice * This,
                       long lRingsBeforeAnswer);
                                        HRESULT ( STDMETHODCALLTYPE *get_CSID )(
            __RPC__in IFaxDevice * This,
                                __RPC__deref_out_opt BSTR *pbstrCSID);
                                        HRESULT ( STDMETHODCALLTYPE *put_CSID )(
            __RPC__in IFaxDevice * This,
                       __RPC__in BSTR bstrCSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_TSID )(
            __RPC__in IFaxDevice * This,
                                __RPC__deref_out_opt BSTR *pbstrTSID);
                                        HRESULT ( STDMETHODCALLTYPE *put_TSID )(
            __RPC__in IFaxDevice * This,
                       __RPC__in BSTR bstrTSID);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IFaxDevice * This);
                               HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IFaxDevice * This);
                               HRESULT ( STDMETHODCALLTYPE *GetExtensionProperty )(
            __RPC__in IFaxDevice * This,
                       __RPC__in BSTR bstrGUID,
                                __RPC__out VARIANT *pvProperty);
                               HRESULT ( STDMETHODCALLTYPE *SetExtensionProperty )(
            __RPC__in IFaxDevice * This,
                       __RPC__in BSTR bstrGUID,
                       VARIANT vProperty);
                               HRESULT ( STDMETHODCALLTYPE *UseRoutingMethod )(
            __RPC__in IFaxDevice * This,
                       __RPC__in BSTR bstrMethodGUID,
                       VARIANT_BOOL bUse);
                                        HRESULT ( STDMETHODCALLTYPE *get_RingingNow )(
            __RPC__in IFaxDevice * This,
                                __RPC__out VARIANT_BOOL *pbRingingNow);
                               HRESULT ( STDMETHODCALLTYPE *AnswerCall )(
            __RPC__in IFaxDevice * This);
        END_INTERFACE
    } IFaxDeviceVtbl;
    interface IFaxDevice
    {
        CONST_VTBL struct IFaxDeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,plId) )
    ( (This)->lpVtbl -> get_DeviceName(This,pbstrDeviceName) )
    ( (This)->lpVtbl -> get_ProviderUniqueName(This,pbstrProviderUniqueName) )
    ( (This)->lpVtbl -> get_PoweredOff(This,pbPoweredOff) )
    ( (This)->lpVtbl -> get_ReceivingNow(This,pbReceivingNow) )
    ( (This)->lpVtbl -> get_SendingNow(This,pbSendingNow) )
    ( (This)->lpVtbl -> get_UsedRoutingMethods(This,pvUsedRoutingMethods) )
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_SendEnabled(This,pbSendEnabled) )
    ( (This)->lpVtbl -> put_SendEnabled(This,bSendEnabled) )
    ( (This)->lpVtbl -> get_ReceiveMode(This,pReceiveMode) )
    ( (This)->lpVtbl -> put_ReceiveMode(This,ReceiveMode) )
    ( (This)->lpVtbl -> get_RingsBeforeAnswer(This,plRingsBeforeAnswer) )
    ( (This)->lpVtbl -> put_RingsBeforeAnswer(This,lRingsBeforeAnswer) )
    ( (This)->lpVtbl -> get_CSID(This,pbstrCSID) )
    ( (This)->lpVtbl -> put_CSID(This,bstrCSID) )
    ( (This)->lpVtbl -> get_TSID(This,pbstrTSID) )
    ( (This)->lpVtbl -> put_TSID(This,bstrTSID) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Save(This) )
    ( (This)->lpVtbl -> GetExtensionProperty(This,bstrGUID,pvProperty) )
    ( (This)->lpVtbl -> SetExtensionProperty(This,bstrGUID,vProperty) )
    ( (This)->lpVtbl -> UseRoutingMethod(This,bstrMethodGUID,bUse) )
    ( (This)->lpVtbl -> get_RingingNow(This,pbRingingNow) )
    ( (This)->lpVtbl -> AnswerCall(This) )
EXTERN_C const IID IID_IFaxActivityLogging;
    typedef struct IFaxActivityLoggingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxActivityLogging * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxActivityLogging * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxActivityLogging * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxActivityLogging * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxActivityLogging * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxActivityLogging * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxActivityLogging * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_LogIncoming )(
            __RPC__in IFaxActivityLogging * This,
                                __RPC__out VARIANT_BOOL *pbLogIncoming);
                                        HRESULT ( STDMETHODCALLTYPE *put_LogIncoming )(
            __RPC__in IFaxActivityLogging * This,
                       VARIANT_BOOL bLogIncoming);
                                        HRESULT ( STDMETHODCALLTYPE *get_LogOutgoing )(
            __RPC__in IFaxActivityLogging * This,
                                __RPC__out VARIANT_BOOL *pbLogOutgoing);
                                        HRESULT ( STDMETHODCALLTYPE *put_LogOutgoing )(
            __RPC__in IFaxActivityLogging * This,
                       VARIANT_BOOL bLogOutgoing);
                                        HRESULT ( STDMETHODCALLTYPE *get_DatabasePath )(
            __RPC__in IFaxActivityLogging * This,
                                __RPC__deref_out_opt BSTR *pbstrDatabasePath);
                                        HRESULT ( STDMETHODCALLTYPE *put_DatabasePath )(
            __RPC__in IFaxActivityLogging * This,
                       __RPC__in BSTR bstrDatabasePath);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IFaxActivityLogging * This);
                               HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IFaxActivityLogging * This);
        END_INTERFACE
    } IFaxActivityLoggingVtbl;
    interface IFaxActivityLogging
    {
        CONST_VTBL struct IFaxActivityLoggingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_LogIncoming(This,pbLogIncoming) )
    ( (This)->lpVtbl -> put_LogIncoming(This,bLogIncoming) )
    ( (This)->lpVtbl -> get_LogOutgoing(This,pbLogOutgoing) )
    ( (This)->lpVtbl -> put_LogOutgoing(This,bLogOutgoing) )
    ( (This)->lpVtbl -> get_DatabasePath(This,pbstrDatabasePath) )
    ( (This)->lpVtbl -> put_DatabasePath(This,bstrDatabasePath) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Save(This) )
typedef
enum FAX_LOG_LEVEL_ENUM
    {
        fllNONE = 0,
        fllMIN = ( fllNONE + 1 ) ,
        fllMED = ( fllMIN + 1 ) ,
        fllMAX = ( fllMED + 1 )
    } FAX_LOG_LEVEL_ENUM;
EXTERN_C const IID IID_IFaxEventLogging;
    typedef struct IFaxEventLoggingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxEventLogging * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxEventLogging * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxEventLogging * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxEventLogging * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxEventLogging * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxEventLogging * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxEventLogging * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_InitEventsLevel )(
            __RPC__in IFaxEventLogging * This,
                                __RPC__out FAX_LOG_LEVEL_ENUM *pInitEventLevel);
                                        HRESULT ( STDMETHODCALLTYPE *put_InitEventsLevel )(
            __RPC__in IFaxEventLogging * This,
                       FAX_LOG_LEVEL_ENUM InitEventLevel);
                                        HRESULT ( STDMETHODCALLTYPE *get_InboundEventsLevel )(
            __RPC__in IFaxEventLogging * This,
                                __RPC__out FAX_LOG_LEVEL_ENUM *pInboundEventLevel);
                                        HRESULT ( STDMETHODCALLTYPE *put_InboundEventsLevel )(
            __RPC__in IFaxEventLogging * This,
                       FAX_LOG_LEVEL_ENUM InboundEventLevel);
                                        HRESULT ( STDMETHODCALLTYPE *get_OutboundEventsLevel )(
            __RPC__in IFaxEventLogging * This,
                                __RPC__out FAX_LOG_LEVEL_ENUM *pOutboundEventLevel);
                                        HRESULT ( STDMETHODCALLTYPE *put_OutboundEventsLevel )(
            __RPC__in IFaxEventLogging * This,
                       FAX_LOG_LEVEL_ENUM OutboundEventLevel);
                                        HRESULT ( STDMETHODCALLTYPE *get_GeneralEventsLevel )(
            __RPC__in IFaxEventLogging * This,
                                __RPC__out FAX_LOG_LEVEL_ENUM *pGeneralEventLevel);
                                        HRESULT ( STDMETHODCALLTYPE *put_GeneralEventsLevel )(
            __RPC__in IFaxEventLogging * This,
                       FAX_LOG_LEVEL_ENUM GeneralEventLevel);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IFaxEventLogging * This);
                               HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IFaxEventLogging * This);
        END_INTERFACE
    } IFaxEventLoggingVtbl;
    interface IFaxEventLogging
    {
        CONST_VTBL struct IFaxEventLoggingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_InitEventsLevel(This,pInitEventLevel) )
    ( (This)->lpVtbl -> put_InitEventsLevel(This,InitEventLevel) )
    ( (This)->lpVtbl -> get_InboundEventsLevel(This,pInboundEventLevel) )
    ( (This)->lpVtbl -> put_InboundEventsLevel(This,InboundEventLevel) )
    ( (This)->lpVtbl -> get_OutboundEventsLevel(This,pOutboundEventLevel) )
    ( (This)->lpVtbl -> put_OutboundEventsLevel(This,OutboundEventLevel) )
    ( (This)->lpVtbl -> get_GeneralEventsLevel(This,pGeneralEventLevel) )
    ( (This)->lpVtbl -> put_GeneralEventsLevel(This,GeneralEventLevel) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Save(This) )
EXTERN_C const IID IID_IFaxOutboundRoutingGroups;
    typedef struct IFaxOutboundRoutingGroupsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxOutboundRoutingGroups * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxOutboundRoutingGroups * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxOutboundRoutingGroups * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxOutboundRoutingGroups * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxOutboundRoutingGroups * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxOutboundRoutingGroups * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxOutboundRoutingGroups * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IFaxOutboundRoutingGroups * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IFaxOutboundRoutingGroups * This,
                       VARIANT vIndex,
                                __RPC__deref_out_opt IFaxOutboundRoutingGroup **pFaxOutboundRoutingGroup);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IFaxOutboundRoutingGroups * This,
                                __RPC__out long *plCount);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IFaxOutboundRoutingGroups * This,
                       __RPC__in BSTR bstrName,
                                __RPC__deref_out_opt IFaxOutboundRoutingGroup **pFaxOutboundRoutingGroup);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IFaxOutboundRoutingGroups * This,
                       VARIANT vIndex);
        END_INTERFACE
    } IFaxOutboundRoutingGroupsVtbl;
    interface IFaxOutboundRoutingGroups
    {
        CONST_VTBL struct IFaxOutboundRoutingGroupsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
    ( (This)->lpVtbl -> get_Item(This,vIndex,pFaxOutboundRoutingGroup) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> Add(This,bstrName,pFaxOutboundRoutingGroup) )
    ( (This)->lpVtbl -> Remove(This,vIndex) )
typedef
enum FAX_GROUP_STATUS_ENUM
    {
        fgsALL_DEV_VALID = 0,
        fgsEMPTY = ( fgsALL_DEV_VALID + 1 ) ,
        fgsALL_DEV_NOT_VALID = ( fgsEMPTY + 1 ) ,
        fgsSOME_DEV_NOT_VALID = ( fgsALL_DEV_NOT_VALID + 1 )
    } FAX_GROUP_STATUS_ENUM;
EXTERN_C const IID IID_IFaxOutboundRoutingGroup;
    typedef struct IFaxOutboundRoutingGroupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxOutboundRoutingGroup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxOutboundRoutingGroup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxOutboundRoutingGroup * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxOutboundRoutingGroup * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxOutboundRoutingGroup * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxOutboundRoutingGroup * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxOutboundRoutingGroup * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFaxOutboundRoutingGroup * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IFaxOutboundRoutingGroup * This,
                                __RPC__out FAX_GROUP_STATUS_ENUM *pStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceIds )(
            __RPC__in IFaxOutboundRoutingGroup * This,
                                __RPC__deref_out_opt IFaxDeviceIds **pFaxDeviceIds);
        END_INTERFACE
    } IFaxOutboundRoutingGroupVtbl;
    interface IFaxOutboundRoutingGroup
    {
        CONST_VTBL struct IFaxOutboundRoutingGroupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_Status(This,pStatus) )
    ( (This)->lpVtbl -> get_DeviceIds(This,pFaxDeviceIds) )
EXTERN_C const IID IID_IFaxDeviceIds;
    typedef struct IFaxDeviceIdsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxDeviceIds * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxDeviceIds * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxDeviceIds * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxDeviceIds * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxDeviceIds * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxDeviceIds * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxDeviceIds * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IFaxDeviceIds * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IFaxDeviceIds * This,
                       long lIndex,
                                __RPC__out long *plDeviceId);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IFaxDeviceIds * This,
                                __RPC__out long *plCount);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IFaxDeviceIds * This,
                       long lDeviceId);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IFaxDeviceIds * This,
                       long lIndex);
                               HRESULT ( STDMETHODCALLTYPE *SetOrder )(
            __RPC__in IFaxDeviceIds * This,
                       long lDeviceId,
                       long lNewOrder);
        END_INTERFACE
    } IFaxDeviceIdsVtbl;
    interface IFaxDeviceIds
    {
        CONST_VTBL struct IFaxDeviceIdsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
    ( (This)->lpVtbl -> get_Item(This,lIndex,plDeviceId) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> Add(This,lDeviceId) )
    ( (This)->lpVtbl -> Remove(This,lIndex) )
    ( (This)->lpVtbl -> SetOrder(This,lDeviceId,lNewOrder) )
EXTERN_C const IID IID_IFaxOutboundRoutingRules;
    typedef struct IFaxOutboundRoutingRulesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxOutboundRoutingRules * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxOutboundRoutingRules * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxOutboundRoutingRules * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxOutboundRoutingRules * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxOutboundRoutingRules * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxOutboundRoutingRules * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxOutboundRoutingRules * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IFaxOutboundRoutingRules * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IFaxOutboundRoutingRules * This,
                       long lIndex,
                                __RPC__deref_out_opt IFaxOutboundRoutingRule **pFaxOutboundRoutingRule);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IFaxOutboundRoutingRules * This,
                                __RPC__out long *plCount);
                               HRESULT ( STDMETHODCALLTYPE *ItemByCountryAndArea )(
            __RPC__in IFaxOutboundRoutingRules * This,
                       long lCountryCode,
                       long lAreaCode,
                                __RPC__deref_out_opt IFaxOutboundRoutingRule **pFaxOutboundRoutingRule);
                               HRESULT ( STDMETHODCALLTYPE *RemoveByCountryAndArea )(
            __RPC__in IFaxOutboundRoutingRules * This,
                       long lCountryCode,
                       long lAreaCode);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IFaxOutboundRoutingRules * This,
                       long lIndex);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IFaxOutboundRoutingRules * This,
                       long lCountryCode,
                       long lAreaCode,
                       VARIANT_BOOL bUseDevice,
                       __RPC__in BSTR bstrGroupName,
                       long lDeviceId,
                                __RPC__deref_out_opt IFaxOutboundRoutingRule **pFaxOutboundRoutingRule);
        END_INTERFACE
    } IFaxOutboundRoutingRulesVtbl;
    interface IFaxOutboundRoutingRules
    {
        CONST_VTBL struct IFaxOutboundRoutingRulesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
    ( (This)->lpVtbl -> get_Item(This,lIndex,pFaxOutboundRoutingRule) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> ItemByCountryAndArea(This,lCountryCode,lAreaCode,pFaxOutboundRoutingRule) )
    ( (This)->lpVtbl -> RemoveByCountryAndArea(This,lCountryCode,lAreaCode) )
    ( (This)->lpVtbl -> Remove(This,lIndex) )
    ( (This)->lpVtbl -> Add(This,lCountryCode,lAreaCode,bUseDevice,bstrGroupName,lDeviceId,pFaxOutboundRoutingRule) )
typedef
enum FAX_RULE_STATUS_ENUM
    {
        frsVALID = 0,
        frsEMPTY_GROUP = ( frsVALID + 1 ) ,
        frsALL_GROUP_DEV_NOT_VALID = ( frsEMPTY_GROUP + 1 ) ,
        frsSOME_GROUP_DEV_NOT_VALID = ( frsALL_GROUP_DEV_NOT_VALID + 1 ) ,
        frsBAD_DEVICE = ( frsSOME_GROUP_DEV_NOT_VALID + 1 )
    } FAX_RULE_STATUS_ENUM;
EXTERN_C const IID IID_IFaxOutboundRoutingRule;
    typedef struct IFaxOutboundRoutingRuleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxOutboundRoutingRule * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxOutboundRoutingRule * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxOutboundRoutingRule * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxOutboundRoutingRule * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxOutboundRoutingRule * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxOutboundRoutingRule * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxOutboundRoutingRule * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CountryCode )(
            __RPC__in IFaxOutboundRoutingRule * This,
                                __RPC__out long *plCountryCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_AreaCode )(
            __RPC__in IFaxOutboundRoutingRule * This,
                                __RPC__out long *plAreaCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IFaxOutboundRoutingRule * This,
                                __RPC__out FAX_RULE_STATUS_ENUM *pStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_UseDevice )(
            __RPC__in IFaxOutboundRoutingRule * This,
                                __RPC__out VARIANT_BOOL *pbUseDevice);
                                        HRESULT ( STDMETHODCALLTYPE *put_UseDevice )(
            __RPC__in IFaxOutboundRoutingRule * This,
                       VARIANT_BOOL bUseDevice);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
            __RPC__in IFaxOutboundRoutingRule * This,
                                __RPC__out long *plDeviceId);
                                        HRESULT ( STDMETHODCALLTYPE *put_DeviceId )(
            __RPC__in IFaxOutboundRoutingRule * This,
                       long DeviceId);
                                        HRESULT ( STDMETHODCALLTYPE *get_GroupName )(
            __RPC__in IFaxOutboundRoutingRule * This,
                                __RPC__deref_out_opt BSTR *pbstrGroupName);
                                        HRESULT ( STDMETHODCALLTYPE *put_GroupName )(
            __RPC__in IFaxOutboundRoutingRule * This,
                       __RPC__in BSTR bstrGroupName);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IFaxOutboundRoutingRule * This);
                               HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IFaxOutboundRoutingRule * This);
        END_INTERFACE
    } IFaxOutboundRoutingRuleVtbl;
    interface IFaxOutboundRoutingRule
    {
        CONST_VTBL struct IFaxOutboundRoutingRuleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CountryCode(This,plCountryCode) )
    ( (This)->lpVtbl -> get_AreaCode(This,plAreaCode) )
    ( (This)->lpVtbl -> get_Status(This,pStatus) )
    ( (This)->lpVtbl -> get_UseDevice(This,pbUseDevice) )
    ( (This)->lpVtbl -> put_UseDevice(This,bUseDevice) )
    ( (This)->lpVtbl -> get_DeviceId(This,plDeviceId) )
    ( (This)->lpVtbl -> put_DeviceId(This,DeviceId) )
    ( (This)->lpVtbl -> get_GroupName(This,pbstrGroupName) )
    ( (This)->lpVtbl -> put_GroupName(This,bstrGroupName) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Save(This) )
EXTERN_C const IID IID_IFaxInboundRoutingExtensions;
    typedef struct IFaxInboundRoutingExtensionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxInboundRoutingExtensions * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxInboundRoutingExtensions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxInboundRoutingExtensions * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxInboundRoutingExtensions * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxInboundRoutingExtensions * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxInboundRoutingExtensions * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxInboundRoutingExtensions * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IFaxInboundRoutingExtensions * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IFaxInboundRoutingExtensions * This,
                       VARIANT vIndex,
                                __RPC__deref_out_opt IFaxInboundRoutingExtension **pFaxInboundRoutingExtension);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IFaxInboundRoutingExtensions * This,
                                __RPC__out long *plCount);
        END_INTERFACE
    } IFaxInboundRoutingExtensionsVtbl;
    interface IFaxInboundRoutingExtensions
    {
        CONST_VTBL struct IFaxInboundRoutingExtensionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
    ( (This)->lpVtbl -> get_Item(This,vIndex,pFaxInboundRoutingExtension) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
EXTERN_C const IID IID_IFaxInboundRoutingExtension;
    typedef struct IFaxInboundRoutingExtensionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxInboundRoutingExtension * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxInboundRoutingExtension * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxInboundRoutingExtension * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxInboundRoutingExtension * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxInboundRoutingExtension * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxInboundRoutingExtension * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxInboundRoutingExtension * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in IFaxInboundRoutingExtension * This,
                                __RPC__deref_out_opt BSTR *pbstrFriendlyName);
                                        HRESULT ( STDMETHODCALLTYPE *get_ImageName )(
            __RPC__in IFaxInboundRoutingExtension * This,
                                __RPC__deref_out_opt BSTR *pbstrImageName);
                                        HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
            __RPC__in IFaxInboundRoutingExtension * This,
                                __RPC__deref_out_opt BSTR *pbstrUniqueName);
                                        HRESULT ( STDMETHODCALLTYPE *get_MajorVersion )(
            __RPC__in IFaxInboundRoutingExtension * This,
                                __RPC__out long *plMajorVersion);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinorVersion )(
            __RPC__in IFaxInboundRoutingExtension * This,
                                __RPC__out long *plMinorVersion);
                                        HRESULT ( STDMETHODCALLTYPE *get_MajorBuild )(
            __RPC__in IFaxInboundRoutingExtension * This,
                                __RPC__out long *plMajorBuild);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinorBuild )(
            __RPC__in IFaxInboundRoutingExtension * This,
                                __RPC__out long *plMinorBuild);
                                        HRESULT ( STDMETHODCALLTYPE *get_Debug )(
            __RPC__in IFaxInboundRoutingExtension * This,
                                __RPC__out VARIANT_BOOL *pbDebug);
                                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IFaxInboundRoutingExtension * This,
                                __RPC__out FAX_PROVIDER_STATUS_ENUM *pStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_InitErrorCode )(
            __RPC__in IFaxInboundRoutingExtension * This,
                                __RPC__out long *plInitErrorCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_Methods )(
            __RPC__in IFaxInboundRoutingExtension * This,
                                __RPC__out VARIANT *pvMethods);
        END_INTERFACE
    } IFaxInboundRoutingExtensionVtbl;
    interface IFaxInboundRoutingExtension
    {
        CONST_VTBL struct IFaxInboundRoutingExtensionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_FriendlyName(This,pbstrFriendlyName) )
    ( (This)->lpVtbl -> get_ImageName(This,pbstrImageName) )
    ( (This)->lpVtbl -> get_UniqueName(This,pbstrUniqueName) )
    ( (This)->lpVtbl -> get_MajorVersion(This,plMajorVersion) )
    ( (This)->lpVtbl -> get_MinorVersion(This,plMinorVersion) )
    ( (This)->lpVtbl -> get_MajorBuild(This,plMajorBuild) )
    ( (This)->lpVtbl -> get_MinorBuild(This,plMinorBuild) )
    ( (This)->lpVtbl -> get_Debug(This,pbDebug) )
    ( (This)->lpVtbl -> get_Status(This,pStatus) )
    ( (This)->lpVtbl -> get_InitErrorCode(This,plInitErrorCode) )
    ( (This)->lpVtbl -> get_Methods(This,pvMethods) )
EXTERN_C const IID IID_IFaxInboundRoutingMethods;
    typedef struct IFaxInboundRoutingMethodsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxInboundRoutingMethods * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxInboundRoutingMethods * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxInboundRoutingMethods * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxInboundRoutingMethods * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxInboundRoutingMethods * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxInboundRoutingMethods * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxInboundRoutingMethods * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IFaxInboundRoutingMethods * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IFaxInboundRoutingMethods * This,
                       VARIANT vIndex,
                                __RPC__deref_out_opt IFaxInboundRoutingMethod **pFaxInboundRoutingMethod);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IFaxInboundRoutingMethods * This,
                                __RPC__out long *plCount);
        END_INTERFACE
    } IFaxInboundRoutingMethodsVtbl;
    interface IFaxInboundRoutingMethods
    {
        CONST_VTBL struct IFaxInboundRoutingMethodsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
    ( (This)->lpVtbl -> get_Item(This,vIndex,pFaxInboundRoutingMethod) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
EXTERN_C const IID IID_IFaxInboundRoutingMethod;
    typedef struct IFaxInboundRoutingMethodVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxInboundRoutingMethod * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxInboundRoutingMethod * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxInboundRoutingMethod * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxInboundRoutingMethod * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxInboundRoutingMethod * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxInboundRoutingMethod * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxInboundRoutingMethod * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFaxInboundRoutingMethod * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                                        HRESULT ( STDMETHODCALLTYPE *get_GUID )(
            __RPC__in IFaxInboundRoutingMethod * This,
                                __RPC__deref_out_opt BSTR *pbstrGUID);
                                        HRESULT ( STDMETHODCALLTYPE *get_FunctionName )(
            __RPC__in IFaxInboundRoutingMethod * This,
                                __RPC__deref_out_opt BSTR *pbstrFunctionName);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExtensionFriendlyName )(
            __RPC__in IFaxInboundRoutingMethod * This,
                                __RPC__deref_out_opt BSTR *pbstrExtensionFriendlyName);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExtensionImageName )(
            __RPC__in IFaxInboundRoutingMethod * This,
                                __RPC__deref_out_opt BSTR *pbstrExtensionImageName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Priority )(
            __RPC__in IFaxInboundRoutingMethod * This,
                                __RPC__out long *plPriority);
                                        HRESULT ( STDMETHODCALLTYPE *put_Priority )(
            __RPC__in IFaxInboundRoutingMethod * This,
                       long lPriority);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IFaxInboundRoutingMethod * This);
                               HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IFaxInboundRoutingMethod * This);
        END_INTERFACE
    } IFaxInboundRoutingMethodVtbl;
    interface IFaxInboundRoutingMethod
    {
        CONST_VTBL struct IFaxInboundRoutingMethodVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_GUID(This,pbstrGUID) )
    ( (This)->lpVtbl -> get_FunctionName(This,pbstrFunctionName) )
    ( (This)->lpVtbl -> get_ExtensionFriendlyName(This,pbstrExtensionFriendlyName) )
    ( (This)->lpVtbl -> get_ExtensionImageName(This,pbstrExtensionImageName) )
    ( (This)->lpVtbl -> get_Priority(This,plPriority) )
    ( (This)->lpVtbl -> put_Priority(This,lPriority) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Save(This) )
EXTERN_C const IID IID_IFaxDocument2;
    typedef struct IFaxDocument2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxDocument2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxDocument2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxDocument2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxDocument2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxDocument2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxDocument2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxDocument2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Body )(
            __RPC__in IFaxDocument2 * This,
                                __RPC__deref_out_opt BSTR *pbstrBody);
                                        HRESULT ( STDMETHODCALLTYPE *put_Body )(
            __RPC__in IFaxDocument2 * This,
                       __RPC__in BSTR bstrBody);
                                        HRESULT ( STDMETHODCALLTYPE *get_Sender )(
            __RPC__in IFaxDocument2 * This,
                                __RPC__deref_out_opt IFaxSender **ppFaxSender);
                                        HRESULT ( STDMETHODCALLTYPE *get_Recipients )(
            __RPC__in IFaxDocument2 * This,
                                __RPC__deref_out_opt IFaxRecipients **ppFaxRecipients);
                                        HRESULT ( STDMETHODCALLTYPE *get_CoverPage )(
            __RPC__in IFaxDocument2 * This,
                                __RPC__deref_out_opt BSTR *pbstrCoverPage);
                                        HRESULT ( STDMETHODCALLTYPE *put_CoverPage )(
            __RPC__in IFaxDocument2 * This,
                       __RPC__in BSTR bstrCoverPage);
                                        HRESULT ( STDMETHODCALLTYPE *get_Subject )(
            __RPC__in IFaxDocument2 * This,
                                __RPC__deref_out_opt BSTR *pbstrSubject);
                                        HRESULT ( STDMETHODCALLTYPE *put_Subject )(
            __RPC__in IFaxDocument2 * This,
                       __RPC__in BSTR bstrSubject);
                                        HRESULT ( STDMETHODCALLTYPE *get_Note )(
            __RPC__in IFaxDocument2 * This,
                                __RPC__deref_out_opt BSTR *pbstrNote);
                                        HRESULT ( STDMETHODCALLTYPE *put_Note )(
            __RPC__in IFaxDocument2 * This,
                       __RPC__in BSTR bstrNote);
                                        HRESULT ( STDMETHODCALLTYPE *get_ScheduleTime )(
            __RPC__in IFaxDocument2 * This,
                                __RPC__out DATE *pdateScheduleTime);
                                        HRESULT ( STDMETHODCALLTYPE *put_ScheduleTime )(
            __RPC__in IFaxDocument2 * This,
                       DATE dateScheduleTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReceiptAddress )(
            __RPC__in IFaxDocument2 * This,
                                __RPC__deref_out_opt BSTR *pbstrReceiptAddress);
                                        HRESULT ( STDMETHODCALLTYPE *put_ReceiptAddress )(
            __RPC__in IFaxDocument2 * This,
                       __RPC__in BSTR bstrReceiptAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_DocumentName )(
            __RPC__in IFaxDocument2 * This,
                                __RPC__deref_out_opt BSTR *pbstrDocumentName);
                                        HRESULT ( STDMETHODCALLTYPE *put_DocumentName )(
            __RPC__in IFaxDocument2 * This,
                       __RPC__in BSTR bstrDocumentName);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallHandle )(
            __RPC__in IFaxDocument2 * This,
                                __RPC__out long *plCallHandle);
                                        HRESULT ( STDMETHODCALLTYPE *put_CallHandle )(
            __RPC__in IFaxDocument2 * This,
                       long lCallHandle);
                                        HRESULT ( STDMETHODCALLTYPE *get_CoverPageType )(
            __RPC__in IFaxDocument2 * This,
                                __RPC__out FAX_COVERPAGE_TYPE_ENUM *pCoverPageType);
                                        HRESULT ( STDMETHODCALLTYPE *put_CoverPageType )(
            __RPC__in IFaxDocument2 * This,
                       FAX_COVERPAGE_TYPE_ENUM CoverPageType);
                                        HRESULT ( STDMETHODCALLTYPE *get_ScheduleType )(
            __RPC__in IFaxDocument2 * This,
                                __RPC__out FAX_SCHEDULE_TYPE_ENUM *pScheduleType);
                                        HRESULT ( STDMETHODCALLTYPE *put_ScheduleType )(
            __RPC__in IFaxDocument2 * This,
                       FAX_SCHEDULE_TYPE_ENUM ScheduleType);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReceiptType )(
            __RPC__in IFaxDocument2 * This,
                                __RPC__out FAX_RECEIPT_TYPE_ENUM *pReceiptType);
                                        HRESULT ( STDMETHODCALLTYPE *put_ReceiptType )(
            __RPC__in IFaxDocument2 * This,
                       FAX_RECEIPT_TYPE_ENUM ReceiptType);
                                        HRESULT ( STDMETHODCALLTYPE *get_GroupBroadcastReceipts )(
            __RPC__in IFaxDocument2 * This,
                                __RPC__out VARIANT_BOOL *pbUseGrouping);
                                        HRESULT ( STDMETHODCALLTYPE *put_GroupBroadcastReceipts )(
            __RPC__in IFaxDocument2 * This,
                       VARIANT_BOOL bUseGrouping);
                                        HRESULT ( STDMETHODCALLTYPE *get_Priority )(
            __RPC__in IFaxDocument2 * This,
                                __RPC__out FAX_PRIORITY_TYPE_ENUM *pPriority);
                                        HRESULT ( STDMETHODCALLTYPE *put_Priority )(
            __RPC__in IFaxDocument2 * This,
                       FAX_PRIORITY_TYPE_ENUM Priority);
                                        HRESULT ( STDMETHODCALLTYPE *get_TapiConnection )(
            __RPC__in IFaxDocument2 * This,
                                __RPC__deref_out_opt IDispatch **ppTapiConnection);
                                           HRESULT ( STDMETHODCALLTYPE *putref_TapiConnection )(
            __RPC__in IFaxDocument2 * This,
                       __RPC__in_opt IDispatch *pTapiConnection);
                               HRESULT ( STDMETHODCALLTYPE *Submit )(
            __RPC__in IFaxDocument2 * This,
                       __RPC__in BSTR bstrFaxServerName,
                                __RPC__out VARIANT *pvFaxOutgoingJobIDs);
                               HRESULT ( STDMETHODCALLTYPE *ConnectedSubmit )(
            __RPC__in IFaxDocument2 * This,
                       __RPC__in_opt IFaxServer *pFaxServer,
                                __RPC__out VARIANT *pvFaxOutgoingJobIDs);
                                        HRESULT ( STDMETHODCALLTYPE *get_AttachFaxToReceipt )(
            __RPC__in IFaxDocument2 * This,
                                __RPC__out VARIANT_BOOL *pbAttachFax);
                                        HRESULT ( STDMETHODCALLTYPE *put_AttachFaxToReceipt )(
            __RPC__in IFaxDocument2 * This,
                       VARIANT_BOOL bAttachFax);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubmissionId )(
            __RPC__in IFaxDocument2 * This,
                                __RPC__deref_out_opt BSTR *pbstrSubmissionId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Bodies )(
            __RPC__in IFaxDocument2 * This,
                                __RPC__out VARIANT *pvBodies);
                                        HRESULT ( STDMETHODCALLTYPE *put_Bodies )(
            __RPC__in IFaxDocument2 * This,
                       VARIANT vBodies);
                               HRESULT ( STDMETHODCALLTYPE *Submit2 )(
            __RPC__in IFaxDocument2 * This,
                       __RPC__in BSTR bstrFaxServerName,
                        __RPC__out VARIANT *pvFaxOutgoingJobIDs,
                                __RPC__out long *plErrorBodyFile);
                               HRESULT ( STDMETHODCALLTYPE *ConnectedSubmit2 )(
            __RPC__in IFaxDocument2 * This,
                       __RPC__in_opt IFaxServer *pFaxServer,
                        __RPC__out VARIANT *pvFaxOutgoingJobIDs,
                                __RPC__out long *plErrorBodyFile);
        END_INTERFACE
    } IFaxDocument2Vtbl;
    interface IFaxDocument2
    {
        CONST_VTBL struct IFaxDocument2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Body(This,pbstrBody) )
    ( (This)->lpVtbl -> put_Body(This,bstrBody) )
    ( (This)->lpVtbl -> get_Sender(This,ppFaxSender) )
    ( (This)->lpVtbl -> get_Recipients(This,ppFaxRecipients) )
    ( (This)->lpVtbl -> get_CoverPage(This,pbstrCoverPage) )
    ( (This)->lpVtbl -> put_CoverPage(This,bstrCoverPage) )
    ( (This)->lpVtbl -> get_Subject(This,pbstrSubject) )
    ( (This)->lpVtbl -> put_Subject(This,bstrSubject) )
    ( (This)->lpVtbl -> get_Note(This,pbstrNote) )
    ( (This)->lpVtbl -> put_Note(This,bstrNote) )
    ( (This)->lpVtbl -> get_ScheduleTime(This,pdateScheduleTime) )
    ( (This)->lpVtbl -> put_ScheduleTime(This,dateScheduleTime) )
    ( (This)->lpVtbl -> get_ReceiptAddress(This,pbstrReceiptAddress) )
    ( (This)->lpVtbl -> put_ReceiptAddress(This,bstrReceiptAddress) )
    ( (This)->lpVtbl -> get_DocumentName(This,pbstrDocumentName) )
    ( (This)->lpVtbl -> put_DocumentName(This,bstrDocumentName) )
    ( (This)->lpVtbl -> get_CallHandle(This,plCallHandle) )
    ( (This)->lpVtbl -> put_CallHandle(This,lCallHandle) )
    ( (This)->lpVtbl -> get_CoverPageType(This,pCoverPageType) )
    ( (This)->lpVtbl -> put_CoverPageType(This,CoverPageType) )
    ( (This)->lpVtbl -> get_ScheduleType(This,pScheduleType) )
    ( (This)->lpVtbl -> put_ScheduleType(This,ScheduleType) )
    ( (This)->lpVtbl -> get_ReceiptType(This,pReceiptType) )
    ( (This)->lpVtbl -> put_ReceiptType(This,ReceiptType) )
    ( (This)->lpVtbl -> get_GroupBroadcastReceipts(This,pbUseGrouping) )
    ( (This)->lpVtbl -> put_GroupBroadcastReceipts(This,bUseGrouping) )
    ( (This)->lpVtbl -> get_Priority(This,pPriority) )
    ( (This)->lpVtbl -> put_Priority(This,Priority) )
    ( (This)->lpVtbl -> get_TapiConnection(This,ppTapiConnection) )
    ( (This)->lpVtbl -> putref_TapiConnection(This,pTapiConnection) )
    ( (This)->lpVtbl -> Submit(This,bstrFaxServerName,pvFaxOutgoingJobIDs) )
    ( (This)->lpVtbl -> ConnectedSubmit(This,pFaxServer,pvFaxOutgoingJobIDs) )
    ( (This)->lpVtbl -> get_AttachFaxToReceipt(This,pbAttachFax) )
    ( (This)->lpVtbl -> put_AttachFaxToReceipt(This,bAttachFax) )
    ( (This)->lpVtbl -> get_SubmissionId(This,pbstrSubmissionId) )
    ( (This)->lpVtbl -> get_Bodies(This,pvBodies) )
    ( (This)->lpVtbl -> put_Bodies(This,vBodies) )
    ( (This)->lpVtbl -> Submit2(This,bstrFaxServerName,pvFaxOutgoingJobIDs,plErrorBodyFile) )
    ( (This)->lpVtbl -> ConnectedSubmit2(This,pFaxServer,pvFaxOutgoingJobIDs,plErrorBodyFile) )
EXTERN_C const IID IID_IFaxConfiguration;
    typedef struct IFaxConfigurationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxConfiguration * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxConfiguration * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxConfiguration * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxConfiguration * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxConfiguration * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxConfiguration * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxConfiguration * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_UseArchive )(
            __RPC__in IFaxConfiguration * This,
                                __RPC__out VARIANT_BOOL *pbUseArchive);
                                        HRESULT ( STDMETHODCALLTYPE *put_UseArchive )(
            __RPC__in IFaxConfiguration * This,
                       VARIANT_BOOL bUseArchive);
                                        HRESULT ( STDMETHODCALLTYPE *get_ArchiveLocation )(
            __RPC__in IFaxConfiguration * This,
                                __RPC__deref_out_opt BSTR *pbstrArchiveLocation);
                                        HRESULT ( STDMETHODCALLTYPE *put_ArchiveLocation )(
            __RPC__in IFaxConfiguration * This,
                       __RPC__in BSTR bstrArchiveLocation);
                                        HRESULT ( STDMETHODCALLTYPE *get_SizeQuotaWarning )(
            __RPC__in IFaxConfiguration * This,
                                __RPC__out VARIANT_BOOL *pbSizeQuotaWarning);
                                        HRESULT ( STDMETHODCALLTYPE *put_SizeQuotaWarning )(
            __RPC__in IFaxConfiguration * This,
                       VARIANT_BOOL bSizeQuotaWarning);
                                        HRESULT ( STDMETHODCALLTYPE *get_HighQuotaWaterMark )(
            __RPC__in IFaxConfiguration * This,
                                __RPC__out long *plHighQuotaWaterMark);
                                        HRESULT ( STDMETHODCALLTYPE *put_HighQuotaWaterMark )(
            __RPC__in IFaxConfiguration * This,
                       long lHighQuotaWaterMark);
                                        HRESULT ( STDMETHODCALLTYPE *get_LowQuotaWaterMark )(
            __RPC__in IFaxConfiguration * This,
                                __RPC__out long *plLowQuotaWaterMark);
                                        HRESULT ( STDMETHODCALLTYPE *put_LowQuotaWaterMark )(
            __RPC__in IFaxConfiguration * This,
                       long lLowQuotaWaterMark);
                                        HRESULT ( STDMETHODCALLTYPE *get_ArchiveAgeLimit )(
            __RPC__in IFaxConfiguration * This,
                                __RPC__out long *plArchiveAgeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_ArchiveAgeLimit )(
            __RPC__in IFaxConfiguration * This,
                       long lArchiveAgeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_ArchiveSizeLow )(
            __RPC__in IFaxConfiguration * This,
                                __RPC__out long *plSizeLow);
                                        HRESULT ( STDMETHODCALLTYPE *get_ArchiveSizeHigh )(
            __RPC__in IFaxConfiguration * This,
                                __RPC__out long *plSizeHigh);
                                        HRESULT ( STDMETHODCALLTYPE *get_OutgoingQueueBlocked )(
            __RPC__in IFaxConfiguration * This,
                                __RPC__out VARIANT_BOOL *pbOutgoingBlocked);
                                        HRESULT ( STDMETHODCALLTYPE *put_OutgoingQueueBlocked )(
            __RPC__in IFaxConfiguration * This,
                       VARIANT_BOOL bOutgoingBlocked);
                                        HRESULT ( STDMETHODCALLTYPE *get_OutgoingQueuePaused )(
            __RPC__in IFaxConfiguration * This,
                                __RPC__out VARIANT_BOOL *pbOutgoingPaused);
                                        HRESULT ( STDMETHODCALLTYPE *put_OutgoingQueuePaused )(
            __RPC__in IFaxConfiguration * This,
                       VARIANT_BOOL bOutgoingPaused);
                                        HRESULT ( STDMETHODCALLTYPE *get_AllowPersonalCoverPages )(
            __RPC__in IFaxConfiguration * This,
                                __RPC__out VARIANT_BOOL *pbAllowPersonalCoverPages);
                                        HRESULT ( STDMETHODCALLTYPE *put_AllowPersonalCoverPages )(
            __RPC__in IFaxConfiguration * This,
                       VARIANT_BOOL bAllowPersonalCoverPages);
                                        HRESULT ( STDMETHODCALLTYPE *get_UseDeviceTSID )(
            __RPC__in IFaxConfiguration * This,
                                __RPC__out VARIANT_BOOL *pbUseDeviceTSID);
                                        HRESULT ( STDMETHODCALLTYPE *put_UseDeviceTSID )(
            __RPC__in IFaxConfiguration * This,
                       VARIANT_BOOL bUseDeviceTSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_Retries )(
            __RPC__in IFaxConfiguration * This,
                                __RPC__out long *plRetries);
                                        HRESULT ( STDMETHODCALLTYPE *put_Retries )(
            __RPC__in IFaxConfiguration * This,
                       long lRetries);
                                        HRESULT ( STDMETHODCALLTYPE *get_RetryDelay )(
            __RPC__in IFaxConfiguration * This,
                                __RPC__out long *plRetryDelay);
                                        HRESULT ( STDMETHODCALLTYPE *put_RetryDelay )(
            __RPC__in IFaxConfiguration * This,
                       long lRetryDelay);
                                        HRESULT ( STDMETHODCALLTYPE *get_DiscountRateStart )(
            __RPC__in IFaxConfiguration * This,
                                __RPC__out DATE *pdateDiscountRateStart);
                                        HRESULT ( STDMETHODCALLTYPE *put_DiscountRateStart )(
            __RPC__in IFaxConfiguration * This,
                       DATE dateDiscountRateStart);
                                        HRESULT ( STDMETHODCALLTYPE *get_DiscountRateEnd )(
            __RPC__in IFaxConfiguration * This,
                                __RPC__out DATE *pdateDiscountRateEnd);
                                        HRESULT ( STDMETHODCALLTYPE *put_DiscountRateEnd )(
            __RPC__in IFaxConfiguration * This,
                       DATE dateDiscountRateEnd);
                                        HRESULT ( STDMETHODCALLTYPE *get_OutgoingQueueAgeLimit )(
            __RPC__in IFaxConfiguration * This,
                                __RPC__out long *plOutgoingQueueAgeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_OutgoingQueueAgeLimit )(
            __RPC__in IFaxConfiguration * This,
                       long lOutgoingQueueAgeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_Branding )(
            __RPC__in IFaxConfiguration * This,
                                __RPC__out VARIANT_BOOL *pbBranding);
                                        HRESULT ( STDMETHODCALLTYPE *put_Branding )(
            __RPC__in IFaxConfiguration * This,
                       VARIANT_BOOL bBranding);
                                        HRESULT ( STDMETHODCALLTYPE *get_IncomingQueueBlocked )(
            __RPC__in IFaxConfiguration * This,
                                __RPC__out VARIANT_BOOL *pbIncomingBlocked);
                                        HRESULT ( STDMETHODCALLTYPE *put_IncomingQueueBlocked )(
            __RPC__in IFaxConfiguration * This,
                       VARIANT_BOOL bIncomingBlocked);
                                        HRESULT ( STDMETHODCALLTYPE *get_AutoCreateAccountOnConnect )(
            __RPC__in IFaxConfiguration * This,
                                __RPC__out VARIANT_BOOL *pbAutoCreateAccountOnConnect);
                                        HRESULT ( STDMETHODCALLTYPE *put_AutoCreateAccountOnConnect )(
            __RPC__in IFaxConfiguration * This,
                       VARIANT_BOOL bAutoCreateAccountOnConnect);
                                        HRESULT ( STDMETHODCALLTYPE *get_IncomingFaxesArePublic )(
            __RPC__in IFaxConfiguration * This,
                                __RPC__out VARIANT_BOOL *pbIncomingFaxesArePublic);
                                        HRESULT ( STDMETHODCALLTYPE *put_IncomingFaxesArePublic )(
            __RPC__in IFaxConfiguration * This,
                       VARIANT_BOOL bIncomingFaxesArePublic);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IFaxConfiguration * This);
                               HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IFaxConfiguration * This);
        END_INTERFACE
    } IFaxConfigurationVtbl;
    interface IFaxConfiguration
    {
        CONST_VTBL struct IFaxConfigurationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_UseArchive(This,pbUseArchive) )
    ( (This)->lpVtbl -> put_UseArchive(This,bUseArchive) )
    ( (This)->lpVtbl -> get_ArchiveLocation(This,pbstrArchiveLocation) )
    ( (This)->lpVtbl -> put_ArchiveLocation(This,bstrArchiveLocation) )
    ( (This)->lpVtbl -> get_SizeQuotaWarning(This,pbSizeQuotaWarning) )
    ( (This)->lpVtbl -> put_SizeQuotaWarning(This,bSizeQuotaWarning) )
    ( (This)->lpVtbl -> get_HighQuotaWaterMark(This,plHighQuotaWaterMark) )
    ( (This)->lpVtbl -> put_HighQuotaWaterMark(This,lHighQuotaWaterMark) )
    ( (This)->lpVtbl -> get_LowQuotaWaterMark(This,plLowQuotaWaterMark) )
    ( (This)->lpVtbl -> put_LowQuotaWaterMark(This,lLowQuotaWaterMark) )
    ( (This)->lpVtbl -> get_ArchiveAgeLimit(This,plArchiveAgeLimit) )
    ( (This)->lpVtbl -> put_ArchiveAgeLimit(This,lArchiveAgeLimit) )
    ( (This)->lpVtbl -> get_ArchiveSizeLow(This,plSizeLow) )
    ( (This)->lpVtbl -> get_ArchiveSizeHigh(This,plSizeHigh) )
    ( (This)->lpVtbl -> get_OutgoingQueueBlocked(This,pbOutgoingBlocked) )
    ( (This)->lpVtbl -> put_OutgoingQueueBlocked(This,bOutgoingBlocked) )
    ( (This)->lpVtbl -> get_OutgoingQueuePaused(This,pbOutgoingPaused) )
    ( (This)->lpVtbl -> put_OutgoingQueuePaused(This,bOutgoingPaused) )
    ( (This)->lpVtbl -> get_AllowPersonalCoverPages(This,pbAllowPersonalCoverPages) )
    ( (This)->lpVtbl -> put_AllowPersonalCoverPages(This,bAllowPersonalCoverPages) )
    ( (This)->lpVtbl -> get_UseDeviceTSID(This,pbUseDeviceTSID) )
    ( (This)->lpVtbl -> put_UseDeviceTSID(This,bUseDeviceTSID) )
    ( (This)->lpVtbl -> get_Retries(This,plRetries) )
    ( (This)->lpVtbl -> put_Retries(This,lRetries) )
    ( (This)->lpVtbl -> get_RetryDelay(This,plRetryDelay) )
    ( (This)->lpVtbl -> put_RetryDelay(This,lRetryDelay) )
    ( (This)->lpVtbl -> get_DiscountRateStart(This,pdateDiscountRateStart) )
    ( (This)->lpVtbl -> put_DiscountRateStart(This,dateDiscountRateStart) )
    ( (This)->lpVtbl -> get_DiscountRateEnd(This,pdateDiscountRateEnd) )
    ( (This)->lpVtbl -> put_DiscountRateEnd(This,dateDiscountRateEnd) )
    ( (This)->lpVtbl -> get_OutgoingQueueAgeLimit(This,plOutgoingQueueAgeLimit) )
    ( (This)->lpVtbl -> put_OutgoingQueueAgeLimit(This,lOutgoingQueueAgeLimit) )
    ( (This)->lpVtbl -> get_Branding(This,pbBranding) )
    ( (This)->lpVtbl -> put_Branding(This,bBranding) )
    ( (This)->lpVtbl -> get_IncomingQueueBlocked(This,pbIncomingBlocked) )
    ( (This)->lpVtbl -> put_IncomingQueueBlocked(This,bIncomingBlocked) )
    ( (This)->lpVtbl -> get_AutoCreateAccountOnConnect(This,pbAutoCreateAccountOnConnect) )
    ( (This)->lpVtbl -> put_AutoCreateAccountOnConnect(This,bAutoCreateAccountOnConnect) )
    ( (This)->lpVtbl -> get_IncomingFaxesArePublic(This,pbIncomingFaxesArePublic) )
    ( (This)->lpVtbl -> put_IncomingFaxesArePublic(This,bIncomingFaxesArePublic) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Save(This) )
EXTERN_C const IID IID_IFaxServer2;
    typedef struct IFaxServer2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxServer2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxServer2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxServer2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxServer2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxServer2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxServer2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxServer2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Connect )(
            __RPC__in IFaxServer2 * This,
                       __RPC__in BSTR bstrServerName);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServerName )(
            __RPC__in IFaxServer2 * This,
                                __RPC__deref_out_opt BSTR *pbstrServerName);
                               HRESULT ( STDMETHODCALLTYPE *GetDeviceProviders )(
            __RPC__in IFaxServer2 * This,
                                __RPC__deref_out_opt IFaxDeviceProviders **ppFaxDeviceProviders);
                               HRESULT ( STDMETHODCALLTYPE *GetDevices )(
            __RPC__in IFaxServer2 * This,
                                __RPC__deref_out_opt IFaxDevices **ppFaxDevices);
                                        HRESULT ( STDMETHODCALLTYPE *get_InboundRouting )(
            __RPC__in IFaxServer2 * This,
                                __RPC__deref_out_opt IFaxInboundRouting **ppFaxInboundRouting);
                                        HRESULT ( STDMETHODCALLTYPE *get_Folders )(
            __RPC__in IFaxServer2 * This,
                                __RPC__deref_out_opt IFaxFolders **pFaxFolders);
                                        HRESULT ( STDMETHODCALLTYPE *get_LoggingOptions )(
            __RPC__in IFaxServer2 * This,
                                __RPC__deref_out_opt IFaxLoggingOptions **ppFaxLoggingOptions);
                                        HRESULT ( STDMETHODCALLTYPE *get_MajorVersion )(
            __RPC__in IFaxServer2 * This,
                                __RPC__out long *plMajorVersion);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinorVersion )(
            __RPC__in IFaxServer2 * This,
                                __RPC__out long *plMinorVersion);
                                        HRESULT ( STDMETHODCALLTYPE *get_MajorBuild )(
            __RPC__in IFaxServer2 * This,
                                __RPC__out long *plMajorBuild);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinorBuild )(
            __RPC__in IFaxServer2 * This,
                                __RPC__out long *plMinorBuild);
                                        HRESULT ( STDMETHODCALLTYPE *get_Debug )(
            __RPC__in IFaxServer2 * This,
                                __RPC__out VARIANT_BOOL *pbDebug);
                                        HRESULT ( STDMETHODCALLTYPE *get_Activity )(
            __RPC__in IFaxServer2 * This,
                                __RPC__deref_out_opt IFaxActivity **ppFaxActivity);
                                        HRESULT ( STDMETHODCALLTYPE *get_OutboundRouting )(
            __RPC__in IFaxServer2 * This,
                                __RPC__deref_out_opt IFaxOutboundRouting **ppFaxOutboundRouting);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReceiptOptions )(
            __RPC__in IFaxServer2 * This,
                                __RPC__deref_out_opt IFaxReceiptOptions **ppFaxReceiptOptions);
                                        HRESULT ( STDMETHODCALLTYPE *get_Security )(
            __RPC__in IFaxServer2 * This,
                                __RPC__deref_out_opt IFaxSecurity **ppFaxSecurity);
                               HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            __RPC__in IFaxServer2 * This);
                               HRESULT ( STDMETHODCALLTYPE *GetExtensionProperty )(
            __RPC__in IFaxServer2 * This,
                       __RPC__in BSTR bstrGUID,
                                __RPC__out VARIANT *pvProperty);
                               HRESULT ( STDMETHODCALLTYPE *SetExtensionProperty )(
            __RPC__in IFaxServer2 * This,
                       __RPC__in BSTR bstrGUID,
                       VARIANT vProperty);
                               HRESULT ( STDMETHODCALLTYPE *ListenToServerEvents )(
            __RPC__in IFaxServer2 * This,
                       FAX_SERVER_EVENTS_TYPE_ENUM EventTypes);
                               HRESULT ( STDMETHODCALLTYPE *RegisterDeviceProvider )(
            __RPC__in IFaxServer2 * This,
                       __RPC__in BSTR bstrGUID,
                       __RPC__in BSTR bstrFriendlyName,
                       __RPC__in BSTR bstrImageName,
                       __RPC__in BSTR TspName,
                       long lFSPIVersion);
                               HRESULT ( STDMETHODCALLTYPE *UnregisterDeviceProvider )(
            __RPC__in IFaxServer2 * This,
                       __RPC__in BSTR bstrUniqueName);
                               HRESULT ( STDMETHODCALLTYPE *RegisterInboundRoutingExtension )(
            __RPC__in IFaxServer2 * This,
                       __RPC__in BSTR bstrExtensionName,
                       __RPC__in BSTR bstrFriendlyName,
                       __RPC__in BSTR bstrImageName,
                       VARIANT vMethods);
                               HRESULT ( STDMETHODCALLTYPE *UnregisterInboundRoutingExtension )(
            __RPC__in IFaxServer2 * This,
                       __RPC__in BSTR bstrExtensionUniqueName);
                                        HRESULT ( STDMETHODCALLTYPE *get_RegisteredEvents )(
            __RPC__in IFaxServer2 * This,
                                __RPC__out FAX_SERVER_EVENTS_TYPE_ENUM *pEventTypes);
                                        HRESULT ( STDMETHODCALLTYPE *get_APIVersion )(
            __RPC__in IFaxServer2 * This,
                                __RPC__out FAX_SERVER_APIVERSION_ENUM *pAPIVersion);
                                        HRESULT ( STDMETHODCALLTYPE *get_Configuration )(
            __RPC__in IFaxServer2 * This,
                                __RPC__deref_out_opt IFaxConfiguration **ppFaxConfiguration);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAccount )(
            __RPC__in IFaxServer2 * This,
                                __RPC__deref_out_opt IFaxAccount **ppCurrentAccount);
                                        HRESULT ( STDMETHODCALLTYPE *get_FaxAccountSet )(
            __RPC__in IFaxServer2 * This,
                                __RPC__deref_out_opt IFaxAccountSet **ppFaxAccountSet);
                                        HRESULT ( STDMETHODCALLTYPE *get_Security2 )(
            __RPC__in IFaxServer2 * This,
                                __RPC__deref_out_opt IFaxSecurity2 **ppFaxSecurity2);
        END_INTERFACE
    } IFaxServer2Vtbl;
    interface IFaxServer2
    {
        CONST_VTBL struct IFaxServer2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Connect(This,bstrServerName) )
    ( (This)->lpVtbl -> get_ServerName(This,pbstrServerName) )
    ( (This)->lpVtbl -> GetDeviceProviders(This,ppFaxDeviceProviders) )
    ( (This)->lpVtbl -> GetDevices(This,ppFaxDevices) )
    ( (This)->lpVtbl -> get_InboundRouting(This,ppFaxInboundRouting) )
    ( (This)->lpVtbl -> get_Folders(This,pFaxFolders) )
    ( (This)->lpVtbl -> get_LoggingOptions(This,ppFaxLoggingOptions) )
    ( (This)->lpVtbl -> get_MajorVersion(This,plMajorVersion) )
    ( (This)->lpVtbl -> get_MinorVersion(This,plMinorVersion) )
    ( (This)->lpVtbl -> get_MajorBuild(This,plMajorBuild) )
    ( (This)->lpVtbl -> get_MinorBuild(This,plMinorBuild) )
    ( (This)->lpVtbl -> get_Debug(This,pbDebug) )
    ( (This)->lpVtbl -> get_Activity(This,ppFaxActivity) )
    ( (This)->lpVtbl -> get_OutboundRouting(This,ppFaxOutboundRouting) )
    ( (This)->lpVtbl -> get_ReceiptOptions(This,ppFaxReceiptOptions) )
    ( (This)->lpVtbl -> get_Security(This,ppFaxSecurity) )
    ( (This)->lpVtbl -> Disconnect(This) )
    ( (This)->lpVtbl -> GetExtensionProperty(This,bstrGUID,pvProperty) )
    ( (This)->lpVtbl -> SetExtensionProperty(This,bstrGUID,vProperty) )
    ( (This)->lpVtbl -> ListenToServerEvents(This,EventTypes) )
    ( (This)->lpVtbl -> RegisterDeviceProvider(This,bstrGUID,bstrFriendlyName,bstrImageName,TspName,lFSPIVersion) )
    ( (This)->lpVtbl -> UnregisterDeviceProvider(This,bstrUniqueName) )
    ( (This)->lpVtbl -> RegisterInboundRoutingExtension(This,bstrExtensionName,bstrFriendlyName,bstrImageName,vMethods) )
    ( (This)->lpVtbl -> UnregisterInboundRoutingExtension(This,bstrExtensionUniqueName) )
    ( (This)->lpVtbl -> get_RegisteredEvents(This,pEventTypes) )
    ( (This)->lpVtbl -> get_APIVersion(This,pAPIVersion) )
    ( (This)->lpVtbl -> get_Configuration(This,ppFaxConfiguration) )
    ( (This)->lpVtbl -> get_CurrentAccount(This,ppCurrentAccount) )
    ( (This)->lpVtbl -> get_FaxAccountSet(This,ppFaxAccountSet) )
    ( (This)->lpVtbl -> get_Security2(This,ppFaxSecurity2) )
EXTERN_C const IID IID_IFaxAccountSet;
    typedef struct IFaxAccountSetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxAccountSet * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxAccountSet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxAccountSet * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxAccountSet * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxAccountSet * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxAccountSet * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxAccountSet * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *GetAccounts )(
            __RPC__in IFaxAccountSet * This,
                                __RPC__deref_out_opt IFaxAccounts **ppFaxAccounts);
                               HRESULT ( STDMETHODCALLTYPE *GetAccount )(
            __RPC__in IFaxAccountSet * This,
                       __RPC__in BSTR bstrAccountName,
                                __RPC__deref_out_opt IFaxAccount **pFaxAccount);
                               HRESULT ( STDMETHODCALLTYPE *AddAccount )(
            __RPC__in IFaxAccountSet * This,
                       __RPC__in BSTR bstrAccountName,
                                __RPC__deref_out_opt IFaxAccount **pFaxAccount);
                               HRESULT ( STDMETHODCALLTYPE *RemoveAccount )(
            __RPC__in IFaxAccountSet * This,
                       __RPC__in BSTR bstrAccountName);
        END_INTERFACE
    } IFaxAccountSetVtbl;
    interface IFaxAccountSet
    {
        CONST_VTBL struct IFaxAccountSetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetAccounts(This,ppFaxAccounts) )
    ( (This)->lpVtbl -> GetAccount(This,bstrAccountName,pFaxAccount) )
    ( (This)->lpVtbl -> AddAccount(This,bstrAccountName,pFaxAccount) )
    ( (This)->lpVtbl -> RemoveAccount(This,bstrAccountName) )
EXTERN_C const IID IID_IFaxAccounts;
    typedef struct IFaxAccountsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxAccounts * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxAccounts * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxAccounts * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxAccounts * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxAccounts * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxAccounts * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxAccounts * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IFaxAccounts * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IFaxAccounts * This,
                       VARIANT vIndex,
                                __RPC__deref_out_opt IFaxAccount **pFaxAccount);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IFaxAccounts * This,
                                __RPC__out long *plCount);
        END_INTERFACE
    } IFaxAccountsVtbl;
    interface IFaxAccounts
    {
        CONST_VTBL struct IFaxAccountsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
    ( (This)->lpVtbl -> get_Item(This,vIndex,pFaxAccount) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
typedef
enum FAX_ACCOUNT_EVENTS_TYPE_ENUM
    {
        faetNONE = 0,
        faetIN_QUEUE = 0x1,
        faetOUT_QUEUE = 0x2,
        faetIN_ARCHIVE = 0x4,
        faetOUT_ARCHIVE = 0x8,
        faetFXSSVC_ENDED = 0x10
    } FAX_ACCOUNT_EVENTS_TYPE_ENUM;
EXTERN_C const IID IID_IFaxAccount;
    typedef struct IFaxAccountVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxAccount * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxAccount * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxAccount * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxAccount * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxAccount * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxAccount * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxAccount * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_AccountName )(
            __RPC__in IFaxAccount * This,
                                __RPC__deref_out_opt BSTR *pbstrAccountName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Folders )(
            __RPC__in IFaxAccount * This,
                                __RPC__deref_out_opt IFaxAccountFolders **ppFolders);
                               HRESULT ( STDMETHODCALLTYPE *ListenToAccountEvents )(
            __RPC__in IFaxAccount * This,
                       FAX_ACCOUNT_EVENTS_TYPE_ENUM EventTypes);
                                        HRESULT ( STDMETHODCALLTYPE *get_RegisteredEvents )(
            __RPC__in IFaxAccount * This,
                                __RPC__out FAX_ACCOUNT_EVENTS_TYPE_ENUM *pRegisteredEvents);
        END_INTERFACE
    } IFaxAccountVtbl;
    interface IFaxAccount
    {
        CONST_VTBL struct IFaxAccountVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_AccountName(This,pbstrAccountName) )
    ( (This)->lpVtbl -> get_Folders(This,ppFolders) )
    ( (This)->lpVtbl -> ListenToAccountEvents(This,EventTypes) )
    ( (This)->lpVtbl -> get_RegisteredEvents(This,pRegisteredEvents) )
EXTERN_C const IID IID_IFaxOutgoingJob2;
    typedef struct IFaxOutgoingJob2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxOutgoingJob2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxOutgoingJob2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxOutgoingJob2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxOutgoingJob2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxOutgoingJob2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxOutgoingJob2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxOutgoingJob2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Subject )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__deref_out_opt BSTR *pbstrSubject);
                                        HRESULT ( STDMETHODCALLTYPE *get_DocumentName )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__deref_out_opt BSTR *pbstrDocumentName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Pages )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__out long *plPages);
                                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__out long *plSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubmissionId )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__deref_out_opt BSTR *pbstrSubmissionId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__deref_out_opt BSTR *pbstrId);
                                        HRESULT ( STDMETHODCALLTYPE *get_OriginalScheduledTime )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__out DATE *pdateOriginalScheduledTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubmissionTime )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__out DATE *pdateSubmissionTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReceiptType )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__out FAX_RECEIPT_TYPE_ENUM *pReceiptType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Priority )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__out FAX_PRIORITY_TYPE_ENUM *pPriority);
                                        HRESULT ( STDMETHODCALLTYPE *get_Sender )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__deref_out_opt IFaxSender **ppFaxSender);
                                        HRESULT ( STDMETHODCALLTYPE *get_Recipient )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__deref_out_opt IFaxRecipient **ppFaxRecipient);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPage )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__out long *plCurrentPage);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__out long *plDeviceId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__out FAX_JOB_STATUS_ENUM *pStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExtendedStatusCode )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__out FAX_JOB_EXTENDED_STATUS_ENUM *pExtendedStatusCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExtendedStatus )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__deref_out_opt BSTR *pbstrExtendedStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_AvailableOperations )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__out FAX_JOB_OPERATIONS_ENUM *pAvailableOperations);
                                        HRESULT ( STDMETHODCALLTYPE *get_Retries )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__out long *plRetries);
                                        HRESULT ( STDMETHODCALLTYPE *get_ScheduledTime )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__out DATE *pdateScheduledTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransmissionStart )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__out DATE *pdateTransmissionStart);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransmissionEnd )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__out DATE *pdateTransmissionEnd);
                                        HRESULT ( STDMETHODCALLTYPE *get_CSID )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__deref_out_opt BSTR *pbstrCSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_TSID )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__deref_out_opt BSTR *pbstrTSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_GroupBroadcastReceipts )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__out VARIANT_BOOL *pbGroupBroadcastReceipts);
                               HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IFaxOutgoingJob2 * This);
                               HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IFaxOutgoingJob2 * This);
                               HRESULT ( STDMETHODCALLTYPE *Restart )(
            __RPC__in IFaxOutgoingJob2 * This);
                               HRESULT ( STDMETHODCALLTYPE *CopyTiff )(
            __RPC__in IFaxOutgoingJob2 * This,
                       __RPC__in BSTR bstrTiffPath);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IFaxOutgoingJob2 * This);
                               HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IFaxOutgoingJob2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_HasCoverPage )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__out VARIANT_BOOL *pbHasCoverPage);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReceiptAddress )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__deref_out_opt BSTR *pbstrReceiptAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_ScheduleType )(
            __RPC__in IFaxOutgoingJob2 * This,
                                __RPC__out FAX_SCHEDULE_TYPE_ENUM *pScheduleType);
        END_INTERFACE
    } IFaxOutgoingJob2Vtbl;
    interface IFaxOutgoingJob2
    {
        CONST_VTBL struct IFaxOutgoingJob2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Subject(This,pbstrSubject) )
    ( (This)->lpVtbl -> get_DocumentName(This,pbstrDocumentName) )
    ( (This)->lpVtbl -> get_Pages(This,plPages) )
    ( (This)->lpVtbl -> get_Size(This,plSize) )
    ( (This)->lpVtbl -> get_SubmissionId(This,pbstrSubmissionId) )
    ( (This)->lpVtbl -> get_Id(This,pbstrId) )
    ( (This)->lpVtbl -> get_OriginalScheduledTime(This,pdateOriginalScheduledTime) )
    ( (This)->lpVtbl -> get_SubmissionTime(This,pdateSubmissionTime) )
    ( (This)->lpVtbl -> get_ReceiptType(This,pReceiptType) )
    ( (This)->lpVtbl -> get_Priority(This,pPriority) )
    ( (This)->lpVtbl -> get_Sender(This,ppFaxSender) )
    ( (This)->lpVtbl -> get_Recipient(This,ppFaxRecipient) )
    ( (This)->lpVtbl -> get_CurrentPage(This,plCurrentPage) )
    ( (This)->lpVtbl -> get_DeviceId(This,plDeviceId) )
    ( (This)->lpVtbl -> get_Status(This,pStatus) )
    ( (This)->lpVtbl -> get_ExtendedStatusCode(This,pExtendedStatusCode) )
    ( (This)->lpVtbl -> get_ExtendedStatus(This,pbstrExtendedStatus) )
    ( (This)->lpVtbl -> get_AvailableOperations(This,pAvailableOperations) )
    ( (This)->lpVtbl -> get_Retries(This,plRetries) )
    ( (This)->lpVtbl -> get_ScheduledTime(This,pdateScheduledTime) )
    ( (This)->lpVtbl -> get_TransmissionStart(This,pdateTransmissionStart) )
    ( (This)->lpVtbl -> get_TransmissionEnd(This,pdateTransmissionEnd) )
    ( (This)->lpVtbl -> get_CSID(This,pbstrCSID) )
    ( (This)->lpVtbl -> get_TSID(This,pbstrTSID) )
    ( (This)->lpVtbl -> get_GroupBroadcastReceipts(This,pbGroupBroadcastReceipts) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> Restart(This) )
    ( (This)->lpVtbl -> CopyTiff(This,bstrTiffPath) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> get_HasCoverPage(This,pbHasCoverPage) )
    ( (This)->lpVtbl -> get_ReceiptAddress(This,pbstrReceiptAddress) )
    ( (This)->lpVtbl -> get_ScheduleType(This,pScheduleType) )
EXTERN_C const IID IID_IFaxAccountFolders;
    typedef struct IFaxAccountFoldersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxAccountFolders * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxAccountFolders * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxAccountFolders * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxAccountFolders * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxAccountFolders * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxAccountFolders * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxAccountFolders * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_OutgoingQueue )(
            __RPC__in IFaxAccountFolders * This,
                                __RPC__deref_out_opt IFaxAccountOutgoingQueue **pFaxOutgoingQueue);
                                        HRESULT ( STDMETHODCALLTYPE *get_IncomingQueue )(
            __RPC__in IFaxAccountFolders * This,
                                __RPC__deref_out_opt IFaxAccountIncomingQueue **pFaxIncomingQueue);
                                        HRESULT ( STDMETHODCALLTYPE *get_IncomingArchive )(
            __RPC__in IFaxAccountFolders * This,
                                __RPC__deref_out_opt IFaxAccountIncomingArchive **pFaxIncomingArchive);
                                        HRESULT ( STDMETHODCALLTYPE *get_OutgoingArchive )(
            __RPC__in IFaxAccountFolders * This,
                                __RPC__deref_out_opt IFaxAccountOutgoingArchive **pFaxOutgoingArchive);
        END_INTERFACE
    } IFaxAccountFoldersVtbl;
    interface IFaxAccountFolders
    {
        CONST_VTBL struct IFaxAccountFoldersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_OutgoingQueue(This,pFaxOutgoingQueue) )
    ( (This)->lpVtbl -> get_IncomingQueue(This,pFaxIncomingQueue) )
    ( (This)->lpVtbl -> get_IncomingArchive(This,pFaxIncomingArchive) )
    ( (This)->lpVtbl -> get_OutgoingArchive(This,pFaxOutgoingArchive) )
EXTERN_C const IID IID_IFaxAccountIncomingQueue;
    typedef struct IFaxAccountIncomingQueueVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxAccountIncomingQueue * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxAccountIncomingQueue * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxAccountIncomingQueue * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxAccountIncomingQueue * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxAccountIncomingQueue * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxAccountIncomingQueue * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxAccountIncomingQueue * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *GetJobs )(
            __RPC__in IFaxAccountIncomingQueue * This,
                                __RPC__deref_out_opt IFaxIncomingJobs **pFaxIncomingJobs);
                               HRESULT ( STDMETHODCALLTYPE *GetJob )(
            __RPC__in IFaxAccountIncomingQueue * This,
                       __RPC__in BSTR bstrJobId,
                                __RPC__deref_out_opt IFaxIncomingJob **pFaxIncomingJob);
        END_INTERFACE
    } IFaxAccountIncomingQueueVtbl;
    interface IFaxAccountIncomingQueue
    {
        CONST_VTBL struct IFaxAccountIncomingQueueVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetJobs(This,pFaxIncomingJobs) )
    ( (This)->lpVtbl -> GetJob(This,bstrJobId,pFaxIncomingJob) )
EXTERN_C const IID IID_IFaxAccountOutgoingQueue;
    typedef struct IFaxAccountOutgoingQueueVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxAccountOutgoingQueue * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxAccountOutgoingQueue * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxAccountOutgoingQueue * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxAccountOutgoingQueue * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxAccountOutgoingQueue * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxAccountOutgoingQueue * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxAccountOutgoingQueue * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *GetJobs )(
            __RPC__in IFaxAccountOutgoingQueue * This,
                                __RPC__deref_out_opt IFaxOutgoingJobs **pFaxOutgoingJobs);
                               HRESULT ( STDMETHODCALLTYPE *GetJob )(
            __RPC__in IFaxAccountOutgoingQueue * This,
                       __RPC__in BSTR bstrJobId,
                                __RPC__deref_out_opt IFaxOutgoingJob **pFaxOutgoingJob);
        END_INTERFACE
    } IFaxAccountOutgoingQueueVtbl;
    interface IFaxAccountOutgoingQueue
    {
        CONST_VTBL struct IFaxAccountOutgoingQueueVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetJobs(This,pFaxOutgoingJobs) )
    ( (This)->lpVtbl -> GetJob(This,bstrJobId,pFaxOutgoingJob) )
EXTERN_C const IID IID_IFaxOutgoingMessage2;
    typedef struct IFaxOutgoingMessage2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxOutgoingMessage2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxOutgoingMessage2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxOutgoingMessage2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxOutgoingMessage2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxOutgoingMessage2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxOutgoingMessage2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxOutgoingMessage2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubmissionId )(
            __RPC__in IFaxOutgoingMessage2 * This,
                                __RPC__deref_out_opt BSTR *pbstrSubmissionId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFaxOutgoingMessage2 * This,
                                __RPC__deref_out_opt BSTR *pbstrId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Subject )(
            __RPC__in IFaxOutgoingMessage2 * This,
                                __RPC__deref_out_opt BSTR *pbstrSubject);
                                        HRESULT ( STDMETHODCALLTYPE *get_DocumentName )(
            __RPC__in IFaxOutgoingMessage2 * This,
                                __RPC__deref_out_opt BSTR *pbstrDocumentName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Retries )(
            __RPC__in IFaxOutgoingMessage2 * This,
                                __RPC__out long *plRetries);
                                        HRESULT ( STDMETHODCALLTYPE *get_Pages )(
            __RPC__in IFaxOutgoingMessage2 * This,
                                __RPC__out long *plPages);
                                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in IFaxOutgoingMessage2 * This,
                                __RPC__out long *plSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_OriginalScheduledTime )(
            __RPC__in IFaxOutgoingMessage2 * This,
                                __RPC__out DATE *pdateOriginalScheduledTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubmissionTime )(
            __RPC__in IFaxOutgoingMessage2 * This,
                                __RPC__out DATE *pdateSubmissionTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_Priority )(
            __RPC__in IFaxOutgoingMessage2 * This,
                                __RPC__out FAX_PRIORITY_TYPE_ENUM *pPriority);
                                        HRESULT ( STDMETHODCALLTYPE *get_Sender )(
            __RPC__in IFaxOutgoingMessage2 * This,
                                __RPC__deref_out_opt IFaxSender **ppFaxSender);
                                        HRESULT ( STDMETHODCALLTYPE *get_Recipient )(
            __RPC__in IFaxOutgoingMessage2 * This,
                                __RPC__deref_out_opt IFaxRecipient **ppFaxRecipient);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceName )(
            __RPC__in IFaxOutgoingMessage2 * This,
                                __RPC__deref_out_opt BSTR *pbstrDeviceName);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransmissionStart )(
            __RPC__in IFaxOutgoingMessage2 * This,
                                __RPC__out DATE *pdateTransmissionStart);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransmissionEnd )(
            __RPC__in IFaxOutgoingMessage2 * This,
                                __RPC__out DATE *pdateTransmissionEnd);
                                        HRESULT ( STDMETHODCALLTYPE *get_CSID )(
            __RPC__in IFaxOutgoingMessage2 * This,
                                __RPC__deref_out_opt BSTR *pbstrCSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_TSID )(
            __RPC__in IFaxOutgoingMessage2 * This,
                                __RPC__deref_out_opt BSTR *pbstrTSID);
                               HRESULT ( STDMETHODCALLTYPE *CopyTiff )(
            __RPC__in IFaxOutgoingMessage2 * This,
                       __RPC__in BSTR bstrTiffPath);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFaxOutgoingMessage2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_HasCoverPage )(
            __RPC__in IFaxOutgoingMessage2 * This,
                                __RPC__out VARIANT_BOOL *pbHasCoverPage);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReceiptType )(
            __RPC__in IFaxOutgoingMessage2 * This,
                                __RPC__out FAX_RECEIPT_TYPE_ENUM *pReceiptType);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReceiptAddress )(
            __RPC__in IFaxOutgoingMessage2 * This,
                                __RPC__deref_out_opt BSTR *pbstrReceiptAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_Read )(
            __RPC__in IFaxOutgoingMessage2 * This,
                                __RPC__out VARIANT_BOOL *pbRead);
                                        HRESULT ( STDMETHODCALLTYPE *put_Read )(
            __RPC__in IFaxOutgoingMessage2 * This,
                       VARIANT_BOOL bRead);
                               HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IFaxOutgoingMessage2 * This);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IFaxOutgoingMessage2 * This);
        END_INTERFACE
    } IFaxOutgoingMessage2Vtbl;
    interface IFaxOutgoingMessage2
    {
        CONST_VTBL struct IFaxOutgoingMessage2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_SubmissionId(This,pbstrSubmissionId) )
    ( (This)->lpVtbl -> get_Id(This,pbstrId) )
    ( (This)->lpVtbl -> get_Subject(This,pbstrSubject) )
    ( (This)->lpVtbl -> get_DocumentName(This,pbstrDocumentName) )
    ( (This)->lpVtbl -> get_Retries(This,plRetries) )
    ( (This)->lpVtbl -> get_Pages(This,plPages) )
    ( (This)->lpVtbl -> get_Size(This,plSize) )
    ( (This)->lpVtbl -> get_OriginalScheduledTime(This,pdateOriginalScheduledTime) )
    ( (This)->lpVtbl -> get_SubmissionTime(This,pdateSubmissionTime) )
    ( (This)->lpVtbl -> get_Priority(This,pPriority) )
    ( (This)->lpVtbl -> get_Sender(This,ppFaxSender) )
    ( (This)->lpVtbl -> get_Recipient(This,ppFaxRecipient) )
    ( (This)->lpVtbl -> get_DeviceName(This,pbstrDeviceName) )
    ( (This)->lpVtbl -> get_TransmissionStart(This,pdateTransmissionStart) )
    ( (This)->lpVtbl -> get_TransmissionEnd(This,pdateTransmissionEnd) )
    ( (This)->lpVtbl -> get_CSID(This,pbstrCSID) )
    ( (This)->lpVtbl -> get_TSID(This,pbstrTSID) )
    ( (This)->lpVtbl -> CopyTiff(This,bstrTiffPath) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> get_HasCoverPage(This,pbHasCoverPage) )
    ( (This)->lpVtbl -> get_ReceiptType(This,pReceiptType) )
    ( (This)->lpVtbl -> get_ReceiptAddress(This,pbstrReceiptAddress) )
    ( (This)->lpVtbl -> get_Read(This,pbRead) )
    ( (This)->lpVtbl -> put_Read(This,bRead) )
    ( (This)->lpVtbl -> Save(This) )
    ( (This)->lpVtbl -> Refresh(This) )
EXTERN_C const IID IID_IFaxAccountIncomingArchive;
    typedef struct IFaxAccountIncomingArchiveVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxAccountIncomingArchive * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxAccountIncomingArchive * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxAccountIncomingArchive * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxAccountIncomingArchive * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxAccountIncomingArchive * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxAccountIncomingArchive * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxAccountIncomingArchive * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_SizeLow )(
            __RPC__in IFaxAccountIncomingArchive * This,
                                __RPC__out long *plSizeLow);
                                        HRESULT ( STDMETHODCALLTYPE *get_SizeHigh )(
            __RPC__in IFaxAccountIncomingArchive * This,
                                __RPC__out long *plSizeHigh);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IFaxAccountIncomingArchive * This);
                               HRESULT ( STDMETHODCALLTYPE *GetMessages )(
            __RPC__in IFaxAccountIncomingArchive * This,
                                     long lPrefetchSize,
                                __RPC__deref_out_opt IFaxIncomingMessageIterator **pFaxIncomingMessageIterator);
                               HRESULT ( STDMETHODCALLTYPE *GetMessage )(
            __RPC__in IFaxAccountIncomingArchive * This,
                       __RPC__in BSTR bstrMessageId,
                                __RPC__deref_out_opt IFaxIncomingMessage **pFaxIncomingMessage);
        END_INTERFACE
    } IFaxAccountIncomingArchiveVtbl;
    interface IFaxAccountIncomingArchive
    {
        CONST_VTBL struct IFaxAccountIncomingArchiveVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_SizeLow(This,plSizeLow) )
    ( (This)->lpVtbl -> get_SizeHigh(This,plSizeHigh) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> GetMessages(This,lPrefetchSize,pFaxIncomingMessageIterator) )
    ( (This)->lpVtbl -> GetMessage(This,bstrMessageId,pFaxIncomingMessage) )
EXTERN_C const IID IID_IFaxAccountOutgoingArchive;
    typedef struct IFaxAccountOutgoingArchiveVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxAccountOutgoingArchive * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxAccountOutgoingArchive * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxAccountOutgoingArchive * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxAccountOutgoingArchive * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxAccountOutgoingArchive * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxAccountOutgoingArchive * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxAccountOutgoingArchive * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_SizeLow )(
            __RPC__in IFaxAccountOutgoingArchive * This,
                                __RPC__out long *plSizeLow);
                                        HRESULT ( STDMETHODCALLTYPE *get_SizeHigh )(
            __RPC__in IFaxAccountOutgoingArchive * This,
                                __RPC__out long *plSizeHigh);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IFaxAccountOutgoingArchive * This);
                               HRESULT ( STDMETHODCALLTYPE *GetMessages )(
            __RPC__in IFaxAccountOutgoingArchive * This,
                                     long lPrefetchSize,
                                __RPC__deref_out_opt IFaxOutgoingMessageIterator **pFaxOutgoingMessageIterator);
                               HRESULT ( STDMETHODCALLTYPE *GetMessage )(
            __RPC__in IFaxAccountOutgoingArchive * This,
                       __RPC__in BSTR bstrMessageId,
                                __RPC__deref_out_opt IFaxOutgoingMessage **pFaxOutgoingMessage);
        END_INTERFACE
    } IFaxAccountOutgoingArchiveVtbl;
    interface IFaxAccountOutgoingArchive
    {
        CONST_VTBL struct IFaxAccountOutgoingArchiveVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_SizeLow(This,plSizeLow) )
    ( (This)->lpVtbl -> get_SizeHigh(This,plSizeHigh) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> GetMessages(This,lPrefetchSize,pFaxOutgoingMessageIterator) )
    ( (This)->lpVtbl -> GetMessage(This,bstrMessageId,pFaxOutgoingMessage) )
typedef
enum FAX_ACCESS_RIGHTS_ENUM_2
    {
        far2SUBMIT_LOW = 0x1,
        far2SUBMIT_NORMAL = 0x2,
        far2SUBMIT_HIGH = 0x4,
        far2QUERY_OUT_JOBS = 0x8,
        far2MANAGE_OUT_JOBS = 0x10,
        far2QUERY_CONFIG = 0x20,
        far2MANAGE_CONFIG = 0x40,
        far2QUERY_ARCHIVES = 0x80,
        far2MANAGE_ARCHIVES = 0x100,
        far2MANAGE_RECEIVE_FOLDER = 0x200
    } FAX_ACCESS_RIGHTS_ENUM_2;
EXTERN_C const IID IID_IFaxSecurity2;
    typedef struct IFaxSecurity2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxSecurity2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxSecurity2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxSecurity2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxSecurity2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxSecurity2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxSecurity2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxSecurity2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Descriptor )(
            __RPC__in IFaxSecurity2 * This,
                                __RPC__out VARIANT *pvDescriptor);
                                        HRESULT ( STDMETHODCALLTYPE *put_Descriptor )(
            __RPC__in IFaxSecurity2 * This,
                       VARIANT vDescriptor);
                                        HRESULT ( STDMETHODCALLTYPE *get_GrantedRights )(
            __RPC__in IFaxSecurity2 * This,
                                __RPC__out FAX_ACCESS_RIGHTS_ENUM_2 *pGrantedRights);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IFaxSecurity2 * This);
                               HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IFaxSecurity2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_InformationType )(
            __RPC__in IFaxSecurity2 * This,
                                __RPC__out long *plInformationType);
                                        HRESULT ( STDMETHODCALLTYPE *put_InformationType )(
            __RPC__in IFaxSecurity2 * This,
                       long lInformationType);
        END_INTERFACE
    } IFaxSecurity2Vtbl;
    interface IFaxSecurity2
    {
        CONST_VTBL struct IFaxSecurity2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Descriptor(This,pvDescriptor) )
    ( (This)->lpVtbl -> put_Descriptor(This,vDescriptor) )
    ( (This)->lpVtbl -> get_GrantedRights(This,pGrantedRights) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Save(This) )
    ( (This)->lpVtbl -> get_InformationType(This,plInformationType) )
    ( (This)->lpVtbl -> put_InformationType(This,lInformationType) )
EXTERN_C const IID IID_IFaxIncomingMessage2;
    typedef struct IFaxIncomingMessage2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxIncomingMessage2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxIncomingMessage2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxIncomingMessage2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxIncomingMessage2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxIncomingMessage2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxIncomingMessage2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxIncomingMessage2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFaxIncomingMessage2 * This,
                                __RPC__deref_out_opt BSTR *pbstrId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Pages )(
            __RPC__in IFaxIncomingMessage2 * This,
                                __RPC__out long *plPages);
                                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in IFaxIncomingMessage2 * This,
                                __RPC__out long *plSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceName )(
            __RPC__in IFaxIncomingMessage2 * This,
                                __RPC__deref_out_opt BSTR *pbstrDeviceName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Retries )(
            __RPC__in IFaxIncomingMessage2 * This,
                                __RPC__out long *plRetries);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransmissionStart )(
            __RPC__in IFaxIncomingMessage2 * This,
                                __RPC__out DATE *pdateTransmissionStart);
                                        HRESULT ( STDMETHODCALLTYPE *get_TransmissionEnd )(
            __RPC__in IFaxIncomingMessage2 * This,
                                __RPC__out DATE *pdateTransmissionEnd);
                                        HRESULT ( STDMETHODCALLTYPE *get_CSID )(
            __RPC__in IFaxIncomingMessage2 * This,
                                __RPC__deref_out_opt BSTR *pbstrCSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_TSID )(
            __RPC__in IFaxIncomingMessage2 * This,
                                __RPC__deref_out_opt BSTR *pbstrTSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallerId )(
            __RPC__in IFaxIncomingMessage2 * This,
                                __RPC__deref_out_opt BSTR *pbstrCallerId);
                                        HRESULT ( STDMETHODCALLTYPE *get_RoutingInformation )(
            __RPC__in IFaxIncomingMessage2 * This,
                                __RPC__deref_out_opt BSTR *pbstrRoutingInformation);
                               HRESULT ( STDMETHODCALLTYPE *CopyTiff )(
            __RPC__in IFaxIncomingMessage2 * This,
                       __RPC__in BSTR bstrTiffPath);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFaxIncomingMessage2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Subject )(
            __RPC__in IFaxIncomingMessage2 * This,
                                __RPC__deref_out_opt BSTR *pbstrSubject);
                                        HRESULT ( STDMETHODCALLTYPE *put_Subject )(
            __RPC__in IFaxIncomingMessage2 * This,
                       __RPC__in BSTR bstrSubject);
                                        HRESULT ( STDMETHODCALLTYPE *get_SenderName )(
            __RPC__in IFaxIncomingMessage2 * This,
                                __RPC__deref_out_opt BSTR *pbstrSenderName);
                                        HRESULT ( STDMETHODCALLTYPE *put_SenderName )(
            __RPC__in IFaxIncomingMessage2 * This,
                       __RPC__in BSTR bstrSenderName);
                                        HRESULT ( STDMETHODCALLTYPE *get_SenderFaxNumber )(
            __RPC__in IFaxIncomingMessage2 * This,
                                __RPC__deref_out_opt BSTR *pbstrSenderFaxNumber);
                                        HRESULT ( STDMETHODCALLTYPE *put_SenderFaxNumber )(
            __RPC__in IFaxIncomingMessage2 * This,
                       __RPC__in BSTR bstrSenderFaxNumber);
                                        HRESULT ( STDMETHODCALLTYPE *get_HasCoverPage )(
            __RPC__in IFaxIncomingMessage2 * This,
                                __RPC__out VARIANT_BOOL *pbHasCoverPage);
                                        HRESULT ( STDMETHODCALLTYPE *put_HasCoverPage )(
            __RPC__in IFaxIncomingMessage2 * This,
                       VARIANT_BOOL bHasCoverPage);
                                        HRESULT ( STDMETHODCALLTYPE *get_Recipients )(
            __RPC__in IFaxIncomingMessage2 * This,
                                __RPC__deref_out_opt BSTR *pbstrRecipients);
                                        HRESULT ( STDMETHODCALLTYPE *put_Recipients )(
            __RPC__in IFaxIncomingMessage2 * This,
                       __RPC__in BSTR bstrRecipients);
                                        HRESULT ( STDMETHODCALLTYPE *get_WasReAssigned )(
            __RPC__in IFaxIncomingMessage2 * This,
                                __RPC__out VARIANT_BOOL *pbWasReAssigned);
                                        HRESULT ( STDMETHODCALLTYPE *get_Read )(
            __RPC__in IFaxIncomingMessage2 * This,
                                __RPC__out VARIANT_BOOL *pbRead);
                                        HRESULT ( STDMETHODCALLTYPE *put_Read )(
            __RPC__in IFaxIncomingMessage2 * This,
                       VARIANT_BOOL bRead);
                               HRESULT ( STDMETHODCALLTYPE *ReAssign )(
            __RPC__in IFaxIncomingMessage2 * This);
                               HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IFaxIncomingMessage2 * This);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IFaxIncomingMessage2 * This);
        END_INTERFACE
    } IFaxIncomingMessage2Vtbl;
    interface IFaxIncomingMessage2
    {
        CONST_VTBL struct IFaxIncomingMessage2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,pbstrId) )
    ( (This)->lpVtbl -> get_Pages(This,plPages) )
    ( (This)->lpVtbl -> get_Size(This,plSize) )
    ( (This)->lpVtbl -> get_DeviceName(This,pbstrDeviceName) )
    ( (This)->lpVtbl -> get_Retries(This,plRetries) )
    ( (This)->lpVtbl -> get_TransmissionStart(This,pdateTransmissionStart) )
    ( (This)->lpVtbl -> get_TransmissionEnd(This,pdateTransmissionEnd) )
    ( (This)->lpVtbl -> get_CSID(This,pbstrCSID) )
    ( (This)->lpVtbl -> get_TSID(This,pbstrTSID) )
    ( (This)->lpVtbl -> get_CallerId(This,pbstrCallerId) )
    ( (This)->lpVtbl -> get_RoutingInformation(This,pbstrRoutingInformation) )
    ( (This)->lpVtbl -> CopyTiff(This,bstrTiffPath) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> get_Subject(This,pbstrSubject) )
    ( (This)->lpVtbl -> put_Subject(This,bstrSubject) )
    ( (This)->lpVtbl -> get_SenderName(This,pbstrSenderName) )
    ( (This)->lpVtbl -> put_SenderName(This,bstrSenderName) )
    ( (This)->lpVtbl -> get_SenderFaxNumber(This,pbstrSenderFaxNumber) )
    ( (This)->lpVtbl -> put_SenderFaxNumber(This,bstrSenderFaxNumber) )
    ( (This)->lpVtbl -> get_HasCoverPage(This,pbHasCoverPage) )
    ( (This)->lpVtbl -> put_HasCoverPage(This,bHasCoverPage) )
    ( (This)->lpVtbl -> get_Recipients(This,pbstrRecipients) )
    ( (This)->lpVtbl -> put_Recipients(This,bstrRecipients) )
    ( (This)->lpVtbl -> get_WasReAssigned(This,pbWasReAssigned) )
    ( (This)->lpVtbl -> get_Read(This,pbRead) )
    ( (This)->lpVtbl -> put_Read(This,bRead) )
    ( (This)->lpVtbl -> ReAssign(This) )
    ( (This)->lpVtbl -> Save(This) )
    ( (This)->lpVtbl -> Refresh(This) )
typedef
enum FAX_ROUTING_RULE_CODE_ENUM
    {
        frrcANY_CODE = 0
    } FAX_ROUTING_RULE_CODE_ENUM;
EXTERN_C const IID LIBID_FAXCOMEXLib;
EXTERN_C const IID DIID_IFaxServerNotify;
    typedef struct IFaxServerNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxServerNotify * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxServerNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxServerNotify * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxServerNotify * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxServerNotify * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxServerNotify * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxServerNotify * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } IFaxServerNotifyVtbl;
    interface IFaxServerNotify
    {
        CONST_VTBL struct IFaxServerNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID__IFaxServerNotify2;
    typedef struct _IFaxServerNotify2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _IFaxServerNotify2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _IFaxServerNotify2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _IFaxServerNotify2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _IFaxServerNotify2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _IFaxServerNotify2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *OnIncomingJobAdded )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer,
                       __RPC__in BSTR bstrJobId);
                               HRESULT ( STDMETHODCALLTYPE *OnIncomingJobRemoved )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer,
                       __RPC__in BSTR bstrJobId);
                               HRESULT ( STDMETHODCALLTYPE *OnIncomingJobChanged )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer,
                       __RPC__in BSTR bstrJobId,
                       __RPC__in_opt IFaxJobStatus *pJobStatus);
                               HRESULT ( STDMETHODCALLTYPE *OnOutgoingJobAdded )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer,
                       __RPC__in BSTR bstrJobId);
                               HRESULT ( STDMETHODCALLTYPE *OnOutgoingJobRemoved )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer,
                       __RPC__in BSTR bstrJobId);
                               HRESULT ( STDMETHODCALLTYPE *OnOutgoingJobChanged )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer,
                       __RPC__in BSTR bstrJobId,
                       __RPC__in_opt IFaxJobStatus *pJobStatus);
                               HRESULT ( STDMETHODCALLTYPE *OnIncomingMessageAdded )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer,
                       __RPC__in BSTR bstrMessageId);
                               HRESULT ( STDMETHODCALLTYPE *OnIncomingMessageRemoved )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer,
                       __RPC__in BSTR bstrMessageId);
                               HRESULT ( STDMETHODCALLTYPE *OnOutgoingMessageAdded )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer,
                       __RPC__in BSTR bstrMessageId);
                               HRESULT ( STDMETHODCALLTYPE *OnOutgoingMessageRemoved )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer,
                       __RPC__in BSTR bstrMessageId);
                               HRESULT ( STDMETHODCALLTYPE *OnReceiptOptionsChange )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer);
                               HRESULT ( STDMETHODCALLTYPE *OnActivityLoggingConfigChange )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer);
                               HRESULT ( STDMETHODCALLTYPE *OnSecurityConfigChange )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer);
                               HRESULT ( STDMETHODCALLTYPE *OnEventLoggingConfigChange )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer);
                               HRESULT ( STDMETHODCALLTYPE *OnOutgoingQueueConfigChange )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer);
                               HRESULT ( STDMETHODCALLTYPE *OnOutgoingArchiveConfigChange )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer);
                               HRESULT ( STDMETHODCALLTYPE *OnIncomingArchiveConfigChange )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer);
                               HRESULT ( STDMETHODCALLTYPE *OnDevicesConfigChange )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer);
                               HRESULT ( STDMETHODCALLTYPE *OnOutboundRoutingGroupsConfigChange )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer);
                               HRESULT ( STDMETHODCALLTYPE *OnOutboundRoutingRulesConfigChange )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer);
                               HRESULT ( STDMETHODCALLTYPE *OnServerActivityChange )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer,
                       long lIncomingMessages,
                       long lRoutingMessages,
                       long lOutgoingMessages,
                       long lQueuedMessages);
                               HRESULT ( STDMETHODCALLTYPE *OnQueuesStatusChange )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer,
                       VARIANT_BOOL bOutgoingQueueBlocked,
                       VARIANT_BOOL bOutgoingQueuePaused,
                       VARIANT_BOOL bIncomingQueueBlocked);
                               HRESULT ( STDMETHODCALLTYPE *OnNewCall )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer,
                       long lCallId,
                       long lDeviceId,
                       __RPC__in BSTR bstrCallerId);
                               HRESULT ( STDMETHODCALLTYPE *OnServerShutDown )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer);
                               HRESULT ( STDMETHODCALLTYPE *OnDeviceStatusChange )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer,
                       long lDeviceId,
                       VARIANT_BOOL bPoweredOff,
                       VARIANT_BOOL bSending,
                       VARIANT_BOOL bReceiving,
                       VARIANT_BOOL bRinging);
                               HRESULT ( STDMETHODCALLTYPE *OnGeneralServerConfigChanged )(
            __RPC__in _IFaxServerNotify2 * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer);
        END_INTERFACE
    } _IFaxServerNotify2Vtbl;
    interface _IFaxServerNotify2
    {
        CONST_VTBL struct _IFaxServerNotify2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> OnIncomingJobAdded(This,pFaxServer,bstrJobId) )
    ( (This)->lpVtbl -> OnIncomingJobRemoved(This,pFaxServer,bstrJobId) )
    ( (This)->lpVtbl -> OnIncomingJobChanged(This,pFaxServer,bstrJobId,pJobStatus) )
    ( (This)->lpVtbl -> OnOutgoingJobAdded(This,pFaxServer,bstrJobId) )
    ( (This)->lpVtbl -> OnOutgoingJobRemoved(This,pFaxServer,bstrJobId) )
    ( (This)->lpVtbl -> OnOutgoingJobChanged(This,pFaxServer,bstrJobId,pJobStatus) )
    ( (This)->lpVtbl -> OnIncomingMessageAdded(This,pFaxServer,bstrMessageId) )
    ( (This)->lpVtbl -> OnIncomingMessageRemoved(This,pFaxServer,bstrMessageId) )
    ( (This)->lpVtbl -> OnOutgoingMessageAdded(This,pFaxServer,bstrMessageId) )
    ( (This)->lpVtbl -> OnOutgoingMessageRemoved(This,pFaxServer,bstrMessageId) )
    ( (This)->lpVtbl -> OnReceiptOptionsChange(This,pFaxServer) )
    ( (This)->lpVtbl -> OnActivityLoggingConfigChange(This,pFaxServer) )
    ( (This)->lpVtbl -> OnSecurityConfigChange(This,pFaxServer) )
    ( (This)->lpVtbl -> OnEventLoggingConfigChange(This,pFaxServer) )
    ( (This)->lpVtbl -> OnOutgoingQueueConfigChange(This,pFaxServer) )
    ( (This)->lpVtbl -> OnOutgoingArchiveConfigChange(This,pFaxServer) )
    ( (This)->lpVtbl -> OnIncomingArchiveConfigChange(This,pFaxServer) )
    ( (This)->lpVtbl -> OnDevicesConfigChange(This,pFaxServer) )
    ( (This)->lpVtbl -> OnOutboundRoutingGroupsConfigChange(This,pFaxServer) )
    ( (This)->lpVtbl -> OnOutboundRoutingRulesConfigChange(This,pFaxServer) )
    ( (This)->lpVtbl -> OnServerActivityChange(This,pFaxServer,lIncomingMessages,lRoutingMessages,lOutgoingMessages,lQueuedMessages) )
    ( (This)->lpVtbl -> OnQueuesStatusChange(This,pFaxServer,bOutgoingQueueBlocked,bOutgoingQueuePaused,bIncomingQueueBlocked) )
    ( (This)->lpVtbl -> OnNewCall(This,pFaxServer,lCallId,lDeviceId,bstrCallerId) )
    ( (This)->lpVtbl -> OnServerShutDown(This,pFaxServer) )
    ( (This)->lpVtbl -> OnDeviceStatusChange(This,pFaxServer,lDeviceId,bPoweredOff,bSending,bReceiving,bRinging) )
    ( (This)->lpVtbl -> OnGeneralServerConfigChanged(This,pFaxServer) )
EXTERN_C const IID DIID_IFaxServerNotify2;
    typedef struct IFaxServerNotify2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxServerNotify2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxServerNotify2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxServerNotify2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxServerNotify2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxServerNotify2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxServerNotify2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxServerNotify2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } IFaxServerNotify2Vtbl;
    interface IFaxServerNotify2
    {
        CONST_VTBL struct IFaxServerNotify2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID__IFaxAccountNotify;
    typedef struct _IFaxAccountNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _IFaxAccountNotify * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _IFaxAccountNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _IFaxAccountNotify * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _IFaxAccountNotify * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _IFaxAccountNotify * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _IFaxAccountNotify * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _IFaxAccountNotify * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *OnIncomingJobAdded )(
            __RPC__in _IFaxAccountNotify * This,
                       __RPC__in_opt IFaxAccount *pFaxAccount,
                       __RPC__in BSTR bstrJobId);
                               HRESULT ( STDMETHODCALLTYPE *OnIncomingJobRemoved )(
            __RPC__in _IFaxAccountNotify * This,
                       __RPC__in_opt IFaxAccount *pFaxAccount,
                       __RPC__in BSTR bstrJobId);
                               HRESULT ( STDMETHODCALLTYPE *OnIncomingJobChanged )(
            __RPC__in _IFaxAccountNotify * This,
                       __RPC__in_opt IFaxAccount *pFaxAccount,
                       __RPC__in BSTR bstrJobId,
                       __RPC__in_opt IFaxJobStatus *pJobStatus);
                               HRESULT ( STDMETHODCALLTYPE *OnOutgoingJobAdded )(
            __RPC__in _IFaxAccountNotify * This,
                       __RPC__in_opt IFaxAccount *pFaxAccount,
                       __RPC__in BSTR bstrJobId);
                               HRESULT ( STDMETHODCALLTYPE *OnOutgoingJobRemoved )(
            __RPC__in _IFaxAccountNotify * This,
                       __RPC__in_opt IFaxAccount *pFaxAccount,
                       __RPC__in BSTR bstrJobId);
                               HRESULT ( STDMETHODCALLTYPE *OnOutgoingJobChanged )(
            __RPC__in _IFaxAccountNotify * This,
                       __RPC__in_opt IFaxAccount *pFaxAccount,
                       __RPC__in BSTR bstrJobId,
                       __RPC__in_opt IFaxJobStatus *pJobStatus);
                               HRESULT ( STDMETHODCALLTYPE *OnIncomingMessageAdded )(
            __RPC__in _IFaxAccountNotify * This,
                       __RPC__in_opt IFaxAccount *pFaxAccount,
                       __RPC__in BSTR bstrMessageId,
                       VARIANT_BOOL fAddedToReceiveFolder);
                               HRESULT ( STDMETHODCALLTYPE *OnIncomingMessageRemoved )(
            __RPC__in _IFaxAccountNotify * This,
                       __RPC__in_opt IFaxAccount *pFaxAccount,
                       __RPC__in BSTR bstrMessageId,
                       VARIANT_BOOL fRemovedFromReceiveFolder);
                               HRESULT ( STDMETHODCALLTYPE *OnOutgoingMessageAdded )(
            __RPC__in _IFaxAccountNotify * This,
                       __RPC__in_opt IFaxAccount *pFaxAccount,
                       __RPC__in BSTR bstrMessageId);
                               HRESULT ( STDMETHODCALLTYPE *OnOutgoingMessageRemoved )(
            __RPC__in _IFaxAccountNotify * This,
                       __RPC__in_opt IFaxAccount *pFaxAccount,
                       __RPC__in BSTR bstrMessageId);
                               HRESULT ( STDMETHODCALLTYPE *OnServerShutDown )(
            __RPC__in _IFaxAccountNotify * This,
                       __RPC__in_opt IFaxServer2 *pFaxServer);
        END_INTERFACE
    } _IFaxAccountNotifyVtbl;
    interface _IFaxAccountNotify
    {
        CONST_VTBL struct _IFaxAccountNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> OnIncomingJobAdded(This,pFaxAccount,bstrJobId) )
    ( (This)->lpVtbl -> OnIncomingJobRemoved(This,pFaxAccount,bstrJobId) )
    ( (This)->lpVtbl -> OnIncomingJobChanged(This,pFaxAccount,bstrJobId,pJobStatus) )
    ( (This)->lpVtbl -> OnOutgoingJobAdded(This,pFaxAccount,bstrJobId) )
    ( (This)->lpVtbl -> OnOutgoingJobRemoved(This,pFaxAccount,bstrJobId) )
    ( (This)->lpVtbl -> OnOutgoingJobChanged(This,pFaxAccount,bstrJobId,pJobStatus) )
    ( (This)->lpVtbl -> OnIncomingMessageAdded(This,pFaxAccount,bstrMessageId,fAddedToReceiveFolder) )
    ( (This)->lpVtbl -> OnIncomingMessageRemoved(This,pFaxAccount,bstrMessageId,fRemovedFromReceiveFolder) )
    ( (This)->lpVtbl -> OnOutgoingMessageAdded(This,pFaxAccount,bstrMessageId) )
    ( (This)->lpVtbl -> OnOutgoingMessageRemoved(This,pFaxAccount,bstrMessageId) )
    ( (This)->lpVtbl -> OnServerShutDown(This,pFaxServer) )
EXTERN_C const IID DIID_IFaxAccountNotify;
    typedef struct IFaxAccountNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxAccountNotify * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxAccountNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxAccountNotify * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxAccountNotify * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxAccountNotify * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxAccountNotify * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxAccountNotify * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } IFaxAccountNotifyVtbl;
    interface IFaxAccountNotify
    {
        CONST_VTBL struct IFaxAccountNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const CLSID CLSID_FaxServer;
class DECLSPEC_UUID("CDA8ACB0-8CF5-4F6C-9BA2-5931D40C8CAE")
FaxServer;
EXTERN_C const CLSID CLSID_FaxDeviceProviders;
class DECLSPEC_UUID("EB8FE768-875A-4F5F-82C5-03F23AAC1BD7")
FaxDeviceProviders;
EXTERN_C const CLSID CLSID_FaxDevices;
class DECLSPEC_UUID("5589E28E-23CB-4919-8808-E6101846E80D")
FaxDevices;
EXTERN_C const CLSID CLSID_FaxInboundRouting;
class DECLSPEC_UUID("E80248ED-AD65-4218-8108-991924D4E7ED")
FaxInboundRouting;
EXTERN_C const CLSID CLSID_FaxFolders;
class DECLSPEC_UUID("C35211D7-5776-48CB-AF44-C31BE3B2CFE5")
FaxFolders;
EXTERN_C const CLSID CLSID_FaxLoggingOptions;
class DECLSPEC_UUID("1BF9EEA6-ECE0-4785-A18B-DE56E9EEF96A")
FaxLoggingOptions;
EXTERN_C const CLSID CLSID_FaxActivity;
class DECLSPEC_UUID("CFEF5D0E-E84D-462E-AABB-87D31EB04FEF")
FaxActivity;
EXTERN_C const CLSID CLSID_FaxOutboundRouting;
class DECLSPEC_UUID("C81B385E-B869-4AFD-86C0-616498ED9BE2")
FaxOutboundRouting;
EXTERN_C const CLSID CLSID_FaxReceiptOptions;
class DECLSPEC_UUID("6982487B-227B-4C96-A61C-248348B05AB6")
FaxReceiptOptions;
EXTERN_C const CLSID CLSID_FaxSecurity;
class DECLSPEC_UUID("10C4DDDE-ABF0-43DF-964F-7F3AC21A4C7B")
FaxSecurity;
EXTERN_C const CLSID CLSID_FaxDocument;
class DECLSPEC_UUID("0F3F9F91-C838-415E-A4F3-3E828CA445E0")
FaxDocument;
EXTERN_C const CLSID CLSID_FaxSender;
class DECLSPEC_UUID("265D84D0-1850-4360-B7C8-758BBB5F0B96")
FaxSender;
EXTERN_C const CLSID CLSID_FaxRecipients;
class DECLSPEC_UUID("EA9BDF53-10A9-4D4F-A067-63C8F84F01B0")
FaxRecipients;
EXTERN_C const CLSID CLSID_FaxIncomingArchive;
class DECLSPEC_UUID("8426C56A-35A1-4C6F-AF93-FC952422E2C2")
FaxIncomingArchive;
EXTERN_C const CLSID CLSID_FaxIncomingQueue;
class DECLSPEC_UUID("69131717-F3F1-40E3-809D-A6CBF7BD85E5")
FaxIncomingQueue;
EXTERN_C const CLSID CLSID_FaxOutgoingArchive;
class DECLSPEC_UUID("43C28403-E04F-474D-990C-B94669148F59")
FaxOutgoingArchive;
EXTERN_C const CLSID CLSID_FaxOutgoingQueue;
class DECLSPEC_UUID("7421169E-8C43-4B0D-BB16-645C8FA40357")
FaxOutgoingQueue;
EXTERN_C const CLSID CLSID_FaxIncomingMessageIterator;
class DECLSPEC_UUID("6088E1D8-3FC8-45C2-87B1-909A29607EA9")
FaxIncomingMessageIterator;
EXTERN_C const CLSID CLSID_FaxIncomingMessage;
class DECLSPEC_UUID("1932FCF7-9D43-4D5A-89FF-03861B321736")
FaxIncomingMessage;
EXTERN_C const CLSID CLSID_FaxOutgoingJobs;
class DECLSPEC_UUID("92BF2A6C-37BE-43FA-A37D-CB0E5F753B35")
FaxOutgoingJobs;
EXTERN_C const CLSID CLSID_FaxOutgoingJob;
class DECLSPEC_UUID("71BB429C-0EF9-4915-BEC5-A5D897A3E924")
FaxOutgoingJob;
EXTERN_C const CLSID CLSID_FaxOutgoingMessageIterator;
class DECLSPEC_UUID("8A3224D0-D30B-49DE-9813-CB385790FBBB")
FaxOutgoingMessageIterator;
EXTERN_C const CLSID CLSID_FaxOutgoingMessage;
class DECLSPEC_UUID("91B4A378-4AD8-4AEF-A4DC-97D96E939A3A")
FaxOutgoingMessage;
EXTERN_C const CLSID CLSID_FaxIncomingJobs;
class DECLSPEC_UUID("A1BB8A43-8866-4FB7-A15D-6266C875A5CC")
FaxIncomingJobs;
EXTERN_C const CLSID CLSID_FaxIncomingJob;
class DECLSPEC_UUID("C47311EC-AE32-41B8-AE4B-3EAE0629D0C9")
FaxIncomingJob;
EXTERN_C const CLSID CLSID_FaxDeviceProvider;
class DECLSPEC_UUID("17CF1AA3-F5EB-484A-9C9A-4440A5BAABFC")
FaxDeviceProvider;
EXTERN_C const CLSID CLSID_FaxDevice;
class DECLSPEC_UUID("59E3A5B2-D676-484B-A6DE-720BFA89B5AF")
FaxDevice;
EXTERN_C const CLSID CLSID_FaxActivityLogging;
class DECLSPEC_UUID("F0A0294E-3BBD-48B8-8F13-8C591A55BDBC")
FaxActivityLogging;
EXTERN_C const CLSID CLSID_FaxEventLogging;
class DECLSPEC_UUID("A6850930-A0F6-4A6F-95B7-DB2EBF3D02E3")
FaxEventLogging;
EXTERN_C const CLSID CLSID_FaxOutboundRoutingGroups;
class DECLSPEC_UUID("CCBEA1A5-E2B4-4B57-9421-B04B6289464B")
FaxOutboundRoutingGroups;
EXTERN_C const CLSID CLSID_FaxOutboundRoutingGroup;
class DECLSPEC_UUID("0213F3E0-6791-4D77-A271-04D2357C50D6")
FaxOutboundRoutingGroup;
EXTERN_C const CLSID CLSID_FaxDeviceIds;
class DECLSPEC_UUID("CDC539EA-7277-460E-8DE0-48A0A5760D1F")
FaxDeviceIds;
EXTERN_C const CLSID CLSID_FaxOutboundRoutingRules;
class DECLSPEC_UUID("D385BECA-E624-4473-BFAA-9F4000831F54")
FaxOutboundRoutingRules;
EXTERN_C const CLSID CLSID_FaxOutboundRoutingRule;
class DECLSPEC_UUID("6549EEBF-08D1-475A-828B-3BF105952FA0")
FaxOutboundRoutingRule;
EXTERN_C const CLSID CLSID_FaxInboundRoutingExtensions;
class DECLSPEC_UUID("189A48ED-623C-4C0D-80F2-D66C7B9EFEC2")
FaxInboundRoutingExtensions;
EXTERN_C const CLSID CLSID_FaxInboundRoutingExtension;
class DECLSPEC_UUID("1D7DFB51-7207-4436-A0D9-24E32EE56988")
FaxInboundRoutingExtension;
EXTERN_C const CLSID CLSID_FaxInboundRoutingMethods;
class DECLSPEC_UUID("25FCB76A-B750-4B82-9266-FBBBAE8922BA")
FaxInboundRoutingMethods;
EXTERN_C const CLSID CLSID_FaxInboundRoutingMethod;
class DECLSPEC_UUID("4B9FD75C-0194-4B72-9CE5-02A8205AC7D4")
FaxInboundRoutingMethod;
EXTERN_C const CLSID CLSID_FaxJobStatus;
class DECLSPEC_UUID("7BF222F4-BE8D-442f-841D-6132742423BB")
FaxJobStatus;
EXTERN_C const CLSID CLSID_FaxRecipient;
class DECLSPEC_UUID("60BF3301-7DF8-4bd8-9148-7B5801F9EFDF")
FaxRecipient;
EXTERN_C const CLSID CLSID_FaxConfiguration;
class DECLSPEC_UUID("5857326f-e7b3-41a7-9c19-a91b463e2d56")
FaxConfiguration;
EXTERN_C const CLSID CLSID_FaxAccountSet;
class DECLSPEC_UUID("fbc23c4b-79e0-4291-bc56-c12e253bbf3a")
FaxAccountSet;
EXTERN_C const CLSID CLSID_FaxAccounts;
class DECLSPEC_UUID("da1f94aa-ee2c-47c0-8f4f-2a217075b76e")
FaxAccounts;
EXTERN_C const CLSID CLSID_FaxAccount;
class DECLSPEC_UUID("a7e0647f-4524-4464-a56d-b9fe666f715e")
FaxAccount;
EXTERN_C const CLSID CLSID_FaxAccountFolders;
class DECLSPEC_UUID("85398f49-c034-4a3f-821c-db7d685e8129")
FaxAccountFolders;
EXTERN_C const CLSID CLSID_FaxAccountIncomingQueue;
class DECLSPEC_UUID("9bcf6094-b4da-45f4-b8d6-ddeb2186652c")
FaxAccountIncomingQueue;
EXTERN_C const CLSID CLSID_FaxAccountOutgoingQueue;
class DECLSPEC_UUID("feeceefb-c149-48ba-bab8-b791e101f62f")
FaxAccountOutgoingQueue;
EXTERN_C const CLSID CLSID_FaxAccountIncomingArchive;
class DECLSPEC_UUID("14b33db5-4c40-4ecf-9ef8-a360cbe809ed")
FaxAccountIncomingArchive;
EXTERN_C const CLSID CLSID_FaxAccountOutgoingArchive;
class DECLSPEC_UUID("851e7af5-433a-4739-a2df-ad245c2cb98e")
FaxAccountOutgoingArchive;
EXTERN_C const CLSID CLSID_FaxSecurity2;
class DECLSPEC_UUID("735c1248-ec89-4c30-a127-656e92e3c4ea")
FaxSecurity2;
                   const long lDEFAULT_PREFETCH_SIZE = prv_DEFAULT_PREFETCH_SIZE;
                   const BSTR bstrGROUPNAME_ALLDEVICES = ( BSTR )L"<All Devices>";
                   const wchar_t wcharREASSIGN_RECIPIENTS_DELIMITER = L';';
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_faxcomex_0000_0056_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_faxcomex_0000_0056_v0_0_s_ifspec;
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
