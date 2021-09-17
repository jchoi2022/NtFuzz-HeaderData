#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
#include "cdosysstr.h"
typedef interface IDataSource IDataSource;
typedef interface IMessage IMessage;
typedef interface IBodyPart IBodyPart;
typedef interface IConfiguration IConfiguration;
typedef interface IMessages IMessages;
typedef interface IDropDirectory IDropDirectory;
typedef interface IBodyParts IBodyParts;
typedef interface ISMTPScriptConnector ISMTPScriptConnector;
typedef interface INNTPEarlyScriptConnector INNTPEarlyScriptConnector;
typedef interface INNTPPostScriptConnector INNTPPostScriptConnector;
typedef interface INNTPFinalScriptConnector INNTPFinalScriptConnector;
typedef interface ISMTPOnArrival ISMTPOnArrival;
typedef interface INNTPOnPostEarly INNTPOnPostEarly;
typedef interface INNTPOnPost INNTPOnPost;
typedef interface INNTPOnPostFinal INNTPOnPostFinal;
typedef interface IProxyObject IProxyObject;
typedef interface IGetInterface IGetInterface;
typedef class Message Message;
typedef class Configuration Configuration;
typedef class DropDirectory DropDirectory;
typedef class SMTPConnector SMTPConnector;
typedef class NNTPEarlyConnector NNTPEarlyConnector;
typedef class NNTPPostConnector NNTPPostConnector;
typedef class NNTPFinalConnector NNTPFinalConnector;
#include "oaidl.h"
#include "ocidl.h"
typedef interface ADOError ADOError;
typedef interface ADOErrors ADOErrors;
typedef interface _ADOCommand _ADOCommand;
typedef interface _ADOConnection _ADOConnection;
typedef interface _ADORecord _ADORecord;
typedef interface IRecADOFields IRecADOFields;
typedef interface _ADOStream _ADOStream;
typedef interface _ADORecordset _ADORecordset;
typedef interface ADOField ADOField;
typedef interface _ADOField _ADOField;
typedef interface ADOFields ADOFields;
typedef interface _ADOParameter _ADOParameter;
typedef interface ADOParameters ADOParameters;
typedef interface ADOProperty ADOProperty;
typedef interface ADOProperties ADOProperties;
#include "adoint_backcompat.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum CdoConfigSource
    {
        cdoDefaults = -1,
        cdoIIS = 1,
        cdoOutlookExpress = 2
    } CdoConfigSource;
typedef
enum CdoDSNOptions
    {
        cdoDSNDefault = 0,
        cdoDSNNever = 1,
        cdoDSNFailure = 2,
        cdoDSNSuccess = 4,
        cdoDSNDelay = 8,
        cdoDSNSuccessFailOrDelay = 14
    } CdoDSNOptions;
typedef
enum CdoEventStatus
    {
        cdoRunNextSink = 0,
        cdoSkipRemainingSinks = 1
    } CdoEventStatus;
typedef
enum CdoEventType
    {
        cdoSMTPOnArrival = 1,
        cdoNNTPOnPostEarly = 2,
        cdoNNTPOnPost = 3,
        cdoNNTPOnPostFinal = 4
    } CdoEventType;
typedef
enum cdoImportanceValues
    {
        cdoLow = 0,
        cdoNormal = 1,
        cdoHigh = 2
    } cdoImportanceValues;
typedef
enum CdoMessageStat
    {
        cdoStatSuccess = 0,
        cdoStatAbortDelivery = 2,
        cdoStatBadMail = 3
    } CdoMessageStat;
typedef
enum CdoMHTMLFlags
    {
        cdoSuppressNone = 0,
        cdoSuppressImages = 1,
        cdoSuppressBGSounds = 2,
        cdoSuppressFrames = 4,
        cdoSuppressObjects = 8,
        cdoSuppressStyleSheets = 16,
        cdoSuppressAll = 31
    } CdoMHTMLFlags;
typedef
enum CdoNNTPProcessingField
    {
        cdoPostMessage = 1,
        cdoProcessControl = 2,
        cdoProcessModerator = 4
    } CdoNNTPProcessingField;
typedef
enum CdoPostUsing
    {
        cdoPostUsingPickup = 1,
        cdoPostUsingPort = 2
    } CdoPostUsing;
typedef
enum cdoPriorityValues
    {
        cdoPriorityNonUrgent = -1,
        cdoPriorityNormal = 0,
        cdoPriorityUrgent = 1
    } cdoPriorityValues;
typedef
enum CdoProtocolsAuthentication
    {
        cdoAnonymous = 0,
        cdoBasic = 1,
        cdoNTLM = 2
    } CdoProtocolsAuthentication;
typedef
enum CdoReferenceType
    {
        cdoRefTypeId = 0,
        cdoRefTypeLocation = 1
    } CdoReferenceType;
typedef
enum CdoSendUsing
    {
        cdoSendUsingPickup = 1,
        cdoSendUsingPort = 2
    } CdoSendUsing;
typedef
enum cdoSensitivityValues
    {
        cdoSensitivityNone = 0,
        cdoPersonal = 1,
        cdoPrivate = 2,
        cdoCompanyConfidential = 3
    } cdoSensitivityValues;
typedef
enum CdoTimeZoneId
    {
        cdoUTC = 0,
        cdoGMT = 1,
        cdoSarajevo = 2,
        cdoParis = 3,
        cdoBerlin = 4,
        cdoEasternEurope = 5,
        cdoPrague = 6,
        cdoAthens = 7,
        cdoBrasilia = 8,
        cdoAtlanticCanada = 9,
        cdoEastern = 10,
        cdoCentral = 11,
        cdoMountain = 12,
        cdoPacific = 13,
        cdoAlaska = 14,
        cdoHawaii = 15,
        cdoMidwayIsland = 16,
        cdoWellington = 17,
        cdoBrisbane = 18,
        cdoAdelaide = 19,
        cdoTokyo = 20,
        cdoSingapore = 21,
        cdoBangkok = 22,
        cdoBombay = 23,
        cdoAbuDhabi = 24,
        cdoTehran = 25,
        cdoBaghdad = 26,
        cdoIsrael = 27,
        cdoNewfoundland = 28,
        cdoAzores = 29,
        cdoMidAtlantic = 30,
        cdoMonrovia = 31,
        cdoBuenosAires = 32,
        cdoCaracas = 33,
        cdoIndiana = 34,
        cdoBogota = 35,
        cdoSaskatchewan = 36,
        cdoMexicoCity = 37,
        cdoArizona = 38,
        cdoEniwetok = 39,
        cdoFiji = 40,
        cdoMagadan = 41,
        cdoHobart = 42,
        cdoGuam = 43,
        cdoDarwin = 44,
        cdoBeijing = 45,
        cdoAlmaty = 46,
        cdoIslamabad = 47,
        cdoKabul = 48,
        cdoCairo = 49,
        cdoHarare = 50,
        cdoMoscow = 51,
        cdoFloating = 52,
        cdoCapeVerde = 53,
        cdoCaucasus = 54,
        cdoCentralAmerica = 55,
        cdoEastAfrica = 56,
        cdoMelbourne = 57,
        cdoEkaterinburg = 58,
        cdoHelsinki = 59,
        cdoGreenland = 60,
        cdoRangoon = 61,
        cdoNepal = 62,
        cdoIrkutsk = 63,
        cdoKrasnoyarsk = 64,
        cdoSantiago = 65,
        cdoSriLanka = 66,
        cdoTonga = 67,
        cdoVladivostok = 68,
        cdoWestCentralAfrica = 69,
        cdoYakutsk = 70,
        cdoDhaka = 71,
        cdoSeoul = 72,
        cdoPerth = 73,
        cdoArab = 74,
        cdoTaipei = 75,
        cdoSydney2000 = 76,
        cdoChihuahua = 77,
        cdoCanberraCommonwealthGames2006 = 78,
        cdoAdelaideCommonwealthGames2006 = 79,
        cdoHobartCommonwealthGames2006 = 80,
        cdoTijuana = 81,
        cdoInvalidTimeZone = 82
    } CdoTimeZoneId;
extern RPC_IF_HANDLE __MIDL_itf_cdo_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cdo_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDataSource;
    typedef struct IDataSourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDataSource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDataSource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDataSource * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDataSource * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDataSource * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDataSource * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDataSource * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SourceClass )(
            __RPC__in IDataSource * This,
                                __RPC__deref_out_opt BSTR *varSourceClass);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Source )(
            __RPC__in IDataSource * This,
                                __RPC__deref_out_opt IUnknown **varSource);
                                                     HRESULT ( STDMETHODCALLTYPE *get_IsDirty )(
            __RPC__in IDataSource * This,
                                __RPC__out VARIANT_BOOL *pIsDirty);
                                                     HRESULT ( STDMETHODCALLTYPE *put_IsDirty )(
            __RPC__in IDataSource * This,
                       VARIANT_BOOL varIsDirty);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SourceURL )(
            __RPC__in IDataSource * This,
                                __RPC__deref_out_opt BSTR *varSourceURL);
                                                     HRESULT ( STDMETHODCALLTYPE *get_ActiveConnection )(
            __RPC__in IDataSource * This,
                                __RPC__deref_out_opt _Connection **varActiveConnection);
                                            HRESULT ( STDMETHODCALLTYPE *SaveToObject )(
            __RPC__in IDataSource * This,
                       __RPC__in_opt IUnknown *Source,
                       __RPC__in BSTR InterfaceName);
                                            HRESULT ( STDMETHODCALLTYPE *OpenObject )(
            __RPC__in IDataSource * This,
                       __RPC__in_opt IUnknown *Source,
                       __RPC__in BSTR InterfaceName);
                                            HRESULT ( STDMETHODCALLTYPE *SaveTo )(
            __RPC__in IDataSource * This,
                       __RPC__in BSTR SourceURL,
                                     __RPC__in_opt IDispatch *ActiveConnection,
                                 ConnectModeEnum Mode,
                                 RecordCreateOptionsEnum CreateOptions,
                                 RecordOpenOptionsEnum Options,
                                 __RPC__in BSTR UserName,
                                 __RPC__in BSTR Password);
                                            HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IDataSource * This,
                       __RPC__in BSTR SourceURL,
                                     __RPC__in_opt IDispatch *ActiveConnection,
                                 ConnectModeEnum Mode,
                                     RecordCreateOptionsEnum CreateOptions,
                                 RecordOpenOptionsEnum Options,
                                 __RPC__in BSTR UserName,
                                 __RPC__in BSTR Password);
                                            HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IDataSource * This);
                                            HRESULT ( STDMETHODCALLTYPE *SaveToContainer )(
            __RPC__in IDataSource * This,
                       __RPC__in BSTR ContainerURL,
                                     __RPC__in_opt IDispatch *ActiveConnection,
                                 ConnectModeEnum Mode,
                                 RecordCreateOptionsEnum CreateOptions,
                                 RecordOpenOptionsEnum Options,
                                 __RPC__in BSTR UserName,
                                 __RPC__in BSTR Password);
        END_INTERFACE
    } IDataSourceVtbl;
    interface IDataSource
    {
        CONST_VTBL struct IDataSourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_SourceClass(This,varSourceClass) )
    ( (This)->lpVtbl -> get_Source(This,varSource) )
    ( (This)->lpVtbl -> get_IsDirty(This,pIsDirty) )
    ( (This)->lpVtbl -> put_IsDirty(This,varIsDirty) )
    ( (This)->lpVtbl -> get_SourceURL(This,varSourceURL) )
    ( (This)->lpVtbl -> get_ActiveConnection(This,varActiveConnection) )
    ( (This)->lpVtbl -> SaveToObject(This,Source,InterfaceName) )
    ( (This)->lpVtbl -> OpenObject(This,Source,InterfaceName) )
    ( (This)->lpVtbl -> SaveTo(This,SourceURL,ActiveConnection,Mode,CreateOptions,Options,UserName,Password) )
    ( (This)->lpVtbl -> Open(This,SourceURL,ActiveConnection,Mode,CreateOptions,Options,UserName,Password) )
    ( (This)->lpVtbl -> Save(This) )
    ( (This)->lpVtbl -> SaveToContainer(This,ContainerURL,ActiveConnection,Mode,CreateOptions,Options,UserName,Password) )
EXTERN_C const IID IID_IMessage;
    typedef struct IMessageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMessage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMessage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMessage * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMessage * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMessage * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMessage * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMessage * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_BCC )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt BSTR *pBCC);
                                                     HRESULT ( STDMETHODCALLTYPE *put_BCC )(
            __RPC__in IMessage * This,
                       __RPC__in BSTR varBCC);
                                                     HRESULT ( STDMETHODCALLTYPE *get_CC )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt BSTR *pCC);
                                                     HRESULT ( STDMETHODCALLTYPE *put_CC )(
            __RPC__in IMessage * This,
                       __RPC__in BSTR varCC);
                                                     HRESULT ( STDMETHODCALLTYPE *get_FollowUpTo )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt BSTR *pFollowUpTo);
                                                     HRESULT ( STDMETHODCALLTYPE *put_FollowUpTo )(
            __RPC__in IMessage * This,
                       __RPC__in BSTR varFollowUpTo);
                                                     HRESULT ( STDMETHODCALLTYPE *get_From )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt BSTR *pFrom);
                                                     HRESULT ( STDMETHODCALLTYPE *put_From )(
            __RPC__in IMessage * This,
                       __RPC__in BSTR varFrom);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Keywords )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt BSTR *pKeywords);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Keywords )(
            __RPC__in IMessage * This,
                       __RPC__in BSTR varKeywords);
                                                     HRESULT ( STDMETHODCALLTYPE *get_MimeFormatted )(
            __RPC__in IMessage * This,
                                __RPC__out VARIANT_BOOL *pMimeFormatted);
                                                     HRESULT ( STDMETHODCALLTYPE *put_MimeFormatted )(
            __RPC__in IMessage * This,
                       VARIANT_BOOL varMimeFormatted);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Newsgroups )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt BSTR *pNewsgroups);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Newsgroups )(
            __RPC__in IMessage * This,
                       __RPC__in BSTR varNewsgroups);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Organization )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt BSTR *pOrganization);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Organization )(
            __RPC__in IMessage * This,
                       __RPC__in BSTR varOrganization);
                                                     HRESULT ( STDMETHODCALLTYPE *get_ReceivedTime )(
            __RPC__in IMessage * This,
                                __RPC__out DATE *varReceivedTime);
                                                     HRESULT ( STDMETHODCALLTYPE *get_ReplyTo )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt BSTR *pReplyTo);
                                                     HRESULT ( STDMETHODCALLTYPE *put_ReplyTo )(
            __RPC__in IMessage * This,
                       __RPC__in BSTR varReplyTo);
                                                     HRESULT ( STDMETHODCALLTYPE *get_DSNOptions )(
            __RPC__in IMessage * This,
                                __RPC__out CdoDSNOptions *pDSNOptions);
                                                     HRESULT ( STDMETHODCALLTYPE *put_DSNOptions )(
            __RPC__in IMessage * This,
                       CdoDSNOptions varDSNOptions);
                                                     HRESULT ( STDMETHODCALLTYPE *get_SentOn )(
            __RPC__in IMessage * This,
                                __RPC__out DATE *varSentOn);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Subject )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt BSTR *pSubject);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Subject )(
            __RPC__in IMessage * This,
                       __RPC__in BSTR varSubject);
                                                     HRESULT ( STDMETHODCALLTYPE *get_To )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt BSTR *pTo);
                                                     HRESULT ( STDMETHODCALLTYPE *put_To )(
            __RPC__in IMessage * This,
                       __RPC__in BSTR varTo);
                                                     HRESULT ( STDMETHODCALLTYPE *get_TextBody )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt BSTR *pTextBody);
                                                     HRESULT ( STDMETHODCALLTYPE *put_TextBody )(
            __RPC__in IMessage * This,
                       __RPC__in BSTR varTextBody);
                                                     HRESULT ( STDMETHODCALLTYPE *get_HTMLBody )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt BSTR *pHTMLBody);
                                                     HRESULT ( STDMETHODCALLTYPE *put_HTMLBody )(
            __RPC__in IMessage * This,
                       __RPC__in BSTR varHTMLBody);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Attachments )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt IBodyParts **varAttachments);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Sender )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt BSTR *pSender);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Sender )(
            __RPC__in IMessage * This,
                       __RPC__in BSTR varSender);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Configuration )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt IConfiguration **pConfiguration);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Configuration )(
            __RPC__in IMessage * This,
                       __RPC__in_opt IConfiguration *varConfiguration);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_Configuration )(
            __RPC__in IMessage * This,
                       __RPC__in_opt IConfiguration *varConfiguration);
                                                     HRESULT ( STDMETHODCALLTYPE *get_AutoGenerateTextBody )(
            __RPC__in IMessage * This,
                                __RPC__out VARIANT_BOOL *pAutoGenerateTextBody);
                                                     HRESULT ( STDMETHODCALLTYPE *put_AutoGenerateTextBody )(
            __RPC__in IMessage * This,
                       VARIANT_BOOL varAutoGenerateTextBody);
                                                     HRESULT ( STDMETHODCALLTYPE *get_EnvelopeFields )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt Fields **varEnvelopeFields);
                                                     HRESULT ( STDMETHODCALLTYPE *get_TextBodyPart )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt IBodyPart **varTextBodyPart);
                                                     HRESULT ( STDMETHODCALLTYPE *get_HTMLBodyPart )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt IBodyPart **varHTMLBodyPart);
                                                     HRESULT ( STDMETHODCALLTYPE *get_BodyPart )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt IBodyPart **varBodyPart);
                                                     HRESULT ( STDMETHODCALLTYPE *get_DataSource )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt IDataSource **varDataSource);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Fields )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt Fields **varFields);
                                                     HRESULT ( STDMETHODCALLTYPE *get_MDNRequested )(
            __RPC__in IMessage * This,
                                __RPC__out VARIANT_BOOL *pMDNRequested);
                                                     HRESULT ( STDMETHODCALLTYPE *put_MDNRequested )(
            __RPC__in IMessage * This,
                       VARIANT_BOOL varMDNRequested);
                                            HRESULT ( STDMETHODCALLTYPE *AddRelatedBodyPart )(
            __RPC__in IMessage * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Reference,
                       CdoReferenceType ReferenceType,
                                 __RPC__in BSTR UserName,
                                 __RPC__in BSTR Password,
                                __RPC__deref_out_opt IBodyPart **ppBody);
                                            HRESULT ( STDMETHODCALLTYPE *AddAttachment )(
            __RPC__in IMessage * This,
                       __RPC__in BSTR URL,
                                 __RPC__in BSTR UserName,
                                 __RPC__in BSTR Password,
                                __RPC__deref_out_opt IBodyPart **ppBody);
                                            HRESULT ( STDMETHODCALLTYPE *CreateMHTMLBody )(
            __RPC__in IMessage * This,
                       __RPC__in BSTR URL,
                                     CdoMHTMLFlags Flags,
                                 __RPC__in BSTR UserName,
                                 __RPC__in BSTR Password);
                                            HRESULT ( STDMETHODCALLTYPE *Forward )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt IMessage **ppMsg);
                                            HRESULT ( STDMETHODCALLTYPE *Post )(
            __RPC__in IMessage * This);
                                            HRESULT ( STDMETHODCALLTYPE *PostReply )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt IMessage **ppMsg);
                                            HRESULT ( STDMETHODCALLTYPE *Reply )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt IMessage **ppMsg);
                                            HRESULT ( STDMETHODCALLTYPE *ReplyAll )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt IMessage **ppMsg);
                                            HRESULT ( STDMETHODCALLTYPE *Send )(
            __RPC__in IMessage * This);
                                            HRESULT ( STDMETHODCALLTYPE *GetStream )(
            __RPC__in IMessage * This,
                                __RPC__deref_out_opt _Stream **ppStream);
                                            HRESULT ( STDMETHODCALLTYPE *GetInterface )(
            __RPC__in IMessage * This,
                       __RPC__in BSTR Interface,
                                __RPC__deref_out_opt IDispatch **ppUnknown);
        END_INTERFACE
    } IMessageVtbl;
    interface IMessage
    {
        CONST_VTBL struct IMessageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_BCC(This,pBCC) )
    ( (This)->lpVtbl -> put_BCC(This,varBCC) )
    ( (This)->lpVtbl -> get_CC(This,pCC) )
    ( (This)->lpVtbl -> put_CC(This,varCC) )
    ( (This)->lpVtbl -> get_FollowUpTo(This,pFollowUpTo) )
    ( (This)->lpVtbl -> put_FollowUpTo(This,varFollowUpTo) )
    ( (This)->lpVtbl -> get_From(This,pFrom) )
    ( (This)->lpVtbl -> put_From(This,varFrom) )
    ( (This)->lpVtbl -> get_Keywords(This,pKeywords) )
    ( (This)->lpVtbl -> put_Keywords(This,varKeywords) )
    ( (This)->lpVtbl -> get_MimeFormatted(This,pMimeFormatted) )
    ( (This)->lpVtbl -> put_MimeFormatted(This,varMimeFormatted) )
    ( (This)->lpVtbl -> get_Newsgroups(This,pNewsgroups) )
    ( (This)->lpVtbl -> put_Newsgroups(This,varNewsgroups) )
    ( (This)->lpVtbl -> get_Organization(This,pOrganization) )
    ( (This)->lpVtbl -> put_Organization(This,varOrganization) )
    ( (This)->lpVtbl -> get_ReceivedTime(This,varReceivedTime) )
    ( (This)->lpVtbl -> get_ReplyTo(This,pReplyTo) )
    ( (This)->lpVtbl -> put_ReplyTo(This,varReplyTo) )
    ( (This)->lpVtbl -> get_DSNOptions(This,pDSNOptions) )
    ( (This)->lpVtbl -> put_DSNOptions(This,varDSNOptions) )
    ( (This)->lpVtbl -> get_SentOn(This,varSentOn) )
    ( (This)->lpVtbl -> get_Subject(This,pSubject) )
    ( (This)->lpVtbl -> put_Subject(This,varSubject) )
    ( (This)->lpVtbl -> get_To(This,pTo) )
    ( (This)->lpVtbl -> put_To(This,varTo) )
    ( (This)->lpVtbl -> get_TextBody(This,pTextBody) )
    ( (This)->lpVtbl -> put_TextBody(This,varTextBody) )
    ( (This)->lpVtbl -> get_HTMLBody(This,pHTMLBody) )
    ( (This)->lpVtbl -> put_HTMLBody(This,varHTMLBody) )
    ( (This)->lpVtbl -> get_Attachments(This,varAttachments) )
    ( (This)->lpVtbl -> get_Sender(This,pSender) )
    ( (This)->lpVtbl -> put_Sender(This,varSender) )
    ( (This)->lpVtbl -> get_Configuration(This,pConfiguration) )
    ( (This)->lpVtbl -> put_Configuration(This,varConfiguration) )
    ( (This)->lpVtbl -> putref_Configuration(This,varConfiguration) )
    ( (This)->lpVtbl -> get_AutoGenerateTextBody(This,pAutoGenerateTextBody) )
    ( (This)->lpVtbl -> put_AutoGenerateTextBody(This,varAutoGenerateTextBody) )
    ( (This)->lpVtbl -> get_EnvelopeFields(This,varEnvelopeFields) )
    ( (This)->lpVtbl -> get_TextBodyPart(This,varTextBodyPart) )
    ( (This)->lpVtbl -> get_HTMLBodyPart(This,varHTMLBodyPart) )
    ( (This)->lpVtbl -> get_BodyPart(This,varBodyPart) )
    ( (This)->lpVtbl -> get_DataSource(This,varDataSource) )
    ( (This)->lpVtbl -> get_Fields(This,varFields) )
    ( (This)->lpVtbl -> get_MDNRequested(This,pMDNRequested) )
    ( (This)->lpVtbl -> put_MDNRequested(This,varMDNRequested) )
    ( (This)->lpVtbl -> AddRelatedBodyPart(This,URL,Reference,ReferenceType,UserName,Password,ppBody) )
    ( (This)->lpVtbl -> AddAttachment(This,URL,UserName,Password,ppBody) )
    ( (This)->lpVtbl -> CreateMHTMLBody(This,URL,Flags,UserName,Password) )
    ( (This)->lpVtbl -> Forward(This,ppMsg) )
    ( (This)->lpVtbl -> Post(This) )
    ( (This)->lpVtbl -> PostReply(This,ppMsg) )
    ( (This)->lpVtbl -> Reply(This,ppMsg) )
    ( (This)->lpVtbl -> ReplyAll(This,ppMsg) )
    ( (This)->lpVtbl -> Send(This) )
    ( (This)->lpVtbl -> GetStream(This,ppStream) )
    ( (This)->lpVtbl -> GetInterface(This,Interface,ppUnknown) )
EXTERN_C const IID IID_IBodyPart;
    typedef struct IBodyPartVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBodyPart * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBodyPart * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBodyPart * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IBodyPart * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IBodyPart * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IBodyPart * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IBodyPart * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_BodyParts )(
            __RPC__in IBodyPart * This,
                                __RPC__deref_out_opt IBodyParts **varBodyParts);
                                                     HRESULT ( STDMETHODCALLTYPE *get_ContentTransferEncoding )(
            __RPC__in IBodyPart * This,
                                __RPC__deref_out_opt BSTR *pContentTransferEncoding);
                                                     HRESULT ( STDMETHODCALLTYPE *put_ContentTransferEncoding )(
            __RPC__in IBodyPart * This,
                       __RPC__in BSTR varContentTransferEncoding);
                                                     HRESULT ( STDMETHODCALLTYPE *get_ContentMediaType )(
            __RPC__in IBodyPart * This,
                                __RPC__deref_out_opt BSTR *pContentMediaType);
                                                     HRESULT ( STDMETHODCALLTYPE *put_ContentMediaType )(
            __RPC__in IBodyPart * This,
                       __RPC__in BSTR varContentMediaType);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Fields )(
            __RPC__in IBodyPart * This,
                                __RPC__deref_out_opt Fields **varFields);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Charset )(
            __RPC__in IBodyPart * This,
                                __RPC__deref_out_opt BSTR *pCharset);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Charset )(
            __RPC__in IBodyPart * This,
                       __RPC__in BSTR varCharset);
                                                     HRESULT ( STDMETHODCALLTYPE *get_FileName )(
            __RPC__in IBodyPart * This,
                                __RPC__deref_out_opt BSTR *varFileName);
                                                     HRESULT ( STDMETHODCALLTYPE *get_DataSource )(
            __RPC__in IBodyPart * This,
                                __RPC__deref_out_opt IDataSource **varDataSource);
                                                     HRESULT ( STDMETHODCALLTYPE *get_ContentClass )(
            __RPC__in IBodyPart * This,
                                __RPC__deref_out_opt BSTR *pContentClass);
                                                     HRESULT ( STDMETHODCALLTYPE *put_ContentClass )(
            __RPC__in IBodyPart * This,
                       __RPC__in BSTR varContentClass);
                                                     HRESULT ( STDMETHODCALLTYPE *get_ContentClassName )(
            __RPC__in IBodyPart * This,
                                __RPC__deref_out_opt BSTR *pContentClassName);
                                                     HRESULT ( STDMETHODCALLTYPE *put_ContentClassName )(
            __RPC__in IBodyPart * This,
                       __RPC__in BSTR varContentClassName);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IBodyPart * This,
                                __RPC__deref_out_opt IBodyPart **varParent);
                                            HRESULT ( STDMETHODCALLTYPE *AddBodyPart )(
            __RPC__in IBodyPart * This,
                                     long Index,
                                __RPC__deref_out_opt IBodyPart **ppPart);
                                            HRESULT ( STDMETHODCALLTYPE *SaveToFile )(
            __RPC__in IBodyPart * This,
                       __RPC__in BSTR FileName);
                                            HRESULT ( STDMETHODCALLTYPE *GetEncodedContentStream )(
            __RPC__in IBodyPart * This,
                                __RPC__deref_out_opt _Stream **ppStream);
                                            HRESULT ( STDMETHODCALLTYPE *GetDecodedContentStream )(
            __RPC__in IBodyPart * This,
                                __RPC__deref_out_opt _Stream **ppStream);
                                            HRESULT ( STDMETHODCALLTYPE *GetStream )(
            __RPC__in IBodyPart * This,
                                __RPC__deref_out_opt _Stream **ppStream);
                                            HRESULT ( STDMETHODCALLTYPE *GetFieldParameter )(
            __RPC__in IBodyPart * This,
                       __RPC__in BSTR FieldName,
                       __RPC__in BSTR Parameter,
                                __RPC__deref_out_opt BSTR *pbstrValue);
                                            HRESULT ( STDMETHODCALLTYPE *GetInterface )(
            __RPC__in IBodyPart * This,
                       __RPC__in BSTR Interface,
                                __RPC__deref_out_opt IDispatch **ppUnknown);
        END_INTERFACE
    } IBodyPartVtbl;
    interface IBodyPart
    {
        CONST_VTBL struct IBodyPartVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_BodyParts(This,varBodyParts) )
    ( (This)->lpVtbl -> get_ContentTransferEncoding(This,pContentTransferEncoding) )
    ( (This)->lpVtbl -> put_ContentTransferEncoding(This,varContentTransferEncoding) )
    ( (This)->lpVtbl -> get_ContentMediaType(This,pContentMediaType) )
    ( (This)->lpVtbl -> put_ContentMediaType(This,varContentMediaType) )
    ( (This)->lpVtbl -> get_Fields(This,varFields) )
    ( (This)->lpVtbl -> get_Charset(This,pCharset) )
    ( (This)->lpVtbl -> put_Charset(This,varCharset) )
    ( (This)->lpVtbl -> get_FileName(This,varFileName) )
    ( (This)->lpVtbl -> get_DataSource(This,varDataSource) )
    ( (This)->lpVtbl -> get_ContentClass(This,pContentClass) )
    ( (This)->lpVtbl -> put_ContentClass(This,varContentClass) )
    ( (This)->lpVtbl -> get_ContentClassName(This,pContentClassName) )
    ( (This)->lpVtbl -> put_ContentClassName(This,varContentClassName) )
    ( (This)->lpVtbl -> get_Parent(This,varParent) )
    ( (This)->lpVtbl -> AddBodyPart(This,Index,ppPart) )
    ( (This)->lpVtbl -> SaveToFile(This,FileName) )
    ( (This)->lpVtbl -> GetEncodedContentStream(This,ppStream) )
    ( (This)->lpVtbl -> GetDecodedContentStream(This,ppStream) )
    ( (This)->lpVtbl -> GetStream(This,ppStream) )
    ( (This)->lpVtbl -> GetFieldParameter(This,FieldName,Parameter,pbstrValue) )
    ( (This)->lpVtbl -> GetInterface(This,Interface,ppUnknown) )
EXTERN_C const IID IID_IConfiguration;
    typedef struct IConfigurationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IConfiguration * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IConfiguration * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IConfiguration * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IConfiguration * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IConfiguration * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IConfiguration * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IConfiguration * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Fields )(
            __RPC__in IConfiguration * This,
                                __RPC__deref_out_opt Fields **varFields);
                                            HRESULT ( STDMETHODCALLTYPE *Load )(
            __RPC__in IConfiguration * This,
                       CdoConfigSource LoadFrom,
                                 __RPC__in BSTR URL);
                                            HRESULT ( STDMETHODCALLTYPE *GetInterface )(
            __RPC__in IConfiguration * This,
                       __RPC__in BSTR Interface,
                                __RPC__deref_out_opt IDispatch **ppUnknown);
        END_INTERFACE
    } IConfigurationVtbl;
    interface IConfiguration
    {
        CONST_VTBL struct IConfigurationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Fields(This,varFields) )
    ( (This)->lpVtbl -> Load(This,LoadFrom,URL) )
    ( (This)->lpVtbl -> GetInterface(This,Interface,ppUnknown) )
EXTERN_C const IID IID_IMessages;
    typedef struct IMessagesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMessages * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMessages * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMessages * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMessages * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMessages * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMessages * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMessages * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IMessages * This,
            long Index,
                                __RPC__deref_out_opt IMessage **ppMessage);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IMessages * This,
                                __RPC__out long *varCount);
                                            HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IMessages * This,
                       long Index);
                                            HRESULT ( STDMETHODCALLTYPE *DeleteAll )(
            __RPC__in IMessages * This);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IMessages * This,
                                __RPC__deref_out_opt IUnknown **retval);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Filename )(
            __RPC__in IMessages * This,
            VARIANT var,
                                __RPC__deref_out_opt BSTR *Filename);
        END_INTERFACE
    } IMessagesVtbl;
    interface IMessages
    {
        CONST_VTBL struct IMessagesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,Index,ppMessage) )
    ( (This)->lpVtbl -> get_Count(This,varCount) )
    ( (This)->lpVtbl -> Delete(This,Index) )
    ( (This)->lpVtbl -> DeleteAll(This) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> get_Filename(This,var,Filename) )
EXTERN_C const IID IID_IDropDirectory;
    typedef struct IDropDirectoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDropDirectory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDropDirectory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDropDirectory * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDropDirectory * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDropDirectory * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDropDirectory * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDropDirectory * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                            HRESULT ( STDMETHODCALLTYPE *GetMessages )(
            __RPC__in IDropDirectory * This,
                                 __RPC__in BSTR DirName,
                                __RPC__deref_out_opt IMessages **Msgs);
        END_INTERFACE
    } IDropDirectoryVtbl;
    interface IDropDirectory
    {
        CONST_VTBL struct IDropDirectoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetMessages(This,DirName,Msgs) )
EXTERN_C const IID IID_IBodyParts;
    typedef struct IBodyPartsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBodyParts * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBodyParts * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBodyParts * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IBodyParts * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IBodyParts * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IBodyParts * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IBodyParts * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IBodyParts * This,
                                __RPC__out long *varCount);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IBodyParts * This,
                       long Index,
                                __RPC__deref_out_opt IBodyPart **ppBody);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IBodyParts * This,
                                __RPC__deref_out_opt IUnknown **retval);
                                            HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IBodyParts * This,
                       VARIANT varBP);
                                            HRESULT ( STDMETHODCALLTYPE *DeleteAll )(
            __RPC__in IBodyParts * This);
                                            HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IBodyParts * This,
                                     long Index,
                                __RPC__deref_out_opt IBodyPart **ppPart);
        END_INTERFACE
    } IBodyPartsVtbl;
    interface IBodyParts
    {
        CONST_VTBL struct IBodyPartsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,varCount) )
    ( (This)->lpVtbl -> get_Item(This,Index,ppBody) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Delete(This,varBP) )
    ( (This)->lpVtbl -> DeleteAll(This) )
    ( (This)->lpVtbl -> Add(This,Index,ppPart) )
EXTERN_C const IID IID_ISMTPScriptConnector;
    typedef struct ISMTPScriptConnectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISMTPScriptConnector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISMTPScriptConnector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISMTPScriptConnector * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISMTPScriptConnector * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISMTPScriptConnector * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISMTPScriptConnector * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISMTPScriptConnector * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } ISMTPScriptConnectorVtbl;
    interface ISMTPScriptConnector
    {
        CONST_VTBL struct ISMTPScriptConnectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_INNTPEarlyScriptConnector;
    typedef struct INNTPEarlyScriptConnectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INNTPEarlyScriptConnector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INNTPEarlyScriptConnector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INNTPEarlyScriptConnector * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INNTPEarlyScriptConnector * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INNTPEarlyScriptConnector * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INNTPEarlyScriptConnector * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INNTPEarlyScriptConnector * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } INNTPEarlyScriptConnectorVtbl;
    interface INNTPEarlyScriptConnector
    {
        CONST_VTBL struct INNTPEarlyScriptConnectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_INNTPPostScriptConnector;
    typedef struct INNTPPostScriptConnectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INNTPPostScriptConnector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INNTPPostScriptConnector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INNTPPostScriptConnector * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INNTPPostScriptConnector * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INNTPPostScriptConnector * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INNTPPostScriptConnector * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INNTPPostScriptConnector * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } INNTPPostScriptConnectorVtbl;
    interface INNTPPostScriptConnector
    {
        CONST_VTBL struct INNTPPostScriptConnectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_INNTPFinalScriptConnector;
    typedef struct INNTPFinalScriptConnectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INNTPFinalScriptConnector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INNTPFinalScriptConnector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INNTPFinalScriptConnector * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INNTPFinalScriptConnector * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INNTPFinalScriptConnector * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INNTPFinalScriptConnector * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INNTPFinalScriptConnector * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } INNTPFinalScriptConnectorVtbl;
    interface INNTPFinalScriptConnector
    {
        CONST_VTBL struct INNTPFinalScriptConnectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_ISMTPOnArrival;
    typedef struct ISMTPOnArrivalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISMTPOnArrival * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISMTPOnArrival * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISMTPOnArrival * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISMTPOnArrival * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISMTPOnArrival * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISMTPOnArrival * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISMTPOnArrival * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                            HRESULT ( STDMETHODCALLTYPE *OnArrival )(
            __RPC__in ISMTPOnArrival * This,
                       __RPC__in_opt IMessage *Msg,
                            __RPC__inout CdoEventStatus *EventStatus);
        END_INTERFACE
    } ISMTPOnArrivalVtbl;
    interface ISMTPOnArrival
    {
        CONST_VTBL struct ISMTPOnArrivalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> OnArrival(This,Msg,EventStatus) )
EXTERN_C const IID IID_INNTPOnPostEarly;
    typedef struct INNTPOnPostEarlyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INNTPOnPostEarly * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INNTPOnPostEarly * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INNTPOnPostEarly * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INNTPOnPostEarly * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INNTPOnPostEarly * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INNTPOnPostEarly * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INNTPOnPostEarly * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                            HRESULT ( STDMETHODCALLTYPE *OnPostEarly )(
            __RPC__in INNTPOnPostEarly * This,
                       __RPC__in_opt IMessage *Msg,
                            __RPC__inout CdoEventStatus *EventStatus);
        END_INTERFACE
    } INNTPOnPostEarlyVtbl;
    interface INNTPOnPostEarly
    {
        CONST_VTBL struct INNTPOnPostEarlyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> OnPostEarly(This,Msg,EventStatus) )
EXTERN_C const IID IID_INNTPOnPost;
    typedef struct INNTPOnPostVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INNTPOnPost * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INNTPOnPost * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INNTPOnPost * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INNTPOnPost * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INNTPOnPost * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INNTPOnPost * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INNTPOnPost * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                            HRESULT ( STDMETHODCALLTYPE *OnPost )(
            __RPC__in INNTPOnPost * This,
                       __RPC__in_opt IMessage *Msg,
                            __RPC__inout CdoEventStatus *EventStatus);
        END_INTERFACE
    } INNTPOnPostVtbl;
    interface INNTPOnPost
    {
        CONST_VTBL struct INNTPOnPostVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> OnPost(This,Msg,EventStatus) )
EXTERN_C const IID IID_INNTPOnPostFinal;
    typedef struct INNTPOnPostFinalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INNTPOnPostFinal * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INNTPOnPostFinal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INNTPOnPostFinal * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INNTPOnPostFinal * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INNTPOnPostFinal * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INNTPOnPostFinal * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INNTPOnPostFinal * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                            HRESULT ( STDMETHODCALLTYPE *OnPostFinal )(
            __RPC__in INNTPOnPostFinal * This,
                       __RPC__in_opt IMessage *Msg,
                            __RPC__inout CdoEventStatus *EventStatus);
        END_INTERFACE
    } INNTPOnPostFinalVtbl;
    interface INNTPOnPostFinal
    {
        CONST_VTBL struct INNTPOnPostFinalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> OnPostFinal(This,Msg,EventStatus) )
EXTERN_C const IID IID_IProxyObject;
    typedef struct IProxyObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProxyObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProxyObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProxyObject * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Object )(
            __RPC__in IProxyObject * This,
                        __RPC__deref_out_opt IUnknown **ppParent);
        END_INTERFACE
    } IProxyObjectVtbl;
    interface IProxyObject
    {
        CONST_VTBL struct IProxyObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Object(This,ppParent) )
EXTERN_C const IID IID_IGetInterface;
    typedef struct IGetInterfaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGetInterface * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGetInterface * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGetInterface * This);
        HRESULT ( STDMETHODCALLTYPE *GetInterface )(
            __RPC__in IGetInterface * This,
                       __RPC__in BSTR Interface,
                                __RPC__deref_out_opt IDispatch **ppUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetInterfaceInner )(
            __RPC__in IGetInterface * This,
                       __RPC__in BSTR Interface,
                                __RPC__deref_out_opt IDispatch **ppUnknown);
        END_INTERFACE
    } IGetInterfaceVtbl;
    interface IGetInterface
    {
        CONST_VTBL struct IGetInterfaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetInterface(This,Interface,ppUnknown) )
    ( (This)->lpVtbl -> GetInterfaceInner(This,Interface,ppUnknown) )
EXTERN_C const IID LIBID_CDO;
const LONG CDO_E_UNCAUGHT_EXCEPTION = 0x80040201L;
const LONG CDO_E_NOT_OPENED = 0x80040202L;
const LONG CDO_E_UNSUPPORTED_DATASOURCE = 0x80040203L;
const LONG CDO_E_INVALID_PROPERTYNAME = 0x80040204L;
const LONG CDO_E_PROP_UNSUPPORTED = 0x80040205L;
const LONG CDO_E_INACTIVE = 0x80040206L;
const LONG CDO_E_NO_SUPPORT_FOR_OBJECTS = 0x80040207L;
const LONG CDO_E_NOT_AVAILABLE = 0x80040208L;
const LONG CDO_E_NO_DEFAULT_DROP_DIR = 0x80040209L;
const LONG CDO_E_SMTP_SERVER_REQUIRED = 0x8004020aL;
const LONG CDO_E_NNTP_SERVER_REQUIRED = 0x8004020bL;
const LONG CDO_E_RECIPIENT_MISSING = 0x8004020cL;
const LONG CDO_E_FROM_MISSING = 0x8004020dL;
const LONG CDO_E_SENDER_REJECTED = 0x8004020eL;
const LONG CDO_E_RECIPIENTS_REJECTED = 0x8004020fL;
const LONG CDO_E_NNTP_POST_FAILED = 0x80040210L;
const LONG CDO_E_SMTP_SEND_FAILED = 0x80040211L;
const LONG CDO_E_CONNECTION_DROPPED = 0x80040212L;
const LONG CDO_E_FAILED_TO_CONNECT = 0x80040213L;
const LONG CDO_E_INVALID_POST = 0x80040214L;
const LONG CDO_E_AUTHENTICATION_FAILURE = 0x80040215L;
const LONG CDO_E_INVALID_CONTENT_TYPE = 0x80040216L;
const LONG CDO_E_LOGON_FAILURE = 0x80040217L;
const LONG CDO_E_HTTP_NOT_FOUND = 0x80040218L;
const LONG CDO_E_HTTP_FORBIDDEN = 0x80040219L;
const LONG CDO_E_HTTP_FAILED = 0x8004021aL;
const LONG CDO_E_MULTIPART_NO_DATA = 0x8004021bL;
const LONG CDO_E_INVALID_ENCODING_FOR_MULTIPART = 0x8004021cL;
const LONG CDO_E_UNSAFE_OPERATION = 0x8004021dL;
const LONG CDO_E_PROP_NOT_FOUND = 0x8004021eL;
const LONG CDO_E_INVALID_SEND_OPTION = 0x80040220L;
const LONG CDO_E_INVALID_POST_OPTION = 0x80040221L;
const LONG CDO_E_NO_PICKUP_DIR = 0x80040222L;
const LONG CDO_E_NOT_ALL_DELETED = 0x80040223L;
const LONG CDO_E_NO_METHOD = 0x80040224L;
const LONG CDO_E_PROP_READONLY = 0x80040227L;
const LONG CDO_E_PROP_CANNOT_DELETE = 0x80040228L;
const LONG CDO_E_BAD_DATA = 0x80040229L;
const LONG CDO_E_PROP_NONHEADER = 0x8004022aL;
const LONG CDO_E_INVALID_CHARSET = 0x8004022bL;
const LONG CDO_E_ADOSTREAM_NOT_BOUND = 0x8004022cL;
const LONG CDO_E_CONTENTPROPXML_NOT_FOUND = 0x8004022dL;
const LONG CDO_E_CONTENTPROPXML_WRONG_CHARSET = 0x8004022eL;
const LONG CDO_E_CONTENTPROPXML_PARSE_FAILED = 0x8004022fL;
const LONG CDO_E_CONTENTPROPXML_CONVERT_FAILED = 0x80040230L;
const LONG CDO_E_NO_DIRECTORIES_SPECIFIED = 0x80040231L;
const LONG CDO_E_DIRECTORIES_UNREACHABLE = 0x80040232L;
const LONG CDO_E_BAD_SENDER = 0x80040233L;
const LONG CDO_E_SELF_BINDING = 0x80040234L;
const LONG CDO_E_BAD_ATTENDEE_DATA = 0x80040235L;
const LONG CDO_E_ROLE_NOMORE_AVAILABLE = 0x80040236L;
const LONG CDO_E_BAD_TASKTYPE_ONASSIGN = 0x80040237L;
const LONG CDO_E_NOT_ASSIGNEDTO_USER = 0x80040238L;
const LONG CDO_E_OUTOFDATE = 0x80040239L;
const LONG CDO_E_ARGUMENT1 = 0x80044000L;
const LONG CDO_E_ARGUMENT2 = 0x80044001L;
const LONG CDO_E_ARGUMENT3 = 0x80044002L;
const LONG CDO_E_ARGUMENT4 = 0x80044003L;
const LONG CDO_E_ARGUMENT5 = 0x80044004L;
const LONG CDO_E_NOT_FOUND = 0x800cce05L;
const LONG CDO_E_INVALID_ENCODING_TYPE = 0x800cce1dL;
EXTERN_C const CLSID CLSID_Message;
class DECLSPEC_UUID("CD000001-8B95-11D1-82DB-00C04FB1625D")
Message;
EXTERN_C const CLSID CLSID_Configuration;
class DECLSPEC_UUID("CD000002-8B95-11D1-82DB-00C04FB1625D")
Configuration;
EXTERN_C const CLSID CLSID_DropDirectory;
class DECLSPEC_UUID("CD000004-8B95-11D1-82DB-00C04FB1625D")
DropDirectory;
EXTERN_C const CLSID CLSID_SMTPConnector;
class DECLSPEC_UUID("CD000008-8B95-11D1-82DB-00C04FB1625D")
SMTPConnector;
EXTERN_C const CLSID CLSID_NNTPEarlyConnector;
class DECLSPEC_UUID("CD000011-8B95-11D1-82DB-00C04FB1625D")
NNTPEarlyConnector;
EXTERN_C const CLSID CLSID_NNTPPostConnector;
class DECLSPEC_UUID("CD000009-8B95-11D1-82DB-00C04FB1625D")
NNTPPostConnector;
EXTERN_C const CLSID CLSID_NNTPFinalConnector;
class DECLSPEC_UUID("CD000010-8B95-11D1-82DB-00C04FB1625D")
NNTPFinalConnector;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_cdo_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cdo_0000_0018_v0_0_s_ifspec;
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
